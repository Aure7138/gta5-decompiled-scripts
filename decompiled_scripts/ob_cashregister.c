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
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_1366078, 1))
		{
			func_17();
		}
		else
		{
			unk_0x3C5BEC9CD4A5F148(32, 0, -1);
			func_14(0, -1, 0);
			unk_0x0BDEAF4CD9510F40(0);
			iLocal_22 = 1;
		}
	}
	else if (unk_0xB9B05E900D325C36(2))
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
		if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
		{
			if (unk_0x4673A7E6EA033947(uScriptParam_0))
			{
				switch (iLocal_18)
				{
					case 0:
						if (unk_0x2E09710078322CDE(uScriptParam_0))
						{
							Local_19 = { unk_0xF177E0DA126D71C8(uScriptParam_0, 1) };
							iLocal_18 = 1;
						}
						break;
					
					case 1:
						if ((unk_0xF81B898A82D4F5CB(uScriptParam_0) && unk_0x8CAADD2AA5EDCAAC(uScriptParam_0)) && !unk_0xCC234795142FC2D2(uScriptParam_0))
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
	iVar3 = unk_0x3AF262D7332EEDF5(70, 121);
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0x3AF262D7332EEDF5(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	unk_0xCD7E92DE2BFA0B0D(&uVar2, 3);
	unk_0xCD7E92DE2BFA0B0D(&uVar2, 4);
	unk_0xBE91026C1FC72180(iVar0);
	while (!unk_0x772F801619C83779(iVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4BE9AB39547B4323(iVar1, unk_0x25EAC857A309B627(Local_19, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
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
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2457338)
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
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x7832F791572D5809(func_4()) == 0)
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
	return Global_25222;
}

bool func_6()
{
	return Global_2445582.f_579;
}

int func_7(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2455114;
}

bool func_9()
{
	return Global_2445582.f_574;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_11(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
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
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(uVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(uVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(var uParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(uParam0))
		{
			if (unk_0x8D0F418585E0886B(uParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(uParam0)))
				{
					unk_0x1581691D748490F3(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(uParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(uParam0))
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
		if (unk_0x80BA8E3CC61A8625(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
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
	
	iVar0 = unk_0xF5343104BDF6779F();
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
				if (!unk_0x27CA09C6DFAB1E79())
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
			else if (!unk_0x8B05DA934032590D())
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
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
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
	else if (!unk_0x8B05DA934032590D())
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
	return Global_1312830;
}

void func_16()
{
	unk_0xBEE2834559A8897A();
}

void func_17()
{
	unk_0xBEE2834559A8897A();
}

