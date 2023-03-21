#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xB9B05E900D325C36(83))
	{
		func_10();
	}
	unk_0x207AAE30DB75DC4F(0);
	unk_0xD804ACF2A7171150(&(Global_104439.f_9877.f_25), 1);
	func_7();
	unk_0xCF304E352457AD63(1);
	if (!unk_0x5114FCEE2A997B95())
	{
		unk_0x8351F65655759E0C(0);
	}
	iLocal_0 = unk_0xB1E69EFAB6CB45A3("OPENING_CREDITS");
	while (!unk_0x77FA56883245AD26(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x5114FCEE2A997B95())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x31CD6E9F83C10233() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x136B42AA35650CB6())
	{
		func_7();
		if (!unk_0x2A3398C6222EB190(Global_104439.f_9877.f_25, 1))
		{
			unk_0x4237E72FB80FD332(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x31CD6E9F83C10233() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x31CD6E9F83C10233() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x31CD6E9F83C10233() > iLocal_1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 1);
				if (unk_0x293847BB0573FB1D() || unk_0x20551D6D924ED04B())
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
	Global_92801 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_92801.f_7 = iParam0;
	Global_92801.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xEBD23F68B1A617FC(iLocal_0, "HIDE_LOGO");
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0x50B3C23D0902259F(sParam0);
	unk_0xCC5EB3A492FB7D4B();
	unk_0x1C703A54AB4B12F6();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xEBD23F68B1A617FC(iLocal_0, "SHOW_LOGO");
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0x50B3C23D0902259F(sParam0);
	unk_0xCC5EB3A492FB7D4B();
	unk_0x90495002CD46BD88(fParam1);
	unk_0x90495002CD46BD88(fParam2);
	unk_0x90495002CD46BD88(fParam3);
	unk_0x90495002CD46BD88(fParam4);
	unk_0x90495002CD46BD88(fParam5);
	unk_0x90495002CD46BD88(fParam6);
	unk_0x90495002CD46BD88(fParam7);
	unk_0x1C703A54AB4B12F6();
}

void func_7()
{
	unk_0x2745EC8E79BD57E0();
	unk_0xC9621A9AD282CC14(2, 199, 1);
	unk_0x38C75B31337B3454(7);
	func_8();
}

void func_8()
{
	unk_0x5535802AD071DF09();
	func_9();
}

void func_9()
{
	Global_17151.f_134 = 1;
}

void func_10()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x7F165E259CFAC8B8(&iLocal_0);
	}
	unk_0x38C75B31337B3454(4);
	unk_0xCF304E352457AD63(0);
	unk_0x207AAE30DB75DC4F(1);
	unk_0xBEE2834559A8897A();
}

