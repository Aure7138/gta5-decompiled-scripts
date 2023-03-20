#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x8D841F1DD3FA555F(83))
	{
		func_10();
	}
	unk_0x8AAC3307B1C23688(0);
	unk_0xC69E84EBBD7166E6(&(Global_98931.f_8630.f_25), 1);
	func_7();
	unk_0xCFB703A5F752D1C3(1);
	if (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x3B283FEBA87FFBEB(0);
	}
	iLocal_0 = unk_0x95EF972E3A07B525("OPENING_CREDITS");
	while (!unk_0xCC8E3BAC62A29F42(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x29AFA2493D7C23D0())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x48E480685981C7D4() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x521385D8214D27C4())
	{
		func_7();
		if (!unk_0x236D8AD7EE179F46(Global_98931.f_8630.f_25, 1))
		{
			unk_0x88188CE25DF2572C(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x48E480685981C7D4() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x48E480685981C7D4() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x48E480685981C7D4() > iLocal_1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8630.f_25), 1);
				if (unk_0x5664F372C9A287C7() || unk_0x913B1C01C1BA6C6F())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_10();
}

void func_1()
{
	Global_90848 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_90848.f_7 = iParam0;
	Global_90848.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x21ED0FC9B5CC748B(iLocal_0, "HIDE_LOGO");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0xBA9BA6181F2B6111();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x21ED0FC9B5CC748B(iLocal_0, "SHOW_LOGO");
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x6222A57F463E8EE7(sParam0);
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(fParam1);
	unk_0x518198639630AE08(fParam2);
	unk_0x518198639630AE08(fParam3);
	unk_0x518198639630AE08(fParam4);
	unk_0x518198639630AE08(fParam5);
	unk_0x518198639630AE08(fParam6);
	unk_0x518198639630AE08(fParam7);
	unk_0xBA9BA6181F2B6111();
}

void func_7()
{
	unk_0x92260590AAFDE170();
	unk_0xDE1125A413AF241C(2, 199, 1);
	unk_0x7F3AA121397DEEC9(7);
	func_8();
}

void func_8()
{
	unk_0xF4753D4FA13FFE6E();
	func_9();
}

void func_9()
{
	Global_17099.f_134 = 1;
}

void func_10()
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8630.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x4B6F01DE8CCE643E(&iLocal_0);
	}
	unk_0x7F3AA121397DEEC9(4);
	unk_0xCFB703A5F752D1C3(0);
	unk_0x8AAC3307B1C23688(1);
	unk_0xC23A229F78DAD92A();
}

