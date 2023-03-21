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
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1389296, 1))
		{
			func_18();
		}
		else
		{
			unk_0x37AD2AB54480FA6A(32, 0, -1);
			func_15(0, -1, 0);
			unk_0x256D93AFAE851A7A(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0x2EBF608FFE6CA406(2))
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
		if (unk_0xC844350D5D58C99A(uScriptParam_0))
		{
			if (unk_0x63D2C15453688621(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(uScriptParam_0))
						{
							Local_19 = { unk_0x68F4C0EC296D3901(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x713261485D0F1B6C(uScriptParam_0, 0) && unk_0x4FC40AB0ECCE6E18(uScriptParam_0)) && !unk_0xAF6690C489CC6203(uScriptParam_0))
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
	iVar3 = unk_0x09AC81E49EA267F7(70, 121);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x09AC81E49EA267F7(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0x5D96D8530B3D0904(&uVar2, 3);
	unk_0x5D96D8530B3D0904(&uVar2, 4);
	unk_0x523BCC9DC80CD82F(iVar0);
	while (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0xB8D1BBEFD1257857(iVar1, unk_0x550B1459B4642A86(Local_19, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0xA6FF0828D17CF374(iVar1, unk_0x550B1459B4642A86(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_10())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_9())
	{
		return 1;
	}
	if (func_8(159))
	{
		if (!func_7())
		{
			return 1;
		}
	}
	if (func_8(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_4()) == 0)
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
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_6()
{
	return Global_30768;
}

bool func_7()
{
	return Global_2450632.f_598;
}

int func_8(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_9()
{
	return Global_2460680;
}

bool func_10()
{
	return Global_2450632.f_593;
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_12(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 653923311)
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
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x9539D44F3E4492F6(Var0.f_1);
			if (unk_0xC844350D5D58C99A(uVar3))
			{
				if (unk_0x405E212DDE472467(uVar3, 0))
				{
					uVar4 = unk_0x6937EA2286828455(uVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(uVar4, Var0.f_2) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_13(uVar4, &bVar5))
						{
							unk_0x920D29D81E211607(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x046C362CF15F1935(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_13(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(uParam0))
	{
		if (!unk_0xAF6690C489CC6203(uParam0))
		{
			if (unk_0x7DDF43006A714856(uParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(uParam0)))
				{
					unk_0x73270B3C9CC833FD(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(uParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(uParam0))
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
		if (unk_0x40B8C182D63932FC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
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
	
	iVar0 = unk_0xDA9EEE4F835948F9();
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
				if (!unk_0x8CD06866876216F2())
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
				if (func_8(157))
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
			else if (!unk_0x8FE4F98FD4BE2689())
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
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
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
	else if (!unk_0x8FE4F98FD4BE2689())
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
	return Global_1312854;
}

void func_17()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_18()
{
	unk_0x10FAF14A60A0DBE1();
}

