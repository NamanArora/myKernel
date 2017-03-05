void kmain()
{
    char *str="hello world!";
    char *vidptr=(char) 0xb8000;

    unsigned int i =0;
    unsigned int j =0;

    while(i < 80*25*2){
        vidptr[i]=' ';
        vidptr[i+1]= 0x07;
        i+=2;
    }

    i=0;

    while(str[j]!='\0'){
        vidptr[i] = str[j];
        vidptr[i+1]=0x07;
        i+=2;
        j++;
    }

}
