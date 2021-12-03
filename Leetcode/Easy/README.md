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


## [8. String to Integer (atoi)](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/8_StringToInteger.cpp)
### **Tóm tắt đề:**
#### **Chuyển đổi từ dạng string sang dạng integer**
- Cho 1 chuỗi, chuyển chuỗi đó sang dạng số nguyên int
- Bỏ qua khoảng trắng (dấu cách), chỉ chuyển số đầu tiên. VD: `  12   891` sẽ chỉ trả về số `12`.
- Kiểm tra dấu trước ngay trước số (viết liền) là âm hay dương, chỉ 1 dấu duy nhất, nếu nhiều hơn trả về `0`.
- Không chấp nhận chữ đứng trước dấu và số. VD: `  a -12` không chấp nhận, trả về `0` ; `-12 a` thì thoả mãn, trả về `-12`.
- Nếu số nguyên đó lớn hơn INT_MAX, trả về INT_MAX; nhỏ hơn INT_MIN, trả về INT_MIN.
- Trả về kết quả cuối cùng.
### **Ví dụ:**
- `+42` hoặc `42` trả về 42
- `+ 42` trả về `0`. Vì `+` không đứng liền với `42`
- `++42` , `--42` , `---42` trả về `0` vì có nhiều hơn 1 dấu.
- `-41aaa` trả về `-41`
- `aaa42` trả về `0`
- `+00777 111` trả về `777`
- `981291281281212` trả về `2147483647` (INT_MAX) 
- `-981 +291 281 281 212` trả về `-981`
  
### **Hướng dẫn giải:**
  - Cần tìm dấu, vị trí đầu tiên có chữ số xuất hiện và vị trí cuối cùng.
  - Nếu không có dấu thì mặc định là số nguyên dương.
  - Vị trí cuối kết thúc nếu vị trí tiếp theo không phải là số trong dạng string. Từ `0` đến `9` trong bảng mã ASCII là từ `48` đến `57`.
  - Nếu các điều kiện không thoả mãn đề bài `return 0` .
  - Xem từ vị trí đầu đến vị trí cuối có bao nhiêu số, nếu lớn hơn 11 tức vượt quá dạng int thì kết hợp xét dấu và trả về giá trị tương ứng.
  - Xét xem có số `0` phía trước không, nếu có thì xoá bớt, tránh lặp thừa không cần thiết, mỗi lần xoá thì độ dài và vị trí kết thúc sẽ giảm 1.
  - Sau khi kiểm tra xong, dùng vòng lặp xét từ vị trí đầu đến vị trí kết thúc để chuyển sang dạng int. Trong quá trình lặp, nếu overflow thì trả về INT_MAX hoặc INT_MIN, tuỳ vào dấu như thế nào.
  - Sau vòng lặp, xét dấu và trả về giá trị sau khi biến đỔi.


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


## [119. Pascal's Triangle II](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/119_PascalsTriangleII.cpp)

### **Tóm tắt đề:**
*	Cho một số nguyên `rowIndex`, trả về các hàng `rowIndexth` của tam giác Pascal.
*	Lưu ý: Trong tam giác Pascal, mỗi số là tổng của hai số ngay trên nó.
*	 Xem hình tại đây để hiểu rõ đề bài hơn: https://leetcode.com/problems/pascals-triangle-ii/

### **Ví dụ:**
VD1:
*	Input: ` rowIndex` = 3
*	Output: [1,3,3,1]

VD2:
*	Input: `rowIndex` = 0
*	Output: [1]

VD3:
*	Input: `rowIndex` = 1
*	Output: [1,1]


### **Hướng dẫn giải:**
1. 	Ta nhận thấy  mỗi số ( trừ `a[0][0]`; `a[0][1]`; `a[1][1]`) đều được tạo thành bằng cách sau: `a[ i ] [ j ]` = `a[i – 1][ j – 1]` + `a[i – 1][ j ]`
2.	Trước hết, ta khởi tạo các số: `a[0][0]=1`; `a[0][1]=1` ;`a[1][1]=1`.
3.	Dùng 2 vòng lặp `for` để duyệt các phần tử.
*** Lưu ý: khi duyệt hàng cần thêm phần tử `a[i][0]=1` vào đầu và `a[i][i]=1` vào cuối ***
4.	Dùng `push_back` để thêm phần tử vào mảng và trả ra giá trị

## [171. Excel Sheet Column Number](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/171_ExcelSheetColumnNumber.cpp)
## **Tóm tắt đề bài**
- Nhập vào một chuỗi các kí tự bao gồm các chữ cái Latinh in hoa
- Chuỗi có độ dài từ 1 đến 7 chữ cái **(A bắt đầu từ 1,AA là 28)**

## **Ví dụ**
- Đầu vào : *"A"*, hiện kết quả là *1*
- Đầu vào : *"AC"*, hiện kết quả là *29*

## **Hướng giải quyết :**

- Khởi tạo mảng lưu kí tự gồm các chữ cái in hoa từ **A đến Z**
- Khởi tạo biến *result* lưu kết quả cần in ra
- - Ta nhận thấy những chuỗi có 1 kí từ thì sẽ cho ra kết quả từ **[1;26]**, 2 kí từ thì cho kết quả từ **[27;702]**,...
- Từ trên ta rút được công thức tổng quát của cấp số nhân lùi : 26^(d-1)*(*a* - 'A' + 1) với công bội d=-1; *(Trong đó d là độ dài chuỗi, a là vị trí của 1 từ trong bảng mã ASCII)*
- Sử dụng vòng lặp để thực hiện tính toán


## [202. Happy Number](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/202_HappyNumber.cpp)
### **Tóm tắt đề:**
Nhập vào một số và kiểm tra xem số đó có phải là số `happy` hay không
Số `happy` là một số khi thực hiện vòng lặp lấy tổng  của bình phương  các chữ số đã nhập cộng vào và tạo thành 1 số mới cũng sẽ lặp lại vòng lặp đấy cho đến khi nó ra số 1 thì nó chính là số `happy` còn không phải thì vòng lặp sẽ vô tận
### **Ví dụ:**
* `input: 19` <br>	`output: true` <br>
- ` Giải thích: 19` <br>
1^2 + 9^2 = 82 <br>
8^2 + 2^2 = 68 <br>
6^2 + 8^2 = 100 <br>
1^2 + 0^2 + 0^2 = 1
* `input: 3`<br> `output: false`
### Hướng dẫn làm:
- B1: Ta thử bấm máy sẽ thấy các số bé hơn 10 như 2,3,4,5,6,8,9 thực hiện vòng lặp 1 lúc thì sẽ đều quay về chính số 4 vậy chúng ta sẽ để vòng lặp dừng lại khi số đấy nhỏ hơn 5
- B2: Đầu tiên ta sẽ chia lấy dư các số để tính tổng bình phương các số chữ số trong số `n` và sau khi cộng xong ta sẽ gán biến `n = c` để tiếp tục vòng lặp tìm số `happy` 



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


## [338. Counting Bits](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/338_CountingBits.cpp)
### **Tóm tắt đề:**
- Cho một số nguyên `n`, trả về mảng `ans` có độ dài `n+1` với `i (0 <= i <= n)`, `ans[i]` là số bit 1 khi biểu diễn nhị phân của `i`.
### **Ví dụ:**
- Ví dụ 1:
   - Input: n=2
   - Output: \[0,1,1\]
   - Explanation: 0 -> 0; 1 -> 1; 2 -> 10
- Ví dụ 2:
   - Input: n=5
   - Output: \[0,1,1,2,1,2\]
   - Explaination: 0 -> 0; 1 -> 1; 2 -> 10; 3 -> 11; 4 -> 100; 5 -> 101
### **Hướng dẫn giải:**
- Khởi tạo `i = 0`, tạo 1 vector `v` để lưu các giá trị đếm được
- Trong khi `i <= n`:
   - Tạo 1 biến trung gian `t = i` và 1 biến đếm `d`
   - Trong khi `t != 0`, dần dần dịch bit của t sang phải 1, nếu gặp số 1 ở cuối dãy bit thì `d++`, nếu không thì tiếp tục dịch cho đến khi `t==0`
   - Thêm `d` vào vector `v` và tăng `i` lên 1 rồi lặp lại các việc trên đến khi `i > n`
- Trả về vector `v` sau khi đã thêm các phần tử


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

## [728. Self Dividing Numbers](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/728_SelfDividingNumbers.cpp)

### **Tóm tắt đề:**
*	A self-dividing number (Số tự chia) là số chia hết cho mọi chữ số trong nó. VD: 128 là số tự chia vì `128%1==0`, `128%2==0`, `128%8==0`.
*	Một số tự chia không được phép chứa chữ số 0
*	Cho trước hai số nguyên `left` và `right`, trả về danh sách tất cả các số tự chia trong phạm vi `[left, right]`.

### **Ví dụ:**
1.	VD1:
*	Input: left = 1, right = 22
*	Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
2.	VD2:
* 	left = 47, right = 85
* 	Output: [48,55,66,77]

### **Hướng dẫn giải:**
1.	Dùng 1 vòng lặp `for` để duyệt các phần tử `i` từ `left` đến `right`
2.	Dùng vòng lặp `while` trong vòng lặp `for` ở bước 1 để lấy các chữ số của từng phần tử `i`
3.	Nếu `chuso`= 0 thì như đề bài số này không thỏa mãn; nếu phần tử `i` không chia hết cho `chuso` trả ra `false`
4.	Sau cùng nếu `i` thỏa mãn số tự chia, thêm phần tử i vào vector `v` 

## [896. Monotonic Array](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/896_MonotonicArray.cpp)

### Tóm tắt đề bài
- Nhập vào một dãy kiểm tra xem dãy đó có đơn điệu hay không ? Nếu có trả về true, trả về false nếu ngược lại!
### Ví dụ
- input : `[1,2,3,4,5]` -> output: `true`
- output : `[1,2,3,5,4]` -> output : `false`

### Điều kiện
- `1 <= nums.length <= 105` 
- `105 <= nums[i] <= 105`

### Hướng giải quyết
- Tạo mảng lưu các kí tự cần nhập gồm **n** phần tử
- Ta nhận thấy nếu đơn điệu thì số phần từ cùng đơn điệu sẽ **=** số phần tử nhập vào
- Tạo biến đếm cho từng trường hợp
- Sau đó tạo vòng for để so sánh các giá trị trong mảng để cộng các biến đếm vừa tạo
- Nếu biến đếm **=** số lượng phần tử thì xuất ra màn hình `true`, và hiện `false` nếu ngược lại

## [1295. Find Numbers with Even Number of Digits](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1295_FindNumberswithEvenNumberofDigits.cpp)

### Tóm tắt đề bài
- Nhập vào một dãy kiểm tra xem dãy đó có số nào có **số các chữ số là chẵn**. Nếu có trả về số lượng !
### Ví dụ
- input : `[12,345,2,6,7896]` -> output: `2`
- output : `[555,901,482,1771]` -> output : `1`

### Điều kiện
- `1 <= nums.length <= 500` 
- `1 <= nums[i] <= 105`

### Hướng giải quyết
- Tạo mảng lưu các kí tự cần nhập gồm **n** phần tử
- Tạo biến đếm `1` để đếm số lượng phần tử thoả mãn đều bài
- Taọ vòng lặp thực hiện tính toán
- Tạo biến đếm `2` qua trường hợp
- Tạo vòng lặp để tính *số chữ số của số đó* ,nếu `2` chia hết cho 2 thì biến đếm `1` cộng thêm 1.
- Hiện biến `1` ra màn hình ta thu được kết quả.
  

## [1394. Find Lucky Integer in Array](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1394_FindLuckyIntegerInAnArray.cpp)
### **Tóm tắt đề:**
Nhập vào một dãy số trong mảng tìm và in ra số lucky lớn nhất nếu không có in ra -1
Một số được cho là số lucky khi số lần nó xuất hiện trong mảng bằng chính giá trị của nó
### **Ví dụ:**
* 	`Input: [2.2.3]`		* `output: 2`
*	`Intput[1]`			* `output: 1 `
*	`Intput[1,2,2,3,3,3]`	* `output: 3` (vì 3 là số lucky lớn nhất)
*	`Intput[2,2,2,3,3]`	* `output: -1` (vì không có số lucky)
### Hướng dẫn làm:
* 	B1: Khởi tạo `vector` để lưu các số lucky, tạo 1 biến `dem` để đếm số lần xuất hiện của số trong mảng
* 	B2: Nếu `số i` xuất hiện quá lần lập tức biến tất cả các `số i` còn lại trong mảng thành số `0`
* 	B3: Tìm số `lucky i` lớn nhất trong vector nếu có gán `max = i` nếu không có số lucky gán `max = -1`

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


## [1859. Sorting the Sentence](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1859_SortingtheSentence.cpp)
### **Tóm tắt đề:** 
Câu là một danh sách các từ được phân tách bằng một dấu cách không có dấu cách ở đầu hoặc cuối. Mỗi từ bao gồm các chữ cái tiếng Anh viết thường và viết hoa.
Một câu có thể được xáo trộn bằng cách thêm vị trí của 1 từ vào mỗi từ sau đó sắp xếp lại các từ trong câu.
Đưa ra một câu đã xáo trộn `s` chứa không quá 9 từ, hãy tạo lại và trả lại câu ban đầu.
### **Ví dụ:**
- Input: s = "is2 sentence4 This1 a3"
- Output: "This is a sentence"
-Input: s = "Myself2 Me1 I4 and3"
-Output: "Me Myself and I"
### **Hướng dẫn giải:**
- Tạo 1 vector `v` gồm 10 phần tử để lưu lại các từ trong xâu `s` ở đúng vị trí của nó
- Chạy từ đầu `s` cho đến khi gặp 1 chữ số (tức là đã hết 1 từ) thì dừng lại và thêm từ đó vào vector v tại vị trí `i` (gán `v[i]` = từ muốn thêm, `i` chính là chữ số biểu thị vị trí của từ). Sau khi thêm, bỏ qua số và dấu cách để đến từ tiếp theo rồi lặp lại việc thêm cho đến hết xâu `s`.
*(Cách làm các bước được chỉ rõ hơn trong code)*

## [1952. Three Divisors](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/1952_ThreeDivisors.cpp)

### **Tóm tắt đề:**
*	Cho một số nguyên n, trả ra `true` nếu n có chính xác 3 ước nguyên dương; còn lại trả ra `false`.

### **Ví dụ:**
VD1:
* 	Input: n = 2
*	Output: false
*	Giải thích: 2 chỉ có 2 ước dương: 1 và 2.
VD2:
*	Input: n = 4
*	Output: true
*	Giải thích: 4 có 3 ước nguyên dương: 1, 2,và 4.

### **Hướng dẫn giải:**
####  Cách 1:
1. Dùng biến `dem` để đếm số ước thuộc nửa đoạn [2,n)<br>
2. Nếu `dem`=1, trả ra `true` (tính cả 1 và n sẽ đủ 3 ước)

####  Cách 2: (nhanh hơn)
* Ta nhận thấy số có đúng 3 ước dương  là bình phương của một số nguyên tố p (3 ước là 1,p,n)
1.	Số `1` là số đặc biệt ta sẽ loại bỏ nó trước.
2.	Nếu `sqrt(n)` không là số tự nhiên ta cũng sẽ loại.
3.	Dùng vòng lặp kiểm tra xem `sqrt(n)` có phải số nguyên tố không; nếu có trả ra `true`, nếu không trả ra `false`.


