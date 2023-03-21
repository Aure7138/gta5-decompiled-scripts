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
	if (unk_0xB331FCEB94EB05C8())
	{
		if (unk_0x0E4018692D92041D(Global_1383928, 1))
		{
			func_18();
		}
		else
		{
			unk_0x210E46A190FB3CB3(32, 0, -1);
			func_15(0, -1, 0);
			unk_0x9980AE643A60F372(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x9EC5BDC006623C42(2))
	{
		func_18();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_22 == 1)
		{
			if (func_3())
			{
				func_18();
			}
		}
		if (unk_0x765F6FEEFF39224F(uScriptParam_0))
		{
			if (unk_0x68135A7434393CC1(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x11D8E875F068E371(uScriptParam_0))
						{
							Local_19 = { unk_0xFBB1F99A825CAB09(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x68B9F6D5580D0106(uScriptParam_0, 0) && unk_0x042B0E494045A7DF(uScriptParam_0)) && !unk_0x5A04E3BD0B5E7E49(uScriptParam_0))
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
				func_18();
			}
		}
		else
		{
			func_18();
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
	iVar3 = unk_0x9EC3B269A34A2BEE(70, 121);
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x9EC3B269A34A2BEE(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x8950ED5730F62EE8(&uVar2, 3);
	unk_0x8950ED5730F62EE8(&uVar2, 4);
	unk_0xB815670C37E03CDE(iVar0);
	while (!unk_0x5D98D654CDC2165A(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		unk_0x5A4D875D71EDECDE(iVar1, unk_0xE3ADC76D6418297E(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0x6413BF5F9B062200(iVar1, unk_0xE3ADC76D6418297E(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
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
	
	func_11(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(157))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_6())
	{
		case 0:
			return func_5();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_5()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_25765;
}

bool func_7()
{
	return Global_2448756.f_586;
}

int func_8(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2458613;
}

bool func_10()
{
	return Global_2448756.f_581;
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x77BABFD1D75AA582(1))
	{
		iVar1 = unk_0x5487531DB7DA4AB5(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x286A5F0670063839(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_12(iVar0);
					break;
				
				case -42615386:
					unk_0x286A5F0670063839(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x378BD4B3881338C2(Var0.f_1);
			if (unk_0x765F6FEEFF39224F(uVar3))
			{
				if (unk_0xF0D230FB550CD6EB(uVar3, 0))
				{
					uVar4 = unk_0xF2C96862595654B4(uVar3, 0);
					if (unk_0x8F6C3DD0BB146CA3(uVar4, Var0.f_2) && unk_0xE36862B47CD70685())
					{
						if (func_13(uVar4, &bVar5))
						{
							unk_0xD4A76B5E6C175542(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x65F544B458249682(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_13(var uParam0, var uParam1)
{
	if (unk_0x765F6FEEFF39224F(uParam0))
	{
		if (!unk_0x5A04E3BD0B5E7E49(uParam0))
		{
			if (unk_0xFB2062B880AF8075(uParam0))
			{
				if (!unk_0xFFB467183FEE27C4(unk_0x541D5C57194E73C4(uParam0)))
				{
					unk_0x0D21E1FDE062ED99(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9E08E12414BD4476(uParam0, 0))
		{
			if (unk_0x0A81FE3D92AE2AC9(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
		if (!func_16())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_10())
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
				if (func_8(155))
				{
					if (!bParam2)
					{
						func_17();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x295BEA3FE13E5C3D())
			{
				if (!bParam2)
				{
					func_17();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x52119E312E15DB07();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			if (!bParam2)
			{
				func_17();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x295BEA3FE13E5C3D())
	{
		if (!bParam2)
		{
			func_17();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_16()
{
	return Global_1312844;
}

void func_17()
{
	unk_0x5894DC159447E10A();
}

void func_18()
{
	unk_0x5894DC159447E10A();
}

