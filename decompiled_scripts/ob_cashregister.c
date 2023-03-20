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
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_1348588, 1))
		{
			func_17();
		}
		else
		{
			unk_0xE1306BF06D83921B(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x8A10FCF639EC0104(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x89522B8E487D4EF9(2))
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
		if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
		{
			if (unk_0x7D7BF8DC8C822AC1(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x89924B2EE7CFDC4D(uScriptParam_0))
						{
							Local_19 = { unk_0x1141852D07400777(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x446519DBCF76642D(uScriptParam_0) && unk_0xB756E8D139BDE124(uScriptParam_0)) && !unk_0x28D33422BA6C479D(uScriptParam_0))
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
	iVar3 = unk_0x0ADD324BC46177EF(70, 121);
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x0ADD324BC46177EF(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x9956FB0E4B50ECB8(&uVar2, 3);
	unk_0x9956FB0E4B50ECB8(&uVar2, 4);
	unk_0x801429C020C467BA(iVar0);
	while (!unk_0x5053BF6D5604065B(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9052F866958BB3C9(iVar1, unk_0x3DBD622A19621A7A(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
	bool bVar0;
	
	func_10(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2442886)
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
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_4()) == 0)
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
	return Global_25034;
}

bool func_6()
{
	return Global_2432717.f_573;
}

int func_7(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2440974;
}

bool func_9()
{
	return Global_2432717.f_568;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
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
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(uVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(uVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(uParam0))
		{
			if (unk_0x4F9572356C55E94C(uParam0))
			{
				unk_0x20BB4B94CC6DDC9A(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(uParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(uParam0))
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
	if (unk_0xD18C3CF631455087(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(uParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
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
				if (!unk_0x00AAD79B42B3E036())
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
			else if (!unk_0xAB63AB6154522A4E())
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
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
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
	else if (!unk_0xAB63AB6154522A4E())
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
	return Global_1315884;
}

void func_16()
{
	unk_0x52F20802944F8DCE();
}

void func_17()
{
	unk_0x52F20802944F8DCE();
}

