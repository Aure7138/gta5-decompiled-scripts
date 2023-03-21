#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_10();
	}
	unk_0x93553958B8FC325B(0);
	unk_0x62148293B793073B(&(Global_104551.f_9986.f_25), 1);
	func_7();
	unk_0x3B82047F26E2CEDB(1);
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0xFF91FEC6E57575E4(0);
	}
	iLocal_0 = unk_0xBD7D7877C82BE42F("OPENING_CREDITS");
	while (!unk_0x5C716BBF766E1C70(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xEC0ECEF2AF3FDA8D())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x5AFB8ED811F05E4D() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xEAE1A41FBC3984B1())
	{
		func_7();
		if (!unk_0xB03A1684359C50A1(Global_104551.f_9986.f_25, 1))
		{
			unk_0x5E70D9959D6F2350(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x5AFB8ED811F05E4D() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x5AFB8ED811F05E4D() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x5AFB8ED811F05E4D() > iLocal_1)
			{
				unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 1);
				if (unk_0x954C9B4D0F94B8F0() || unk_0xC339C5C5B5E8BC5B())
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
	Global_92868 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_92868.f_7 = iParam0;
	Global_92868.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x76F4FB5EFF5BDED5(iLocal_0, "HIDE_LOGO");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x76F4FB5EFF5BDED5(iLocal_0, "SHOW_LOGO");
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xB4179F7E88F4C4BF(sParam0);
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(fParam1);
	unk_0x954263F3D07BEFC2(fParam2);
	unk_0x954263F3D07BEFC2(fParam3);
	unk_0x954263F3D07BEFC2(fParam4);
	unk_0x954263F3D07BEFC2(fParam5);
	unk_0x954263F3D07BEFC2(fParam6);
	unk_0x954263F3D07BEFC2(fParam7);
	unk_0xE2B30EB9B14EEAB2();
}

void func_7()
{
	unk_0xE52EBB41DB0E0329();
	unk_0x9C7EE7DE7041A3F4(2, 199, 1);
	unk_0x31B38BBC4423BEAF(7);
	func_8();
}

void func_8()
{
	unk_0x0A4CB1D4A63A7528();
	func_9();
}

void func_9()
{
	Global_17162.f_134 = 1;
}

void func_10()
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_9986.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xEBE532BFFE618875(&iLocal_0);
	}
	unk_0x31B38BBC4423BEAF(4);
	unk_0x3B82047F26E2CEDB(0);
	unk_0x93553958B8FC325B(1);
	unk_0x810C5D6462DD69E6();
}

