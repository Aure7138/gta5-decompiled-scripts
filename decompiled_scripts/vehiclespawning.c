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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	struct<3> Local_65 = { 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	Local_65 = { -196.045f, -580.13f, 135.0004f };
	unk_0x53491B90E4FD0E56(800);
	func_20();
	while (true)
	{
		unk_0x8A720CAB8C49754F();
		func_19();
		if (func_7() || uLocal_62)
		{
			func_3();
		}
		if (!iLocal_58)
		{
			if (!iLocal_57 && unk_0x757EF87A33649210())
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Local_65, 1, 0, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_63);
				unk_0x9E632F16E887F781(Local_65, 2500f, 0);
				unk_0x2FB9A57162E54BAB(0);
				iLocal_57 = 1;
			}
			else if (unk_0xEB880D98B5988D0C())
			{
				if (!bLocal_61)
				{
					bLocal_61 = func_2();
				}
				else if (!bLocal_59)
				{
					bLocal_59 = func_1();
				}
				else
				{
					unk_0x82E51BCA72537B6C(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0xC30A04502B3FE8A8(uLocal_64, "garage_decor_01"))
	{
		unk_0x8A12C90BAA1275CC(uLocal_64, "garage_decor_01");
	}
	else
	{
		unk_0xF1ABF0D4BF2D0A54(uLocal_64);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_64 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
	if (unk_0x31609A585163CBAC(uLocal_64))
	{
		if (!iLocal_60)
		{
			unk_0x0007C2367F4F23F3(uLocal_64);
			iLocal_60 = 1;
		}
		else if (unk_0xBD307E66C0669BFC(uLocal_64))
		{
			unk_0x25BB71BA267FE042(uLocal_64);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0x28E5F00F131890E3((unk_0x11225ACFD0C1477E(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		uVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&uVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_15(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2463024)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_30768;
}

bool func_11()
{
	return Global_2450632.f_598;
}

int func_12(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2460680;
}

bool func_14()
{
	return Global_2450632.f_593;
}

void func_15(var uParam0)
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
					func_16(iVar0);
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

void func_16(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 3))
	{
		if (func_18(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x9539D44F3E4492F6(Var0.f_1);
			if (unk_0xC844350D5D58C99A(uVar3))
			{
				if (unk_0x405E212DDE472467(uVar3, 0))
				{
					uVar4 = unk_0x6937EA2286828455(uVar3, 0);
					if (unk_0xD6CC9546EDEF00CE(uVar4, Var0.f_2) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_17(uVar4, &bVar5))
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

int func_17(var uParam0, var uParam1)
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

int func_18(var uParam0, bool bParam1, bool bParam2)
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

void func_19()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_20()
{
	unk_0x37AD2AB54480FA6A(32, 0, -1);
	func_22(0, -1, 0);
	unk_0x9752E7BAEABA939E(&uLocal_35, 21);
	if (!func_21())
	{
		func_3();
	}
	unk_0x256D93AFAE851A7A(0);
	if (!unk_0xBCFF5481C5F58C19("imp_dt1_02_cargarage_a"))
	{
		unk_0x2404539258C5376B("imp_dt1_02_cargarage_a");
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
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
					func_4();
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
				func_4();
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
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23()
{
	return Global_1312854;
}

