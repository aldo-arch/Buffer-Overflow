int main()
{
        while(1)
        {
                void *m = malloc(1024*1024);
		/*malloc->specifikon nje bllok te memories per nje numer te specifikuar te byteve*/
                memset(m,0,1024*1024);
		/*Parametrat (memset)
		  m->pointeri ne lidhje me bllokun e memories qe do te mbushet
		  0->vlera qe do te vendoset
	   	  1024*1024->numri i byteve qe do t'i vendosen vleres*/
        }
        return 0;
}

