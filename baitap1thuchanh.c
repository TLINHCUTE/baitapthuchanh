#include <stdio.h>

int main() {
    int stt1 = 1, stt2 = 2, stt3 = 3, stt4 = 4;
    char name1[] = "Nguyen Van A", name2[] = "Tran Thi B", name3[] = "Le Minh C", name4[] = "Pham Quoc D";
    float toan1 = 8.5, ly1 = 7.0, hoa1 = 9.0, sinh1 = 6.5, van1 = 8.0;
    float toan2 = 7.0, ly2 = 8.0, hoa2 = 6.5, sinh2 = 7.5, van2 = 7.0;
    float toan3 = 6.5, ly3 = 8.5, hoa3 = 7.5, sinh3 = 7.0, van3 = 6.0;
    float toan4 = 9.0, ly4 = 9.5, hoa4 = 9.0, sinh4 = 8.0, van4 = 8.5;
    float diemTB1 = (toan1 + ly1 + hoa1 + sinh1 + van1) / 5;
    float diemTB2 = (toan2 + ly2 + hoa2 + sinh2 + van2) / 5;
    float diemTB3 = (toan3 + ly3 + hoa3 + sinh3 + van3) / 5;
    float diemTB4 = (toan4 + ly4 + hoa4 + sinh4 + van4) / 5;
    printf("| %-4s | %-24s | %-6s | %-6s | %-6s | %-5s | %-6s | %-13s |\n", 
           "STT", "Họ và tên", "Toán", "Lý", "Hóa", "Sinh", "Văn", "Điểm TB");
    printf("|------|----------------------|-------|-------|-------|-------|-------|------------|\n");
    printf("| %-4d | %-20s | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-10.2f |\n", 
           stt1, name1, toan1, ly1, hoa1, sinh1, van1, diemTB1);
    printf("|------|----------------------|-------|-------|-------|-------|-------|------------|\n");
    printf("| %-4d | %-20s | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-10.2f |\n", 
           stt2, name2, toan2, ly2, hoa2, sinh2, van2, diemTB2);
    printf("|------|----------------------|-------|-------|-------|-------|-------|------------|\n");
    printf("| %-4d | %-20s | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-10.2f |\n", 
           stt3, name3, toan3, ly3, hoa3, sinh3, van3, diemTB3);
    printf("|------|----------------------|-------|-------|-------|-------|-------|------------|\n");
    printf("| %-4d | %-20s | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-5.2f | %-10.2f |\n", 
           stt4, name4, toan4, ly4, hoa4, sinh4, van4, diemTB4);

    return 0;
}
