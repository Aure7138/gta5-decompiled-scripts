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
	func_73();
	while (true)
	{
		func_72();
		if (func_64())
		{
			func_63();
		}
		if (Global_2497344.f_4828.f_559 == 0)
		{
			func_63();
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
				func_63();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2497344.f_4828.f_558;
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
	Global_2497344.f_4828.f_558 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0x507FE690B1271947(&(Global_2415029.f_385), uVar0);
	unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
	unk_0x507FE690B1271947(&(Global_2415029.f_387), iVar0);
	unk_0x507FE690B1271947(&(Global_2415029.f_389), iVar0);
	unk_0x507FE690B1271947(&(Global_2415029.f_393), iVar0);
	unk_0x507FE690B1271947(&(Global_2415029.f_388), iVar0);
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
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
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
	return func_8(unk_0x0FFED3E94261A832(), bParam0);
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
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_6() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
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
		iVar0 = Global_2497344.f_4828.f_558;
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
		func_61(iParam0, 432, 1);
		if (func_60(iParam0))
		{
			func_57(iParam0, func_58(func_59(unk_0x0FFED3E94261A832())), 1);
		}
		if (func_56(iParam0))
		{
			func_54(iParam0, 1, 1);
		}
		func_51(iParam0, 1);
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
		if (iParam0 == Global_2434604)
		{
		}
		else if (unk_0xBDD3EABACAB97D09(Global_2415029[iVar0]))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_367), iVar0);
			unk_0x507FE690B1271947(&(Global_2415029.f_372), iVar0);
			unk_0xA4F6216A8431C2E8(Global_2415029[iVar0], 1);
			unk_0x82A336157C4F6E7C(Global_2415029[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2415029.f_372), iVar0);
			}
			else
			{
				Global_2415029.f_198[iVar0] = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam2);
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_367), iVar0);
			unk_0x507FE690B1271947(&(Global_2415029.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2415029.f_372), iVar0);
			}
			else
			{
				Global_2415029.f_198[iVar0] = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_367), iVar0);
		unk_0x507FE690B1271947(&(Global_2415029.f_372), iVar0);
		if (unk_0xBDD3EABACAB97D09(Global_2415029[iVar0]))
		{
			func_14(iParam0);
			unk_0xA4F6216A8431C2E8(Global_2415029[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0xBDD3EABACAB97D09(Global_2415029[iVar0]))
		{
			Global_2415029.f_897[iVar0] = func_15(iParam0);
			unk_0x697F84823ACFF84C(Global_2415029[iVar0], Global_2415029.f_897[iVar0]);
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
		if (unk_0xBDD3EABACAB97D09(Global_2415029[iVar0]))
		{
			iVar1 = unk_0x0C3D8CC190758D96(Global_2415029[iVar0]);
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_383, iVar0) || unk_0xAA4F14DA15DB0B51(Global_2415029.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0xAA4F14DA15DB0B51(Global_2415029.f_368, iVar0) || unk_0xAA4F14DA15DB0B51(Global_2415029.f_367, iVar0)) || unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				return func_48(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_48(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_48(11);
						break;
					
					case 254:
						if (unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(Global_2434604))
						{
							return func_48(6);
						}
						else
						{
							return func_48(5);
						}
						break;
					
					case 271:
						if (unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(Global_2434604))
						{
							return func_48(6);
						}
						else
						{
							return func_48(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_47(Global_2434604, iParam0, -2, 0))
						{
							return func_48(6);
						}
						else
						{
							return func_48(5);
						}
						break;
					
					case 303:
					case 418:
						return func_48(10);
						break;
					
					case 364:
						if (func_16(Global_2434604, iParam0, 1))
						{
							return func_48(10);
						}
						else
						{
							return func_48(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_48(10);
						break;
					
					case 417:
						if (func_16(Global_2434604, iParam0, 1))
						{
							return func_48(6);
						}
						else
						{
							return func_48(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2434604, iParam0, 1))
						{
							return func_48(6);
						}
						else
						{
							return func_48(5);
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
	
	if (func_42(iParam0))
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
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_42(unk_0x0FFED3E94261A832()) || (func_41() && func_40())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_39();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(uVar1))
			{
				if (unk_0xB0BB7458627D389F(uVar1) != -1)
				{
					if (func_5(unk_0xB0BB7458627D389F(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_37(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0xB0BB7458627D389F(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_37(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_37(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)
{
	return func_21(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
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
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
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
	if (func_23(Global_1638223.f_93532))
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
		if (iParam0 == Global_262145.f_7854[iVar0])
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
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
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
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
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
			if ((func_47(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_25(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_27(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
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
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_30(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_32(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_31(iParam0)];
		}
	}
	return -1;
}

int func_31(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
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
	return Global_1622795[iParam0 /*431*/].f_11 != func_6();
}

int func_33(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_6())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_34()
{
	if (func_36() || func_35())
	{
		return 1;
	}
	return 0;
}

var func_35()
{
	return Global_2445217.f_13;
}

var func_36()
{
	return Global_2445217.f_12;
}

int func_37(int iParam0, int iParam1, bool bParam2)
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
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
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
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_38(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
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

var func_39()
{
	return Global_2359301.f_2;
}

bool func_40()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_41()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

int func_42(int iParam0)
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_43())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_45(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
	}
	if (Global_1312832[iVar1] == 1)
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

int func_46()
{
	return Global_1312735;
}

bool func_47(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(uParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_50())
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
	return func_49(iParam0);
}

int func_49(int iParam0)
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

int func_50()
{
	int iVar0;
	
	iVar0 = unk_0x220AE8028FACE96A(Global_2434604);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1638223.f_94[iVar0 /*9207*/].f_4733, 4);
	}
	return 0;
}

void func_51(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_52())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_805) || Global_2415029.f_805 == unk_0xFF09208EC90C94CB())
	{
		if (bParam1)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_390), iVar0);
			Global_2415029.f_805 = unk_0xFF09208EC90C94CB();
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_390), iVar0);
			if (Global_2415029.f_390 == 0)
			{
				Global_2415029.f_805 = -1;
			}
		}
	}
}

int func_52()
{
	switch (func_53())
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

int func_53()
{
	return Global_25222;
}

void func_54(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2415029.f_706[iParam0] = unk_0xFF09208EC90C94CB();
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_364), iParam0);
			func_55(iParam0, bParam2);
		}
	}
	else
	{
		func_55(iParam0, bParam2);
		unk_0x507FE690B1271947(&(Global_2415029.f_364), iParam0);
		Global_2415029.f_706[iParam0] = -1;
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2415029.f_365), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_365), iParam0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_2415029[iParam0]))
	{
		if (bParam1)
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 0);
		}
		else
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 1);
		}
	}
}

int func_56(int iParam0)
{
	if (unk_0xE00BB08A385D5A25(Global_2415029.f_706[iParam0]))
	{
		if (!Global_2415029.f_706[iParam0] == unk_0xFF09208EC90C94CB())
		{
			return 0;
		}
	}
	return 1;
}

void func_57(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_52())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_60(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = uParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_58(int iParam0)
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
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iVar0 != -1)
	{
		return func_28(iVar0);
	}
	return 1;
}

int func_60(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_52())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_62();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_62();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_62()
{
	Global_2415029.f_1002 = 1;
}

void func_63()
{
	func_2(Global_2497344.f_4828.f_558);
	unk_0xA232817B0B36F2E5();
}

int func_64()
{
	var uVar0;
	
	func_69(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_68())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (func_66(157))
	{
		if (!func_65())
		{
			return 1;
		}
	}
	if (func_66(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_52() != 0)
	{
		if (unk_0x09952BA662A7629B(func_52()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_65()
{
	return Global_2445217.f_578;
}

int func_66(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_67()
{
	return Global_2454709;
}

bool func_68()
{
	return Global_2445217.f_573;
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_70(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_70(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_5(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_71(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_71(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_72()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_73()
{
	unk_0xAC09235E2065C253(0);
	return 1;
}

