#include<stdio.h>
#include<time.h>
#include<windows.h>

//�C��w�q 
#define NONE         "\033[m"
#define RED          "\033[0;32;31m"
#define LIGHT_RED    "\033[1;31m"
#define GREEN        "\033[0;32;32m"
#define LIGHT_GREEN  "\033[1;32m"
#define BLUE         "\033[0;32;34m"
#define LIGHT_BLUE   "\033[1;34m"
#define DARY_GRAY    "\033[1;30m"
#define CYAN         "\033[0;36m"
#define LIGHT_CYAN   "\033[1;36m"
#define PURPLE       "\033[0;35m"
#define LIGHT_PURPLE "\033[1;35m"
#define BROWN        "\033[0;33m"
#define YELLOW       "\033[1;33m"
#define LIGHT_GRAY   "\033[0;37m"
#define WHITE        "\033[1;37m"
void Battle_options();
void story_1();
void story_2();
void skill();


int HP, MP,ATK, DEF, LUK,money;
int Lv=1;
int TS_Lv; //���żȦs�ܼ�(�ɵ��ť� 
int EXP=0; //�g��� 
char protagonist[10];
char skill_01[10];//�e���B�� 
char skill_02[10];//������� 
int  choose_skill;
int main()
{
int rand_word;//���Ǫ������ɲ����H������ 
int choose;
int rand_proba; //�ޯ�o�ʮɪ����v 
 


//�����O�� 
system("cls");
printf("�� ������������������������������������������������������������������������\n");
printf("��                                    ��\n");
printf("��                                    ��\n");	
printf("��                                    ��\n");
printf(RED"              �Q�n�W�r�ɷ|���              \n");
printf(WHITE"��                                    ��\n");
printf("��                                    ��\n");
printf("��                                    ��\n");
printf("��                                    ��\n");
printf("���� ����������������������������������������������������������������������\n\n\n");



printf("�C������:\n");
printf("1.�����O-���m�O=��ڶˮ`��\n");
printf("3.��l�����O�ȬҬ��H��\n");
printf("2.���C���̫ᦳ��ߡA�����O�f�r�A��ߪA��\n\n\n");

printf(YELLOW"����ڭ̧Y�N�}�l�ݩ�ڭ̪��ȵ{�o\n\n\n\n");


printf(WHITE"�z���W�r�O:%s",protagonist);//�D���W�r 
scanf("%s",protagonist);



printf("--------�C�����b��l��----------\n\n\n\n\n\n");

//sleep(3);


story_1();
//sleep(1);
story_2();



//sleep(1);

//��l�����O�� 
srand(time(0));  
HP=1000;    //rand()%(50-100)+50;
MP=1000;   //rand()%(30-50)+30;
ATK=20;   //rand()%(5-10)+5;
DEF=20;   //rand()%10;
LUK=10;    //rand()%(2-10)+2; 
money=15000;   //rand()%(500-1000)+500;
//sleep(1);
 
printf("�z�������O�ȬO:\n");
printf("����(Lv):%d\n",Lv);
printf("��q(HP):%d\n",HP); 
printf("�]�O(MP):%d\n",MP);
printf("����(ATK):%d\n",ATK); 
printf("���m(DEF):%d\n",DEF); 
printf("���B(LUK):%d\n",LUK);
printf("����(money):%d\n",money);
int HP2=HP;
//sleep(1);
//---------------------------------------------------------------�Ǫ��԰��� 
int Slimehp=50;	
int Slimeatk=5; //�v�ܩi�ƭ� 
int Slimedef=2;
int end=1;//�p�G�񨫩Ǫ� end=0 



printf("\n\n\n\n\n%4s�D�J�F�@���Ǫ�\n\n\n\n",protagonist);
printf("               �C     \n");
printf("             �EII�E\n");
printf("          �E�o�O��\n");
printf("          �E���X���Ĥ@�E\n");
printf("     �E���Ǫ��L���W�r�s�E\n");	
printf("     �E���v�ܩi�M��o���v�E\n");
printf("    �E�ܩi ���Q�� ���@�I�ƻ�E\n");
printf("     �E:���U�j�a���n�ۭt�ڡE\n");
printf("     �C�ڦ���  �t  �|�X�{�E\n");
printf("     �E���i�w�������p�E\n");
printf("         �C�C�C�C�C\n\n\n");

printf(RED"��q:50");
printf(PURPLE"\t����:5\t");



printf(WHITE"-----------------------\n\n");	
//sleep(1);
Battle_options(); //�԰��ﶵ 

while(Slimehp>0&&HP>0&&end!=0)
{
printf("%s����ܬO:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("%s���������i�R���v�ܩi�Y���m�ڿ��A�v�ܩi����%d�ˮ`\n",protagonist,ATK);
    		   printf("�v�ܩi����q:%d\n",Slimehp-ATK);
    		   Slimehp-=ATK;
    		   //-----------------------------------------
    		   //sleep(1);
    		   printf(LIGHT_RED"�v�ܩi�������A���W���L�ӡA���p�ޤs�˾�ӨӡA��A�y���F%d�I�ˮ`\n",Slimeatk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   
			   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }
	break;
	
	case 2:    printf("�r��A�A�{�b�S���ޯ�\n"); 
	           printf(LIGHT_RED"�v�ܩi�������A���W���L�ӡA���p�ޤs�˾�ӨӡA��A�y���F%d�I�ˮ`\n",Slimeatk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;
	
	case 3:    printf("�r��A�A�{�b�N�O�a�G�A�S�D��i��\n");
	           printf(LIGHT_RED"�v�ܩi�������A���W���L�ӡA���p�ޤs�˾�ӨӡA��A�y���F%d�I�ˮ`\n",Slimeatk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;

	case 4:    printf("%s�n�ߪ��񨫤F�i�R���v�ܩi�åB�S����o�g��\n\n\n\n\n\n",protagonist);
	           end=0;
	break;
	
	case 5:    printf("�@�̴N�ݧA�A�v�ܩi�n���F��......?\n");
	           printf(LIGHT_RED"�v�ܩi�������A���W���L�ӡA���p�ޤs�˾�ӨӡA��A�y���F%d�I�ˮ`\n",Slimeatk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;
	
	default:   printf("�Э��s��ܡA�u���1-5�A�O�G�N�s�yBUG�A�r��\n");
	break;
	
	
	
	
	

	
	
   }   
}
//------------------------------------------------------------------------------�Ĥ@����
int store_choose;
int Ts_choose;

if(end==0) //�p�G�S�����v�ܩi 
{

printf("-----------------------------\n");
printf("\n\n\n\n�]��%s�񨫤F�Ǫ��A�ҥH�{�b�S����o�g��P����:\n",protagonist);
} 





else if(Slimehp<=0) //�p�G�����F�v�ܩi 
{ 
EXP=rand()%(100-150*LUK*1/2)+100;
printf("����%s�����F�v�ܩi�A��o�F%d�g���\n",protagonist,EXP);	 //�g��ȥ[�� ���B����*LUK*1/2 
	printf("������o$200\n");
	money+=200;		
	while(EXP>=100)
  { 
	if(EXP>100)
	{
	Lv++;
    EXP-=100; 
	
	printf("Lv up!!!\n");
    }
    else{
    	break;
	}
  } 
}
else if(HP<=0)
  {
  	printf("%s�Q�v�ܩi�禺�F�A�o��²���ٳQ�禺�A�r�񭫷s��");
  	return 0;
  }
     
    TS_Lv=Lv; 
	printf("Lv:%d\n",Lv);
    printf("EXP:%d/100\n\n",EXP);
    
	while(TS_Lv>1)
	 {
	
	if(TS_Lv>1)
	{
		HP+=5;
		MP+=3; 
		ATK+=1;
		DEF+=1;
		TS_Lv-=1;
		
		
	}
	 } 

	
  
printf("-----------------------------\n\n\n\n");



while(Ts_choose!=100)
{  
    Ts_choose=0;
    printf(WHITE"�{�b�A�i�H���:\n");
	printf("1.�d�ݪ��A\n");
    printf("2.�ө�\n");
    printf("3.�ϥιD��\n");
    printf("4.�i��U�@��\n");
  
   printf(WHITE"�ʧ@���:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("�W�r:%s\n",protagonist);
           printf("����:%d\n",Lv);
		   printf("��q:%d\n",HP);
           printf("�]�O:%d\n",MP);
		   printf("����:%d\n",ATK);
           printf("���m:%d\n",DEF);
           printf("���B:%d\n",LUK);
		   printf("����(money):%d\n",money);	
           break;
                      
   case 2:
          printf(YELLOW"\n\n�w��Ө쨹�����p���A�ڬO���p�G�A�����A�аݫȩx�Q�R�ƻ�?\n");
          printf(WHITE"1.��_�į�(�i�^�_10�w��)-----$50\n");
          printf("2.�K�C(���q)[ATK+2]-----$300\n");
          printf(GREEN"3.���L����(�}�n)[DEF+5]-----$700\n\n\n");
		  printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=50)
		  {
		  printf(YELLOW"�z�ʶR�F��_�į�A��q+10\n\n");
		  HP+=10;
		  money=money-50;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=300)
		  {
		  printf(YELLOW"�z�ʶR�F�K�C�A�����O+2\n\n");
		  ATK+=2;
		  money=money-300;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=700)
		  {
		  printf(YELLOW"�z�ʶR�F���L���ҡA���m�O+5\n\n");
		  DEF+=5;
		  money=money-700;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  case 0:break; 
		  
		  default: printf(RED"�ﶵ�u��1.2.3.0�A�Э��s���\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("�A�{�b�S���D��");//�D��t�� �٨S�Q�X�ӫ��g 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
	
 }
}	
printf("---------------------------------------------\n");
int ghost_hp=100;
int ghost_atk=10;
int ghost_def=2;
int TS_EXP;//�g��ȤɯŮɪ��Ȧs�� 
 



printf("\n\n\n\n\n%4s�D�J�F�@���Ǫ�\n\n\n\n",protagonist);


printf("        :i.\n");
printf("       YLr:..\n");
printf("      dv:. .:\n");
printf("      B�� !!�� ]\n");
printf(LIGHT_BLUE"��"WHITE);
printf("      b..r:  :\n");
printf("      r7:..  i\n");
printf("       r:i.  r");
printf(LIGHT_BLUE"��"WHITE);
printf("\n       i:i.  .\n");
printf("      .i.i:  .\n");
printf("      r.:::. ..\n");
printf(LIGHT_BLUE"��"WHITE);
printf("     .7.::..  :");
printf(LIGHT_BLUE"��"WHITE);
printf("\n     v:..::..:v\n");
printf(" :.irii.:. :.i:r\n");
printf("7u:.:: .  .:..::..\n");
printf("  ir:  7 BBP:X7L::J\n");
printf("   .iiBbdBBgv1Pdr\n");
printf("      .r:\n");

printf(RED"��q:100");
printf(PURPLE"\t����:10\t");
printf(BLUE"���m:2\n");


printf(WHITE"-------------------------------------\n");

Battle_options(); //�԰��ﶵ 

end=1;
while(ghost_hp>0&&HP>0&&end!=0)
{

printf("%s����ܬO:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("%s���������i�R��ghost�Y���m�ڿ��Aghost����%d�ˮ`\n",protagonist,ATK-ghost_def);
    		   printf("ghost����q:%d\n",ghost_hp-(ATK-ghost_def));
    		   ghost_hp-=ATK-ghost_def;
    		   //-----------------------------------------
    		   //sleep(1);
    		   printf(LIGHT_RED"ghost��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",ghost_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   
			   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }
	break;
	
	case 2:    printf("�r��A�A�{�b�S���ޯ�\n"); 
	           printf(LIGHT_RED"ghost��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",ghost_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;
	
	case 3:    printf("�r��A�A�{�b�N�O�a�G�A�S�D��i��\n");
	           printf(LIGHT_RED"ghost��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",ghost_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;

	case 4:    printf("%s�n�ߪ��񨫤F���ƪ�ghost�åB�S����o�g��\n\n\n\n\n\n",protagonist);
	           end=0;
	break;
	
	case 5:    printf("�@�̴N�ݧA�Aghost�n���F��......?\n");
	           printf(LIGHT_RED"ghost��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",ghost_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;
	
	default:   printf("�Э��s��ܡA�u���1-5�A�O�G�N�s�yBUG�A�r��\n");
	break;
	
	
	
	
	

	
	
   }
}
    
   
if(end==0) //�p�G�S����ghost 
{

printf("-----------------------------\n");
printf("\n\n\n\n�]��%s�񨫤F�Ǫ��A�ҥH�{�b�S����o�g��P����:\n",protagonist);
} 






else if(ghost_hp<=0) //�p�G�����Fghost
{ 
TS_EXP=rand()%(50-60*LUK*1/2)+100;
printf("����%s�����Fghost�A��o�F%d�g���\n",protagonist,TS_EXP);	 //�g��ȥ[�� ���B����*LUK*1/2 
	printf("������o$400\n");
	money+=400;		
	EXP=EXP+TS_EXP; 
	while(EXP>=100)
  { 
	if(EXP>100)
	{
	Lv++;
    EXP-=100; 
	
	printf("Lv up!!!\n");
    }
    else{
    	break;
	}
  } 
}
else if(HP<=0)
  {
  	printf("�A�Qghost�禺�F�A�o��²���ٳQ�禺�A�r�񭫷s��\n");
  	return 0;
  }
    TS_Lv=Lv; 
	printf("Lv:%d\n",Lv);
    printf("EXP:%d/100\n\n",EXP);
    
	while(TS_Lv>1)
	 {
	
	if(TS_Lv>1)
	{
		HP+=5;
		MP+=3;
		ATK+=1;
		DEF+=1;
		TS_Lv-=1;
		
		
	}
	 } 

	
  
printf("-----------------------------\n\n\n\n");


Ts_choose=0;  //��ܼȦs���k0 
while(Ts_choose!=100)
{  

    printf(WHITE"\n\n�{�b�A�i�H���:\n");
	printf("1.�d�ݪ��A\n");
    printf("2.�ө�\n");
    printf("3.�ϥιD��\n");
    printf("4.�i��U�@��\n");
  
   printf(WHITE"�ʧ@���:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("�W�r:%s\n",protagonist);
           printf("����:%d\n",Lv);
		   printf("��q:%d\n",HP);
           printf("�]�O:%d\n",MP);
		   printf("����:%d\n",ATK);
           printf("���m:%d\n",DEF);
           printf("���B:%d\n",LUK);
		   printf("����(money):%d\n",money);
		   if(skill_01[10]==*"�e���B��")
		   {
		   printf(PURPLE"�ޯ�:�e���B��\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"�ޯ�:\n"WHITE);
		     }
           break;
                      
   case 2:
          printf(YELLOW"\n\n�w��Ө쨹�����p���A�ڬO���p�G�A�����A�аݫȩx�Q�R�ƻ�?\n");
          printf(WHITE"1.��_�į�(�i�^�_20�w��)-----$80\n");
          printf("2.������C(���q)[ATK+4]-----$500\n");
          printf(GREEN"3.�~�֭I��(�}�n)[DEF+7]-----$950\n"WHITE);
          printf(PURPLE"4.�ޯ�ѡu�e���B��v(�T�^�X�����ɰj�ײv30%)-----$1500\n\n\n"WHITE);
		  printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=80)
		  {
		  printf(YELLOW"�z�ʶR�F��_���Ĥ��A��q+20\n\n");
		  HP+=20;
		  money=money-80;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=500)
		  {
		  printf(YELLOW"�z�ʶR�F������C�A�����O+4\n\n");
		  ATK+=4;
		  money=money-500;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=950)
		  {
		  printf(YELLOW"�z�ʶR�F�~�֭I�ߡA���m�O+7\n\n");
		  DEF+=7;
		  money=money-950;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  case 4:
		  if(money>=1500)
		  {
		  printf(YELLOW"�z�ǲߤF�e���B��\n\n");
		  skill_01[10]=*"�e���B��";
		  money=money-1500;
		  break;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  
		  
		  case 0:break; 
		  
		  default: printf(RED"�ﶵ�u��1.2.3.0�A�Э��s���\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("�A�{�b�S���D��");//�D��t�� �٨S�Q�X�ӫ��g 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
  }
}

printf("------------------------------\n\n\n\n\n");
int monky_hp=250;
int monky_atk=15;
int monky_def=7; 




printf("%s�D�J�F�@���Ǫ�\n\n\n",protagonist);
printf("            .::...\n");
printf("          .:::...ir.\n");
printf("       i:..��   �� .:.i.\n");
printf("        .i..       ..:\n");
printf("        .:.   v       ..\n");
printf("       .::ii .  ...: :.\n");
printf(".    ri.vr:.:j:.Ui .iu:iL\n");
printf("    .1r .r.:.     .:i  :u:\n");
printf("   7Uir.7QBBY....iQRY..ivi7\n");
printf("  .gYiJY:sgBBBgRQBQBd. :.7dr\n");
printf("    XZ7     :rSULr. :UE:.J:\n");
printf("    K:                 .:U.\n\n");
printf(RED"��q:250");
printf(PURPLE"\t����:15\t");
printf(BLUE"\t���m:7\n"WHITE); 




end=1;
while(monky_hp>0&&HP>0&&end!=0)
{
Battle_options();
printf("%s����ܬO:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("\n%s���������i�R�����U�Y���m�ڿ��A���U����%d�ˮ`\n",protagonist,ATK-monky_def);
    		   printf("���U����q:%d\n",monky_hp-(ATK-monky_def));
    		   monky_hp-=ATK-monky_def;
    		   //-----------------------------------------
    		   //sleep(1);
    		   rand_word=rand()%3+1;
			   switch(rand_word)
			   {
			   
			    case 1:printf(LIGHT_RED"\n���U�ϥγ��j�o�ʳ��îg�A���A����V�g�L�h�A���A�������O���A���U�W�[�F�@�I�����O�A��A�y���F%d�I�ˮ`\n\n"WHITE,monky_atk-DEF);
			    monky_atk+=1;
				break;
			   
			    case 2:printf(RED"\n���U���e�����A��_���l���A���W��h�A��A�y���F%d�I�ˮ`\n\n"WHITE,monky_atk-DEF);
			    break;
			   
			   
			    case 3:printf(BLUE"\n���U�o�ʤF����@�ҡA���ۨ��K���F���A���m�O+1\n\n"WHITE);
			    monky_def+=1;
			    break;
		      }
			   
			   printf(WHITE"%s����q:%d\n",protagonist,HP-(monky_atk-DEF));
    		   
			   if(monky_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(monky_atk-DEF);   
	           }
 	break;
 	
 	case 2:    skill(); 
 	           scanf("%d",&choose_skill);
	           rand_proba=rand()%(1-10)+1;
	            switch(choose_skill)
				{
				case 1:
				    if(skill_01[10]==*"�e���B��"&&MP>10)
				   {	
				    MP-=10;
					if(rand_proba>=1&&rand_proba<=3)
					{
					 printf(YELLOW"���U���e�����A��_���l���A���W��h�A���O�A�o�ʯe���B��{�L�F\n\n\n\n"WHITE);
					 printf("%s�{�L����Τ⤤���Z�������U���W�����A���U����%d�ˮ`\n\n",protagonist,ATK-monky_def);
					  printf("���U����q:%d\n",monky_hp-(ATK-monky_def));
    		          monky_hp-=ATK-monky_def;
					} 
				    else
				    {
				     printf(LIGHT_RED"�e���B��S�m�n�A�����a�L�F�@���A���U���e�����A��_���l���A���W��h�A��A�y���F%d�I�ˮ`\n"WHITE,monky_atk-DEF);
    		         printf("%s����q:%d\n",protagonist,HP-(monky_atk-DEF));
    		         printf("%s�Ϥ�V���U�o�ʧ����A���U����%d�I�ˮ`\n",protagonist,ATK-monky_def);
    		         monky_hp=monky_hp-(ATK-monky_def);
					 printf("���U����q:%d\n",monky_hp);
    		         if(monky_atk-DEF<0)
				     {
					 
			          HP=HP-0;
		             }
		              else
					  {			   
			          HP-=(monky_atk-DEF);   
	                  }    
				    }	
				   }
				 break;
				 default:printf("�п�ܧޯ�\n\n");
				         
	            } 
 	             break;
 	
 	case 3:    printf("�r��A�A�{�b�N�O�a�G�A�S�D��i��\n");
	           printf(LIGHT_RED"���U��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",monky_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(monky_atk-DEF));
    		   if(monky_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(monky_atk-DEF);   
	           }   
 	break;
 
 	case 4:    printf("%s�n�ߪ��񨫤F�i�R�����U�åB�S����o�g��\n\n\n\n\n\n",protagonist);
	           end=0;
 	break;
   	
 	case 5:    printf("�@�̴N�ݧA�A���U�n���F��......?\n");
	           printf(LIGHT_RED"���U��M�{��A������A��_���`���I�A���A������d�F�U�h�A��A�y���F%d�I�ˮ`\n",monky_atk-DEF);
    		   printf(WHITE"%s����q:%d\n",protagonist,HP-(monky_atk-DEF));
    		   if(monky_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(monky_atk-DEF);   
	           }   
 	break;
     	
 	default:   printf("�Э��s��ܡA�u���1-5�A�O�G�N�s�yBUG�A�r��\n");
 	break;		
   }
}
     
if(end==0) //�p�G�S����ghost 
{

printf("-----------------------------\n");
printf("\n\n\n\n�]��%s�񨫤F�Ǫ��A�ҥH�{�b�S����o�g��P����:\n",protagonist);
} 






else if(monky_hp<=0) //�p�G�����Fghost
{ 
TS_EXP=rand()%(50-60*LUK*1/2)+100;
printf("����%s�����F���U�A��o�F%d�g���\n",protagonist,TS_EXP);	 //�g��ȥ[�� ���B����*LUK*1/2 
	printf("������o$400\n");
	money+=600;		
	EXP=EXP+TS_EXP; 
	while(EXP>=100)
  { 
	if(EXP>100)
	{
	Lv++;
    EXP-=100; 
	
	printf("Lv up!!!\n");
    }
    else{
    	break;
	}
  } 
}
else if(HP<=0)
  {
  	printf("�A�Q���U�禺�F�A�A�{�b���������A���������������A�o��²���ٳQ�禺�A�r�񭫷s��\n");
  	return 0;
  }
    TS_Lv=Lv; 
	printf("Lv:%d\n",Lv);
    printf("EXP:%d/100\n\n",EXP);
    
	while(TS_Lv>1)
	 {
	
	if(TS_Lv>1)
	{
		HP+=5;
		MP+=3;
		ATK+=1;
		DEF+=1;
		TS_Lv-=1;
		
		
	}
	 } 

	
  
printf("-----------------------------\n\n\n\n");


Ts_choose=0;  //��ܼȦs���k0 
while(Ts_choose!=100)
{  

    printf(WHITE"\n\n�{�b�A�i�H���:\n");
	printf("1.�d�ݪ��A\n");
    printf("2.�ө�\n");
    printf("3.�ϥιD��\n");
    printf("4.�i��U�@��\n");
  
   printf(WHITE"�ʧ@���:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("�W�r:%s\n",protagonist);
           printf("����:%d\n",Lv);
		   printf("��q:%d\n",HP);
           printf("�]�O:%d\n",MP);
		   printf("����:%d\n",ATK);
           printf("���m:%d\n",DEF);
           printf("���B:%d\n",LUK);
		   printf("����(money):%d\n",money);
		   if(skill_01[10]==*"�e���B��")
		   {
		   printf(PURPLE"�ޯ�:�e���B��\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"�ޯ�:\n"WHITE);
		     }
		     if(skill_02[10]==*"�������")
		   {
		   printf(PURPLE"�ޯ�:�������\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"�ޯ�:\n"WHITE);
		     }
           break;
                      
   case 2:
          printf(YELLOW"\n\n�w��Ө쨹�����p���A�ڬO���p�G�A�����A�аݫȩx�Q�R�ƻ�?\n");
          printf(WHITE"1.��_���Ĥ�(�i�^�_20�w��)-----$80\n");
          printf("2.�C�P�C(���q)[ATK+6]-----$700\n");
          printf(GREEN"3.���ݧ��J(�}�n)[DEF+9]-----$1300\n"WHITE);
          printf(PURPLE"4.�ޯ�ѡu��������v(�Q�ʧޯ�A�p�G�ͩR�ȧC��40�A�T�^�X�������O+5)-----$3000\n\n\n"WHITE);
		  printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"�ʶR���(0�O�h�X�ө�):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=80)
		  {
		  printf(YELLOW"�z�ʶR�F��_���Ĥ��A��q+20\n\n");
		  HP+=20;
		  money=money-80;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=700)
		  {
		  printf(YELLOW"�z�ʶR�F�C�P�C�A�����O+6\n\n");
		  ATK+=6;
		  money=money-700;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=1300)
		  {
		  printf(YELLOW"�z�ʶR�F���ݧ��J�A���m�O+9\n\n");
		  DEF+=9;
		  money=money-1300;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  case 4:
		  if(money>=3000)
		  {
		  printf(YELLOW"�z�ǲߤF�������\n\n");
		  skill_02[10]=*"�������";
		  money=money-3000;
		  break;
	      } 
	      else{
	      	printf(RED"���B�����A%s�ѤU%d��\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  
		  
		  case 0:break; 
		  
		  default: printf(RED"�ﶵ�u��1.2.3.0�A�Э��s���\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("�A�{�b�S���D��");//�D��t�� �٨S�Q�X�ӫ��g 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
  }
}










}

void Battle_options() //�԰��ﶵ 
{ 
printf("�{�b�A�i�H:\n");
printf("1.���q����\n");
printf("2.�ޯ����\n");
printf("3.�ϥιD��\n");
printf("4.�񨫥L(�k�])\n");
printf("5.���L\n\n\n\n");	
}

void story_1()
{
printf(WHITE"�S�O�@�ӳ��B�ѡA���I�����N�ŷx�������`�I�A�d�s��@�����A�ߦ��H�N�P�z�M......\n");
printf("���ӪL�ߪ��������A���H���b���B�A�����۫��������n�A���H�Q�}�󯶤p����椧���A\n");	
printf("���F�U�@�\\�q�q���i�פ�A�禳�H��mİ���l�Y�b�𨤡A�ߤ������F��M�P����......\n");	
printf("���j�������A�ʼˤH�B�ʺش��B�ʼ˱��B�ʺةR�A�c�إX�F�@�Ƥ������n���A�W���u�{��v��ø���C\n");	
printf("----------------\n");	
printf("����H�o�Ӧa��n���ǩǪ��K���@�W�k�l�J�Ӧa�n�ۿù��A�@���_�Ǫ��b�اl�ޤF�L���`�N�O�C\n");	
printf("���o����������D�A�ڱo��g�z���i�~��C�������A�L���_�F��b�@�Ǫ��W�P�A�O�b�ۤv���ݤf�W�C\n");					
printf("�W�P�W�g��");
printf(CYAN"[ %s ]"WHITE,protagonist);
printf("�X�Ӥj�r�A���K�O�L���W�r�C\n\n\n\n\n");
}
void story_2()
{

printf("%s�V�F�V���C\n",protagonist);
printf("���жi�C���g�z��U�F���䪺��ơA�ݦV�F�i�Ӫ��H�G��������ƶܡH��\n");
printf("���O�o�˪��A�ڭ��d�㪺�ɭԡK�K��\n");
printf("��%s����d��ɡA�g�z�������{�{�F�@�U�A�H��%s�~�򻡤U�h�A�g�z�������V�o�B�N�C\n",protagonist,protagonist);
printf("�����D�F�A�o��Ƨڷ|�V�W�J�����A�A���^�h�a�C���g�z���⾮�����I�F�I�Y\n");
printf("�A�S�ϩ��Q�_�Ӥ���@��G���o��Ƥ��\\�M�L�H���_�A�H�K������D�A���D�ܡH��\n");
printf("%s���Ī����F�U�ӡA�������O�ɩx�o�]���e���C\n",protagonist);
printf("�M�ӷ�L�^��y��W�A�@�q�q�ܵL�������H�F�L���۷Q�C\n");
printf("�y�o�̬O�H�Ƴ��A�аݬO%s�ܡH�z\n",protagonist);
printf("�y�O���A�аݦ�����ơK�z\n");
printf("�y�A���Ѥ��ΨӤW�Z�F�C�z\n");
printf("%s�٨S�ӱo�Τ����A�q�ܴN���_�F�C\n",protagonist);
printf("���ɸg�z��n�q�L���e���L�A�y�W�a�۱o�N�����e�A�׿g�F%s�@��\n",protagonist);
printf("�A%s�����٤����D�o�ͤF����ơC",protagonist);
printf("���A�I\n\n\n");
printf(RED"�i���ɳ����Y��A�^�Ш즹�����j\n"WHITE);
printf("-----------------------------------\n\n\n\n\n");
} 


void skill()
{
	
	
	if(skill_01[10]==*"�e���B��")
	{
	printf(PURPLE"1.�e���B��(MP-10)\n\n\n"WHITE);
	
	} 
	else if(skill_02[10]==*"�������")
	 {
	  printf(PURPLE"2.�������\n\n\n"WHITE);
	 }  
	else
	    {
        printf("�r��A�A�{�b�S���ޯ�\n\n\n"); 
	    }
	
	
	
	printf("��ܧޯ�:");
	
	
	
	
	
	
	
	
}

/*printf("%4s\n",protagonist);
printf("��q:%d\n",HP);
printf("����:%d\n,ATK);
printf("���m:%d\n",DEF);
printf("���B:%d\n",LUK);*/	



















