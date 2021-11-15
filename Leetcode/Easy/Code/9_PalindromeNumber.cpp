//Cách 1:
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false; //Số âm
        else
        {
            string s1 = to_string(x); // Chuyển số sang dạng chuỗi
            string s2 = s1;           // Tạo chuỗi mới
            
            reverse(s2.begin(), s2.end()); //Đảo chuỗi
            
            if (s1 == s2)
                return true;
            else
                return false;
        }
    }
};
//Cách 2:
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false; // Số âm
        else
        {
            long long int soBangX = x;
            long long int newNumber = 0; // Số lưu giá trị sau khi đảo

            while (soBangX > 0)//lặp đến khi soBangX < 1
            { 
                int soDu = soBangX % 10;
                soBangX /= 10;
                newNumber = newNumber * 10 + soDu;
            }
           
            if (newNumber == x)
            {
                return true;
            }
            else
                return false;
        }
    }
};
