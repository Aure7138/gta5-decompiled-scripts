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
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xC339C5C5B5E8BC5B()) && unk_0x954C9B4D0F94B8F0())
	{
		unk_0x3B82047F26E2CEDB(1);
		if (!unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!unk_0xBC13F084F3B1B544())
			{
				unk_0xFF91FEC6E57575E4(800);
			}
		}
		iLocal_20 = unk_0xBD7D7877C82BE42F("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xBD7D7877C82BE42F("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x5C716BBF766E1C70(iLocal_20) || !unk_0x5C716BBF766E1C70(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x76F4FB5EFF5BDED5(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(iLocal_21, "SET_DATA_SLOT");
		unk_0x22DD5585E00B80C3(0);
		func_4(unk_0x305BC30EAC3E9BF4(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD6F1BD29497A51C8(0);
		unk_0xE2B30EB9B14EEAB2();
		while (!unk_0xEC0ECEF2AF3FDA8D())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA7E684B0D421569B();
		while (!iLocal_22)
		{
			unk_0xE52EBB41DB0E0329();
			unk_0x31B38BBC4423BEAF(7);
			unk_0x5E70D9959D6F2350(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x5E70D9959D6F2350(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x02EA7C5633421A0F(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x3B82047F26E2CEDB(0);
		func_3(1, 1);
		func_1();
	}
	Global_71121.f_1 = 0;
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_92868.f_7 = iParam0;
	Global_92868.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xEBE532BFFE618875(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xEBE532BFFE618875(&iLocal_21);
	}
	unk_0x31B38BBC4423BEAF(4);
	unk_0x3B82047F26E2CEDB(0);
	unk_0x810C5D6462DD69E6();
}

