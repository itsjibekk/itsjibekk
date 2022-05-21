#include <stdio.h>
#include <graphics.h>

void grafic_turnon();
void mainscreen();
void knopki(int x1,int y1,int x2,int y2,char* text, int color);
void yacheyki();
void open();
void save();
void sort();
void read_from_file();
void  sort_age_ascending();

typedef struct dav{
   char name[20];
   char gender;
   int age;
   char  nation[10];
   float height;

};





int main() {

  grafic_turnon();
  mainscreen();






  closegraph();
  return 0;
}

void grafic_turnon(){
    int GrDr, GrMod;
    GrDr=DETECT ;
    initgraph(&GrDr,&GrMod," ") ;
}

void mainscreen()
{

     void *buffer;
     unsigned size;
      void *buf;
    unsigned sizee;


     setcolor(15);
     bar(0,0,640,480);
     //knopki snizu
     setcolor(0);
     line(0,380,640,380);
     knopki(10,410,165,440,"Open",0);
     knopki(165,410,320,440,"Save",0);
     knopki(320,410,475,440,"Sort",0);
     knopki(475,410,630,440,"Exit",0);
     yacheyki();




    char ch;
    int xr;
    int yr;
    int check = 0;
    int y=40;
    int x=5;
    int i;
    struct dav labr[9];
      char S1[50];
    int flag;
  do{

        getmouseclick(WM_LBUTTONDOWN,xr,yr);
        ///////////////////////////////////////////////////exit
        if ( (xr>=475)&&(xr<=630)&&(yr>=410)&&(yr<=440) )
        {
           ch = 'e';
        }
        //////////////////////////////////////////////////////open
       if ( (xr>=10)&&(xr<=165)&&(yr>=410)&&(yr<=440) )
        {
           size=imagesize(10,290,170,400);
           buffer = malloc(size);
           getimage(10,290,170,400,buffer);

                if (check > 0)
                {

                  bar(10,300,170,370);
                  knopki (10,330,170,360,"Text file",0);
                  knopki (10,290,170,320,"Random access file",0);
                  knopki (10,370,170,400,"Original file",0);


                }
                 else
                {
                 bar(10,380,170,410);
                 knopki (10,370,170,400,"Original file",0);

                }



           do
           {

                 getmouseclick(WM_LBUTTONDOWN,xr,yr);
                if ( (xr>=10)&&(xr<=170)&&(yr>=370)&&(yr<=400)  ) //original file
    {

                    FILE *file = fopen("11.txt", "r");
                    putimage(10, 290, buffer, COPY_PUT);
                    free(buffer);
                    i=0;
                    x=5;
                      struct dav labr[9];

        file = fopen("11.txt","r");
        int i=0, y = 40;
        char S1[50];
  while((fscanf(file,"%s %c %d %s %f",labr[i].name,&labr[i].gender,&labr[i].age,labr[i].nation,&labr[i].height))!=EOF)
     {
        sprintf(S1,"%s",labr[i].name);
        outtextxy(5,y,S1);

        sprintf(S1,"%c",labr[i].gender);
        outtextxy(190,y,S1);

        sprintf(S1,"%d",labr[i].age);
        outtextxy(290,y,S1);

        sprintf(S1,"%s",labr[i].nation);
        outtextxy(420,y,S1);

        sprintf(S1,"%.2f",labr[i].height);
        outtextxy(520,y,S1);

        i++;
        y+=40;

       }
                   // read_from_file();
       y=40;
       flag=1;
       fclose(file);
       check++;


    }



     if (check > 0)
    {


        ///////////////////////////////////////////////textfile
           if((xr>= 10) && (xr<= 170) && (yr>=330) && (yr<= 360))
           {
                putimage(10, 290, buffer, COPY_PUT);
                free(buffer);
                setcolor(0);
                line(0,0,640,480);
                flag = 1;


           }

          /////////////////////////////////////////////randomaccessfile
           if((xr>= 10) && (xr<= 170) && (yr>=290) && (yr<= 320))
           {
                putimage(10, 290, buffer, COPY_PUT);
                free(buffer);
                //setcolor(0);
                //line(640,380,0,0);
                flag = 1;

           }

    }
  }
while(flag != 1);
        flag = 0;

}



      //////////////////////////////////////////////////////////save
      if ( (xr>=165)&&(xr<=320)&&(yr>=410)&&(yr<=440) )
        {
            save();
        }//Save



     ///////////////////////////////////////////////////////////Sort
      if ( (xr>=320)&&(xr<=475)&&(yr>=410)&&(yr<=440) )
        {


           size=imagesize(320,210,480,400);
           buffer = malloc(size);
           getimage(320,210,480,400,buffer);

           setcolor(15);
           bar(320,210,480,400);

          sort();
          do
          {
              getmouseclick(WM_LBUTTONDOWN,xr,yr);
              //////////////////////////////////////////name
            /*  if ( (xr>=320)&&(xr<=480)&&(yr>=370)&&(yr<=400) )
          {
              }*/
            /////////////////////////////////////////////////////age

                if ( (xr>=320)&&(xr<=480)&&(yr>=290)&&(yr<=320) )
              {
                     putimage(320,210,buffer,COPY_PUT);
                     free(buffer);

                     size=imagesize(490,220,610,290);
                     buffer= malloc(size);
                   //  getimage(490,220,610,290,buffer);

                     setcolor(15);
                     bar(490,220,610,290);

                     knopki (490,260,610,290,"Descending",0);
                     knopki (490,220,610,250,"Ascending",0);
                                      //////////////////////////////////////////age.ascending
                   do
                   {
                       getmouseclick(WM_LBUTTONDOWN,xr,yr);
                  if ( (xr>=490)&&(xr<=610)&&(yr>=220)&&(yr<=250) )
                     {

                        // putimage(490,220,buffer,COPY_PUT);
                         //free(buffer);


    void *buf;
    unsigned sizee;
    int y=40;
    int x=5;
    int i;
    char S1[50];
    char cname[20];

    int cage;
    char cgender;
    char cnation[10];
    float cheight;
    int k=0;

            for (i=0;i<9-1;i++)
                    {
                        for(int j = 1; j <9-i-1; j++)

                                {
                                    if ( labr[j].age > labr[j+1].age)
                                        {
                                            for(k=0;k<20;k++)
                                                {
                                                     cname[k] = labr[j].name[k];
                                                     labr[j].name[k] = labr[j+1].name[k];
                                                     labr[j+1].name[k] = cname[k];
                                                 }

                                                     cage = labr[j].age;
                                                     labr[j].age = labr[j+1].age;
                                                     labr[j+1].age = cage;

                                                     cgender = labr[j].gender;
                                                     labr[j].gender = labr[j+1].gender;
                                                     labr[j+1].gender = cgender;

                                                    for(k=0;k<10;k++)
                                                 {
                                                     cnation[k] = labr[j].nation[k];
                                                     labr[j].nation[k] = labr[j+1].nation[k];
                                                     labr[j+1].nation[k] = cnation[k];
                                                 }

                                                     cheight  = labr[j].height;
                                                     labr[j].height = labr[j+1].height;
                                                     labr[j+1].height = cheight;

                                           }
                                     }
                              }
                          sizee=imagesize(0,40,640,380);
                          buf=malloc(sizee);
                          getimage(0,40,640,380,buf);
                          setcolor(16);
                          bar(0,0,640,480);
                          //knopki snizu
                          setcolor(0);
                          line(0,380,640,380);
                          knopki(10,410,165,440,"Open",0);
                          knopki(165,410,320,440,"Save",0);
                          knopki(320,410,475,440,"Sort",0);
                          knopki(475,410,630,440,"Exit",0);
                          yacheyki();
                          i=0;
                          y=40;
                          char arrg[2];
                          char arra[3];
                          char arrh[4];

     for(i=0;i< 9;i++)
     {
        outtextxy(5,y,labr[i].name);
        sprintf(S1,"%c",labr[i].gender);
        outtextxy(190,y,S1);
        sprintf(S1,"%d",labr[i].age);
        outtextxy(290,y,S1);
        outtextxy(420,y,labr[i].nation);
        sprintf(S1,"%.2f",labr[i].height);
        outtextxy(520,y,S1);
        y+=40;
    }
                     }

                 } while (ch !='e');
                putimage(0,40,buf,COPY_PUT);
                 free(buf);


              }
           } while (ch != 'e');
          }
      } while (ch != 'e');
}

void  sort_age_ascending()
{
    void *buf;
    unsigned sizee;
    int y=40;
    int x=5;
    int i;
    char S1[50];
    char cname[20];

    int cage;
    char cgender;
    char cnation[10];
    float cheight;
    int k=0;

   //  read_from_file();
    struct dav labr[9];
        FILE *file;
        file = fopen("11.txt","r");
        fscanf(file,"%s %c %d %s %f",labr[i].name,&labr[i].gender,&labr[i].age,labr[i].nation,&labr[i].height);
           for (i=0;i<9-1;i++)
                    {
                        for(int j = 1; j <9-i-1; j++)
                                {
                                    if ( labr[j].age > labr[j+1].age)
                                        {
                                            for(k=0;k<20;k++)
                                                {
                                                     cname[k] = labr[j].name[k];
                                                     labr[j].name[k] = labr[j+1].name[k];
                                                     labr[j+1].name[k] = cname[k];
                                                 }

                                                     cage = labr[j].age;
                                                     labr[j].age = labr[j+1].age;
                                                     labr[j+1].age = cage;

                                                     cgender = labr[j].gender;
                                                     labr[j].gender = labr[j+1].gender;
                                                     labr[j+1].gender = cgender;

                                                    for(k=0;k<10;k++)
                                                 {
                                                     cnation[k] = labr[j].nation[k];
                                                     labr[j].nation[k] = labr[j+1].nation[k];
                                                     labr[j+1].nation[k] = cnation[k];
                                                 }

                                                     cheight  = labr[j].height;
                                                     labr[j].height = labr[j+1].height;
                                                     labr[j+1].height = cheight;

                                           }
                                     }
                              }
                          sizee=imagesize(0,40,640,380);
                          buf=malloc(sizee);
                          getimage(0,40,640,380,buf);
                          setcolor(15);
                          bar(0,0,640,480);
                          //knopki snizu
                          setcolor(0);
                          line(0,380,640,380);
                          knopki(10,410,165,440,"Open",0);
                          knopki(165,410,320,440,"Save",0);
                          knopki(320,410,475,440,"Sort",0);
                          knopki(475,410,630,440,"Exit",0);
                          yacheyki();
                          i=0;
                          y=40;
                          char arrg[2];
                          char arra[3];
                          char arrh[4];

     for(i=0;i< 9;i++)
     {
        outtextxy(5,y,labr[i].name);
        sprintf(S1,"%c",labr[i].gender);
        outtextxy(190,y,S1);
        sprintf(S1,"%d",labr[i].age);
        outtextxy(290,y,S1);
        outtextxy(420,y,labr[i].nation);
        sprintf(S1,"%.2f",labr[i].height);
        outtextxy(520,y,S1);
        y+=40;
    }

}

void read_from_file()
{
        struct dav labr[9];
        FILE *file;
        file = fopen("11.txt","r");
        int i=0, y = 40;
        char S1[50];
 while((fscanf(file,"%s %c %d %s %f",labr[i].name,&labr[i].gender,&labr[i].age,labr[i].nation,&labr[i].height))!=EOF)
     {
        sprintf(S1,"%s",labr[i].name);
        outtextxy(5,y,S1);

        sprintf(S1,"%c",labr[i].gender);
        outtextxy(190,y,S1);

        sprintf(S1,"%d",labr[i].age);
        outtextxy(290,y,S1);

        sprintf(S1,"%s",labr[i].nation);
        outtextxy(420,y,S1);

        sprintf(S1,"%.2f",labr[i].height);
        outtextxy(520,y,S1);

        i++;
        y+=40;

       }

}



void open(){


      knopki (10,370,170,400,"Original file",0);
      knopki (10,330,170,360,"Text file",0);
      knopki (10,290,170,320,"Random access file",0);


}

void save(){


      knopki (165,370,325,400,"Text file",0);
      knopki (165,330,325,360,"Random accesss file",0);


}

void sort(){

      knopki (320,370,480,400,"Name",0);
      knopki (320,330,480,360,"Gender",0);
      knopki (320,290,480,320,"Age",0);
      knopki (320,250,480,280,"Nation",0);
      knopki (320,210,480,240,"Height",0);



}

void knopki(int x1,int y1,int x2,int y2,char* text, int color){
     setcolor(15);
      bar(x1,y1,x2,y2);
      setcolor(color);
      rectangle(x1,y1,x2,y2);
      setcolor(0);
      setbkcolor(15);
      outtextxy(x1+18,y1+5, text);


}

void yacheyki(){

     int j;
     int i;
     line(0,0,0,380);
     line(639,0,639,380);

        for(i=0;i<400;i=i+38){
          line (0,0+i,640,0+i);
     }
     for(j=0;j<639;j=j+128){
          line(0+j,0,0+j,380);
     }

     outtextxy(20,20,"Name");
     outtextxy(148,20,"Gender");
     outtextxy(276,20,"Age");
     outtextxy(404,20,"Nation");
     outtextxy(525,20,"Height");


}




