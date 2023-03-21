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
	int iLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
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
	if (unk_0x4C9BACA8D249CB13())
	{
		if (unk_0x05EFB6A616B6FADE(Global_1380171, 1))
		{
			func_17();
		}
		else
		{
			unk_0x1B0D16DC60698F88(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x2F3193E06C2EFF44(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_17();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_17();
			}
		}
		if (unk_0xDC5D81351D6A4DDB(uScriptParam_0))
		{
			if (unk_0x1E99F8A10D565A13(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0xC2336726092EE80B(uScriptParam_0))
						{
							Local_19 = { unk_0xE2BBD32891C18569(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x53C1CCE5622F35FF(uScriptParam_0) && unk_0x7E65E323A95E4187(uScriptParam_0)) && !unk_0x4943BEEC19289B8E(uScriptParam_0))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_17();
			}
		}
		else
		{
			func_17();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0x22C775856F4633CA(70, 121);
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x22C775856F4633CA(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x2BCFB39E86340DAA(&uVar2, 3);
	unk_0x2BCFB39E86340DAA(&uVar2, 4);
	unk_0xCACEBBBEAD8F262E(iVar0);
	while (!unk_0x7FC99CCC73354033(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xCFD2D70854568658(iVar1, unk_0xA86F5E9877454563(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
}

int func_2(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(iParam0) * Global_262145);
				iParam0 = unk_0xF2DB717A73826179(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_3()
{
	var uVar0;
	
	func_10(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0x18F86E07E41D913F())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8B1574454E8C2421(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_5())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	return Global_25459;
}

bool func_6()
{
	return Global_2448386.f_587;
}

int func_7(int iParam0)
{
	if (unk_0xF10AFD11E6EE81BF(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2458191;
}

bool func_9()
{
	return Global_2448386.f_582;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D7B2A77420FF19E(1))
	{
		iVar1 = unk_0x5712B9353A8F6573(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x8866A4E42CDA3EF1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_11(iVar0);
					break;
				
				case 566035618:
					unk_0x8866A4E42CDA3EF1(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x8866A4E42CDA3EF1(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xEE978C39384D834F(Var0.f_1);
			if (unk_0xDC5D81351D6A4DDB(uVar3))
			{
				if (unk_0x5D7DFE2058701942(uVar3, 0))
				{
					uVar4 = unk_0xCAEB6CE71A2C7212(uVar3, 0);
					if (unk_0xEB1A41F6F719807C(uVar4, Var0.f_2) && unk_0xB592B7A61F21E7A5())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x3D2495030621765B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x792676988A48387F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0xDC5D81351D6A4DDB(uParam0))
	{
		if (!unk_0x4943BEEC19289B8E(uParam0))
		{
			if (unk_0xCC01DCC72D8B9E39(uParam0))
			{
				if (!unk_0x289FBFAD3E416C48(unk_0x8F474E419F56E48D(uParam0)))
				{
					unk_0x1F7948851FB36E88(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x82384F63D814C864(uParam0, 0))
		{
			if (unk_0xB540EEBB14C48518(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBF19BA6420EC428C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
		if (!func_15())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4C9BACA8D249CB13())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_9())
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
				if (func_7(155))
				{
					if (!bParam2)
					{
						func_16();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB3ADBAEA60664F46())
			{
				if (!bParam2)
				{
					func_16();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBF19BA6420EC428C();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4C9BACA8D249CB13())
		{
			if (!bParam2)
			{
				func_16();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB3ADBAEA60664F46())
	{
		if (!bParam2)
		{
			func_16();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_15()
{
	return Global_1312834;
}

void func_16()
{
	unk_0x8F1A9FE6D91AAFEB();
}

void func_17()
{
	unk_0x8F1A9FE6D91AAFEB();
}

