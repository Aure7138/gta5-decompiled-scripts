#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x2137828D03306CAF(uScriptParam_0))
	{
		unk_0xA32D9C84C1A93920(uScriptParam_0, 1);
		Local_2 = { unk_0x82D9CF397BA8C885(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x6DAB28241B34DEED(uScriptParam_0);
		unk_0x81642E3BC0111BF2(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2137828D03306CAF(uScriptParam_0))
		{
			if (unk_0x9F6E8D8D1BBF7A81(uScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x81642E3BC0111BF2(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x769F0F6444C1ABE0(uLocal_1))
						{
							unk_0x8C87E786A33011FB(uLocal_1, -1);
							unk_0x73A91DB7FEE6748A(unk_0x0FFED3E94261A832(), 1);
							unk_0x015B50BC21C88C8C(uLocal_1, 1);
							unk_0xA232817B0B36F2E5();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xA9A04898798AE9E6(uLocal_1, 0))
	{
		if (!unk_0x57F6052FCF93BCFF(uLocal_1))
		{
			unk_0x27BAC9B39BCC6522(&uLocal_1);
		}
		else
		{
			unk_0x015B50BC21C88C8C(uLocal_1, 1);
		}
	}
	unk_0xA232817B0B36F2E5();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (!unk_0x769F0F6444C1ABE0(uLocal_1))
		{
			if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xE8594BE97055E9A1(uLocal_1, unk_0x2A5EB8B0FE590B91(), 1))
			{
				return 1;
			}
			if (unk_0xB588E9EC60290D87(unk_0x2A5EB8B0FE590B91(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xAB211D8B129F26CB(unk_0x2A5EB8B0FE590B91()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x769F0F6444C1ABE0(uLocal_1))
	{
		if (unk_0xE897E371352225D5(uLocal_1, -2017877118) == 7)
		{
			unk_0xF1C3427BFED79E6B(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x3E857F524163ED7C(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xF1C3427BFED79E6B(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x453DB1DBE5D81637(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x1DE436F77250E0C7(uLocal_1, sLocal_8, sLocal_6, unk_0x399F81B56505EE6F(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xA9A04898798AE9E6(uLocal_1, 0))
	{
		uLocal_1 = unk_0xD00B79C0E206E082(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x580E0316A37C6FD5(uLocal_1, 0);
		unk_0x2725C3746060DA66(uLocal_1, 0);
		unk_0x4C47904AE69D7393(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x0F39DF6675B2333E(iLocal_7);
	unk_0xA7C81DED990D3418(sLocal_8);
	if (unk_0xA1FC9D7AEA164881(iLocal_7) && unk_0x45834D6C20FFF689(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x0F39DF6675B2333E(iLocal_7);
		unk_0xA7C81DED990D3418(sLocal_8);
	}
	return 0;
}

