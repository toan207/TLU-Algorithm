# Easy Problems - Code mẫu và giải thích

### [20. Valid Parentheses](https://github.com/toan207/TLU-Algorithm/blob/main/Leetcode/Easy/Code/20_ValidParentheses.cpp)
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
