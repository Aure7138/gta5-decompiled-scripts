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
	if (unk_0x89522B8E487D4EF9(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xA78EA29AC2FFBADE()) && unk_0xB869248EE1F9790F())
	{
		unk_0xBEE128CF06FE2A96(1);
		if (!unk_0xAEF17BDE274A1247())
		{
			if (!unk_0xA864A37DA392324A())
			{
				unk_0x6A6E764D1DB633C7(800);
			}
		}
		iLocal_20 = unk_0xE3C796DC28BC3254("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xE3C796DC28BC3254("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x4A4851D44CDF03C0(iLocal_20) || !unk_0x4A4851D44CDF03C0(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA4F3B84032D46C13(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xFF141057ED7B4C73();
		unk_0xA4F3B84032D46C13(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xFF141057ED7B4C73();
		unk_0xA4F3B84032D46C13(iLocal_21, "SET_DATA_SLOT");
		unk_0x43C93E686A1E92C5(0);
		func_4(unk_0xE77F6122F2596EB4(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xFF141057ED7B4C73();
		unk_0xA4F3B84032D46C13(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x840DDAF1126AE0CC(0);
		unk_0xFF141057ED7B4C73();
		while (!unk_0xAEF17BDE274A1247())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2D123FAD51760D4C();
		while (!iLocal_22)
		{
			unk_0x4029EE69E88FC7AD();
			unk_0x55C926E686119F55(7);
			unk_0xE2B331FD5EEF4684(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xE2B331FD5EEF4684(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x6BBF308E0A0F9AD4(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xBEE128CF06FE2A96(0);
		func_3(1, 1);
		func_1();
	}
	Global_69505.f_1 = 0;
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8630.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91064.f_7 = iParam0;
	Global_91064.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x492B9DC2AF02FDDF(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x8A86A209B0F0AF7D(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x8A86A209B0F0AF7D(&iLocal_21);
	}
	unk_0x55C926E686119F55(4);
	unk_0xBEE128CF06FE2A96(0);
	unk_0x52F20802944F8DCE();
}

