#include <iostream>

void main()
{

	//memcpy 
	int source[] = { 1,2,3,4,5 };
	int destination[5];

	memcpy(destination, source, sizeof(int) * 5);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << destination[i] << std::endl;
	}

	////stdin : 키보드를 대상으로 입력 받는 스트림
	////stdout : 모니터를 대상으로 출력하는 스트림
	////stderr : 모니터를 대상으로 출력하는 스트림

	////단일 문자 출력 함수 - putchar, fputc
	//putchar(67); //stdin으로 스트림이 고정되어 있음
	//fputc(67, stdout); //정해진 대상(모니터, 파일)으로 출력하는 스트림

	////단일 문자 입력 함수 - getchar(), fgetc
	////getchar는 출력버퍼를 생성하여 입력을 받고 버퍼를 모두 비운 뒤(enter문자까지 포함)에 다시 입력을 받을 수 있음
	//int ch = getchar();
	////그렇기 때문에 여러 문자를 입력받아도 버퍼로부터 가져온 한문자씩만 출력됨
	//putchar(ch);

	////문자열 출력 함수 - puts, fputs
	////puts는 자동 개행이 되지만, fputs는 개행안됨
	//puts("박병권"); // stdout으로 스트림 고정됨
	//fputs("박병권", stdout);

	////문자열 입력 함수 - gets_s, fgets
	////gets_s - 개행문자를 문자로 인식하지 않음
	////fgets - 개행문자까지 받아들임
	//char szName[32] = "";
	//gets_s(szName, 32);
	//puts(szName);

	//fgets(szName, 32, stdin);
	//fputs(szName, stdout);

	//=====================================================
	//절대 경로와 상대 경로
	//절대 경로 - ex) C://Documents
	//상대 경로 - ex) ../documents
	// ../ - 한칸 위
	//기준을 잡고 그 기준에서 경로를 찾아가는 것

	FILE* fp = nullptr; //파일과 프로그램을 이어주는 stream 역할
	//파일 개방함수 - fopen_s
	errno_t err=fopen_s(&fp, "../Data.txt", "wt");/*wt: write text*/

	//err=0이면 성공적으로 stream 생성
	if (err == 0)
	{
		std::cout << "파일 개발 성공" << std::endl;
		fputs("파일 입력!	", fp);
	}
	else
	{
		std::cout << "파일 개방 실패" << std::endl;
	}

	//개방한 stream 해제
	fclose(fp);
	fp = nullptr;

	err = fopen_s(&fp, "../Data.txt", "rt");/*rt: read text*/

	char szTest[32] = "";
	if (err == 0)
	{
		fgets(szTest, 32, fp);
		std::cout << "파일 개방 성공!" << std::endl;
		fputs(szTest, stdout);
	}
	else
	{
		std::cout << "파일 개방 실패!" << std::endl;
	}

	fclose(fp);
	fp = nullptr;

	//txt문서에 문자열을 저장할 때 null문자는 저장안함
	//txt문서에 끝을 알기위해서는 'eof'를 사용해야함

	//==================================================
	//입출력 구분에 따른 모드
	/*
	w	쓰기 가능				파일이 없으면 생성
	r	읽기 가능				파일이 없으면 에러
	a	덧붙여쓰기 가능		파일이 없으면 생성
	w+  읽기/쓰기 가능		파일이 없으면 생성
	r+  읽기/쓰기 가능		파일이 없으면 에러
	a+	읽기, 덧붙여쓰기 가능	파일이 없으면 생성
	*/

	//데이터 종류에 따른 모드
	/*
	t	텍스트 모드
	b	바이너리 모드 - 주로 음원 혹은 텍스쳐 저장하는데 사용, 텍스트 모드보다 빠름
	rb- 바이너리 모드로 읽겠다는 의미
	*/

	// '\0' -null문자


	//=================================================
	//각종 파일 함수

	//fseek() : 파일 지시자의 위치를 옮기는 함수
	//파일 지시자 : 파일에서 어디까지 읽었는지 가리키는 역할 file구조체 안에 구현되어 있음
	FILE *fp = nullptr;
	errno_t err = fopen_s(&fp, "../Data.txt", "rt");

	if (err == 0)
	{
		std::cout << "파일 개방 성공" << std::endl;
		fseek(fp, 5, SEEK_SET);
		/*SEEK_SET - 파일의 처음 시작 위치에 파일 지시자를 위치하게함*/
		/*ftell - 파일지시자의 현재 위치*/
		/*SEEK_END - 파일지시자의 마지막 위치-글자의 마지막 위치가 아니라 마지막 글자 다음 위치(EOF)를 의미!!*/
		//fseek(파일 구조체, 이동할 바이트수 , 시작지점)
		int ch=fgetc(fp);
		//데이터를 출력하면 파일 지시자는 한칸씩 옮겨감
		fputc(ch,stdout);
	}
}