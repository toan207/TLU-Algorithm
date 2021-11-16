# Easy Problems - Code mẫu và giải thích

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
  
  
## [13. Roman to Integer](https://github.com/toan207/TLU-Algorithm/tree/main/Leetcode/Easy/Code)
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

## **693. Binary Number with Alternating Bits**

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
