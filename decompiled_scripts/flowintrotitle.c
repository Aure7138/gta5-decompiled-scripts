#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x9CEB376419A71A96(83))
	{
		func_10();
	}
	unk_0x8236B2B9F37DECF9(0);
	unk_0x99BCB15F954AF579(&(Global_101186.f_8782.f_25), 1);
	func_7();
	unk_0x5C79CA2A987CA637(1);
	if (!unk_0x4FF34B5B023875E1())
	{
		unk_0xEBA0934AA600C515(0);
	}
	iLocal_0 = unk_0xDDEDAA5105426019("OPENING_CREDITS");
	while (!unk_0x6A87921801178186(iLocal_0))
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x4FF34B5B023875E1())
	{
		func_7();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x1ADBAAC322D61F73() + 8000 + unk_0xF2DB717A73826179((2f * 1000f)));
	while (!unk_0xEE448F70B7098781())
	{
		func_7();
		if (!unk_0x7DA173D4FD42F36B(Global_101186.f_8782.f_25, 1))
		{
			unk_0xA5C0BA1772140603(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0x1ADBAAC322D61F73() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0x1ADBAAC322D61F73() + unk_0xF2DB717A73826179((2f * 1000f)));
				}
			}
			else if (unk_0x1ADBAAC322D61F73() > iLocal_1)
			{
				unk_0xE27C8E42A97895CF(&(Global_101186.f_8782.f_25), 1);
				if (unk_0x53CBEB12458F9A38() || unk_0x55812CD5A331E1F8())
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
	Global_91349 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_91349.f_7 = iParam0;
	Global_91349.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x2B859AD680983623(iLocal_0, "HIDE_LOGO");
	unk_0x7291E2F821FCFC04("STRING");
	unk_0x9C174A0D56FFB64A(sParam0);
	unk_0xD6360E18957BCDD3();
	unk_0xE97F1B22C5E8989F();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x2B859AD680983623(iLocal_0, "SHOW_LOGO");
	unk_0x7291E2F821FCFC04("STRING");
	unk_0x9C174A0D56FFB64A(sParam0);
	unk_0xD6360E18957BCDD3();
	unk_0xB62735E5BEC5ABF8(fParam1);
	unk_0xB62735E5BEC5ABF8(fParam2);
	unk_0xB62735E5BEC5ABF8(fParam3);
	unk_0xB62735E5BEC5ABF8(fParam4);
	unk_0xB62735E5BEC5ABF8(fParam5);
	unk_0xB62735E5BEC5ABF8(fParam6);
	unk_0xB62735E5BEC5ABF8(fParam7);
	unk_0xE97F1B22C5E8989F();
}

void func_7()
{
	unk_0x5C7168C568F21A9E();
	unk_0xC80D2B3478FFF428(2, 199, 1);
	unk_0xA53AA6798EF8BAB3(7);
	func_8();
}

void func_8()
{
	unk_0xA0B35BAB4F2D2F80();
	func_9();
}

void func_9()
{
	Global_17118.f_134 = 1;
}

void func_10()
{
	unk_0xE27C8E42A97895CF(&(Global_101186.f_8782.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x0E4537BE1D04DAC7(&iLocal_0);
	}
	unk_0xA53AA6798EF8BAB3(4);
	unk_0x5C79CA2A987CA637(0);
	unk_0x8236B2B9F37DECF9(1);
	unk_0xF5DF8F3392CDD07B();
}

