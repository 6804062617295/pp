#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a,m;
    float t;
    while(true){
        cin >> a;
        // 15 40(55) 45(100) 
        if (a <= 50){
            cout << "0.00" << endl;
        }
        else if(a >=50 && a <=55){
            m = a - 50;
            t = (15*1.5) + (35 * 2) + (m * 2);
            printf("%.2f\n",t);
        }
        else if(a >55 && a <=100){
            m = a - 55;
            t = (15*1.5) + (40 * 2) + (m * 2.5);
            printf("%.2f\n",t);
        }
        else if(a >100){
            m = a - 100;
            t = (15*1.5) + (40 * 2) + (45 * 2.5) + (m * 3);
            printf("%.2f\n",t);
        }
        else if (a == -1){
            break;
        }
    }
    return 0;
}
/*
        if(a < 50){
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
        else if ( a == -1){
            break;

        }
        else{
            printf("0.00");
        }
        */