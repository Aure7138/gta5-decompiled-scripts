#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x89522B8E487D4EF9(83))
	{
		func_10();
	}
	unk_0xC673612C64F6FE9C(0);
	unk_0x73817D396768E4C6(&(Global_99155.f_8630.f_25), 1);
	func_7();
	unk_0xBEE128CF06FE2A96(1);
	if (!unk_0xAEF17BDE274A1247())
	{
		unk_0x6A6E764D1DB633C7(0);
	}
	iLocal_0 = unk_0xE3C796DC28BC3254("OPENING_CREDITS");
	while (!unk_0x4A4851D44CDF03C0(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xAEF17BDE274A1247())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x9D40BBF80D8F5E8A() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x2DFE588AA3727FE3())
	{
		func_7();
		if (!unk_0xB519E5386FBF69E5(Global_99155.f_8630.f_25, 1))
		{
			unk_0xE2B331FD5EEF4684(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x9D40BBF80D8F5E8A() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x9D40BBF80D8F5E8A() > iLocal_1)
			{
				unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8630.f_25), 1);
				if (unk_0xB869248EE1F9790F() || unk_0xA78EA29AC2FFBADE())
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
	Global_91064 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91064.f_7 = iParam0;
	Global_91064.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xA4F3B84032D46C13(iLocal_0, "HIDE_LOGO");
	unk_0x33D37B75FC2BCC8C("STRING");
	unk_0x63E8D6007C32E426(sParam0);
	unk_0x057886C01DDC535D();
	unk_0xFF141057ED7B4C73();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xA4F3B84032D46C13(iLocal_0, "SHOW_LOGO");
	unk_0x33D37B75FC2BCC8C("STRING");
	unk_0x63E8D6007C32E426(sParam0);
	unk_0x057886C01DDC535D();
	unk_0x73B039A1CD485226(fParam1);
	unk_0x73B039A1CD485226(fParam2);
	unk_0x73B039A1CD485226(fParam3);
	unk_0x73B039A1CD485226(fParam4);
	unk_0x73B039A1CD485226(fParam5);
	unk_0x73B039A1CD485226(fParam6);
	unk_0x73B039A1CD485226(fParam7);
	unk_0xFF141057ED7B4C73();
}

void func_7()
{
	unk_0x4029EE69E88FC7AD();
	unk_0x8CCCC48313B0F20F(2, 199, 1);
	unk_0x55C926E686119F55(7);
	func_8();
}

void func_8()
{
	unk_0x02FBF8551A36D88F();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8630.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x8A86A209B0F0AF7D(&iLocal_0);
	}
	unk_0x55C926E686119F55(4);
	unk_0xBEE128CF06FE2A96(0);
	unk_0xC673612C64F6FE9C(1);
	unk_0x52F20802944F8DCE();
}

