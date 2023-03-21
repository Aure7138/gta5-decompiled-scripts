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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = -1;
	var uLocal_474 = -1;
	var uLocal_475 = -1;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	int iLocal_484 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_77())
	{
		while (!func_63())
		{
			func_11();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	func_1();
}

void func_1()
{
	unk_0xCE689A8E8C42ED78(&Global_1573968, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	unk_0x5894DC159447E10A();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar4;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar4);
	return (func_6(&sVar0) || func_6(&sVar4));
}

var func_6(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return unk_0x0E4018692D92041D(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_47);
	if (Global_1589667 == unk_0x95B959F18401C09A() && !unk_0x0E4018692D92041D(Global_1686664[unk_0x6B7EE7681161BCAB() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			unk_0x8950ED5730F62EE8(&Global_1573968, 1);
			if ((((((iLocal_484 == 0 && !unk_0x0E4018692D92041D(Global_1686664[unk_0x6B7EE7681161BCAB() /*39*/].f_27, 3)) && !func_16()) && !unk_0xD9C92B0885A075F8()) && !func_15(0)) && !func_14()) && unk_0x5EBE50D55314CEAD(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			unk_0xCE689A8E8C42ED78(&Global_1573968, 1);
		}
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_1573968, 1);
	}
	iLocal_484 = 0;
	if (unk_0x0E4018692D92041D(Global_1686664[unk_0x6B7EE7681161BCAB() /*39*/].f_27, 3))
	{
		unk_0x8950ED5730F62EE8(&iLocal_484, 0);
	}
	if (func_16())
	{
		unk_0x8950ED5730F62EE8(&iLocal_484, 1);
	}
	if (unk_0xD9C92B0885A075F8())
	{
		unk_0x8950ED5730F62EE8(&iLocal_484, 2);
	}
	if (func_14())
	{
		unk_0x8950ED5730F62EE8(&iLocal_484, 4);
	}
	if (func_15(0))
	{
		unk_0x8950ED5730F62EE8(&iLocal_484, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(var uParam0, int iParam1)
{
	unk_0x8950ED5730F62EE8(uParam0, iParam1);
}

bool func_14()
{
	return Global_68807;
}

int func_15(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar16;
	struct<14> Var20;
	struct<3> Var34;
	struct<3> Var37;
	var uVar40;
	int iVar41;
	var uVar42;
	var uVar43;
	
	func_61(iParam0);
	func_59(iParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_58(&(iParam0->f_421), 11);
			func_57(iParam0, 1);
			break;
		
		case 1:
			if (func_56(iParam0))
			{
				iParam0->f_421.f_6 = unk_0xE3903F59E2F22150();
				func_57(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(unk_0x33CD235DF1E6A94E(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_54(iParam0) || func_52(iParam0)) || !func_51(iParam0))
				{
					func_4(iParam0, 1);
					func_57(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((unk_0xE3903F59E2F22150() - iParam0->f_421.f_6) > 150)
					{
						func_50(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (unk_0x833B1A3D9F713E03(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_47(iParam0);
					func_57(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 1);
			}
			break;
		
		case 3:
			func_46(iParam0, &sVar0);
			unk_0x0483D0035D6E46FD(&sVar0);
			if (unk_0xE9CCF312047EBEE0(&sVar0))
			{
				func_57(iParam0, 4);
			}
			break;
		
		case 4:
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20.f_0 != 3)
			{
				Var34 = { unk_0xF666CBF66A90975A(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0, 2) };
				Var37 = { unk_0xFC7404297ED3CF49(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0, 2) };
				uVar40 = Var37.f_2;
				unk_0x2A25AECBD792A364(unk_0x33CD235DF1E6A94E(), Var34, 1f, 500, uVar40, 0.15f);
			}
			func_57(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20.f_0 == 3)
			{
				iVar41 = unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), 1920390111);
			}
			else
			{
				iVar41 = unk_0xD76D6BCC14B95CE1(unk_0x33CD235DF1E6A94E(), 2106541073);
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				iParam0->f_421.f_1 = unk_0x6D57E93CB68152FE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x74E9D455686E1F3A(unk_0x33CD235DF1E6A94E(), iParam0->f_421.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				unk_0x930FB6CDE4B41DD2(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = unk_0xE3903F59E2F22150();
				func_13(&(iParam0->f_421), 8);
				func_57(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_58(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			uVar42 = unk_0x3F2F21BCB3761848(iParam0->f_421.f_1);
			if (unk_0xDB4C79A9697E6A55(uVar42))
			{
				if (unk_0x4EDDCE9AAE0FC976(uVar42) >= 1f)
				{
					func_20(iParam0, 0);
					func_46(iParam0, &sVar0);
					func_45(iParam0, &sVar16);
					iParam0->f_421.f_1 = unk_0x6D57E93CB68152FE(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x74E9D455686E1F3A(unk_0x33CD235DF1E6A94E(), iParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					unk_0x930FB6CDE4B41DD2(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_58(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_57(iParam0, 8);
			}
			break;
		
		case 7:
			unk_0x352A1C032A91CEAD(iParam0->f_421.f_1);
			func_57(iParam0, 8);
			break;
		
		case 8:
			uVar43 = unk_0x3F2F21BCB3761848(iParam0->f_421.f_1);
			if (unk_0xDB4C79A9697E6A55(uVar43))
			{
				if ((unk_0x4EDDCE9AAE0FC976(uVar43) >= 1f || unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), 364629851)) || unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), 2116425869))
				{
					unk_0x352A1C032A91CEAD(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_57(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0x9EC3B269A34A2BEE(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = unk_0xE3903F59E2F22150();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((unk_0xE3903F59E2F22150() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(unk_0x95B959F18401C09A());
}

int func_25(int iParam0)
{
	if (unk_0x541D5C57194E73C4(unk_0x378BD4B3881338C2(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	struct<3> Var0;
	float fVar3;
	
	if (uParam0->f_421.f_4 == 6)
	{
		Var0 = { unk_0xAFD26C4E558D823B(0, 218), unk_0xAFD26C4E558D823B(0, 219), 0f };
		fVar3 = unk_0x652D2EEEF1D3E62C(Var0);
		if ((uParam0->f_421.f_4 == 6 && !unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (unk_0xFBEC827720F84540(unk_0x33CD235DF1E6A94E(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			unk_0x636CEDA67977F07B(2);
			unk_0x3FD9339AA95E323F(0, 24, 1);
			unk_0x3FD9339AA95E323F(0, 257, 1);
			unk_0x3FD9339AA95E323F(0, 142, 1);
			unk_0x3FD9339AA95E323F(0, 141, 1);
			unk_0x3FD9339AA95E323F(0, 140, 1);
			unk_0x3FD9339AA95E323F(0, 263, 1);
			unk_0x3FD9339AA95E323F(0, 264, 1);
			unk_0x3FD9339AA95E323F(0, 143, 1);
			unk_0x3FD9339AA95E323F(2, 200, 1);
			if (((((!unk_0xD9C92B0885A075F8() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_50(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (unk_0x833B1A3D9F713E03(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_58(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)
{
	if (unk_0xCF5490505B6D51BE())
	{
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			if (func_28(unk_0x33CD235DF1E6A94E()))
			{
				if (unk_0xF1CDE9FD207C4CD8(0, 25) || unk_0xF1CDE9FD207C4CD8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (unk_0xF1CDE9FD207C4CD8(0, 19) || (!bParam0 && unk_0x1CAA347A3C84C225(0, 19)))
	{
		return 1;
	}
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (((unk_0xF1CDE9FD207C4CD8(0, 166) || unk_0xF1CDE9FD207C4CD8(0, 167)) || unk_0xF1CDE9FD207C4CD8(0, 168)) || unk_0xF1CDE9FD207C4CD8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x1CAA347A3C84C225(0, 166) || unk_0x1CAA347A3C84C225(0, 167)) || unk_0x1CAA347A3C84C225(0, 168)) || unk_0x1CAA347A3C84C225(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0xF9FB5255747DBE88())
	{
		if (!unk_0xBC2FC12AD0FBF72E(uParam0))
		{
			unk_0x96C4B46F194803A7(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)
{
	char* sVar0;
	char* sVar16;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_46(uParam0, &sVar0);
		func_45(uParam0, &sVar16);
		uParam0->f_421.f_1 = unk_0x6D57E93CB68152FE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x74E9D455686E1F3A(unk_0x33CD235DF1E6A94E(), uParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		unk_0x930FB6CDE4B41DD2(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		unk_0x880B00F3FAE4C022(unk_0x33CD235DF1E6A94E(), 0, 0);
	}
}

void func_32(var uParam0)
{
	char* sVar0;
	
	uParam0->f_421.f_1 = unk_0x6D57E93CB68152FE(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_46(uParam0, &sVar0);
	unk_0x74E9D455686E1F3A(unk_0x33CD235DF1E6A94E(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0x930FB6CDE4B41DD2(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_57(uParam0, 8);
}

void func_33(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			unk_0xE7D91A4B31716AE2();
			unk_0xA50260E689CECD84(0);
			unk_0xEAA05A9FD0B77A1C(0);
			unk_0x581AE7724ACAD410(19);
			unk_0x581AE7724ACAD410(2);
			unk_0x24D7B8D40377D4BF();
			func_37();
			if (unk_0x96C4B46F194803A7(unk_0x33CD235DF1E6A94E(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x274C6068B660FFB4(unk_0x33CD235DF1E6A94E(), joaat("weapon_unarmed"), 1);
			}
			unk_0x3FD9339AA95E323F(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_17272.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2448756.f_33 = 1;
		}
	}
	else
	{
		Global_2448756.f_33 = 0;
	}
}

bool func_36()
{
	return unk_0x0E4018692D92041D(Global_2448756.f_2, 11);
}

void func_37()
{
	unk_0x8950ED5730F62EE8(&Global_2424, 4);
}

void func_38(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_39(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (Global_14725)
	{
		func_41(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_40())
	{
		Global_14553.f_1 = 3;
	}
}

int func_40()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

bool func_42()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

Vector3 func_43(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

Vector3 func_44(var uParam0)
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_45(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_47(var uParam0)
{
	uParam0->f_421.f_8 = func_49((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_48(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_48(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = unk_0x9EC3B269A34A2BEE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0x9EC3B269A34A2BEE(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_49(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = unk_0x8C40DC84EDF05997();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x786AF4A44E1B5B4B(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_51(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF839A4FC3E76D324())
	{
		if (unk_0x1B094AC15936B3DB(unk_0xDD4FFAA17341D382(iVar0)))
		{
			iVar1 = unk_0xEB9DC13235C0B345(unk_0xDD4FFAA17341D382(iVar0));
			if ((iVar1 != unk_0x95B959F18401C09A() && func_53(iVar1, 1, 1)) && func_55(unk_0x378BD4B3881338C2(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xF272A2699B521CE6(iParam0))
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

bool func_54(var uParam0)
{
	return uParam0->f_421 & 31 > 0;
}

bool func_55(var uParam0, var uParam1)
{
	return unk_0xD4B4F68F3449CBEC(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_56(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_55(unk_0x33CD235DF1E6A94E(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_421.f_4 = iParam1;
}

void func_58(var uParam0, int iParam1)
{
	unk_0xCE689A8E8C42ED78(uParam0, iParam1);
}

void func_59(var uParam0)
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		unk_0x2203A4DFB3C360EB(unk_0x33CD235DF1E6A94E());
		unk_0x9DED39101E732CEA(unk_0x33CD235DF1E6A94E(), func_60(uParam0));
		uParam0->f_421.f_7 = unk_0xE77FA521699F639C();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		unk_0x9DED39101E732CEA(unk_0x33CD235DF1E6A94E(), func_60(uParam0));
		uParam0->f_421.f_7 = unk_0xE77FA521699F639C();
	}
	else if ((unk_0xE77FA521699F639C() - uParam0->f_421.f_7) < 5)
	{
		unk_0x9DED39101E732CEA(unk_0x33CD235DF1E6A94E(), func_60(uParam0));
	}
}

float func_60(var uParam0)
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_61(var uParam0)
{
	func_62(&(uParam0->f_421), 4, func_14());
	func_62(&(uParam0->f_421), 1, unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0));
	func_62(&(uParam0->f_421), 3, unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 1));
	func_62(&(uParam0->f_421), 0, func_15(0));
	func_62(&(uParam0->f_421), 2, unk_0x6105CDB23E256B76(unk_0x33CD235DF1E6A94E()));
}

void func_62(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0x8950ED5730F62EE8(uParam0, uVar0);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(uParam0, iVar0);
	}
}

int func_63()
{
	if (!func_76(unk_0x33CD235DF1E6A94E()))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (Global_1589667 == func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	return -1;
}

int func_65()
{
	var uVar0;
	
	func_73(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!unk_0xB331FCEB94EB05C8())
		{
			return 1;
		}
	}
	if (func_72())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	if (func_70(157))
	{
		if (!func_69())
		{
			return 1;
		}
	}
	if (func_70(155))
	{
		return 1;
	}
	if (!unk_0x43E505744A9B715D())
	{
		return 1;
	}
	if (func_66() != 0)
	{
		if (unk_0x1BCDA92AD0A7835B(func_66()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	switch (func_68())
	{
		case 0:
			return func_67();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_67()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_68()
{
	return Global_25765;
}

bool func_69()
{
	return Global_2448756.f_586;
}

int func_70(int iParam0)
{
	if (unk_0x3AE20F34FEE6C258(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_71()
{
	return Global_2458613;
}

bool func_72()
{
	return Global_2448756.f_581;
}

void func_73(var uParam0)
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
					func_74(iVar0);
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

void func_74(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x286A5F0670063839(1, iParam0, &Var0, 3))
	{
		if (func_53(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x378BD4B3881338C2(Var0.f_1);
			if (unk_0x765F6FEEFF39224F(uVar3))
			{
				if (unk_0xF0D230FB550CD6EB(uVar3, 0))
				{
					uVar4 = unk_0xF2C96862595654B4(uVar3, 0);
					if (unk_0x8F6C3DD0BB146CA3(uVar4, Var0.f_2) && unk_0xE36862B47CD70685())
					{
						if (func_75(uVar4, &bVar5))
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

int func_75(var uParam0, var uParam1)
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

bool func_76(var uParam0)
{
	return unk_0xD4B4F68F3449CBEC(uParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, 1, 0);
}

int func_77()
{
	if (Global_1589667 != func_64())
	{
		if (unk_0x6C7B3B04B7D86C9E("base_heist_seats", Global_1589667, 1, 0))
		{
			return 0;
		}
		unk_0x210E46A190FB3CB3(32, 0, Global_1589667);
		func_89(0, -1, 0);
		unk_0x9980AE643A60F372(0);
		func_78();
		return 1;
	}
	return 0;
}

void func_78()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_88() };
	Var3 = { func_87() };
	func_84(0, func_86(343.93f, 4875.389f, -60.44f, -90f), -90f, Var0, Var3);
	func_84(1, func_86(344.08f, 4874.239f, -60.44f, -86f), -86f, Var0, Var3);
	func_84(2, func_86(344.33f, 4873.189f, -60.44f, -78f), -78f, Var0, Var3);
	func_84(3, func_86(344.7f, 4872.239f, -60.44f, -72f), -72f, Var0, Var3);
	func_84(4, func_86(345.06f, 4871.48f, -60.44f, -67f), -67f, Var0, Var3);
	func_84(5, func_86(345.86f, 4870.289f, -60.44f, -60f), -60f, Var0, Var3);
	func_84(6, func_86(350.41f, 4867.05f, -60.44f, -26f), -26f, Var0, Var3);
	func_84(7, func_86(351.51f, 4866.75f, -60.44f, -17f), -17f, Var0, Var3);
	func_84(8, func_86(352.66f, 4866.6f, -60.44f, -10f), -10f, Var0, Var3);
	func_84(9, func_86(353.6f, 4866.58f, -60.44f, -4f), -4f, Var0, Var3);
	func_84(10, func_86(354.7f, 4866.68f, -60.44f, 4f), 4f, Var0, Var3);
	func_84(11, func_86(355.85f, 4866.91f, -60.44f, 10f), 10f, Var0, Var3);
	func_84(12, func_86(346.02f, 4876.871f, -60.838f, -102f), -102f, Var0, Var3);
	func_84(13, func_86(345.97f, 4875.721f, -60.838f, -93f), -93f, Var0, Var3);
	func_84(14, func_86(346.19f, 4874.21f, -60.838f, -81f), -81f, Var0, Var3);
	func_84(15, func_86(346.62f, 4873.01f, -60.838f, -73f), -73f, Var0, Var3);
	func_84(16, func_86(347.27f, 4871.86f, -60.838f, -62f), -62f, Var0, Var3);
	func_84(17, func_86(351.57f, 4868.86f, -60.838f, -20f), -20f, Var0, Var3);
	func_84(18, func_86(352.89f, 4868.65f, -60.838f, -9f), -9f, Var0, Var3);
	func_84(19, func_86(354.17f, 4868.68f, -60.838f, 0f), 0f, Var0, Var3);
	func_84(20, func_86(355.12f, 4868.85f, -60.838f, 10f), 8f, Var0, Var3);
	func_84(21, func_86(356.58f, 4869.38f, -60.838f, 10f), 20f, Var0, Var3);
	func_84(22, func_86(348.2f, 4876.56f, -61.24f, -101f), -101f, Var0, Var3);
	func_84(23, func_86(348.2f, 4875.31f, -61.24f, -88f), -88f, Var0, Var3);
	func_84(24, func_86(348.47f, 4874.28f, -61.24f, -76f), -76f, Var0, Var3);
	func_84(25, func_86(349.17f, 4872.97f, -61.24f, -60f), -60f, Var0, Var3);
	func_84(26, func_86(352.12f, 4870.98f, -61.24f, -20f), -20f, Var0, Var3);
	func_84(27, func_86(353.42f, 4870.84f, -61.24f, -6f), -6f, Var0, Var3);
	func_84(28, func_86(354.67f, 4870.995f, -61.24f, 8f), 8f, Var0, Var3);
	func_84(29, func_86(356.02f, 4871.545f, -61.24f, 25f), 25f, Var0, Var3);
	func_79(&Local_47, 8371);
}

void func_79(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_80(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	bool bVar13;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!unk_0x765F6FEEFF39224F(unk_0x33CD235DF1E6A94E()) || unk_0xD62C4419A41F106A(unk_0x33CD235DF1E6A94E(), 0))
	{
		return 0;
	}
	if (func_83(unk_0x95B959F18401C09A()) || unk_0x0E4018692D92041D(iLocal_484, 0))
	{
		return 0;
	}
	Var0 = { uParam0->f_1 };
	Var3 = { uParam0->f_1.f_3 };
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	Var6 = { func_82(Var0 - Var3) };
	Var9 = { unk_0xB969B7304D29679F(unk_0x33CD235DF1E6A94E()) };
	fVar12 = func_81(Var6, Var9);
	bVar13 = fVar12 > 0.36f;
	return bVar13;
}

float func_81(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_82(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_83(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_53(iParam0, 1, 1))
		{
			if (unk_0x0E4018692D92041D(Global_1686664[iParam0 /*39*/].f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, struct<3> Param8)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { Param1 + func_85(Param5, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { Param1 + func_85(Param8, (fParam4 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { Param1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam4 };
}

Vector3 func_85(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_86(struct<3> Param0, float fParam3)
{
	return Param0 + func_85(0f, 0.01f, 0.015f, fParam3);
}

Vector3 func_87()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_88()
{
	return 0f, 0.1f, 1f;
}

int func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x52119E312E15DB07();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_90())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xB331FCEB94EB05C8())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_72())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_70(155))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_90()
{
	return Global_1312844;
}

