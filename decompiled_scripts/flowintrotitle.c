#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0xD4BE58A7E3E102AC(83))
	{
		func_10();
	}
	unk_0x40BF85B257E0DA20(0);
	unk_0x3B76114EC84D5812(&(Global_111560.f_10011.f_25), 1);
	func_7();
	unk_0x81394B4515AF31C3(1);
	if (!unk_0x260395BA7F0C83CB())
	{
		unk_0x5800A2599806C837(0);
	}
	iLocal_0 = unk_0x1FAFE9BB9D8960C1("OPENING_CREDITS");
	while (!unk_0x08EA887200715AD9(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x260395BA7F0C83CB())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x9B35D07DCD0F0B43() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x33D7ABC47E81DCF9())
	{
		func_7();
		if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10011.f_25, 1))
		{
			unk_0x53F520B89860756C(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x9B35D07DCD0F0B43() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x9B35D07DCD0F0B43() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x9B35D07DCD0F0B43() > iLocal_1)
			{
				unk_0xA1E7A40E1F56E511(&(Global_111560.f_10011.f_25), 1);
				if (unk_0xF700975BD3088EC6() || unk_0xE434AB6E3DE89861())
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
	Global_98708 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_98708.f_7 = iParam0;
	Global_98708.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xF1BC72CEC2746995(iLocal_0, "HIDE_LOGO");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0xAC7C2DE2DDC7AF03();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xF1BC72CEC2746995(iLocal_0, "SHOW_LOGO");
	unk_0x759AC38FBC6CCA9E("STRING");
	unk_0xA89C789CC9FEF523(sParam0);
	unk_0x81019766FF500CCA();
	unk_0xD435957F6275B434(fParam1);
	unk_0xD435957F6275B434(fParam2);
	unk_0xD435957F6275B434(fParam3);
	unk_0xD435957F6275B434(fParam4);
	unk_0xD435957F6275B434(fParam5);
	unk_0xD435957F6275B434(fParam6);
	unk_0xD435957F6275B434(fParam7);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_7()
{
	unk_0xB8C54F738FBF3E56();
	unk_0x572062A62138FBA2(2, 199, 1);
	unk_0xF314976CA3E17AC7(7);
	func_8();
}

void func_8()
{
	unk_0xA42289DB8250C2C0();
	func_9();
}

void func_9()
{
	Global_22211.f_134 = 1;
}

void func_10()
{
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_10011.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x749CA887CB0AFEC9(&iLocal_0);
	}
	unk_0xF314976CA3E17AC7(4);
	unk_0x81394B4515AF31C3(0);
	unk_0x40BF85B257E0DA20(1);
	unk_0x9C9E32388A7886A2();
}

