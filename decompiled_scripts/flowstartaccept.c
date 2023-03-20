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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0xC11469DCA6FC3BB5(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xB0FB6CFAA5A1C833()) && unk_0xB304BD692628B1E1())
	{
		unk_0x5CB83156AA038F95(1);
		if (!unk_0xF5472C80DF2FF847())
		{
			if (!unk_0x02F39BEFE7B88D00())
			{
				unk_0x40C719A5E410B9E4(800);
			}
		}
		iLocal_19 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x64BAE9BE701E6C19(iLocal_19) || !unk_0x64BAE9BE701E6C19(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF6EA2AC68E7C7293(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(iLocal_20, "SET_DATA_SLOT");
		unk_0xA734310215BCF528(0);
		func_4(unk_0xF800E35ED8511D66(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x58279158C52AF361(0);
		unk_0xD4D85E4148B638AD();
		while (!unk_0xF5472C80DF2FF847())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFC179D7E8886DADF();
		while (!iLocal_21)
		{
			unk_0xEA600AABAF4B9084();
			unk_0xCFCC78391C8B3814(7);
			unk_0x2D8953D6CEBE69D2(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x2D8953D6CEBE69D2(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0x2503EB2EA811EC9A(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5CB83156AA038F95(0);
		func_3(1, 1);
		func_1();
	}
	Global_68514.f_1 = 0;
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_8270.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&iLocal_20);
	}
	unk_0xCFCC78391C8B3814(4);
	unk_0x5CB83156AA038F95(0);
	unk_0x5E8B6D17FF91CD59();
}

