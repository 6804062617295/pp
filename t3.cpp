#include <stdio.h>

int main() {
    int a,m,p;
    float t;
    while(a != -1){
        scanf("%d",&a);
        if(a>50){
            p = a;
            if(p>150){
                m = p - 150;
                t = (p*3)+(45*2.5)+(40*2)+(15*1.5);
                printf("%.2f",t);
            }
            else if(p>105 && p<=150){
                m = p - 105;
                t = (p*2.5)+(40*2)+(15*1.5);
                printf("%.2f",t);
            }
            else if(p>65 && p<=105){
                m = p - 65;
                t = (p*2)+(15*1.5);
                printf("%.2f",t);
            }
            else if (p>50 && p<=65){
                m = p - 50;
                t = p*1.5;
                printf("%.2f",t);
            }
        }
        else if ( a == -1){ //ไม่ใส่graderให้0ไม่รู้ทำไม

        }
        else{
            printf("0.00");
        }

    }
    return 0;
}