#include <stdio.h>

int main() {
    int choice;
    char runAgain = 'y';
    
    printf("=== FIRST YEAR COURSE & FACULTY DIRECTORY ===\n");
    
    while (runAgain == 'y' || runAgain == 'Y') {
        printf("\nEnter Course Sr. No. (1 to 10): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Course: Calculus and Linear Algebra\nFaculty: Dr. Laxmi Rajput\nCredits: 4.0\n");
                break;
            case 2:
                printf("Course: German\nFaculty: Mr. Raj Barat\nCredits: 2.0\n");
                break;
            case 3:
                printf("Course: Acquiring Business Communication (ABC) Lab\nFaculty: Dr. Piyali Gope\nCredits: 2.0\n");
                break;
            case 4:
                printf("Course: Fundamentals of Artificial Intelligence\nFaculty: Ms. Deepshikha Satsangi\nCredits: 2.0\n");
                break;
            case 5:
                printf("Course: C Programming\nFaculty: Ms. Shilpa Narula\nCredits: 2.0\n");
                break;
            case 6:
                printf("Course: Web Designing\nFaculty: Mr. Abhay Pratap Verma\nCredits: 1.0\n");
                break;
            case 7:
                printf("Course: Digital Electronics and IoT Systems\nFaculty: Dr. Prachi Tripathi\nCredits: 3.0\n");
                break;
            case 8:
                printf("Course: Digital Electronics and IoT Systems Lab\nFaculty: Dr. Prachi Tripathi\nCredits: 1.0\n");
                break;
            case 9:
                printf("Course: Innovation and Entrepreneurship\nFaculty: Prachee Srivastava\nCredits: 2.0\n");
                break;
            case 10:
                printf("Course: Constitution of India, Law and Engineering\nFaculty: Ms. Kajal\nCredits: 0.0\n");
                break;
            default:
                printf("Invalid choice! Please select between 1 and 10.\n");
                break;
        }
        
        printf("\nDo you want to look up another course? (y/n): ");
        scanf(" %c", &runAgain); 
    }
    
    printf("Thank you!\n");
    return 0;
}