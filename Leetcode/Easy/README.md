# Easy Problems - Code mẫu và giải thích

## [1. Two Sum](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1_TwoSum.cpp)
### **Tóm tắt đề:**
- Cho 1 mảng các số nguyên {n_1,n_2,n_3,n_4,….,n_x} và 1 số nguyên bất kì n_z.
- Nếu tồn tại 2 số nguyên thuộc mảng các số nguyên nêu trên có tổng bằng n_z thì in ra vị trí của 2 số nguyên đó, ngược lại không in ra gì sất.
- Nếu có tồn tại 2 số có tổng bằng n_z thì đó phải là cặp số duy nhất tồn tại trong mảng và không có cặp thứ 2 và phải chắc chắn rằng mỗi giá trị chỉ xuất hiện 1 lần.
### **Ví dụ**
- Mảng {4, 5, 6, 7, 8, 2, 1}
- n_z=11 => in ra   [1,2] và [0,3]  (loại vì sai yêu cầu đề bài)
-n_z=3 => in ra [5,6] (thỏa mãn đề bài)
Nên các bạn phải chú ý các giá trị nhập vô mảng ( ͡° ͜ʖ ͡°).
### **Hướng dẫn giải:**
#### ***Sử dụng vector và for***
1. Tạo 1 vector "nums" chứa x phần tử và 1 vector "v" rỗng.
2. Duyệt  "i" từ phần tử thứ nhất đến phần tử gần cuối (thứ 2 từ dưới lên trên).
         - Duyệt "k = i + 1" đến phần tử cuối.
3. Nếu v[i] + v[k] = target thì truyền  "i" và "k" vào vector "v".
4. Sau đó in ra cặp 1 thuộc vector "v".


## [9. Palindrome Number](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/9_PalindromeNumber.cpp)
### **Tóm tắt đề:**
- Cho 1 số nguyên, trả về True nếu số đó là số palindrome; False nếu không phải số palindrome.
- Số palindrome là số khi viết ngược lại thì được số bằng chính số ban đầu.

### **Ví dụ:**
  - Số Palindrome: 12321 ; 1551 ; 11211 ; 1111 ;...
  - Số không phải Palindrome: -121 (ngược lại là 121- ); 1432 ; 1010 ; ...

### **Hướng dẫn giải:**
 #### ***Cách 1: Sử dụng string:***
  1. Chuyển số về dạng chuỗi bằng: *string <tên> = to_string(<số>)*
  2. Đảo các kí tự và lưu vào chuỗi mới.
  3. So sánh 2 chuỗi, nếu giống thì trả về True, khác thì trả về False.
  #### ***Cách 2: Tạo số mới:***
  1. Tạo 2 số nguyên mới, số thứ nhất bằng số đã cho, số thứ 2 là số sau khi đảo.
  2. Số thứ nhất chia 10 lấy phần dư và lấy phần nguyên.
  3. Số thứ nhất gán bằng phần nguyên.
  4. Số thứ 2 sẽ nhân với 10 và cộng thêm phần dư.
  5. Lặp lại bước 2 đến khi số thứ nhất nhỏ hơn 1.
  6. So sánh số thứ 2 và số đã cho ban đầu. Bằng nhau trả về True, khác nhau thì trả về False.  
  
  
## [13. Roman to Integer](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/13_RomanToInteger.cpp)
**Tóm tắt đề:** Nhập một số La Mã dưới dạng chuỗi(string), chuyển đổi số đó thành số nguyên(int). Biết các chữ số La Mã có giá trị tương ứng như sau:<br>
|Roman|I|V|X|L|C|D|M|
|-|-|-|-|-|-|-|-|
|Integer|1|5|10|50|100|500|1000

**Hướng dẫn giải:**
- Đầu tiên ra cần có một hàm chuyển đổi từng chữ số La Mã sang số nguyên
  - `if` I `reuturn` 1
  - `if` V `reuturn` 5
  - .................
- Thông thường số La Mã sẽ được đọc từ trái -> phải
- Khởi tạo một biến `answer` ban đầu bằng 0 để lưu giá trị
- Duyệt qua từng kí tự trong chuỗi số La Mã:
  - Nếu giá trị nguyên tương ứng(GTNTU) của kì tự đứng trước lớn hơn hoặc GTNTU của kí tự đứng sau thì cộng GTNTU của kí tự trước vào biến `answer`
  - Nếu giá trị nguyên tương ứng(GTNTU) của kì tự đứng trước nhỏ hơn chữ số đứng sau thì cộng (GTNTU của kí tự sau trừ GTNTU của kí tự trước) vào biến `answer`(lưu ý trường hợp này đã duyệt qua 2 kí tự, cần phải tăng chỉ số duyệt thêm 1)
- Trả về biến `answer` là số nguyên sau khi chuyển đổi  
  
  
## [20. Valid Parentheses](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/20_ValidParentheses.cpp)
**Tóm tắt đề:** Cho một dãy ngoặc, kiểm tra xem dãy ngoặc đó có hợp lí không. Dãy ngoặc hợp lí là tất cả ngoặc mở phải có ngoặc đóng, ngoặc đóng và ngoặc mở của một cặp phải cùng một khối.  

**Hướng dẫn giải:**  
- Đầu tiên, ta phải xác định các cặp ngoặc đi cùng với nhau là các cặp:
  - `{` và `}`.  
  - `(` và `)`.
  - `[` và `]`.  
- Khởi tạo một `Stack` để đưa lần lượt các ngoặc mở vào cho đến khi gặp ngoặc đóng.
- Khi gặp ngoặc đóng, ta kiểm tra xem ngoặc mở gần nhất ta gặp trước đó là ngoặc gì `(`, `{` hay `[` tức ngoặc mở ở trên đầu của `Stack` ta đã khởi tạo. Lúc này ta sẽ có 2 trường hợp:  
  - Nếu ngoặc mở và ngoặc đóng là các cặp ngoặc cùng nhau thì ta lấy ngoặc mở ở đầu `Stack` ra và bỏ đi rồi làm lại các bước như trên.
  - Nếu ngoặc mở và ngoặc đóng là cặp ngoặc **không** cùng nhau thì ta trả về kết quả là **false** và dừng chương trình.
- Khi xét hết chuỗi đầu vào, ta còn 2 trường hợp cuối cùng để đưa ra kết luận:
  - Nếu `Stack` rỗng tức là sau khi xét hết chuỗi, ta không còn ngoặc mở nào thừa thì ta sẽ trả về **true**.
  - Nếu `Stack` còn ngoặc mở, tức là sau khi xét hết chuỗi, ta vẫn còn dư các ngoặc mở mà không có ngoặc đóng thì ta sẽ trả về **false**.

## [66. Plus One](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/66_PlusOne.cpp)
### Tóm tắt đề:
* Nhập vào mảng một dãy số: vd [1,2,3]
* Thì in ra mảng sao cho giá trị của số trong mảng tăng thêm 1 đơn vị như 1 số tự nhiên ví dụ: 
- [1,2,3] thì in ra [1,2,4]
- [0] thì in ra [1]
- [9,9,9] thì in ra [1,0,0,0]
### **Hướng dẫn giải:**
- B1: Kiểm tra xem số có phải nó có phải TH đặc biệt toàn số 9 không ?
- B2: Nếu đúng thì chèn thêm số 0 vào cuối mảng bằng vector và số đầu tiên trong mảng chuyển thành 1. Chuyển các số 9 còn lại trong mảng thành số 0
- B3: Nếu không phải TH đặc biệt thì kiểm tra xem số cuối cùng có phải số 9 hay ko
- B4: Nếu không phải thì cộng thêm 1 nếu phải thì chuyển số 9 thành số 0 và dùng vòng lặp chạy ngược từ số cuối lên số đầu để check số đứng trước nó và lặp lại bước 4 để kiểm tra

## [69.Sqrt(x)](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/69_Sqrt.cpp)

### **Tóm tắt đề:**
*	Cho một số nguyên không âm x, hãy tính và trả về căn bậc hai của x.
*	Kiểu trả về là số nguyên nên các chữ số thập phân bị cắt bớt và chỉ phần nguyên của kết quả được trả về.
*	Lưu ý: Bạn không được phép sử dụng bất kỳ hàm số mũ hoặc toán tử tích hợp nào, chẳng hạn như pow (x, 0.5) hoặc x ** 0.5

### **Ví dụ:**
VD1:
*	Input: x = 4
*	Output: 2

VD2:
*	Input: x = 8
*	Output: 2
*	Giải thích: Căn của 8 là 2.82842…; do chỉ lấy phần nguyên (cắt bỏ phần thập phân), nên trả về kết quả là 2.

### **Hướng dẫn giải:**
1.	Gán biến `sqrt_v`=1.
2.	Nếu `x`=0 trả ra 0; còn nếu `x`!=0 thực hiện bước 3
3.	Dùng vòng lặp để tìm giá trị `i` thỏa mãn `i`*`i` > x.
4.	Nếu thỏa mãn bươc 3, ta gán biến `sqrt_v`= `i` - 1;  kết thúc vòng lặp và trả ra giá trị `sqrt_v`.


## [258. Add Digits](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/258_AddDigits.cpp)
### **Tóm tắt đề:**
- Cho 1 số nguyên `n`, lặp lại việc cộng các thành phần cho đến khi được kết quả là số có 1 chữ số, và trả về kết quả đó.
### **Ví dụ:**
- Input: 38
- Output: 2
Giải thích: 38 -> 3 + 8 = 11 -> 1+1 = 2 -> trả về kết quả 2
### **Hướng dẫn giải:**
- Dùng 2 vòng lặp While lồng nhau:
   - Vòng lặp ngoài cùng sẽ dừng khi `n` chỉ còn là số có 1 chữ số (0<=n<10) và sẽ lặp lại việc gán `n` bằng tổng các chữ số của chính nó
   - Vòng lặp trong sẽ dùng để tính tổng số chữ số của số `n`, dừng lại khi `n`=0:
      - Để tính tổng các chữ số của 1 số, tổng += số dư của số đó khi chia cho 10, sau mỗi lần tổng cộng dư thì chính số đó sẽ chia cho 10 (chia lấy phần nguyên), lặp lại cho đến khi số đó = 0.

## [389. Find the Diffirence](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/389_FindTheDiffirence.cpp)
**Tóm tắt đề:**
Cho 2 xâu s và t, xâu t được xây dựng bằng cách xáo trộn các ký tự
trong s rồi thêm 1 ký tự khác. Tìm ký tự được thêm.

**Hướng dẫn giải:**
- Tạo 1 `map<char,int>` để lưu số lượng các ký tự (vd map['a'] == 5 ... )
- Duyệt xâu t, tăng `map[t[i]]`;
- Duyệt xâu s, giảm `map[s[i]]`;
- Duyệt map, `nếu map[c] != 0` thì `c` là ký tự cần tìm

## [461. Hamming Distance](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/461_Hamming_Distance.cpp)
**Tóm tắt đề:** 
Khoảng cách `Hamming` giữa hai số nguyên là số vị trí các bit tương ứng khác nhau. 
Cho hai số nguyên x và y, trả về khoảng cách `Hamming` giữa chúng.

**Ví dụ:**

|int|binary|
|-|-|
|1| 0 0 0 1|
|4| 0 1 0 0|
| | = ↑ = ↑|

Vậy khoảng cách `Hamming` là 2.

**Hướng dẫn giải:**
- Tạo 2 xâu *S1* và *S2* để biểu diễn x và y dưới dạng nhị phân (nếu chiều dài 2 xâu không bằng nhau thì thêm các bit 0 vào bên trái của xâu ngắn hơn đến khi được 2 xâu dài bằng nhau)
- Tạo biến *t* để lưu độ dài của hai xâu và biến *dem* = 0 để lưu lại kết quả
- Bắt đầu một vòng lặp để kiểm tra từng phần tử hai xâu:
  - Nếu phần tử của *S1* khác phần tử của *S2* thì tăng biến *dem* lên 1 đơn vị
- Kết thúc vòng lặp, *dem* chính là khoảng cách `Hamming`.

## [693. Binary Number with Alternating Bits](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/693_BinaryNumberwithAlternatingBits.cpp)

**Tóm tắt đề:** Cho một số nguyên dương, kiểm tra xem khi số đó được biểu diễn dưới dạng nhị phân thì nó có các bit xen kẽ hay không (nếu 2 bit liền nhau phải có giá trị khác nhau)

**Ví dụ:** 
- n = 5
-> true
(5 Khi biểu diễn dưới dạng nhị phân: 101)
- n = 7
-> false
(7 Khi biểu diễn dưới dạng nhị phân: 111)

**Hướng dẫn giải:**  
- Tạo 1 xâu `S` để biểu diễn số n dưới dạng nhị phân
- Bắt đầu 1 vòng lặp để kiểm tra các phần tử trong xâu `S`:
  - nếu có 2 phần tử liền nhau giống nhau => trả về `false` và dừng vòng lặp
  - Ngược lại, nếu không có 2 phần tử nào liền nhau giống nhau => trả về `true`

- Để tối ưu hơn (để nộp bài không bị Time Limit Exceeded), ta chuyển số đó thành dạng nhị phân và kiểm tra tính xen kẽ cùng lúc:
  - Tạo biến `t1` để lưu số dư của `n/2`
  - Chia `n` cho 2
  - Tạo biến `t2` để lưu số dư của `n/2` (`n` sau bước 2 đã thay đổi)
  - Nếu `t1`==`t2`, ngay lập tức trả về `false` và kết thúc vòng lặp
  - Ngược lại, lặp lại các bước trên (đến khi `n`=0)
  - Nếu vòng lặp kết thúc khi `n`=0 và `t1` không bằng `t2` thì trả về `true`

## [1822. Sign of the Product of an Array](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1882_SignOfTheProductOfAnArray.cpp)
**Tóm tắt đề**:
- Nhập vào một dãy số rồi tính tích của tất cả các số gọi là X
- Nếu X dương thì in ra 1
- Nếu X âm thì in ra -1
- Nếu X bằng 0 thì in ra 0


**Hướng dẫn giải:** 
* Cách 1:
  - Khai báo X là tích của các số trong mảng (lưu ý kiểu dữ liệu)
  - Dùng vòng lặp để tính X
  - Dùng câu lệnh rẽ nhánh để kiểm tra X rồi dung return để trả về kết quả
* Cách 2:
  - Khai báo biến count để đếm số âm và biến count1 để đếm số chữ số 0 
  - Dùng vòng lặp để đếm số âm và số 0
  - Dùng câu lệnh rẽ nhánh để kiểm tra và trả về kết quá 
