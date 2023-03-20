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
	func_71();
	while (true)
	{
		func_70();
		if (func_62())
		{
			func_61();
		}
		if (Global_2494149.f_4710.f_556 == 0)
		{
			func_61();
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
				func_61();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2494149.f_4710.f_555;
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
	Global_2494149.f_4710.f_555 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_385), uVar0);
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_386), iVar0);
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_387), iVar0);
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_389), iVar0);
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_393), iVar0);
	unk_0x4EA098C870B73AB7(&(Global_2414704.f_388), iVar0);
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
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
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
	return func_8(unk_0xFB6B3EEFAB2DD12C(), bParam0);
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
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_6() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_6())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
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
		iVar0 = Global_2494149.f_4710.f_555;
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
		func_59(iParam0, 432, 1);
		if (func_58(iParam0))
		{
			func_55(iParam0, func_56(func_57(unk_0xFB6B3EEFAB2DD12C())), 1);
		}
		if (func_54(iParam0))
		{
			func_52(iParam0, 1, 1);
		}
		func_49(iParam0, 1);
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
		if (iParam0 == Global_2433082)
		{
		}
		else if (unk_0x6901135DDCC4904D(Global_2414704[iVar0]))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_367), iVar0);
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_372), iVar0);
			unk_0x5AF5569613C76AC3(Global_2414704[iVar0], 1);
			unk_0x2B85679F97C264B6(Global_2414704[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0xB8A73E7DA87B2968(&(Global_2414704.f_372), iVar0);
			}
			else
			{
				Global_2414704.f_198[iVar0] = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam2);
			}
		}
		else
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_367), iVar0);
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0xB8A73E7DA87B2968(&(Global_2414704.f_372), iVar0);
			}
			else
			{
				Global_2414704.f_198[iVar0] = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_367), iVar0);
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_372), iVar0);
		if (unk_0x6901135DDCC4904D(Global_2414704[iVar0]))
		{
			func_14(iParam0);
			unk_0x5AF5569613C76AC3(Global_2414704[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x6901135DDCC4904D(Global_2414704[iVar0]))
		{
			Global_2414704.f_895[iVar0] = func_15(iParam0);
			unk_0x0D792BA553E57B27(Global_2414704[iVar0], Global_2414704.f_895[iVar0]);
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
		if (unk_0x6901135DDCC4904D(Global_2414704[iVar0]))
		{
			iVar1 = unk_0x9DE1E8EC06D38FE1(Global_2414704[iVar0]);
			if (unk_0xF44A5E894FE76438(Global_2414704.f_383, iVar0) || unk_0xF44A5E894FE76438(Global_2414704.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0xF44A5E894FE76438(Global_2414704.f_368, iVar0) || unk_0xF44A5E894FE76438(Global_2414704.f_367, iVar0)) || unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				return func_46(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_46(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_46(11);
						break;
					
					case 254:
						if (unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(Global_2433082))
						{
							return func_46(6);
						}
						else
						{
							return func_46(5);
						}
						break;
					
					case 271:
						if (unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(Global_2433082))
						{
							return func_46(6);
						}
						else
						{
							return func_46(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_45(Global_2433082, iParam0, -2, 0))
						{
							return func_46(6);
						}
						else
						{
							return func_46(5);
						}
						break;
					
					case 303:
					case 418:
						return func_46(10);
						break;
					
					case 364:
						if (func_16(Global_2433082, iParam0, 1))
						{
							return func_46(10);
						}
						else
						{
							return func_46(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
						return func_46(10);
						break;
					
					case 417:
						if (func_16(Global_2433082, iParam0, 1))
						{
							return func_46(6);
						}
						else
						{
							return func_46(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2433082, iParam0, 1))
						{
							return func_46(6);
						}
						else
						{
							return func_46(5);
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
	
	if (func_40(iParam0))
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
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_40(unk_0xFB6B3EEFAB2DD12C()) || (func_39() && func_38()))
	{
		uVar1 = func_37();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(uVar1))
			{
				if (unk_0x61263E0F7C8C9996(uVar1) != -1)
				{
					if (func_5(unk_0x61263E0F7C8C9996(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_35(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0x61263E0F7C8C9996(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_35(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_35(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)
{
	return func_21(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
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
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
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
	if (func_23(Global_1632166.f_86360))
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
		if (iParam0 == Global_262145.f_7770[iVar0])
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
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
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
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
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
			if ((func_45(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_25(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_27(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
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
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_30(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_32(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_31(iParam0)];
		}
	}
	return -1;
}

int func_31(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
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
	return Global_1618089[iParam0 /*390*/].f_11 != func_6();
}

int func_33(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_6())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_2443089.f_12;
}

int func_35(int iParam0, int iParam1, bool bParam2)
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
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
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
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_36(iParam0);
	}
	return iVar0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
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

var func_37()
{
	return Global_2359301.f_2;
}

bool func_38()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_39()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

int func_40(int iParam0)
{
	if (func_42(iParam0, 0))
	{
		return 1;
	}
	if (func_41())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_41()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

bool func_42(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_43(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_44();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_44()
{
	return Global_1312731;
}

bool func_45(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(uParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_48())
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
	return func_47(iParam0);
}

int func_47(int iParam0)
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

int func_48()
{
	int iVar0;
	
	iVar0 = unk_0x2A7336F1C6B39623(Global_2433082);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xF44A5E894FE76438(Global_1632166.f_91[iVar0 /*8128*/].f_4332, 4);
	}
	return 0;
}

void func_49(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_50())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x597C1E51157E5516(Global_2414704.f_803) || Global_2414704.f_803 == unk_0x3ED6DDB11A7AD67F())
	{
		if (bParam1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_390), iVar0);
			Global_2414704.f_803 = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_390), iVar0);
			if (Global_2414704.f_390 == 0)
			{
				Global_2414704.f_803 = -1;
			}
		}
	}
}

int func_50()
{
	switch (func_51())
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

int func_51()
{
	return Global_25185;
}

void func_52(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2414704.f_704[iParam0] = unk_0x3ED6DDB11A7AD67F();
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_364), iParam0);
			func_53(iParam0, bParam2);
		}
	}
	else
	{
		func_53(iParam0, bParam2);
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_364), iParam0);
		Global_2414704.f_704[iParam0] = -1;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_2414704.f_365), iParam0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_2414704.f_365), iParam0);
	}
	if (unk_0x6901135DDCC4904D(Global_2414704[iParam0]))
	{
		if (bParam1)
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 0);
		}
		else
		{
			unk_0x1F68B881D24C6117(Global_2414704[iParam0], 1);
		}
	}
}

int func_54(int iParam0)
{
	if (unk_0x597C1E51157E5516(Global_2414704.f_704[iParam0]))
	{
		if (!Global_2414704.f_704[iParam0] == unk_0x3ED6DDB11A7AD67F())
		{
			return 0;
		}
	}
	return 1;
}

void func_55(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_50())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_58(iParam0))
	{
		if (bParam2)
		{
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = unk_0x3ED6DDB11A7AD67F();
			Global_2414704.f_440[iVar0] = uParam1;
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_386), iVar0);
			Global_2414704.f_605[iParam0] = -1;
		}
	}
}

int func_56(int iParam0)
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
	unk_0xC163336F8C5EA891(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 != -1)
	{
		return func_28(iVar0);
	}
	return 1;
}

int func_58(int iParam0)
{
	if (!unk_0x597C1E51157E5516(Global_2414704.f_605[iParam0]) || Global_2414704.f_605[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) == func_50())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x597C1E51157E5516(Global_2414704.f_572[iParam0]) || Global_2414704.f_572[iParam0] == unk_0x3ED6DDB11A7AD67F())
	{
		if (bParam2)
		{
			if (!unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_60();
			}
			unk_0xB8A73E7DA87B2968(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_407[iVar0] = uVar1;
			Global_2414704.f_572[iParam0] = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			if (unk_0xF44A5E894FE76438(Global_2414704.f_385, iVar0))
			{
				func_60();
			}
			unk_0x4EA098C870B73AB7(&(Global_2414704.f_385), iVar0);
			Global_2414704.f_572[iParam0] = -1;
		}
	}
}

void func_60()
{
	Global_2414704.f_995 = 1;
}

void func_61()
{
	func_2(Global_2494149.f_4710.f_555);
	unk_0x01DFCA3621B68C4A();
}

int func_62()
{
	bool bVar0;
	var uVar1;
	
	func_67(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_66())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (func_64(157))
	{
		if (!func_63())
		{
			return 1;
		}
	}
	if (func_64(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_50() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_50()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_63()
{
	return Global_2443089.f_577;
}

int func_64(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_2452479;
}

bool func_66()
{
	return Global_2443089.f_572;
}

void func_67(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_68(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_68(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_5(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(uVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_69(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_69(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_70()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_71()
{
	unk_0x7E85CEE862B85A74(0);
	return 1;
}

