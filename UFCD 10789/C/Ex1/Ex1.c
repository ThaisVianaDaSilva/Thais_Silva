#import <stdio.h>

int main(){
    //Desenvolva um programa que assuma uma entrada em Segundos e transforme em Horas, Minutos e Segundos.
    int seg;

    printf("Inisra um valor em segundos: ");
    scanf("%d", &seg);

    int hr = 0;
    int min = 0;
    int seg_ = 0;

    if (seg < 3600){
        //hr = 0;
        if (seg < 60){
            min = 0;
            seg_ = seg;
        }
        else{
            for (int n = 60; n <= seg; n = n + 60){
                //n = n+60;
                min++;
            }
            seg_ = seg - min*60;
        }
    }
    else{
        for (int n = 3600; n <= seg; n = n + 3600){
            //n = n+3600;
            hr++;
        }

        int s = seg - hr*3600;

        if (seg < 60){
            min = 0;
            seg_ = s;
        }
        else{
            for (int n = 60; n <= s; n = n + 60){
                //n = n+3600;
                min++;
            }
            seg_ = s - min*60;
        }
    }
    printf("hr: %d, min: %d, seg: %d", hr, min, seg_);
}
