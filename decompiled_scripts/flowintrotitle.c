#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x78BF2001491914AC(83))
	{
		func_10();
	}
	unk_0x43E2CCD362655963(0);
	unk_0x507FE690B1271947(&(Global_103236.f_9797.f_25), 1);
	func_7();
	unk_0x6F0F1C5EEC77F84A(1);
	if (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x5BFE0E837BA0AF60(0);
	}
	iLocal_0 = unk_0x4D6D22510A2467D9("OPENING_CREDITS");
	while (!unk_0xA8AF99BD8D81CFB7(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xF4EE9D6C8E60AE22())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x3732B96D7A1859B4() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x863D84AFAC2AB730())
	{
		func_7();
		if (!unk_0xAA4F14DA15DB0B51(Global_103236.f_9797.f_25, 1))
		{
			unk_0x792C5262A7BE057A(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x3732B96D7A1859B4() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x3732B96D7A1859B4() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x3732B96D7A1859B4() > iLocal_1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_103236.f_9797.f_25), 1);
				if (unk_0x0602C06A786F096F() || unk_0x5018862FF5D9F844())
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
	Global_91816 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91816.f_7 = iParam0;
	Global_91816.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xD1FCC52F87A98873(iLocal_0, "HIDE_LOGO");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0x8123397DC676E794();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xD1FCC52F87A98873(iLocal_0, "SHOW_LOGO");
	unk_0xADBDBA2DF8443753("STRING");
	unk_0xCF6846167A5EFE98(sParam0);
	unk_0xF7D95CCE1364B5CE();
	unk_0xD3A4A11E4FDC9D63(fParam1);
	unk_0xD3A4A11E4FDC9D63(fParam2);
	unk_0xD3A4A11E4FDC9D63(fParam3);
	unk_0xD3A4A11E4FDC9D63(fParam4);
	unk_0xD3A4A11E4FDC9D63(fParam5);
	unk_0xD3A4A11E4FDC9D63(fParam6);
	unk_0xD3A4A11E4FDC9D63(fParam7);
	unk_0x8123397DC676E794();
}

void func_7()
{
	unk_0x50A7619242B023D2();
	unk_0x4E6996123FABDB93(2, 199, 1);
	unk_0xFF4C3B41848CE5CD(7);
	func_8();
}

void func_8()
{
	unk_0x117BBA4FCB43C905();
	func_9();
}

void func_9()
{
	Global_17151.f_134 = 1;
}

void func_10()
{
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_9797.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x73F5E7B6BB964839(&iLocal_0);
	}
	unk_0xFF4C3B41848CE5CD(4);
	unk_0x6F0F1C5EEC77F84A(0);
	unk_0x43E2CCD362655963(1);
	unk_0xA232817B0B36F2E5();
}

