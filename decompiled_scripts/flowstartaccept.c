#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (unk_0xD4BE58A7E3E102AC(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xE434AB6E3DE89861()) && unk_0xF700975BD3088EC6())
	{
		unk_0x81394B4515AF31C3(1);
		if (!unk_0x260395BA7F0C83CB())
		{
			if (!unk_0xA710300CD13D2877())
			{
				unk_0x5800A2599806C837(800);
			}
		}
		iLocal_20 = unk_0x1FAFE9BB9D8960C1("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x1FAFE9BB9D8960C1("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x08EA887200715AD9(iLocal_20) || !unk_0x08EA887200715AD9(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF1BC72CEC2746995(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xF1BC72CEC2746995(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xF1BC72CEC2746995(iLocal_21, "SET_DATA_SLOT");
		unk_0xD02F24F3E2DB263A(0);
		func_4(unk_0x357127A2E350E9F6(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xF1BC72CEC2746995(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x282C78036676E0C2(0);
		unk_0xAC7C2DE2DDC7AF03();
		while (!unk_0x260395BA7F0C83CB())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFC68084B3AC4C202();
		while (!iLocal_22)
		{
			unk_0xB8C54F738FBF3E56();
			unk_0xF314976CA3E17AC7(7);
			unk_0x53F520B89860756C(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x53F520B89860756C(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x3772881BFFE6C3F8(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x81394B4515AF31C3(0);
		func_3(1, 1);
		func_1();
	}
	Global_76846.f_1 = 0;
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_10011.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_98708.f_7 = iParam0;
	Global_98708.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x7151302E2AA285DC(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x749CA887CB0AFEC9(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x749CA887CB0AFEC9(&iLocal_21);
	}
	unk_0xF314976CA3E17AC7(4);
	unk_0x81394B4515AF31C3(0);
	unk_0x9C9E32388A7886A2();
}

