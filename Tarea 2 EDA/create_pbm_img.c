void create_pbm_img(int arreglo[] , char * name){
    
    FILE *disc_img = fopen(name,"w");
    fprintf(disc_img,"P1\n");
    fprintf(disc_img,"1920 1080\n");
    int i,c = 0;
    for(i = 0; i <resolution ;i++){
        int zero_one = arreglo[i]%2;
        fprintf(disc_img,"%d ",zero_one);
        c++;
        if(c == 1920){
            fprintf(disc_img,"\n");
            c = 0;
        }
    }
    fclose(disc_img);
}