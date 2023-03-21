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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_74();
	while (true)
	{
		func_73();
		if (func_65())
		{
			func_64();
		}
		if (Global_2501777.f_4867.f_562 == 0)
		{
			func_64();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_64();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2501777.f_4867.f_561;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2501777.f_4867.f_561 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0xD804ACF2A7171150(&(Global_2415153.f_385), uVar0);
	unk_0xD804ACF2A7171150(&(Global_2415153.f_386), iVar0);
	unk_0xD804ACF2A7171150(&(Global_2415153.f_387), iVar0);
	unk_0xD804ACF2A7171150(&(Global_2415153.f_389), iVar0);
	unk_0xD804ACF2A7171150(&(Global_2415153.f_393), iVar0);
	unk_0xD804ACF2A7171150(&(Global_2415153.f_388), iVar0);
}

int func_4(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
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

int func_6()
{
	return -1;
}

bool func_7(bool bParam0)
{
	return func_8(unk_0x3D35F9864E4640B1(), bParam0);
}

int func_8(int iParam0, bool bParam1)
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_6() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2501777.f_4867.f_561;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		func_62(iParam0, 432, 1);
		if (func_61(iParam0))
		{
			func_58(iParam0, func_59(func_60(unk_0x3D35F9864E4640B1())), 1);
		}
		if (func_57(iParam0))
		{
			func_55(iParam0, 1, 1);
		}
		func_52(iParam0, 1);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2434915)
		{
		}
		else if (unk_0xA761A0B6072010C8(Global_2415153[iVar0]))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_367), iVar0);
			unk_0xD804ACF2A7171150(&(Global_2415153.f_372), iVar0);
			unk_0xB989C497205DF6E8(Global_2415153[iVar0], 1);
			unk_0x566B261AFAE1E2C3(Global_2415153[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_372), iVar0);
			}
			else
			{
				Global_2415153.f_198[iVar0] = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam2);
			}
		}
		else
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_367), iVar0);
			unk_0xD804ACF2A7171150(&(Global_2415153.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_372), iVar0);
			}
			else
			{
				Global_2415153.f_198[iVar0] = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0xD804ACF2A7171150(&(Global_2415153.f_367), iVar0);
		unk_0xD804ACF2A7171150(&(Global_2415153.f_372), iVar0);
		if (unk_0xA761A0B6072010C8(Global_2415153[iVar0]))
		{
			func_14(iParam0);
			unk_0xB989C497205DF6E8(Global_2415153[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xA761A0B6072010C8(Global_2415153[iVar0]))
		{
			Global_2415153.f_899[iVar0] = func_15(iParam0);
			unk_0xC5B4383DA70A2C1A(Global_2415153[iVar0], Global_2415153.f_899[iVar0]);
		}
	}
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xA761A0B6072010C8(Global_2415153[iVar0]))
		{
			iVar1 = unk_0x3E891CDE38A0FAFE(Global_2415153[iVar0]);
			if (unk_0x2A3398C6222EB190(Global_2415153.f_383, iVar0) || unk_0x2A3398C6222EB190(Global_2415153.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0x2A3398C6222EB190(Global_2415153.f_368, iVar0) || unk_0x2A3398C6222EB190(Global_2415153.f_367, iVar0)) || unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				return func_49(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_49(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_49(11);
						break;
					
					case 254:
						if (unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(Global_2434915))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 271:
						if (unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(Global_2434915))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_48(Global_2434915, iParam0, -2, 0))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 303:
					case 418:
						return func_49(10);
						break;
					
					case 364:
						if (func_16(Global_2434915, iParam0, 1))
						{
							return func_49(10);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_49(10);
						break;
					
					case 417:
						if (func_16(Global_2434915, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2434915, iParam0, 1))
						{
							return func_49(6);
						}
						else
						{
							return func_49(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (func_19(iParam0, -2, 0, 0) == func_19(iParam1, -2, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_17(func_19(iParam0, -2, 0, 0)) && func_17(func_19(iParam1, -2, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == func_18(1) || iParam0 == func_18(0))
	{
		return 1;
	}
	return 0;
}

int func_18(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_19(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_43(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1641087.f_92322[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_43(unk_0x3D35F9864E4640B1()) || (func_42() && func_41())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
	{
		uVar1 = func_40();
		if (unk_0x76B3C79DE564AFC6(uVar1))
		{
			if (unk_0x972B5786EA49FE1A(uVar1))
			{
				if (unk_0x46E9A8D99AF6D7BC(uVar1) != -1)
				{
					if (func_5(unk_0x46E9A8D99AF6D7BC(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
						{
							if (Global_1641087.f_92322[iParam1] != -1)
							{
								return func_38(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0x46E9A8D99AF6D7BC(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0x46E9A8D99AF6D7BC(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
			{
				if (Global_1641087.f_92322[iParam1] != -1)
				{
					return func_38(iParam1, iParam0, 0);
				}
				else
				{
					return func_20(0, -1, 0);
				}
			}
			else
			{
				return func_20(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
	{
		if (Global_1641087.f_92322[iParam1] != -1)
		{
			return func_38(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)
{
	return func_21(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x80BA8E3CC61A8625(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_18(1);
				}
				else
				{
					return func_18(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
			{
				return func_22(iVar0, iParam2, 1);
			}
			else
			{
				return func_22(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_18(1);
	}
	return func_18(0);
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, iParam1);
	if (func_23(Global_1641087.f_96810))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_23(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8333[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_25(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1593076[iVar2 /*647*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_34())
			{
				iVar3 = func_30(iParam0);
				if (!iVar3 == -1)
				{
					return func_28(iVar3);
				}
			}
			if ((func_48(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_25(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
			{
				return func_27(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574292 && Global_1573831.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_30(iParam0);
	if (!iVar4 == -1)
	{
		return func_28(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_27(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_29(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_29(int iParam0)
{
	return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_30(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_32(iParam0, 1))
		{
			return Global_2416331.f_1947.f_11[func_31(iParam0)];
		}
	}
	return -1;
}

int func_31(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_6();
}

bool func_32(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_33(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_6();
}

int func_33(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_34()
{
	if ((func_37() || func_36()) || func_35())
	{
		return 1;
	}
	return 0;
}

var func_35()
{
	return Global_2445582.f_14;
}

var func_36()
{
	return Global_2445582.f_13;
}

var func_37()
{
	return Global_2445582.f_12;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		iVar1 = func_30(iParam1);
		if (!iVar1 == -1)
		{
			return func_28(iVar1);
		}
	}
	if (Global_1641087.f_92322[iParam0] != -1 && Global_1641087.f_92322[iParam0] <= 4)
	{
		if (Global_1641087.f_92322[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1641087.f_92322[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1641087.f_92322[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1641087.f_92322[iParam0] == 4)
		{
			if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1641087.f_92322[iParam0];
		}
	}
	else
	{
		iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
	{
		iVar0 = func_39(iParam0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1641087.f_116131;
			break;
		
		case 1:
			iVar0 = Global_1641087.f_116132;
			break;
		
		case 2:
			iVar0 = Global_1641087.f_116133;
			break;
		
		case 3:
			iVar0 = Global_1641087.f_116134;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_40()
{
	return Global_2359302.f_2;
}

bool func_41()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_42()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

int func_43(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312735;
}

bool func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(uParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
	}
	return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_51())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_50(iParam0);
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_51()
{
	int iVar0;
	
	iVar0 = unk_0xB5E2A107E006EC7A(Global_2434915);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0x2A3398C6222EB190(Global_1641087.f_96[iVar0 /*9318*/].f_4808, 4);
	}
	return 0;
}

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_807) || Global_2415153.f_807 == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_390), iVar0);
			Global_2415153.f_807 = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_390), iVar0);
			if (Global_2415153.f_390 == 0)
			{
				Global_2415153.f_807 = -1;
			}
		}
	}
}

int func_53()
{
	switch (func_54())
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

int func_54()
{
	return Global_25222;
}

void func_55(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2415153.f_708[iParam0] = unk_0xFFDE6A3A0108B7CB();
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_364), iParam0);
			func_56(iParam0, bParam2);
		}
	}
	else
	{
		func_56(iParam0, bParam2);
		unk_0xD804ACF2A7171150(&(Global_2415153.f_364), iParam0);
		Global_2415153.f_708[iParam0] = -1;
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_365), iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_2415153.f_365), iParam0);
	}
	if (unk_0xA761A0B6072010C8(Global_2415153[iParam0]))
	{
		if (bParam1)
		{
			unk_0xC2001CECF808BD21(Global_2415153[iParam0], 0);
		}
		else
		{
			unk_0xC2001CECF808BD21(Global_2415153[iParam0], 1);
		}
	}
}

int func_57(int iParam0)
{
	if (unk_0xE2F358F9F113BDF1(Global_2415153.f_708[iParam0]))
	{
		if (!Global_2415153.f_708[iParam0] == unk_0xFFDE6A3A0108B7CB())
		{
			return 0;
		}
	}
	return 1;
}

void func_58(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_61(iParam0))
	{
		if (bParam2)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = unk_0xFFDE6A3A0108B7CB();
			Global_2415153.f_444[iVar0] = uParam1;
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = -1;
		}
	}
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xB922891BFD232C45(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 != -1)
	{
		return func_28(iVar0);
	}
	return 1;
}

int func_61(int iParam0)
{
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_609[iParam0]) || Global_2415153.f_609[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_53())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_576[iParam0]) || Global_2415153.f_576[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam2)
		{
			if (!unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_63();
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_411[iVar0] = uVar1;
			Global_2415153.f_576[iParam0] = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_63();
			}
			unk_0xD804ACF2A7171150(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_576[iParam0] = -1;
		}
	}
}

void func_63()
{
	Global_2415153.f_1004 = 1;
}

void func_64()
{
	func_2(Global_2501777.f_4867.f_561);
	unk_0xBEE2834559A8897A();
}

int func_65()
{
	var uVar0;
	
	func_70(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_69())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_68())
	{
		return 1;
	}
	if (func_67(157))
	{
		if (!func_66())
		{
			return 1;
		}
	}
	if (func_67(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_53() != 0)
	{
		if (unk_0x7832F791572D5809(func_53()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_66()
{
	return Global_2445582.f_579;
}

int func_67(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_68()
{
	return Global_2455114;
}

bool func_69()
{
	return Global_2445582.f_574;
}

void func_70(var uParam0)
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
					func_71(iVar0);
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

void func_71(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_5(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(uVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(uVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_72(uVar4, &bVar5))
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

int func_72(var uParam0, var uParam1)
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

void func_73()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_74()
{
	unk_0x0BDEAF4CD9510F40(0);
	return 1;
}

