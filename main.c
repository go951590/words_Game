#include<stdio.h>
#include<time.h>
#include<windows.h>

//顏色定義 
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
int TS_Lv; //等級暫存變數(升等級用 
int EXP=0; //經驗值 
char protagonist[10];
char skill_01[10];//疾風步伐 
char skill_02[10];//憤怒反擊 
int  choose_skill;
int main()
{
int rand_word;//讓怪物攻擊時產生隨機說話 
int choose;
int rand_proba; //技能發動時的機率 
 


//角色能力值 
system("cls");
printf("╔ ═══════════════════════════════════╗\n");
printf("║                                    ║\n");
printf("║                                    ║\n");	
printf("║                                    ║\n");
printf(RED"              想好名字時會更改              \n");
printf(WHITE"║                                    ║\n");
printf("║                                    ║\n");
printf("║                                    ║\n");
printf("║                                    ║\n");
printf("╚═ ══════════════════════════════════╝\n\n\n");



printf("遊戲須知:\n");
printf("1.攻擊力-防禦力=實際傷害值\n");
printf("3.初始角色能力值皆為隨機\n");
printf("2.此遊戲最後有驚喜，但不是病毒，放心服用\n\n\n");

printf(YELLOW"那麼我們即將開始屬於我們的旅程囉\n\n\n\n");


printf(WHITE"您的名字是:%s",protagonist);//主角名字 
scanf("%s",protagonist);



printf("--------遊戲正在初始化----------\n\n\n\n\n\n");

//sleep(3);


story_1();
//sleep(1);
story_2();



//sleep(1);

//初始角色能力值 
srand(time(0));  
HP=1000;    //rand()%(50-100)+50;
MP=1000;   //rand()%(30-50)+30;
ATK=20;   //rand()%(5-10)+5;
DEF=20;   //rand()%10;
LUK=10;    //rand()%(2-10)+2; 
money=15000;   //rand()%(500-1000)+500;
//sleep(1);
 
printf("您的角色能力值是:\n");
printf("等級(Lv):%d\n",Lv);
printf("血量(HP):%d\n",HP); 
printf("魔力(MP):%d\n",MP);
printf("攻擊(ATK):%d\n",ATK); 
printf("防禦(DEF):%d\n",DEF); 
printf("幸運(LUK):%d\n",LUK);
printf("金錢(money):%d\n",money);
int HP2=HP;
//sleep(1);
//---------------------------------------------------------------怪物戰鬥區 
int Slimehp=50;	
int Slimeatk=5; //史萊姆數值 
int Slimedef=2;
int end=1;//如果放走怪物 end=0 



printf("\n\n\n\n\n%4s遭遇了一隻怪物\n\n\n\n",protagonist);
printf("               。     \n");
printf("             ‧II‧\n");
printf("          ‧這是我\n");
printf("          ‧做出的第一‧\n");
printf("     ‧隻怪物他的名字叫‧\n");	
printf("     ‧做史萊姆然後這隻史‧\n");
printf("    ‧萊姆 ●想說 ●一點甚麼‧\n");
printf("     ‧:拜託大家不要欺負我‧\n");
printf("     。我死後  ﹀  會出現‧\n");
printf("     ‧不可預期的情況‧\n");
printf("         。。。。。\n\n\n");

printf(RED"血量:50");
printf(PURPLE"\t攻擊:5\t");



printf(WHITE"-----------------------\n\n");	
//sleep(1);
Battle_options(); //戰鬥選項 

while(Slimehp>0&&HP>0&&end!=0)
{
printf("%s的選擇是:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("%s狠狠的往可愛的史萊姆頭殼洨巴蕊，史萊姆受到%d傷害\n",protagonist,ATK);
    		   printf("史萊姆的血量:%d\n",Slimehp-ATK);
    		   Slimehp-=ATK;
    		   //-----------------------------------------
    		   //sleep(1);
    		   printf(LIGHT_RED"史萊姆重重往你身上壓過來，有如拔山倒樹而來，對你造成了%d點傷害\n",Slimeatk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   
			   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }
	break;
	
	case 2:    printf("逗比，你現在沒有技能\n"); 
	           printf(LIGHT_RED"史萊姆重重往你身上壓過來，有如拔山倒樹而來，對你造成了%d點傷害\n",Slimeatk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;
	
	case 3:    printf("逗比，你現在就是窮逼，沒道具可用\n");
	           printf(LIGHT_RED"史萊姆重重往你身上壓過來，有如拔山倒樹而來，對你造成了%d點傷害\n",Slimeatk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;

	case 4:    printf("%s好心的放走了可愛的史萊姆並且沒有獲得經驗\n\n\n\n\n\n",protagonist);
	           end=0;
	break;
	
	case 5:    printf("作者就問你，史萊姆要錢幹嘛......?\n");
	           printf(LIGHT_RED"史萊姆重重往你身上壓過來，有如拔山倒樹而來，對你造成了%d點傷害\n",Slimeatk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(Slimeatk-DEF));
    		   if(Slimeatk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(Slimeatk-DEF);   
	           }   
	break;
	
	default:   printf("請重新選擇，只能選1-5，別故意製造BUG，逗比\n");
	break;
	
	
	
	
	

	
	
   }   
}
//------------------------------------------------------------------------------第一次休息
int store_choose;
int Ts_choose;

if(end==0) //如果沒殺死史萊姆 
{

printf("-----------------------------\n");
printf("\n\n\n\n因此%s放走了怪物，所以現在沒有獲得經驗與金幣:\n",protagonist);
} 





else if(Slimehp<=0) //如果殺死了史萊姆 
{ 
EXP=rand()%(100-150*LUK*1/2)+100;
printf("恭喜%s殺死了史萊姆，獲得了%d經驗值\n",protagonist,EXP);	 //經驗值加成 幸運公式*LUK*1/2 
	printf("恭喜獲得$200\n");
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
  	printf("%s被史萊姆拍死了，這麼簡單還被拍死，逗比重新玩");
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
    printf(WHITE"現在你可以選擇:\n");
	printf("1.查看狀態\n");
    printf("2.商店\n");
    printf("3.使用道具\n");
    printf("4.進行下一關\n");
  
   printf(WHITE"動作選擇:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("名字:%s\n",protagonist);
           printf("等級:%d\n",Lv);
		   printf("血量:%d\n",HP);
           printf("魔力:%d\n",MP);
		   printf("攻擊:%d\n",ATK);
           printf("防禦:%d\n",DEF);
           printf("幸運:%d\n",LUK);
		   printf("金錢(money):%d\n",money);	
           break;
                      
   case 2:
          printf(YELLOW"\n\n歡迎來到邦邦的小店，我是店小二，邦邦，請問客官想買甚麼?\n");
          printf(WHITE"1.恢復藥草(可回復10滴血)-----$50\n");
          printf("2.鐵劍(普通)[ATK+2]-----$300\n");
          printf(GREEN"3.民兵盔甲(良好)[DEF+5]-----$700\n\n\n");
		  printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=50)
		  {
		  printf(YELLOW"您購買了恢復藥草，血量+10\n\n");
		  HP+=10;
		  money=money-50;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=300)
		  {
		  printf(YELLOW"您購買了鐵劍，攻擊力+2\n\n");
		  ATK+=2;
		  money=money-300;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=700)
		  {
		  printf(YELLOW"您購買了民兵盔甲，防禦力+5\n\n");
		  DEF+=5;
		  money=money-700;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  case 0:break; 
		  
		  default: printf(RED"選項只有1.2.3.0，請重新選擇\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("你現在沒有道具");//道具系統 還沒想出來怎麼寫 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
	
 }
}	
printf("---------------------------------------------\n");
int ghost_hp=100;
int ghost_atk=10;
int ghost_def=2;
int TS_EXP;//經驗值升級時的暫存器 
 



printf("\n\n\n\n\n%4s遭遇了一隻怪物\n\n\n\n",protagonist);


printf("        :i.\n");
printf("       YLr:..\n");
printf("      dv:. .:\n");
printf("      B⊙ !!⊙ ]\n");
printf(LIGHT_BLUE"火"WHITE);
printf("      b..r:  :\n");
printf("      r7:..  i\n");
printf("       r:i.  r");
printf(LIGHT_BLUE"火"WHITE);
printf("\n       i:i.  .\n");
printf("      .i.i:  .\n");
printf("      r.:::. ..\n");
printf(LIGHT_BLUE"火"WHITE);
printf("     .7.::..  :");
printf(LIGHT_BLUE"火"WHITE);
printf("\n     v:..::..:v\n");
printf(" :.irii.:. :.i:r\n");
printf("7u:.:: .  .:..::..\n");
printf("  ir:  7 BBP:X7L::J\n");
printf("   .iiBbdBBgv1Pdr\n");
printf("      .r:\n");

printf(RED"血量:100");
printf(PURPLE"\t攻擊:10\t");
printf(BLUE"防禦:2\n");


printf(WHITE"-------------------------------------\n");

Battle_options(); //戰鬥選項 

end=1;
while(ghost_hp>0&&HP>0&&end!=0)
{

printf("%s的選擇是:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("%s狠狠的往可愛的ghost頭殼洨巴蕊，ghost受到%d傷害\n",protagonist,ATK-ghost_def);
    		   printf("ghost的血量:%d\n",ghost_hp-(ATK-ghost_def));
    		   ghost_hp-=ATK-ghost_def;
    		   //-----------------------------------------
    		   //sleep(1);
    		   printf(LIGHT_RED"ghost突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",ghost_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   
			   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }
	break;
	
	case 2:    printf("逗比，你現在沒有技能\n"); 
	           printf(LIGHT_RED"ghost突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",ghost_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;
	
	case 3:    printf("逗比，你現在就是窮逼，沒道具可用\n");
	           printf(LIGHT_RED"ghost突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",ghost_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;

	case 4:    printf("%s好心的放走了恐怖的ghost並且沒有獲得經驗\n\n\n\n\n\n",protagonist);
	           end=0;
	break;
	
	case 5:    printf("作者就問你，ghost要錢幹嘛......?\n");
	           printf(LIGHT_RED"ghost突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",ghost_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(ghost_atk-DEF));
    		   if(ghost_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(ghost_atk-DEF);   
	           }   
	break;
	
	default:   printf("請重新選擇，只能選1-5，別故意製造BUG，逗比\n");
	break;
	
	
	
	
	

	
	
   }
}
    
   
if(end==0) //如果沒殺死ghost 
{

printf("-----------------------------\n");
printf("\n\n\n\n因此%s放走了怪物，所以現在沒有獲得經驗與金幣:\n",protagonist);
} 






else if(ghost_hp<=0) //如果殺死了ghost
{ 
TS_EXP=rand()%(50-60*LUK*1/2)+100;
printf("恭喜%s殺死了ghost，獲得了%d經驗值\n",protagonist,TS_EXP);	 //經驗值加成 幸運公式*LUK*1/2 
	printf("恭喜獲得$400\n");
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
  	printf("你被ghost拍死了，這麼簡單還被拍死，逗比重新玩\n");
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


Ts_choose=0;  //選擇暫存器歸0 
while(Ts_choose!=100)
{  

    printf(WHITE"\n\n現在你可以選擇:\n");
	printf("1.查看狀態\n");
    printf("2.商店\n");
    printf("3.使用道具\n");
    printf("4.進行下一關\n");
  
   printf(WHITE"動作選擇:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("名字:%s\n",protagonist);
           printf("等級:%d\n",Lv);
		   printf("血量:%d\n",HP);
           printf("魔力:%d\n",MP);
		   printf("攻擊:%d\n",ATK);
           printf("防禦:%d\n",DEF);
           printf("幸運:%d\n",LUK);
		   printf("金錢(money):%d\n",money);
		   if(skill_01[10]==*"疾風步伐")
		   {
		   printf(PURPLE"技能:疾風步伐\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"技能:\n"WHITE);
		     }
           break;
                      
   case 2:
          printf(YELLOW"\n\n歡迎來到邦邦的小店，我是店小二，邦邦，請問客官想買甚麼?\n");
          printf(WHITE"1.恢復藥草(可回復20滴血)-----$80\n");
          printf("2.精鋼長劍(普通)[ATK+4]-----$500\n");
          printf(GREEN"3.獸皮背心(良好)[DEF+7]-----$950\n"WHITE);
          printf(PURPLE"4.技能書「疾風步伐」(三回合內提升迴避率30%)-----$1500\n\n\n"WHITE);
		  printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=80)
		  {
		  printf(YELLOW"您購買了恢復紅藥水，血量+20\n\n");
		  HP+=20;
		  money=money-80;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=500)
		  {
		  printf(YELLOW"您購買了精鋼長劍，攻擊力+4\n\n");
		  ATK+=4;
		  money=money-500;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=950)
		  {
		  printf(YELLOW"您購買了獸皮背心，防禦力+7\n\n");
		  DEF+=7;
		  money=money-950;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  case 4:
		  if(money>=1500)
		  {
		  printf(YELLOW"您學習了疾風步伐\n\n");
		  skill_01[10]=*"疾風步伐";
		  money=money-1500;
		  break;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  
		  
		  case 0:break; 
		  
		  default: printf(RED"選項只有1.2.3.0，請重新選擇\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("你現在沒有道具");//道具系統 還沒想出來怎麼寫 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
  }
}

printf("------------------------------\n\n\n\n\n");
int monky_hp=250;
int monky_atk=15;
int monky_def=7; 




printf("%s遭遇了一隻怪物\n\n\n",protagonist);
printf("            .::...\n");
printf("          .:::...ir.\n");
printf("       i:..●   ● .:.i.\n");
printf("        .i..       ..:\n");
printf("        .:.   v       ..\n");
printf("       .::ii .  ...: :.\n");
printf(".    ri.vr:.:j:.Ui .iu:iL\n");
printf("    .1r .r.:.     .:i  :u:\n");
printf("   7Uir.7QBBY....iQRY..ivi7\n");
printf("  .gYiJY:sgBBBgRQBQBd. :.7dr\n");
printf("    XZ7     :rSULr. :UE:.J:\n");
printf("    K:                 .:U.\n\n");
printf(RED"血量:250");
printf(PURPLE"\t攻擊:15\t");
printf(BLUE"\t防禦:7\n"WHITE); 




end=1;
while(monky_hp>0&&HP>0&&end!=0)
{
Battle_options();
printf("%s的選擇是:",protagonist);
scanf("%d",&choose);



switch(choose)
   {
	case 1:    printf("\n%s狠狠的往可愛的麻糬猴頭殼洨巴蕊，麻糬猴受到%d傷害\n",protagonist,ATK-monky_def);
    		   printf("麻糬猴的血量:%d\n",monky_hp-(ATK-monky_def));
    		   monky_hp-=ATK-monky_def;
    		   //-----------------------------------------
    		   //sleep(1);
    		   rand_word=rand()%3+1;
			   switch(rand_word)
			   {
			   
			    case 1:printf(LIGHT_RED"\n麻糬猴使用麻糬槍發動麻糬亂射，往你的方向射過去，讓你全身都是麻糬，麻糬猴增加了一點攻擊力，對你造成了%d點傷害\n\n"WHITE,monky_atk-DEF);
			    monky_atk+=1;
				break;
			   
			    case 2:printf(RED"\n麻糬猴往前衝擊，抬起爪子往你身上抓去，對你造成了%d點傷害\n\n"WHITE,monky_atk-DEF);
			    break;
			   
			   
			    case 3:printf(BLUE"\n麻糬猴發動了麻糬護甲，讓自身貼滿了麻糬，防禦力+1\n\n"WHITE);
			    monky_def+=1;
			    break;
		      }
			   
			   printf(WHITE"%s的血量:%d\n",protagonist,HP-(monky_atk-DEF));
    		   
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
				    if(skill_01[10]==*"疾風步伐"&&MP>10)
				   {	
				    MP-=10;
					if(rand_proba>=1&&rand_proba<=3)
					{
					 printf(YELLOW"麻糬猴往前衝擊，抬起爪子往你身上抓去，但是你發動疾風步伐閃過了\n\n\n\n"WHITE);
					 printf("%s閃過之後用手中的武器往麻糬猴身上攻擊，麻糬猴受到%d傷害\n\n",protagonist,ATK-monky_def);
					  printf("麻糬猴的血量:%d\n",monky_hp-(ATK-monky_def));
    		          monky_hp-=ATK-monky_def;
					} 
				    else
				    {
				     printf(LIGHT_RED"疾風步伐沒練好，狠狠地摔了一跤，麻糬猴往前衝擊，抬起爪子往你身上抓去，對你造成了%d點傷害\n"WHITE,monky_atk-DEF);
    		         printf("%s的血量:%d\n",protagonist,HP-(monky_atk-DEF));
    		         printf("%s反手向麻糬猴發動攻擊，麻糬猴受到%d點傷害\n",protagonist,ATK-monky_def);
    		         monky_hp=monky_hp-(ATK-monky_def);
					 printf("麻糬猴的血量:%d\n",monky_hp);
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
				 default:printf("請選擇技能\n\n");
				         
	            } 
 	             break;
 	
 	case 3:    printf("逗比，你現在就是窮逼，沒道具可用\n");
	           printf(LIGHT_RED"麻糬猴突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",monky_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(monky_atk-DEF));
    		   if(monky_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(monky_atk-DEF);   
	           }   
 	break;
 
 	case 4:    printf("%s好心的放走了可愛的麻糬猴並且沒有獲得經驗\n\n\n\n\n\n",protagonist);
	           end=0;
 	break;
   	
 	case 5:    printf("作者就問你，麻糬猴要錢幹嘛......?\n");
	           printf(LIGHT_RED"麻糬猴突然閃到你的身後，抬起死亡之鐮，往你的身體削了下去，對你造成了%d點傷害\n",monky_atk-DEF);
    		   printf(WHITE"%s的血量:%d\n",protagonist,HP-(monky_atk-DEF));
    		   if(monky_atk-DEF<0){
			   
			   HP=HP-0;
		       }
		       else{
			   
			   HP-=(monky_atk-DEF);   
	           }   
 	break;
     	
 	default:   printf("請重新選擇，只能選1-5，別故意製造BUG，逗比\n");
 	break;		
   }
}
     
if(end==0) //如果沒殺死ghost 
{

printf("-----------------------------\n");
printf("\n\n\n\n因此%s放走了怪物，所以現在沒有獲得經驗與金幣:\n",protagonist);
} 






else if(monky_hp<=0) //如果殺死了ghost
{ 
TS_EXP=rand()%(50-60*LUK*1/2)+100;
printf("恭喜%s殺死了麻糬猴，獲得了%d經驗值\n",protagonist,TS_EXP);	 //經驗值加成 幸運公式*LUK*1/2 
	printf("恭喜獲得$400\n");
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
  	printf("你被麻糬猴拍死了，你現在全身都麻糬，噁噁噁噁噁噁噁，這麼簡單還被拍死，逗比重新玩\n");
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


Ts_choose=0;  //選擇暫存器歸0 
while(Ts_choose!=100)
{  

    printf(WHITE"\n\n現在你可以選擇:\n");
	printf("1.查看狀態\n");
    printf("2.商店\n");
    printf("3.使用道具\n");
    printf("4.進行下一關\n");
  
   printf(WHITE"動作選擇:");
   scanf("%d",&choose);
switch(choose)
  {
   

   case 1: printf("名字:%s\n",protagonist);
           printf("等級:%d\n",Lv);
		   printf("血量:%d\n",HP);
           printf("魔力:%d\n",MP);
		   printf("攻擊:%d\n",ATK);
           printf("防禦:%d\n",DEF);
           printf("幸運:%d\n",LUK);
		   printf("金錢(money):%d\n",money);
		   if(skill_01[10]==*"疾風步伐")
		   {
		   printf(PURPLE"技能:疾風步伐\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"技能:\n"WHITE);
		     }
		     if(skill_02[10]==*"憤怒反擊")
		   {
		   printf(PURPLE"技能:憤怒反擊\n"WHITE);	
		   }	
		   else
		     {
		    	printf(PURPLE"技能:\n"WHITE);
		     }
           break;
                      
   case 2:
          printf(YELLOW"\n\n歡迎來到邦邦的小店，我是店小二，邦邦，請問客官想買甚麼?\n");
          printf(WHITE"1.恢復紅藥水(可回復20滴血)-----$80\n");
          printf("2.七星劍(普通)[ATK+6]-----$700\n");
          printf(GREEN"3.金屬夾克(良好)[DEF+9]-----$1300\n"WHITE);
          printf(PURPLE"4.技能書「憤怒反擊」(被動技能，如果生命值低於40，三回合內攻擊力+5)-----$3000\n\n\n"WHITE);
		  printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
		  while(store_choose!=0)
             {
		  
          
          printf(WHITE"購買選擇(0是退出商店):");
		  scanf("%d",&store_choose);
          switch(store_choose)
		  {
		  case 1:
		  if(money>=80)
		  {
		  printf(YELLOW"您購買了恢復紅藥水，血量+20\n\n");
		  HP+=20;
		  money=money-80;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  case 2:
		  if(money>=700)
		  {
		  printf(YELLOW"您購買了七星劍，攻擊力+6\n\n");
		  ATK+=6;
		  money=money-700;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
	     
		 }
	       break;
		  
		  
		  case 3:
		  if(money>=1300)
		  {
		  printf(YELLOW"您購買了金屬夾克，防禦力+9\n\n");
		  DEF+=9;
		  money=money-1300;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  case 4:
		  if(money>=3000)
		  {
		  printf(YELLOW"您學習了憤怒反擊\n\n");
		  skill_02[10]=*"憤怒反擊";
		  money=money-3000;
		  break;
	      } 
	      else{
	      	printf(RED"金額不足，%s剩下%d元\n\n",protagonist,money);
		  }
		  break;
		  
		  
		  
		  
		  case 0:break; 
		  
		  default: printf(RED"選項只有1.2.3.0，請重新選擇\n\n");
          
		  } 
          
             }
           
	      break; 
 	case 3:printf("你現在沒有道具");//道具系統 還沒想出來怎麼寫 
	
	
	
	
  	case 4:Ts_choose=100;
 	break;	
  }
}










}

void Battle_options() //戰鬥選項 
{ 
printf("現在你可以:\n");
printf("1.普通攻擊\n");
printf("2.技能攻擊\n");
printf("3.使用道具\n");
printf("4.放走他(逃跑)\n");
printf("5.賄賂他\n\n\n\n");	
}

void story_1()
{
printf(WHITE"又是一個陰雨天，陰沉的雲將溫暖的陽光深埋，留存於世間的，唯有寒冷與漠然......\n");
printf("高樓林立的城市中，有人站在高處，俯瞰著城市的美好，有人被囚於窄小的方格之中，\n");	
printf("為了下一餐\惶惶不可終日，亦有人衣衫襤褸蜷縮在牆角，心中爬滿了茫然與絕望......\n");	
printf("偌大的城市，百樣人、百種景、百樣情、百種命，構建出了一副不怎麼美好的，名為「現實」的繪卷。\n");	
printf("----------------\n");	
printf("“嗯？這個地方好像怪怪的…”一名男子仔細地盯著螢幕，一筆奇怪的帳目吸引了他的注意力。\n");	
printf("“這筆交易有問題，我得跟經理報告才行。”說完，他拿起了放在一旁的名牌，別在自己的胸口上。\n");					
printf("名牌上寫著");
printf(CYAN"[ %s ]"WHITE,protagonist);
printf("幾個大字，那便是他的名字。\n\n\n\n\n");
}
void story_2()
{

printf("%s敲了敲門。\n",protagonist);
printf("“請進。”經理放下了手邊的資料，看向了進來的人：“有什麼事嗎？”\n");
printf("“是這樣的，我剛剛查賬的時候……”\n");
printf("當%s說到查賬時，經理的眼神閃爍了一下，隨著%s繼續說下去，經理的眼神越發冰冷。\n",protagonist,protagonist);
printf("“知道了，這件事我會向上彙報的，你先回去吧。”經理面色凝重的點了點頭\n");
printf("，又彷彿想起來什麼一般：“這件事不許\和他人提起，以免打草驚蛇，知道嗎？”\n");
printf("%s興奮的應了下來，腦中全是升官發財的畫面。\n",protagonist);
printf("然而當他回到座位上，一通電話無情的粉碎了他的幻想。\n");
printf("『這裡是人事部，請問是%s嗎？』\n",protagonist);
printf("『是的，請問有什麼事…』\n");
printf("『你明天不用來上班了。』\n");
printf("%s還沒來得及反應，電話就掛斷了。\n",protagonist);
printf("此時經理剛好從他面前走過，臉上帶著得意的笑容，斜瞟了%s一眼\n",protagonist);
printf("，%s哪裡還不知道發生了什麼事。",protagonist);
printf("“你！\n\n\n");
printf(RED"【此時場景崩塌，回憶到此結束】\n"WHITE);
printf("-----------------------------------\n\n\n\n\n");
} 


void skill()
{
	
	
	if(skill_01[10]==*"疾風步伐")
	{
	printf(PURPLE"1.疾風步伐(MP-10)\n\n\n"WHITE);
	
	} 
	else if(skill_02[10]==*"憤怒反擊")
	 {
	  printf(PURPLE"2.憤怒反擊\n\n\n"WHITE);
	 }  
	else
	    {
        printf("逗比，你現在沒有技能\n\n\n"); 
	    }
	
	
	
	printf("選擇技能:");
	
	
	
	
	
	
	
	
}

/*printf("%4s\n",protagonist);
printf("血量:%d\n",HP);
printf("攻擊:%d\n,ATK);
printf("防禦:%d\n",DEF);
printf("幸運:%d\n",LUK);*/	



















