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
	func_69();
	while (true)
	{
		func_68();
		if (func_60())
		{
			func_59();
		}
		if (Global_2482149.f_4698.f_552 == 0)
		{
			func_59();
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
				func_59();
				break;
		}
	}
}

int func_1()
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2482149.f_4698.f_551;
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
	Global_2482149.f_4698.f_551 = func_6();
}

void func_3(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), uVar0);
	unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
	unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_387), iVar0);
	unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_388), iVar0);
	unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_392), iVar0);
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
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
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
	return func_8(unk_0x0C1D3C552325765B(), bParam0);
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
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_6() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_6())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
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
		iVar0 = Global_2482149.f_4698.f_551;
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
		func_57(iParam0, 432, 1);
		if (func_56(iParam0))
		{
			func_53(iParam0, func_54(func_55(unk_0x0C1D3C552325765B())), 1);
		}
		if (func_52(iParam0))
		{
			func_50(iParam0, 1, 1);
		}
		func_47(iParam0, 1);
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
		if (iParam0 == Global_2432628)
		{
		}
		else if (unk_0x16833EFAA58E63DB(Global_2414657[iVar0]))
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_367), iVar0);
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_372), iVar0);
			unk_0x3AE9C8E8575D2576(Global_2414657[iVar0], 1);
			unk_0x75BF2D22E6E52160(Global_2414657[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				unk_0x88B0F0DC270164B7(&(Global_2414657.f_372), iVar0);
			}
			else
			{
				Global_2414657.f_198[iVar0] = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam2);
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_367), iVar0);
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0x88B0F0DC270164B7(&(Global_2414657.f_372), iVar0);
			}
			else
			{
				Global_2414657.f_198[iVar0] = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_367), iVar0);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_372), iVar0);
		if (unk_0x16833EFAA58E63DB(Global_2414657[iVar0]))
		{
			func_14(iParam0);
			unk_0x3AE9C8E8575D2576(Global_2414657[iVar0], 0);
		}
	}
}

void func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (unk_0x16833EFAA58E63DB(Global_2414657[iVar0]))
		{
			Global_2414657.f_825[iVar0] = func_15(iParam0);
			unk_0x420759DE4A6A9555(Global_2414657[iVar0], Global_2414657.f_825[iVar0]);
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
		if (unk_0x16833EFAA58E63DB(Global_2414657[iVar0]))
		{
			iVar1 = unk_0xE2D4B51819FD3439(Global_2414657[iVar0]);
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_383, iVar0) || unk_0x08BA6DD398CA197C(Global_2414657.f_382, iVar0))
			{
				return 1;
			}
			else if ((unk_0x08BA6DD398CA197C(Global_2414657.f_368, iVar0) || unk_0x08BA6DD398CA197C(Global_2414657.f_367, iVar0)) || unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				return func_44(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_44(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_44(11);
						break;
					
					case 254:
						if (unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(Global_2432628))
						{
							return func_44(6);
						}
						else
						{
							return func_44(5);
						}
						break;
					
					case 271:
						if (unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(Global_2432628))
						{
							return func_44(6);
						}
						else
						{
							return func_44(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_43(Global_2432628, iParam0, -2, 0))
						{
							return func_44(6);
						}
						else
						{
							return func_44(5);
						}
						break;
					
					case 303:
					case 418:
						return func_44(10);
						break;
					
					case 364:
						if (func_16(Global_2432628, iParam0, 1))
						{
							return func_44(10);
						}
						else
						{
							return func_44(5);
						}
						break;
					
					case 478:
						return func_44(10);
						break;
					
					case 417:
						if (func_16(Global_2432628, iParam0, 1))
						{
							return func_44(6);
						}
						else
						{
							return func_44(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_16(Global_2432628, iParam0, 1))
						{
							return func_44(6);
						}
						else
						{
							return func_44(5);
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
	
	if (func_38(iParam0))
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
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_38(unk_0x0C1D3C552325765B()) || (func_37() && func_36()))
	{
		uVar1 = func_35();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(uVar1))
			{
				if (unk_0xA43666ACD375E339(uVar1) != -1)
				{
					if (func_5(unk_0xA43666ACD375E339(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_34(iParam1, iParam0, 0);
							}
							else
							{
								return func_26(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_26(iParam0, unk_0xA43666ACD375E339(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_34(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_34(iParam1, iParam0, 0);
		}
		else
		{
			return func_26(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_26(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_20(bool bParam0, int iParam1, bool bParam2)
{
	return func_21(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_25(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
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
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
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
	if (func_23(Global_1626500.f_83867))
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
		if (iParam0 == Global_262145.f_7751[iVar0])
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
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
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_43(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_25(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_18(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_33(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_18(1);
			}
			else
			{
				return func_21(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_29(iParam0);
	if (!iVar3 == -1)
	{
		return func_27(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_28(iParam0);
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

var func_28(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_29(int iParam0)
{
	if (!iParam0 == func_6())
	{
		if (func_31(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_30(iParam0)];
		}
	}
	return -1;
}

int func_30(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_6();
}

bool func_31(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_32(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_6();
}

int func_32(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_6())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_33(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_21(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_35()
{
	return Global_2359301.f_2;
}

bool func_36()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_37()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_38(int iParam0)
{
	if (func_40(iParam0, 0))
	{
		return 1;
	}
	if (func_39())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
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

int func_42()
{
	return Global_1312731;
}

bool func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(uParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_46())
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
	return func_45(iParam0);
}

int func_45(int iParam0)
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

int func_46()
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(Global_2432628);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0x08BA6DD398CA197C(Global_1626500.f_89[iVar0 /*7777*/].f_4296, 4);
	}
	return 0;
}

void func_47(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_48())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_733) || Global_2414657.f_733 == unk_0xEAE20F1125B83888())
	{
		if (bParam1)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_389), iVar0);
			Global_2414657.f_733 = unk_0xEAE20F1125B83888();
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_389), iVar0);
			if (Global_2414657.f_389 == 0)
			{
				Global_2414657.f_733 = -1;
			}
		}
	}
}

int func_48()
{
	switch (func_49())
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

int func_49()
{
	return Global_25185;
}

void func_50(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_5(iParam0, 1, 1))
		{
			Global_2414657.f_634[iParam0] = unk_0xEAE20F1125B83888();
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_364), iParam0);
			func_51(iParam0, bParam2);
		}
	}
	else
	{
		func_51(iParam0, bParam2);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_364), iParam0);
		Global_2414657.f_634[iParam0] = -1;
	}
}

void func_51(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_2414657.f_365), iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_365), iParam0);
	}
	if (unk_0x16833EFAA58E63DB(Global_2414657[iParam0]))
	{
		if (bParam1)
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 0);
		}
		else
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 1);
		}
	}
}

int func_52(int iParam0)
{
	if (unk_0x96549B1C2E196049(Global_2414657.f_634[iParam0]))
	{
		if (!Global_2414657.f_634[iParam0] == unk_0xEAE20F1125B83888())
		{
			return 0;
		}
	}
	return 1;
}

void func_53(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_48())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_56(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = uParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_54(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (iVar0 != -1)
	{
		return func_27(iVar0);
	}
	return 1;
}

int func_56(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_48())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_58();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_58();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_58()
{
	Global_2414657.f_923 = 1;
}

void func_59()
{
	func_2(Global_2482149.f_4698.f_551);
	unk_0x78C587487CD40B92();
}

int func_60()
{
	bool bVar0;
	var uVar1;
	
	func_65(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_64())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_63())
	{
		return 1;
	}
	if (func_62(157))
	{
		if (!func_61())
		{
			return 1;
		}
	}
	if (func_62(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_48() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_48()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_61()
{
	return Global_2442442.f_576;
}

int func_62(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_63()
{
	return Global_2451777;
}

bool func_64()
{
	return Global_2442442.f_571;
}

void func_65(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_66(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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

void func_66(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_5(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(uVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(uVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_67(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_67(var uParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(uParam0))
		{
			if (unk_0x7DF3EE9F5A826186(uParam0))
			{
				unk_0x7B17650F15A8876D(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(uParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_68()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_69()
{
	unk_0x401559486BCA4D9B(0);
	return 1;
}

