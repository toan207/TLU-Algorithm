# Easy Problems - Code mẫu và giải thích

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
