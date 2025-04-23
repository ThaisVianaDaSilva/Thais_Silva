#include <stdio.h>

int main(){
    //Desenvolva um programa que assuma uma entrada em Segundos e transforme em Horas, Minutos e Segundos.
    int seg = 0;

    int hr = 0;
    int min = 0;
    int seg_f = 0;

    int s = 0;

    printf("Insira um valor em segundos: ");
    scanf("%d", &seg);

    if (seg < 3600){
        //hr = 0;
        if (seg < 60){
            min = 0;
            seg_f = seg;
        }
        else{
            for (int n = 60; n <= seg; n = n + 60){
                //n = n+60;
                min++;
            }
            seg_f = seg - min*60;
        }
    }
    else{
        for (int n = 3600; n <= seg; n = n + 3600){
            //n = n+3600;
            hr++;
        }

        s = seg - hr*3600;

        if (seg < 60){
            min = 0;
            seg_f = s;
        }
        else{
            for (int n = 60; n <= s; n = n + 60){
                //n = n+3600;
                min++;
            }
            seg_f = s - min*60;
        }
    }
    printf("hr: %d, min: %d, seg: %d", hr, min, seg_ff);
}
