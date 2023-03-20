#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2EC83C7ACA23E8A4(83))
	{
		func_10();
	}
	unk_0x0745756DF15EC093(0);
	unk_0x09C86C0C5CA26B1E(&(Global_101553.f_8871.f_25), 1);
	func_7();
	unk_0xACBEFB0A5F1CF619(1);
	if (!unk_0x2C22E7D1C80A53EF())
	{
		unk_0xF215E3B07B7990BC(0);
	}
	iLocal_0 = unk_0x474309DF4921072A("OPENING_CREDITS");
	while (!unk_0x1E3F61C2C1E29520(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x2C22E7D1C80A53EF())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xDF658EB6CA91DFBC() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0x7C0379981B7E6E40())
	{
		func_7();
		if (!unk_0x08BA6DD398CA197C(Global_101553.f_8871.f_25, 1))
		{
			unk_0x0F83039847376F53(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xDF658EB6CA91DFBC() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xDF658EB6CA91DFBC() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0xDF658EB6CA91DFBC() > iLocal_1)
			{
				unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 1);
				if (unk_0x1D0435FC97A108C7() || unk_0x955B8C8F89CC3AC0())
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
	Global_91445 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91445.f_7 = iParam0;
	Global_91445.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0xB9D4F4DE7E7EC038(iLocal_0, "HIDE_LOGO");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0xE73340DA551C95E1();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0xB9D4F4DE7E7EC038(iLocal_0, "SHOW_LOGO");
	unk_0x709662CF2BD061A4("STRING");
	unk_0xDA35BDB37E728640(sParam0);
	unk_0x1E77BE8F4283FA05();
	unk_0x0FFE3C1DBBA72236(fParam1);
	unk_0x0FFE3C1DBBA72236(fParam2);
	unk_0x0FFE3C1DBBA72236(fParam3);
	unk_0x0FFE3C1DBBA72236(fParam4);
	unk_0x0FFE3C1DBBA72236(fParam5);
	unk_0x0FFE3C1DBBA72236(fParam6);
	unk_0x0FFE3C1DBBA72236(fParam7);
	unk_0xE73340DA551C95E1();
}

void func_7()
{
	unk_0x08FB11A1AA7022FD();
	unk_0xABC36CFE4F3421A0(2, 199, 1);
	unk_0x1373E5003F76E429(7);
	func_8();
}

void func_8()
{
	unk_0x527ED47EF44C8E1E();
	func_9();
}

void func_9()
{
	Global_17151.f_134 = 1;
}

void func_10()
{
	unk_0x88B0F0DC270164B7(&(Global_101553.f_8871.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0xA12A0D38735CCBF2(&iLocal_0);
	}
	unk_0x1373E5003F76E429(4);
	unk_0xACBEFB0A5F1CF619(0);
	unk_0x0745756DF15EC093(1);
	unk_0x78C587487CD40B92();
}

