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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<65> Local_99 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_164[32];
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<3> Local_360 = { 0, 0, 0 } ;
	struct<8> Local_363[15];
	struct<3> Local_484 = { 0, 0, 0 } ;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	struct<3> Local_499 = { 0, 0, 0 } ;
	struct<3> Local_502 = { 0, 0, 0 } ;
	var uLocal_505 = 0;
	int iLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	Local_360 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_492 = -1;
	iLocal_493 = -1;
	iLocal_495 = -1;
	iLocal_496 = -1;
	if (unk_0xA86CA03D9749EEB3() && func_930(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_916(ScriptParam_0);
	}
	else
	{
		func_871();
	}
	while (true)
	{
		func_870();
		if (func_863())
		{
			func_871();
		}
		else if (func_860())
		{
			func_871();
		}
		Global_1750569.f_2 = Local_99.f_63;
		Global_1750569.f_3 = Local_99.f_64;
		switch (func_859(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_858() == 1)
				{
					if (func_857())
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
						{
						}
						func_856();
						if (func_855())
						{
							func_841(159, 1, -1, 1);
							unk_0x671810EE85FFCDFC(1);
						}
						else
						{
							func_841(159, 0, -1, 1);
							if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
							{
								unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
							}
						}
						if (func_840() == 1)
						{
							unk_0x28F28FA21E7B496C("CS3_07_MPGates");
							unk_0x88B0F0DC270164B7(&uLocal_357, 4);
							unk_0x3607936F13065720(joaat("rhino"), 1);
						}
						else if (func_840() == 2)
						{
							func_839();
						}
						else if (func_840() == 3)
						{
							func_838();
						}
						if (func_837(1))
						{
							unk_0x88B0F0DC270164B7(&uLocal_358, 5);
						}
						if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
						{
							unk_0xB996664170D83289(unk_0x9C16D1E97E386176(Local_99.f_12), 1200);
						}
						func_836();
						func_829();
						Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 1;
					}
				}
				else if (func_858() == 4)
				{
					Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_858() == 1)
				{
					func_828();
					func_820();
					func_349();
					func_344();
					if (func_855() || func_343())
					{
						func_193(&(Global_1332731.f_527), &Global_1332731, 24, &(Global_1332731.f_1), &(Global_1332731.f_110), -1, 0);
					}
				}
				else if (func_858() == 4)
				{
					Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 3;
				}
				func_192();
				break;
			
			case 3:
				func_191(&(Local_99.f_52));
				if (func_190(&(Local_99.f_52)))
				{
					Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 4;
				}
				func_192();
				break;
			
			case 2:
				func_192();
				Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 4;
			
			case 4:
				func_871();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_858())
			{
				case 0:
					if (func_840() != -1)
					{
						if ((func_180() && func_44()) && func_26())
						{
							func_25();
							func_23();
							if (func_840() == 3)
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 6);
							}
							Local_99.f_0 = 1;
							Local_99.f_8 = unk_0x848AF823A8EA3C62();
							Local_99.f_9 = unk_0x0C1D3C552325765B();
							func_841(159, 1, -1, 1);
							unk_0xB21EB307350F5CA1(&(Local_99.f_63), &(Local_99.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_99.f_0 = 4;
					}
					else if (func_1())
					{
						Local_99.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_99.f_51 > 0)
	{
		if (Local_99.f_0 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_99.f_51)
	{
		case 0:
			Local_99.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 7))
			{
				Local_99.f_51 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 20))
			{
				if (Local_99.f_5 != -1)
				{
					Local_99.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_13[0]))
				{
					if (func_10(Local_99.f_13[0]))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()
{
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 20))
		{
			if (!func_9(&(Local_99.f_60)))
			{
				func_8(&(Local_99.f_60), 0, 0);
			}
			else if (func_6(&(Local_99.f_60), func_7(), 0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_99.f_54)))
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
		{
			func_8(&(Local_99.f_54), 0, 0);
		}
	}
	else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				if (func_6(&(Local_99.f_54), func_12(), 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_10881;
}

void func_13()
{
	int iVar0;
	
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_99.f_35[iVar0])
		{
			case 0:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iVar0]))
				{
					if (func_840() != 2)
					{
						Local_99.f_35[iVar0] = 3;
					}
					else
					{
						Local_99.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 11))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 12))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
				{
					Local_99.f_35[iVar0] = 3;
				}
				else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 14))
				{
					Local_99.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Local_99.f_0 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = unk_0x81C85E54237F8A2E(iVar3);
			if (unk_0xCB129F9A01D14082(iVar4))
			{
				if (unk_0x3F3C7C3B52DD0ECA(iVar4))
				{
					iLocal_359 = unk_0x9259DE19D910276C(iVar4);
					if (func_930(iVar4, 1, 1))
					{
						func_15(iLocal_359, 0);
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 2);
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 7))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 7))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 7);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 11))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 12))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 11);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 12))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 13))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 12);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 14))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 13);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 14))
					{
						if (Local_164[iLocal_359 /*6*/].f_2 != 0)
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_359;
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
						{
							if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 3))
							{
								Local_99.f_6 = iVar4;
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_359;
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 9))
						{
							Local_99.f_6 = iVar4;
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 8);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 10))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 11))
						{
							if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 5))
							{
								Local_99.f_6 = iVar4;
							}
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 10);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 15))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 15))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 15);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
					{
						if (unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 16))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 18);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 3)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 4)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 9)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 10)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 15)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
							{
								if (!unk_0x08BA6DD398CA197C(Local_164[iLocal_359 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
				{
					if (Local_99.f_9 > -1)
					{
						if (iVar3 == Local_99.f_9)
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 5);
						}
					}
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (Local_99.f_9 > -1)
				{
					if (iVar3 == Local_99.f_9)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
			{
				if (Local_99.f_5 != iVar0)
				{
					Local_99.f_5 = iVar0;
					if (Local_99.f_5 == -1)
					{
					}
					else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 16);
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
		{
			if (Local_99.f_7 != iVar1)
			{
				Local_99.f_7 = iVar1;
				if (Local_99.f_7 == -1)
				{
				}
				else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 16);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 0))
		{
			if (!bVar2)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_840() == 1)
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_2, iParam0))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_29[iParam1]))
			{
				if (func_21(Local_99.f_29[iParam1]))
				{
					iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_99.f_9 > -1)
					{
						iVar1 = unk_0x81C85E54237F8A2E(Local_99.f_9);
						if (unk_0xCB129F9A01D14082(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						unk_0x93456C539FCB41E2(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam1]), iVar0, 1);
						unk_0x88B0F0DC270164B7(&(Local_99.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_18())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_18())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_18())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_22(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_22(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 17))
	{
		Var0 = { 200f, 200f, 200f };
		Var3 = { func_24() };
		unk_0xE4EC3FD6A99953E8(Var3 - Var0, Var3 + Var0, 0, 1);
		unk_0x88B0F0DC270164B7(&(Local_99.f_1), 17);
	}
}

Vector3 func_24()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_840();
	iVar1 = func_25();
	Var2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					Var2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					Var2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					Var2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					Var2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					Var2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					Var2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					Var2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					Var2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					Var2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					Var2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					Var2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					Var2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return Var2;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_4 != -1)
	{
		return Local_99.f_4;
	}
	iVar0 = 0;
	iVar1 = func_840();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0xB5BF1B58C833F7A9(0, 3);
			break;
	}
	Local_99.f_4 = iVar0;
	return Local_99.f_4;
}

int func_26()
{
	switch (Local_99.f_3)
	{
		case 1:
			func_28(0, joaat("rhino"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("fbi"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("superd"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("hexer"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("hexer"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	switch (func_840())
	{
		case 1:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_29[iParam0]))
	{
		unk_0x491067A8E906F22D(iParam1);
		if (unk_0x2C1B5A0D3E233FC3(iParam1))
		{
			if (unk_0x420841F5621E7397(0, 1, 0, 0))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_10, iParam0))
				{
					unk_0x0B17BC5D018E224B(Param2, 5f, 1, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&(Local_99.f_10), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_99.f_29[iParam0]), iParam1, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0))
					{
						unk_0x93399EEBD0090AD6(unk_0x63CE7A3848B84093(Local_99.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 2);
						}
						else
						{
							unk_0xB032923150355520(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1);
						}
						unk_0xC00E0AC91B7F5055(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1);
						unk_0xF369791429FC3437(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 0);
						unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 0, 0);
						unk_0x97F99A3B6E025DD2(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1);
						unk_0xBB21B5C3111E5F85(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 0);
						unk_0x694EF7CD95D5BD27(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1);
						unk_0x64EB89F75844C12B(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]));
						unk_0x6F40E1EE32FE6A5E(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1, 1, 0);
						unk_0xB16B53F6FE1ADDB6(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 1);
						unk_0xCF3E72E81E9E1684(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), 0);
						if (func_840() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = unk_0xBBDA792448DB5A89(unk_0xC6FE0F623405BFA8(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0x63F91492C8440A2E(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), unk_0xF2DB717A73826179(fVar0));
								unk_0xFE9791BE61B48751(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), fVar0);
								unk_0x63CAEF48CD3CA460(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), fVar0);
								unk_0xA0BCF2878D04DC73(unk_0x15F0E6D5AC2852F1(Local_99.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_10887;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_31(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_38(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_32(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993.f_2++;
	return 1;
}

int func_32(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_930(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_37(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_930(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_33(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312731;
}

Vector3 func_37(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_38(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_930(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam9) && bParam6) && func_39(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_37(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (func_43(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_42(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_40(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_41(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_41(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_18();
}

struct<13> func_42(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_43(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_42(iParam0) };
		Global_2471207 = { func_42(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_44()
{
	switch (Local_99.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_45(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_45(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<26> Var1;
	struct<3> Var27;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_25 = -1082130432;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		unk_0x491067A8E906F22D(iVar0);
		if (unk_0x2C1B5A0D3E233FC3(iVar0))
		{
			if (unk_0x3F3BAB8BAD281B17(1))
			{
				Var27 = { func_179() };
				if (!func_9(&(Local_99.f_58)))
				{
					func_8(&(Local_99.f_58), 0, 0);
				}
				if (func_46(Var27, 5f, &Local_484, &uLocal_487, Var1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 19))
				{
					if (unk_0x08BA6DD398CA197C(Local_99.f_1, 19))
					{
						Local_484 = { Var27 };
					}
					Local_99.f_12 = unk_0xDA9308553DFB8112(unk_0x6EAE5EC14334B4B0(joaat("pickup_portable_crate_fixed_incar"), Local_484, 1, iVar0));
					unk_0x748B0DC6DACDF341(Local_99.f_12, 1);
					unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_99.f_12), Local_484 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					unk_0x2C07692AA3545079(iVar0);
					unk_0x39800A40136ECF37(unk_0x9C16D1E97E386176(Local_99.f_12), 1);
					unk_0xB16B53F6FE1ADDB6(unk_0x9C16D1E97E386176(Local_99.f_12), 1);
					if (bParam0)
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iParam1]))
						{
							if (!func_10(Local_99.f_13[iParam1]))
							{
								unk_0x4E1BC01620B4FBEA(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0x564EAE6038A81C07(Local_99.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_99.f_12), Var27 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 19))
				{
					if (func_6(&(Local_99.f_58), 15000, 0))
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 19);
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var44;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_47(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var44 = { Param0 - Var0[0 /*3*/] };
			if (Var44.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_47(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404993.f_2017 == *uParam0 || !Global_2404993.f_2017.f_1 == uParam0->f_1) || !Global_2404993.f_2017.f_2 == uParam0->f_2) || !Global_2404993.f_2020 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404993.f_2031 == uParam0->f_8 || !Global_2404993.f_2031.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_2031.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_2034 == uParam0->f_11) || !Global_2404993.f_2034.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_2034.f_2 == uParam0->f_11.f_2) || !Global_2404993.f_2037 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404993.f_2015 == 1)
		{
			if (unk_0x96549B1C2E196049(Global_2404993.f_2024))
			{
				if (Global_2404993.f_2024 == unk_0xEAE20F1125B83888())
				{
					if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_178(0))
					{
						return 0;
					}
				}
				else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) < func_178(0))
				{
					return 0;
				}
			}
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_177();
		}
		Global_2404993.f_2015 = 0;
	}
	else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2021) > func_178(0))
	{
		Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x33E1C85069157293(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404993.f_2015)
	{
		unk_0x58F8817BD61C43C0();
		unk_0xB0C9486E4E778206();
		func_177();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_31(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xDBD26B3B95431588())
		{
			Global_2404993.f_2038 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404993.f_2017 = { *uParam0 };
					Global_2404993.f_2020 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = 0f;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404993.f_2031 = { uParam0->f_8 };
					Global_2404993.f_2034 = { uParam0->f_11 };
					Global_2404993.f_2037 = uParam0->f_14;
					Global_2404993.f_2017 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_176(Var8.f_0, Var8.f_1);
			}
			Global_2404993.f_2016 = 1;
			Global_2404993.f_2015 = 1;
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2024 = unk_0xEAE20F1125B83888();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404993.f_2015)
	{
		if (Global_2404993.f_2016 == 1)
		{
			if (unk_0x34302C240EA1F13B(fVar4, fVar5, fVar6, fVar7) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 5000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					func_157(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_156(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404993.f_2016 = 9;
				}
				else
				{
					Global_2404993.f_2016 = 2;
				}
			}
		}
		if (Global_2404993.f_2016 == 2)
		{
			if ((unk_0x6C8BF826062EB578(Var11, Var14) || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 15000) || unk_0x53F8FDAE3EB94B2D(Var11, Var14) == 0)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (uParam0->f_5 && !func_34(unk_0x0C1D3C552325765B(), 0))
				{
					Global_2404993.f_2016 = 3;
				}
				else
				{
					Global_2404993.f_2016 = 4;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2026) > 7000)
			{
				func_155(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404993.f_2016 == 3)
		{
			if (func_154() || unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 10000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 4;
			}
		}
		if (Global_2404993.f_2016 == 4)
		{
			if (unk_0xDBD26B3B95431588())
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
			}
			else
			{
				iVar0 = 0;
				func_148();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x0DE79F7115B066B5(unk_0x0C1D3C552325765B(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 1:
							func_147(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
						
						case 2:
							if (unk_0xFA59F0132C359136(unk_0x0C1D3C552325765B(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
								Global_2404993.f_2016 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_147(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404993.f_2016 == 5)
		{
			if (func_91(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404993.f_2042.f_5)
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					Global_2404993.f_2016 = 6;
				}
				else
				{
					Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404993.f_2016 = 9;
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				unk_0x58F8817BD61C43C0();
				unk_0xB0C9486E4E778206();
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 6)
		{
			iVar0 = 0;
			Global_2404993.f_2042.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_90(uParam0->f_4))
				{
					if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_89(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xA81B36E128305692(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_147(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x20C8B26DF4377161(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x20C8B26DF4377161(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404993.f_2016 == 7)
		{
			if (func_91(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404993.f_2153[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_156(Global_2404993.f_2153[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_87(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xDFC5B758BDC9546F(Global_2404993.f_2153[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_2153[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_50(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404993.f_2016 = 9;
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_2022) > 20000)
			{
				Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
				Global_2404993.f_2016 = 8;
			}
		}
		if (Global_2404993.f_2016 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_49(Global_2404993.f_474))
				{
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_48(uParam2, &(Global_2404993.f_2042.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar83 = false;
				}
				else
				{
					bVar83 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404993.f_2017 };
				func_50(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404993.f_2022 = unk_0x4B50AAB32FBE0483();
			Global_2404993.f_2016 = 9;
		}
		if (Global_2404993.f_2016 == 9)
		{
			Global_2404993.f_2015 = 0;
			unk_0x58F8817BD61C43C0();
			unk_0xB0C9486E4E778206();
			func_177();
			return 1;
		}
		Global_2404993.f_2021 = unk_0x4B50AAB32FBE0483();
	}
	return 0;
}

void func_48(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_49(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar61;
	int iVar62;
	bool bVar63;
	int iVar64;
	struct<3> Var65;
	struct<3> Var68;
	struct<3> Var71;
	float fVar74;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	if (bParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var65 = { *uParam5 };
						if (func_90(uParam5->f_4) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_89(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_89(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Var65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_52(*uParam0, &Var0, iVar64, iParam3, 1))
	{
	}
	else
	{
		bVar63 = true;
	}
	if (bVar63)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = { uParam6->f_13[iVar62 /*3*/] };
			Var4.f_45[iVar62] = uParam6->f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_157(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var68 = { *uParam5 };
				fVar74 = uParam5->f_4;
				break;
			
			case 1:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				break;
			
			case 2:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				fVar74 = uParam5->f_14;
				break;
		}
		if (!func_51(Var0, uParam5->f_7, Var68, Var71, fVar74))
		{
			if (func_52(*uParam0, &Var0, iVar64, iParam3, 0))
			{
				if (!func_51(Var0, uParam5->f_7, Var68, Var71, fVar74))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var68 };
					}
					if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
					{
						Var0.f_2 = uVar61;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var68 };
				}
				if (unk_0x776447CD667051CD(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404993.f_614 = 1;
}

int func_51(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_87(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xDFC5B758BDC9546F(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_52(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_86(Param0, uParam3))
	{
		if (func_53(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x1F69106BA5C5442C(Param0, 0, uParam3, iParam4))
	{
		if (func_53(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_68(Global_2404993.f_491, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_60(*uParam3, 1056964608))
			{
				if (!func_54(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_59(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410131[iVar4])
	{
		if (func_58(Var1, &(Global_2409302[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410131[8])
	{
		if (func_58(Var1, &(Global_2409302[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_55(&Var1, Global_2409302[iVar4 /*92*/][iVar0 /*7*/], Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409302[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_55(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_57(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_56(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_56(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_57(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_57(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_56(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_56(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_56(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_57(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_58(struct<3> Param0, var uParam3)
{
	return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_59(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410141[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410141[1])
	{
		if (Param0.f_0 < Global_2410145[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410141[2])
	{
		if (Param0.f_0 < Global_2410145[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410145[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410145[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_60(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_65(unk_0x0C1D3C552325765B(), 1))
	{
		if (Global_1626500.f_41581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_41581)
			{
				if (Global_1626500.f_41582[iVar0 /*59*/].f_7 != 0)
				{
					if (func_61(Param0, Global_1626500.f_41582[iVar0 /*59*/], Global_1626500.f_41582[iVar0 /*59*/].f_6, Global_1626500.f_41582[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_39362 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_39362)
			{
				if (Global_1626500.f_39365[iVar0 /*90*/].f_16 != 0)
				{
					if (func_61(Param0, Global_1626500.f_39365[iVar0 /*90*/], Global_1626500.f_39365[iVar0 /*90*/].f_3, Global_1626500.f_39365[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_53608 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_53608)
			{
				if (Global_1626500.f_53612[iVar0 /*128*/].f_12 != 0)
				{
					if (func_61(Param0, Global_1626500.f_53612[iVar0 /*128*/], Global_1626500.f_53612[iVar0 /*128*/].f_3, Global_1626500.f_53612[iVar0 /*128*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_61(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_64(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_63(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_62(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_63(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_64(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_62(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_66(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_66(int iParam0)
{
	return func_67(iParam0);
}

bool func_67(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

int func_68(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_80(Param0))
	{
		if (func_79(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_71(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_70(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_69(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_63(&Var0, 0f, 0f, unk_0xF25F352E34274C58(0f, 360f));
		}
		else
		{
			func_63(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_70(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_2255[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_76(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_73(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_76(Var2, &uVar1) || func_72(Var2))
			{
				Var2 = { *uParam0 };
				func_73(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404993.f_559 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_556);
		if (fVar0 < Global_2404993.f_559)
		{
			return 1;
		}
	}
	return 0;
}

void func_73(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_75(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_75(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_75(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_69(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_74(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_55(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_74(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_75(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_69(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_74(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_55(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x3E1E1E768BE3A2F4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_156(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_87(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xDFC5B758BDC9546F(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_76(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_78();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404993.f_353[iVar0 /*12*/].f_9 == 1)
		{
			if (func_77(Param0, &(Global_2404993.f_353[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_156(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_2253) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_87(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409165[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409165[iVar0 /*17*/].f_16))
			{
				if (func_77(*uParam0, &(Global_2409165[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409165[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409165[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_73(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_79(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_73(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_80(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_494)
	{
		if (!Global_2404993.f_43.f_309)
		{
			if (!func_84(unk_0x0C1D3C552325765B(), 1))
			{
				return 1;
			}
			if (!func_83(Param0, 1008981770))
			{
				if (!func_79(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_79(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_82(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_81(&(Global_2404993.f_43[iVar0 /*12*/])) };
					if (!func_79(&Var1, 0, 0, 0))
					{
						if (!func_79(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_81(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_82(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_77(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_83(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_77(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_84(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_85(iParam0) != 0;
	}
	return func_65(iParam0, bParam1);
}

int func_85(int iParam0)
{
	if (func_930(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

int func_86(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404993.f_1814[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404993.f_1814[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_87(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_88(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_88(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_89(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_90(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_91(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404993.f_2042.f_1 == 0 && Global_2404993.f_2042 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x0F504DBF486342DE(&(Global_2404993.f_2042.f_1)))
			{
				case 0:
					func_145(uParam1, uParam2);
					if (!Global_2404993.f_2042.f_2)
					{
						if (uParam2->f_7 && Global_2404993.f_523.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
							}
							if (uParam1->f_5 && func_49(Global_2404993.f_474))
							{
								if (!Global_2404993.f_2042.f_5)
								{
									Global_2404993.f_2042.f_5 = 1;
								}
								else
								{
									func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_50(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_145(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xDBD26B3B95431588())
		{
			if (!unk_0x6538AB9B28AE0946())
			{
				if (unk_0x7C086C5B65728A7E())
				{
					func_145(uParam1, uParam2);
					Global_2404993.f_2042.f_1 = unk_0xBF656D9895240AF1();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xB0C9486E4E778206();
				func_145(uParam1, uParam2);
				if (!Global_2404993.f_2042.f_2)
				{
					Global_2404993.f_2042.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_142(Global_2404993.f_523, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67));
	}
	if (uParam2->f_7 && !Global_2404993.f_2042.f_4)
	{
		Global_2404993.f_2042.f_4 = 1;
		func_99(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404993.f_2042.f_1 > 0 || Global_2404993.f_2042 > 0)
	{
		if (uParam1->f_5 || unk_0xDBD26B3B95431588())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404993.f_2042.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404993.f_2042.f_3)
					{
						iVar4 = Global_2404993.f_2042.f_3 + 1;
					}
					if (iVar4 > (Global_2404993.f_2042.f_1 - 1))
					{
						iVar4 = (Global_2404993.f_2042.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x6978871734C62314(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x91E05C60C6CEAD98(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xDE715EE1001849E6(iVar4);
					}
					else
					{
						unk_0xCACFF8D05D40E632(iVar4, &iVar5);
					}
					func_99(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404993.f_2042.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404993.f_2042.f_1;
		}
		if (Global_2404993.f_2042.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404993.f_2345)
			{
				func_93(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_49(Global_2404993.f_474))
			{
				if (Global_2404993.f_2042.f_2)
				{
					func_48(uParam0, &(Global_2404993.f_2042.f_6));
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404993.f_2042.f_2)
			{
				func_48(uParam0, &(Global_2404993.f_2042.f_6));
				func_92(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0xB5BF1B58C833F7A9(0, Global_2404993.f_2042.f_1);
				unk_0x6978871734C62314(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_54(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
					func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
					func_92(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
				func_50(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
				func_92(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404993.f_2017 };
		if (uParam1->f_5 && func_49(Global_2404993.f_474))
		{
			if (!Global_2404993.f_2042.f_5)
			{
				Global_2404993.f_2042.f_5 = 1;
			}
			else
			{
				func_50(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_50(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0xF25F352E34274C58(0f, 360f);
		func_92(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_92(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404993.f_2153[(3 - iVar0) /*3*/] = { Global_2404993.f_2153[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404993.f_2153[0 /*3*/] = { Param0 };
}

void func_93(var uParam0, var uParam1, var uParam2)
{
	if (func_49(Global_2404993.f_474) && func_98() < 4096)
	{
		func_97(uParam0, 0f);
		func_97(uParam1, uParam0->f_2);
		func_97(uParam2, uParam1->f_2);
	}
	else
	{
		func_96(uParam0);
		func_95(uParam2, uParam0->f_4);
		func_94(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_94(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407339[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_95(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407339[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407339[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407339[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_96(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_1;
				Var2 = { Global_2407339[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_97(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_2 < fVar1 && Global_2407339[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407339[iVar0 /*9*/].f_2;
				Var2 = { Global_2407339[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407339[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_99(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<9> Var16;
	bool bVar25;
	bool bVar26;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404993.f_474 == 1)
		{
			if (unk_0x7466327978A6A24C((Global_2404993.f_491.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_139(unk_0x0C1D3C552325765B()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_138(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x25A95C36B95B3351(unk_0xA0081090911D13E5(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_38(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_132(Param0, fParam3, uParam4->f_15, func_137(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404993.f_3;
		}
	}
	else if (!func_129(Param0, 25f, unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_32(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_32(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
		{
			Var11 = { Global_2404993.f_491 };
			if (Global_2404993.f_474 == 26)
			{
				Var11 = { Global_2404993.f_523.f_18 };
			}
			if (func_80(Var11))
			{
				if (!func_79(&Param0, 0, 0, 0) && !func_128(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_128(&Param0, 0) && !func_70(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_127(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_126(unk_0x0C1D3C552325765B()) && func_124(unk_0x0C1D3C552325765B())))
		{
			if (!func_123(&Param0, &(Global_2404993.f_2042.f_67), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_124(unk_0x0C1D3C552325765B()))
		{
			if (!func_122(Param0, &(Global_2404993.f_2042.f_34), &(Global_2404993.f_2042.f_67), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_121(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_121(Param0))
			{
				if (func_49(Global_2404993.f_474))
				{
					if (func_83(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_120(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404993.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x72C176FA688CE74D(unk_0xDACF94AE8FA53F42(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_636)
		{
			if (!func_71(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_54(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar7 = -1;
	}
	if (func_60(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_119(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	bVar25 = false;
	bVar26 = false;
	if (Global_2404993.f_2345 && uParam4->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_111(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			else
			{
				fVar0 = func_111(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_49(Global_2404993.f_474) && iVar7 < 4096)
			{
				Var16.f_2 = func_109(Param0);
			}
			Var16.f_4 = { Param0 };
			Var16.f_7 = fParam3;
			Var16.f_0 = iVar7;
			Var16.f_1 = fVar0;
			func_108(Var16);
			Global_2404993.f_2042.f_2 = 1;
		}
	}
	else
	{
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (iVar7 >= Global_2404993.f_2042.f_6[iVar15 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar25)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_111(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						else
						{
							fVar0 = func_111(Param0, Global_2404993.f_2017, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var16.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar25 = true;
					}
					if ((func_49(Global_2404993.f_474) && iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar26)
						{
							fVar2 = func_109(Param0);
							bVar26 = true;
						}
						if (fVar2 < Global_2404993.f_2042.f_6[iVar15 /*9*/].f_2)
						{
							Var16.f_4 = { Param0 };
							Var16.f_7 = fParam3;
							Var16.f_0 = iVar7;
							Var16.f_1 = fVar0;
							Var16.f_2 = fVar2;
							func_107(Var16, iVar15);
							Global_2404993.f_2042.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar0 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_1))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						func_107(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar25)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_106(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_101(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_100(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_100(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar25 = true;
					}
					if (iVar7 > Global_2404993.f_2042.f_6[iVar15 /*9*/] || (iVar7 == Global_2404993.f_2042.f_6[iVar15 /*9*/] && fVar3 > Global_2404993.f_2042.f_6[iVar15 /*9*/].f_3))
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_3 = fVar3;
						func_107(Var16, iVar15);
						Global_2404993.f_2042.f_2 = 1;
						return;
					}
				}
			}
			iVar15++;
		}
	}
}

float func_100(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_101(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_930(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x0C1D3C552325765B() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_102(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x10B1B072E9514664(iVar11) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
					{
						if (!unk_0x10B1B072E9514664(iVar11) == -1 || !func_84(unk_0x0C1D3C552325765B(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar11) || !bParam6)
					{
						if (func_33(iVar11))
						{
							Var5 = { func_37(iVar11) };
							if (!iVar11 == unk_0x0C1D3C552325765B())
							{
								Var8 = { unk_0x052337DF45FC6411(unk_0x21F191D9AFF98B5E(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x999A157665D69393(Param0, Var5, 1);
							fVar2 = unk_0x999A157665D69393(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_102(int iParam0)
{
	if (func_930(iParam0, 0, 1))
	{
		if (!func_104(iParam0))
		{
			if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (!unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
				{
					if (func_65(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_103(unk_0x10B1B072E9514664(iParam0), unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
				{
					if (!func_65(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_39(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_103(int iParam0, int iParam1, int iParam2)
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

int func_104(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
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

bool func_105()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

float func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_930(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				if (unk_0xE514F14357BDEECF(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_930(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if (func_33(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam7 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_107(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404993.f_2042.f_6[iParam9 /*9*/] };
	Global_2404993.f_2042.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 2)
	{
		func_107(Var0, iParam9 + 1);
	}
}

void func_108(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_98();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] < iVar10)
		{
			Global_2407339[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] == 0)
		{
			Global_2407339[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407339[iVar0 /*9*/] > 0)
		{
			if (Global_2407339[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407339[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407339[iVar12 /*9*/] = { Param0 };
	}
}

float func_109(struct<3> Param0)
{
	var uVar0;
	
	return func_110(Param0, &(Global_2404993.f_43), &uVar0);
}

float func_110(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404993.f_2253) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_111(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_100(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_101(Param0, 1, 0, 0, 1);
	fVar0 = func_100(fVar4, 0f, func_118(), func_116(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_114(Param0);
	fVar0 = func_100(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !func_84(unk_0x0C1D3C552325765B(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_113(Param0, unk_0x0C1D3C552325765B(), 0);
	fVar0 = func_100(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_112(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_100(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_100(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_100(unk_0x2A488C176D52CCA5(Global_2404993.f_491, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_112(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xD2275328A6FD3845(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xE25FC54E624B820E(uVar3))
	{
		unk_0x5D5210831D45D0A6(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x7466327978A6A24C((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_113(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_930(iVar3, 0, 1))
			{
				if (unk_0x10B1B072E9514664(iVar3) != unk_0x10B1B072E9514664(iParam3) || (unk_0x10B1B072E9514664(iVar3) == -1 && unk_0x10B1B072E9514664(iParam3) == -1))
				{
					if (Global_2415586.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_114(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD3FACCDA4D66AEAD(uVar6[iVar2]))
		{
			if (!unk_0x912AD5A10E7633F0(uVar6[iVar2], 0))
			{
				if (func_115(uVar6[iVar2]))
				{
					Var3 = { unk_0xC59DF10B4FC39DF8(uVar6[iVar2], 1) };
					fVar1 = unk_0x999A157665D69393(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_115(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x0EAE41B4E693BA70(uParam0);
	switch (unk_0xD28ED8D0CD006D1E(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xD28ED8D0CD006D1E(uVar0, Global_1574240[unk_0x0C1D3C552325765B()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 0)
	{
		iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xD28ED8D0CD006D1E(uVar0, Global_1573951[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_116()
{
	if (func_117())
	{
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_117()
{
	if (Global_2404993.f_43.f_65 && !Global_2404993.f_43.f_296)
	{
		if (!func_104(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
	}
	return 0;
}

float func_118()
{
	if (func_117())
	{
		if ((unk_0x1E3C80E7C4B8041B(Global_2404993.f_43.f_67) || unk_0xFC4346F9DE2AB4AE(Global_2404993.f_43.f_67)) || Global_2404993.f_43.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_119(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x916C9DBA707424D8(Param0, fParam7)) || (fVar0 > 0f && unk_0xD5723D169730DAAD(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x82C3AA7E0F0CF1A1(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_120(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404993.f_43.f_55)
	{
		if (unk_0x72C176FA688CE74D(Global_2404993.f_43.f_56))
		{
			if (!unk_0x9EAA10271825C2DB(Param0))
			{
				uVar0 = unk_0xDACF94AE8FA53F42(Param0);
				if (unk_0x72C176FA688CE74D(uVar0))
				{
					iVar1 = unk_0x7933C96E6F1F08FD(uVar0);
					if (!iVar1 == Global_2404993.f_43.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_121(struct<3> Param0)
{
	switch (Global_2404993.f_2038)
	{
		case 0:
			return func_156(Param0, Global_2404993.f_2017, Global_2404993.f_2020, 0, 0);
			break;
		
		case 1:
			return func_87(Param0, Global_2404993.f_2031, Global_2404993.f_2034, 0, 0);
			break;
		
		case 2:
			return unk_0xDFC5B758BDC9546F(Param0, Global_2404993.f_2031, Global_2404993.f_2034, Global_2404993.f_2037, 0, 1);
			break;
	}
	return 0;
}

int func_122(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0xDFC5B758BDC9546F(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_123(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_69(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_125(iParam0))
			{
				if (Global_1588660[iParam0 /*532*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_125(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

int func_126(int iParam0)
{
	if (func_65(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_127(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404993.f_2153[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_128(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_72(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xF25F352E34274C58(0.01f, 360f);
			func_69(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 0, fVar4);
			if (func_76(Var1, &uVar0) || func_72(Var1))
			{
				Var1 = { *uParam0 };
				func_69(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_129(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_131(Param0, fParam3, iParam4, iParam5, 0) || func_130(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_61(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
				{
					if (func_930(iVar1, 0, 1) && func_930(iParam3, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_930(iVar1, 0, 1) && func_930(iParam4, 0, 1))
				{
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_930(iVar1, 0, 1) && func_930(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_37(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_930(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_37(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404993.f_3 = 0;
	if (!func_129(Param0, 0.5f, unk_0x0C1D3C552325765B(), 0, 0))
	{
		Global_2404993.f_3++;
		if (bParam5)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_136(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_31(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
				if (!func_136(Param0, fParam12))
				{
					Global_2404993.f_3++;
					if (!func_133(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404993.f_3++;
						if (!func_60(Param0, 1056964608))
						{
							Global_2404993.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			}
		}
		else if (func_31(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
			if (!func_136(Param0, fParam12))
			{
				Global_2404993.f_3++;
				if (!func_133(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404993.f_3++;
					if (!func_60(Param0, 1056964608))
					{
						Global_2404993.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404993.f_3 = (Global_2404993.f_3 + Global_2404993.f_2);
		}
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x0C1D3C552325765B() == iVar1)
		{
			if ((func_930(iVar1, 1, 1) && func_33(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (!func_135(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
				{
					if (func_134(func_37(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0xDFC5B758BDC9546F(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
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

int func_136(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_930(iVar1, 1, 1) && func_33(iVar1)) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
		{
			if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && unk_0x10B1B072E9514664(iVar1) == -1) && !func_84(unk_0x0C1D3C552325765B(), 1))
			{
				return 0;
			}
			else if ((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && !unk_0x0C1D3C552325765B() == iVar1) || !func_135(unk_0x0C1D3C552325765B(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_37(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	if ((Global_2404993.f_474 == 9 || Global_2404993.f_474 == 9) || (Global_2404993.f_474 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_138(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_930(iVar1, 1, 1))
			{
				if ((!func_34(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1)) && iVar1 != unk_0x0C1D3C552325765B())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x10B1B072E9514664(iVar1) == iVar3)
					{
						if (unk_0x999A157665D69393(func_37(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((func_84(iParam0, 1) || func_141(iParam0)) || func_140(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_142(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_144(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_143(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_143(var uParam0, var uParam1, int iParam2)
{
	Global_2411129 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_143(&Global_2411129, uParam1, iParam2 + 1);
	}
}

void func_144(var uParam0, var uParam1, int iParam2)
{
	Global_2411125 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_144(&Global_2411125, uParam1, iParam2 + 1);
	}
}

void func_145(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404993.f_1813 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1813)
		{
			if (func_146(Global_2404993.f_1814[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404993.f_1814[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404993.f_1814[iVar0 /*4*/] };
					fVar4 = unk_0xE92969F4247292EB(Var1.f_0, Var1.f_1);
				}
				func_99(Global_2404993.f_1814[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404993.f_2042++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404993.f_2345)
	{
		func_93(&(Global_2404993.f_2042.f_6[0 /*9*/]), &(Global_2404993.f_2042.f_6[1 /*9*/]), &(Global_2404993.f_2042.f_6[2 /*9*/]));
	}
}

int func_146(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_51(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_51(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_147(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_88(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_148()
{
	func_153();
	func_152();
	func_151();
	func_150();
	func_149();
}

void func_149()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407339[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_150()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404993.f_2042.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_151()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404993.f_2042.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_152()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404993.f_2042.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_153()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404993.f_2042 = { Var0 };
}

var func_154()
{
	return Global_1310987.f_4;
}

void func_155(var uParam0, var uParam1)
{
	func_177();
	func_176(uParam0, uParam1);
}

bool func_156(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_157(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1683 > 0 && func_175(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_158(uParam0, uParam1, uParam2);
	}
}

void func_158(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_68(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_174(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411139.f_162 = 0;
	Global_2411139.f_163 = 0;
	Global_2411139.f_164 = -99;
	Global_2411139.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411139.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD2275328A6FD3845(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xE25FC54E624B820E(iVar8))
		{
			unk_0x5D5210831D45D0A6(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411139.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411139.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x722521C5827377D3(iVar8)) || unk_0xABEAA77F123D36FA(iVar8))
			{
				unk_0xC54D87D649D77D84(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_128(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_173(Var1))
									{
										Var1 = { func_171(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_60(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_170(Var1, uParam2))
													{
														if ((uParam2->f_48 && !func_174(&Var1, 0)) || uParam2->f_48 == 0)
														{
															if (!bVar12)
															{
																if (bVar11)
																{
																	iVar0 = (iVar0 + -1);
																}
															}
															if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
															{
																if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																{
																	if ((uParam2->f_12 && !func_165(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_68(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																		{
																			if (uParam2->f_8)
																			{
																				iVar17 = uParam2->f_31;
																				bVar18 = true;
																				iVar19 = 1;
																				fVar20 = uParam2->f_49;
																				if (!uParam2->f_55)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (uParam2->f_17)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																				else
																				{
																					bVar18 = true;
																					iVar19 = 1;
																					if (uParam2->f_28)
																					{
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																				}
																				iVar21 = 0;
																				if (uParam2->f_3 > 7f)
																				{
																					if (func_31(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_31(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_164(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || uParam2->f_33 >= 2)
																				{
																					if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (uParam2->f_52)
																						{
																							iVar22 = func_163(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162)
																									{
																										Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2411139.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2411139.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2411139.f_162 == 0)
																								{
																									Global_2411139[0 /*3*/] = { Var1 };
																									Global_2411139.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_162(Var1, fVar4, iVar16);
																												iVar16 = Global_2411139.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2411139.f_162++;
																								if (Global_2411139.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
																								Global_2411139.f_121[Global_2411139.f_162] = fVar4;
																								Global_2411139.f_162++;
																								if (func_170(Var1, uParam2))
																								{
																									Global_2411139.f_163++;
																								}
																								if (Global_2411139.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = { Var1 };
																						*uParam1 = fVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = { Var1 };
																				*uParam1 = fVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!uParam2->f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411139.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
					else
					{
						if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
						{
							func_160(0, uParam2);
						}
						iVar24 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
						Var25 = { Global_2411139[0 /*3*/] };
						uVar28 = Global_2411139.f_121[0];
						Global_2411139[0 /*3*/] = { Global_2411139[iVar24 /*3*/] };
						Global_2411139.f_121[0] = Global_2411139.f_121[iVar24];
						Global_2411139[iVar24 /*3*/] = { Var25 };
						Global_2411139.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_158(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xB5BF1B58C833F7A9((1 + iVar15), (40 + iVar15));
						unk_0xBE5432549D1D244B(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_171(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_68(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_174(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_158(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_158(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_159(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411139.f_164 = iVar8;
	}
}

void func_159(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_129(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0C1D3C552325765B(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_160(int iParam0, var uParam1)
{
	if (!func_170(Global_2411139[iParam0 /*3*/], uParam1))
	{
		Global_2411139.f_162 = (Global_2411139.f_162 - 1);
		func_161(iParam0);
		if (Global_2411139.f_162 > Global_2411139.f_163)
		{
			func_160(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_160(iParam0 + 1, uParam1);
	}
}

void func_161(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411139[iParam0 /*3*/] = { Global_2411139[iParam0 + 1 /*3*/] };
			Global_2411139.f_121[iParam0] = Global_2411139.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_162(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411139[iParam4 /*3*/] };
	uVar3 = Global_2411139.f_121[iParam4];
	Global_2411139[iParam4 /*3*/] = { Param0 };
	Global_2411139.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411139.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_162(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_163(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_102(iVar5))
		{
			Var1 = { func_37(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_164(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam9 == 0)
		{
			if (func_930(iVar1, bParam5, bParam6))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam10) && bParam7) && func_39(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_165(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_169(Param0, fParam3, iParam4, iParam5, iParam6) || func_166(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_166(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_168(Param0, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_556[iVar0]))
			{
				if (func_167(Param0, fParam3, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 0))
				{
					if (func_930(iVar1, 0, 1) && func_930(iParam5, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_167(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_61(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_62(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x7466327978A6A24C((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7466327978A6A24C((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7466327978A6A24C((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_63(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_63(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_61(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_167(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_168(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_64(iParam3, 1008981770);
	fVar1 = func_64(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_169(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_930(iVar1, 0, 1) && func_930(iParam5, 0, 1))
			{
				if (Global_2415586.f_260[iVar0])
				{
					if (func_61(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415586.f_260[iVar0])
			{
				if (func_61(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_930(iVar1, 0, 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
				{
					if (func_61(func_37(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_156(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_87(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_171(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_172(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xC54D87D649D77D84(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FCAA52DD2D987DE(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_62(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_172(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x8461D93FE2207D3A(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA19BA829D77A105A(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_62(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_172(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_63(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_56(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_173(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_59(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410853[iVar1])
	{
		if (func_58(Param0, &(Global_2410150[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410853[8])
	{
		if (func_58(Param0, &(Global_2410150[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_174(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_26.f_16)
	{
		switch (Global_2404993.f_26.f_15)
		{
			case 0:
				if (func_156(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_87(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_75(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, Global_2404993.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_175(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404993.f_1683 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_68(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_174(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411139.f_162 = 0;
		Global_2411139.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411139.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1683)
		{
			Var1 = { Global_2404993.f_1684[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1684[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_165(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_68(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
						{
							if (uParam2->f_8)
							{
								iVar6 = uParam2->f_31;
								bVar7 = true;
								iVar8 = 1;
								fVar9 = uParam2->f_49;
								if (!uParam2->f_55)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (uParam2->f_17)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									if (uParam2->f_33 == 1)
									{
										fVar9 = (fVar9 * 0.375f);
									}
								}
								else
								{
									bVar7 = true;
									iVar8 = 1;
									if (uParam2->f_28)
									{
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
								}
								bVar10 = false;
								if (uParam2->f_3 > 7f)
								{
									if (func_31(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_31(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_164(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
								{
									bVar10 = true;
								}
								if (bVar10)
								{
									if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
									{
										fVar12 = 0f;
										if (uParam2->f_52)
										{
											iVar11 = func_163(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162)
													{
														Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2411139.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2411139.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2411139.f_162 == 0)
												{
													Global_2411139[0 /*3*/] = { Var1 };
													Global_2411139.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar5 /*3*/], uParam2->f_35))
															{
																func_162(Var1, fVar4, iVar5);
																iVar5 = Global_2411139.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
											else
											{
												Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
												Global_2411139.f_121[Global_2411139.f_162] = fVar4;
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411139.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
				{
					func_160(0, uParam2);
				}
				iVar13 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
				Var14 = { Global_2411139[0 /*3*/] };
				uVar17 = Global_2411139.f_121[0];
				Global_2411139[0 /*3*/] = { Global_2411139[iVar13 /*3*/] };
				Global_2411139.f_121[0] = Global_2411139.f_121[iVar13];
				Global_2411139[iVar13 /*3*/] = { Var14 };
				Global_2411139.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_175(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_158(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_176(var uParam0, var uParam1)
{
	unk_0x16F6A7785C574F64(uParam0, uParam1, 0.1f);
	Global_2404993.f_2025 = unk_0xEAE20F1125B83888();
	Global_2404993.f_2023 = 1;
	Global_2404993.f_2026 = unk_0x4B50AAB32FBE0483();
}

void func_177()
{
	if (Global_2404993.f_2023)
	{
		if (unk_0xEAE20F1125B83888() == Global_2404993.f_2025)
		{
			unk_0xEB410F2073890250();
		}
		else
		{
			unk_0xEB410F2073890250();
		}
		Global_2404993.f_2023 = 0;
	}
}

int func_178(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_179()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_840();
	Var1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			Var1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			Var1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			Var1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			Var1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return Var1;
}

int func_180()
{
	switch (Local_99.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_181())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	uVar0 = func_189();
	iVar1 = func_188();
	if (func_840() == 0)
	{
		iVar7 = Global_1574276;
	}
	else if (func_840() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1574279;
	}
	switch (func_840())
	{
		case 1:
			func_187(&Var2, &uVar6, &uVar5);
			func_186(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_185((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_183(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_187(&Var2, &uVar6, &uVar5);
			func_186(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_185((iVar8 - 1), &Var2, &uVar6, &uVar5);
				if (iVar8 <= 2)
				{
					iVar1 = joaat("s_m_m_fibsec_01");
				}
				else
				{
					iVar1 = func_188();
				}
				func_183(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_187(&Var2, &uVar6, &uVar5);
			func_186(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_188();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_185((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_183(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_187(&Var2, &uVar6, &uVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_185((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_183(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_182())
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	switch (func_840())
	{
		case 1:
			if ((((unk_0x3CF373660FCFAFCE(Local_99.f_13[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_13[1])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[2])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[3])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((unk_0x3CF373660FCFAFCE(Local_99.f_13[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_13[1])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[2])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[3])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((unk_0x3CF373660FCFAFCE(Local_99.f_13[0]) && unk_0x3CF373660FCFAFCE(Local_99.f_13[1])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((unk_0x3CF373660FCFAFCE(Local_99.f_13[1]) && unk_0x3CF373660FCFAFCE(Local_99.f_13[2])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[3])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[4])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[5])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[6])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[7])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[8])) && unk_0x3CF373660FCFAFCE(Local_99.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_183(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_13[iParam0]))
	{
		unk_0x491067A8E906F22D(iParam1);
		if (unk_0x2C1B5A0D3E233FC3(iParam1))
		{
			if (unk_0x420841F5621E7397(1, 0, 0, 0))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_11, iParam0))
				{
					unk_0x0B17BC5D018E224B(Param2, 2f, 1, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&(Local_99.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_184(&(Local_99.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), iParam7);
						unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1, 0);
						unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 0);
						unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0x54753279989302A7(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 0, 1);
						unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 42, 1);
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 200);
						unk_0x84B1D0A0FE1C520D(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x728A92BBF4806518(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), Param2, uParam6, 0, 0);
						if (func_840() == 2)
						{
							unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						}
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_184(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	uVar0 = unk_0xF8418B3B87CFCCBF(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(uVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(uVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam7)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_840())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*uParam2 = 252.5942f;
					*uParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*uParam2 = 47.6051f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*uParam2 = 107.9506f;
					*uParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*uParam2 = 323.9433f;
					*uParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*uParam2 = 357.3127f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*uParam2 = 219.4789f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*uParam2 = 62.113f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*uParam2 = 28.2234f;
					*uParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*uParam2 = 65.8332f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*uParam2 = 323.2079f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*uParam2 = 296.486f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*uParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*uParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*uParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*uParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*uParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*uParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*uParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*uParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*uParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*uParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_186(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_13[iParam0]))
	{
		unk_0x491067A8E906F22D(uParam1);
		if (unk_0x2C1B5A0D3E233FC3(iParam1))
		{
			if (unk_0x420841F5621E7397(0, 1, 0, 0))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_11, iParam0))
				{
					unk_0x0B17BC5D018E224B(Param2, 2f, 1, 0, 0, 0);
					unk_0x88B0F0DC270164B7(&(Local_99.f_11), iParam0);
				}
				if (func_31(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_184(&(Local_99.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), iParam7);
						unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1, 0);
						if (func_840() == 1)
						{
							unk_0xA27FDFE5C0EBB875(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 3, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 8, 0, 0, 0);
							unk_0xA27FDFE5C0EBB875(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 10, 0, 0, 0);
							unk_0xA4C961D96B05ABB2(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 0, 1, 0, 0);
						}
						else
						{
							unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 0);
						}
						unk_0xFC58A524C1CF0304(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, 1);
						fVar0 = (30f * 1f);
						unk_0x76A0FFACB5B58711(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), unk_0xF2DB717A73826179(fVar0));
						unk_0x54753279989302A7(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 0, 1);
						unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 42, 1);
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 200);
						unk_0x84B1D0A0FE1C520D(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), 1);
						unk_0x728A92BBF4806518(unk_0x564EAE6038A81C07(Local_99.f_13[iParam0]), Param2, uParam6, 0, 0);
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	switch (func_840())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*uParam1 = 346.3493f;
			*uParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*uParam1 = 155.4586f;
			*uParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*uParam1 = 235.3724f;
			*uParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*uParam1 = 22.5507f;
			*uParam2 = 1f;
			break;
	}
}

int func_188()
{
	int iVar0;
	
	switch (func_840())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_189()
{
	int iVar0;
	
	switch (func_840())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_190(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_191(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_192()
{
	if (unk_0x08BA6DD398CA197C(uLocal_357, 29))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_357, 28))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 25))
			{
				if (unk_0x08BA6DD398CA197C(uLocal_358, 0))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_358, 1))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_357, 26))
				{
					if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 26);
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_357, 26))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 27))
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_357, 27);
						}
					}
					if (unk_0x08BA6DD398CA197C(iLocal_357, 27))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 25);
					}
				}
			}
		}
	}
}

void func_193(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_327(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_325() || iParam2 == 24)
	{
		if (func_274(uParam1, iParam2, uParam3, Global_1573696, 0, func_323()))
		{
			func_273(1);
			if ((!func_271() && !func_269()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_268())
				{
					func_265();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_264(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_263(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_930(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_125(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_262(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_259(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_257())
							{
								if (func_930(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
								}
								else
								{
									iVar35 = func_18();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_256(iVar35) && func_250(iVar35, iParam2)) && func_930(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_245(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
								iVar37 = func_239(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_257())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_234(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_233(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_226(iVar35, 0);
								if (bVar34)
								{
									if (func_19(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_225(iParam5))
								{
									func_224(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_224(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_930(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_256(iVar35))
							{
								if (func_930(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_245(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_42(iVar35) };
									iVar37 = func_239(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_226(iVar35, 1);
									if (bVar34)
									{
										if (func_19(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_207(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_204(uParam3, uParam1);
						}
						func_203(&(uParam3->f_21));
						func_202();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_201(uParam3, uParam1);
							func_200(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_201(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_196(uParam3))
						{
							Global_1573844 = 1;
						}
						func_194(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_202();
			func_264(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_194(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_203(&(uParam0->f_21));
		func_195(0);
	}
}

void func_195(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_18() && func_930(iVar15, 0, 1))
	{
		Var2 = { func_42(iVar15) };
		iVar1 = func_199(uParam0, uParam0->f_37);
		if (func_198(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_197(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_197(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_197(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_197(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_197(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_197(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_197(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_199(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_201(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_202()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_203(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_204(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_18())
		{
			if (func_930(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_206(uParam0->f_38[iVar0 /*2*/], 0);
					func_205(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_205(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_206(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_207(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_223() && iParam4 < func_222())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_221("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_221(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_221("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_221("");
			if (uParam3->f_108 == 6)
			{
				func_221("");
			}
			else
			{
				func_221(&sParam5);
			}
			func_212(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_211(uParam3))
			{
				func_210("DPAD_FRIEND");
			}
			else if (func_209(uParam3))
			{
				func_210("DPAD_FRIEND");
			}
			else if (func_208(uParam3))
			{
				func_210("DPAD_CREW");
			}
			else
			{
				func_210("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_208(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_209(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_210(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_211(var uParam0)
{
	if (func_209(uParam0) && func_208(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_212(var uParam0, int iParam1)
{
	if (func_220(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_213(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_213(int iParam0)
{
	if ((func_930(iParam0, 0, 1) && func_217()) && func_214(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_214(int iParam0, bool bParam1)
{
	return func_215(iParam0, bParam1, 1);
}

int func_215(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_216(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_18() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_18())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_217()
{
	if (func_141(unk_0x0C1D3C552325765B()) || func_218())
	{
		return 0;
	}
	return 1;
}

int func_218()
{
	switch (func_219(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_220(int iParam0)
{
	if ((func_930(iParam0, 0, 1) && func_217()) && func_216(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_221(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_222()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_223()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_224(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_223() && iParam3 < func_222())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_221("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_210(sParam16);
				}
				else
				{
					func_221(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_221("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_257())
				{
					func_221("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_210(&(uParam2->f_104));
					}
					else
					{
						func_221("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_221("");
				}
				if (uParam2->f_108 == 6)
				{
					func_221("");
				}
				else
				{
					func_221(&sParam4);
				}
				func_212(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_221("");
					func_221("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_211(uParam2))
				{
					func_210("DPAD_FRIEND");
				}
				else if (func_209(uParam2))
				{
					func_210("DPAD_FRIEND");
				}
				else if (func_208(uParam2))
				{
					func_210("DPAD_CREW");
				}
				else
				{
					func_210("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_225(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_226(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_141(iParam0)) && !func_231(iParam0))
	{
		iVar0 = func_230();
	}
	iVar1 = func_229(iParam0);
	if (!iVar1 == -1)
	{
		return func_227(iVar1);
	}
	return iVar0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_228(iParam0);
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

var func_228(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_229(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_41(iParam0)];
		}
	}
	return -1;
}

int func_230()
{
	return 21;
}

bool func_231(int iParam0)
{
	return func_232(iParam0, 20);
}

bool func_232(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

char* func_233(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xAE52C62FC0BBB14E())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_234(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_238(iParam3))
	{
		*fParam1 = (func_235(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_225(iParam3))
	{
		*fParam1 = (func_235(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_237(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_236(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_236(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_237(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_242(iParam0);
	if (iVar0 == -1)
	{
		func_240(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_240(int iParam0, bool bParam1)
{
	if (!func_930(iParam0, 0, 1))
	{
		return;
	}
	if (func_242(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_241(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (!func_930(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_243(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_243(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_244(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_244(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_245(int iParam0)
{
	struct<4> Var0;
	
	if (func_930(iParam0, 0, 1))
	{
		Global_2471194 = { func_42(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_198(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_249(&Global_2471194))
		{
			Global_2471124 = { func_247(iParam0) };
			func_246(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_246(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_247(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_248(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_42(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_248(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_255(iParam0) || func_254(iParam0)) || func_253(iParam0))
		{
			return 0;
		}
	}
	if (!func_252(iParam0))
	{
		return 0;
	}
	if ((!func_251(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_251(int iParam0)
{
	if (func_930(iParam0, 0, 1))
	{
		if (func_930(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

bool func_253(int iParam0)
{
	if (func_255(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

bool func_255(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

int func_256(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_257()
{
	switch (func_219(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_258(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_231(unk_0x0C1D3C552325765B()))
	{
		switch (func_219(unk_0x0C1D3C552325765B()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_259(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_260(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_260(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_261(iParam0, 0);
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_930(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_125(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_263(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_265()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_267())
		{
			func_266();
		}
	}
}

void func_266()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_267()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

int func_268()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_267())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_267())
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	if (func_267())
	{
		if (func_270(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_271()
{
	if (func_267())
	{
		if (func_272(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_273(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_274(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_322(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_321();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_320())
		{
			if (func_319() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_306())
		{
			func_305(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_305(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_319() == 1)
		{
			func_304(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_305(uParam0, uParam2, 0);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_319() == 0 && !bParam5))
		{
			func_305(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_303();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_303();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_304(bVar6, uParam0, 0))
				{
					func_263(uParam0);
					sVar4 = func_301(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_298(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_291(uParam0, func_295(uParam2), func_292(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_282(uParam0, func_284(), func_283(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_298(uParam0, sVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_280(iParam1) };
						iVar8 = func_275(iParam1);
						func_298(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_279())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_278(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_277(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_276(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_276(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_277(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_278(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_279()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_280(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_281(unk_0x0C1D3C552325765B()) || func_276(unk_0x0C1D3C552325765B()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_281(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_282(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_210(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_210("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_283()
{
	switch (func_219(unk_0x0C1D3C552325765B()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_284()
{
	switch (func_219(unk_0x0C1D3C552325765B()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_287())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_286(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_286(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_285(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_286(bool bParam0)
{
	return func_214(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_287()
{
	return (func_290() && func_288(func_289()));
}

bool func_288(int iParam0)
{
	return func_216(iParam0, 1);
}

int func_289()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_290()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_291(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_210(sParam1);
		}
		else if (func_258(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_210("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_292(var uParam0)
{
	int iVar0;
	
	iVar0 = func_258(unk_0x0C1D3C552325765B());
	if (func_294())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_293())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_293()
{
	if (func_258(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_294()
{
	return Global_1588659;
}

char* func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = func_258(unk_0x0C1D3C552325765B());
	if (func_294())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_297() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_297() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_293())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_296() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_296()
{
	return Global_2482149.f_4688;
}

int func_297()
{
	if (func_258(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_298(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_221(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(sParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_210(sParam1);
		}
		if (func_320() && iParam6)
		{
			if (func_300())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_210(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_299(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_299(int iParam0)
{
	if (func_278(iParam0) || func_277(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_1573698;
}

char* func_301(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_302();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(sParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
			case 22:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_302()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_303()
{
	Global_36678 = 1;
}

bool func_304(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_305(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_202();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_203(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_306()
{
	if (func_318())
	{
		return 0;
	}
	if (func_317())
	{
		return 0;
	}
	if (!func_315())
	{
		return 0;
	}
	if (!func_313())
	{
		return 0;
	}
	if (func_312(8, -1))
	{
		return 0;
	}
	if (func_319() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_311())
	{
		return 0;
	}
	else if (!func_65(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_310(1) || func_308(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_104(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_307(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

bool func_307(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

int func_308(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_309(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_310(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_311()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_313()
{
	if (func_314() == 0)
	{
		return 1;
	}
	return 0;
}

int func_314()
{
	return Global_1312462.f_18;
}

int func_315()
{
	if (func_316())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_316()
{
	return Global_1312434;
}

bool func_317()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

bool func_318()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_319()
{
	return Global_1342783.f_68;
}

int func_320()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_321()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_323()
{
	if (func_324(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_324(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

int func_325()
{
	if (func_323())
	{
		return 1;
	}
	if (func_253(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_294())
	{
		return 1;
	}
	if (func_141(unk_0x0C1D3C552325765B()))
	{
		switch (func_258(unk_0x0C1D3C552325765B()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_326(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_326(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_326(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_326(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_327(int iParam0)
{
	if ((iParam0 == 24 && func_141(unk_0x0C1D3C552325765B())) && !func_231(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_140(unk_0x0C1D3C552325765B(), 0) && func_231(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_328(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_141(iParam0) && !func_255(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_231(iParam0);
	uVar3 = func_342();
	uVar4 = func_333();
	if ((bVar1 && (func_332(iParam0) || func_331(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_330(iParam0)) && !func_329(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_329(int iParam0)
{
	return func_232(iParam0, 19);
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_232(iParam0, 9);
	}
	return 0;
}

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

int func_333()
{
	if ((func_232(unk_0x0C1D3C552325765B(), 21) || func_232(unk_0x0C1D3C552325765B(), 22)) || func_339())
	{
		return 1;
	}
	if (func_335())
	{
		func_334(22);
		return 1;
	}
	return 0;
}

void func_334(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_335()
{
	if (func_140(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_342() && !func_338()) || func_337(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_232(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_336(27);
		}
	}
	return 0;
}

void func_336(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

bool func_337(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

bool func_338()
{
	return Global_1312412.f_1;
}

bool func_339()
{
	return func_340(286, -1);
}

int func_340(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_341(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

bool func_342()
{
	return Global_1312412;
}

bool func_343()
{
	return unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 5);
}

void func_344()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_345(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_345(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		if (func_840() == 1)
		{
			if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 11))
			{
				if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 15))
				{
					if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 16))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 15))
						{
							if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 10))
							{
								if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
								{
									if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
									{
										if (unk_0x264883409423C6C3(Var0.f_0))
										{
											iVar14 = unk_0x5293F3C38E4842B3(Var0.f_0);
											if (iVar14 == unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
													{
														if (unk_0x60F161681C368C4E(Var0.f_1))
														{
															iVar10 = unk_0x90897FA118314142(Var0.f_1);
															if (unk_0x54F0AEFB11EA090A(iVar10))
															{
																iVar12 = unk_0xA43666ACD375E339(iVar10);
																if (unk_0x3F3C7C3B52DD0ECA(iVar12))
																{
																	if (iVar12 == unk_0x0C1D3C552325765B())
																	{
																		unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 11);
																		if (!func_232(unk_0x0C1D3C552325765B(), 20))
																		{
																			if (func_343())
																			{
																				func_348(0);
																				func_346();
																			}
																		}
																	}
																}
																else
																{
																	unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 16);
																}
															}
															else
															{
																unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_232(unk_0x0C1D3C552325765B(), 20))
												{
													if (func_343())
													{
														if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
														{
															if (unk_0x60F161681C368C4E(Var0.f_1))
															{
																iVar10 = unk_0x90897FA118314142(Var0.f_1);
																if (unk_0x54F0AEFB11EA090A(iVar10))
																{
																	iVar12 = unk_0xA43666ACD375E339(iVar10);
																	if (iVar12 == unk_0x0C1D3C552325765B())
																	{
																		func_348(0);
																		func_346();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_840() == 2)
		{
			iVar15 = 0;
			while (iVar15 < 15)
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iVar15]))
				{
					if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_2, iVar15))
					{
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
						{
							if (unk_0x60F161681C368C4E(Var0.f_0))
							{
								iVar11 = unk_0x90897FA118314142(Var0.f_0);
								if (iVar11 == unk_0x564EAE6038A81C07(Local_99.f_13[iVar15]))
								{
									if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
									{
										if (unk_0x60F161681C368C4E(Var0.f_1))
										{
											iVar10 = unk_0x90897FA118314142(Var0.f_1);
											if (unk_0x54F0AEFB11EA090A(iVar10))
											{
												iVar12 = unk_0xA43666ACD375E339(iVar10);
												if (iVar12 == unk_0x0C1D3C552325765B())
												{
													unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_2), iVar15);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar15++;
			}
		}
		if (func_343())
		{
			if (!func_232(unk_0x0C1D3C552325765B(), 20))
			{
				if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
				{
					if (unk_0x60F161681C368C4E(Var0.f_0))
					{
						iVar11 = unk_0x90897FA118314142(Var0.f_0);
						if (unk_0x54F0AEFB11EA090A(iVar11))
						{
							iVar13 = unk_0xA43666ACD375E339(iVar11);
							if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
							{
								if (unk_0x60F161681C368C4E(Var0.f_1))
								{
									iVar10 = unk_0x90897FA118314142(Var0.f_1);
									if (unk_0x54F0AEFB11EA090A(iVar10))
									{
										iVar12 = unk_0xA43666ACD375E339(iVar10);
										if (iVar12 == unk_0x0C1D3C552325765B())
										{
											if (unk_0x3F3C7C3B52DD0ECA(iVar13))
											{
												iVar16 = unk_0x9259DE19D910276C(iVar13);
												if (iVar16 == Local_99.f_5)
												{
													func_348(0);
													func_346();
												}
												else if (iVar16 == Local_99.f_7)
												{
													func_348(0);
													func_346();
												}
												else if (func_19(iVar13, 1))
												{
													if (Local_99.f_8 > -1)
													{
														iVar17 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_8));
														if (func_16(iVar13, iVar17, 1))
														{
															func_348(0);
															func_346();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_346()
{
	if (!func_347(unk_0x0C1D3C552325765B()))
	{
		func_334(25);
	}
}

bool func_347(int iParam0)
{
	return func_232(iParam0, 25);
}

void func_348(int iParam0)
{
	if (!func_231(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 || func_328(unk_0x0C1D3C552325765B()) != 0)
		{
			func_334(20);
			if (func_141(unk_0x0C1D3C552325765B()))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8))
				{
					unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
				}
			}
		}
	}
}

void func_349()
{
	struct<8> Var0;
	
	switch (Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5)
	{
		case 0:
			if (func_855())
			{
				Var0 = { func_819() };
				func_818(85, "BIGM_ASLTN", &Var0, 1, -1, 2);
				func_815(-1, 0, 0, -1);
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 1;
			}
			else
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_809();
			func_806();
			func_805();
			func_797();
			func_793();
			func_790();
			func_789();
			func_788();
			func_628();
			if (Local_99.f_51 == 2)
			{
				if (unk_0x16833EFAA58E63DB(uLocal_490))
				{
					unk_0x0B57C567D698C373(&uLocal_490);
				}
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 2;
			}
			else if (Local_99.f_51 == 3)
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_627();
			func_809();
			func_618();
			func_806();
			func_805();
			func_597();
			func_521();
			func_797();
			func_492();
			func_491();
			func_790();
			func_489();
			func_789();
			func_398();
			func_788();
			func_628();
			if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 1))
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 3)
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 3;
			}
			else if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 4;
			}
			else if (func_389())
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 24);
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_99.f_51 == 4)
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_871();
			break;
	}
	if (Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 < 3)
	{
		func_350();
	}
}

void func_350()
{
	struct<3> Var0;
	
	if (!func_855() && !func_343())
	{
		return;
	}
	if (func_840() == 1)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), 0) };
		}
	}
	else if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_12), 0) };
	}
	if (!func_388(Var0, 0f, 0f, 0f, 0))
	{
		func_351(159, Var0, &uLocal_507, 1140457472, 1144750080, 0);
	}
}

void func_351(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_141(unk_0x0C1D3C552325765B()) && !func_255(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8)) && (func_332(unk_0x0C1D3C552325765B()) || func_331(unk_0x0C1D3C552325765B())))
	{
		return;
	}
	Global_1750560 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	func_386(iParam0, fVar0);
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_330(unk_0x0C1D3C552325765B()) || func_385(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_337(unk_0x0C1D3C552325765B(), 21))
		{
			func_384(Param1, 1, 0);
		}
		if (!*uParam4 && func_930(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			if (func_383(iParam0))
			{
				unk_0xACD6D334FD769B0C(func_382(iParam0));
				if (func_381(iParam0, -1))
				{
					unk_0xCF03D9C8A7F1577C(0);
					if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
					{
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 1);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
					}
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
				}
			}
			if (func_380(iParam0))
			{
				fVar1 = func_379(iParam0);
				if (fVar1 != 1f)
				{
					func_376(fVar1);
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_375(iParam0) && func_330(unk_0x0C1D3C552325765B()))
				{
					func_373(1);
					func_372(2);
				}
			}
			func_334(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_232(unk_0x0C1D3C552325765B(), 19))
			{
				func_336(19);
			}
		}
		if (*uParam4 && func_930(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 0;
			if (func_383(iParam0))
			{
				if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
				{
					unk_0xACD6D334FD769B0C(1f);
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
				}
			}
			if (func_380(iParam0))
			{
				func_371();
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
			}
			if (iParam7 && !func_141(unk_0x0C1D3C552325765B()))
			{
				if (func_219(unk_0x0C1D3C552325765B()) != 152)
				{
					func_353();
				}
			}
			if (func_307(2))
			{
				func_373(0);
				func_352(2);
			}
		}
	}
}

void func_352(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_353()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_369();
	func_356(1, 1);
	func_354();
}

void func_354()
{
	func_355(0, 0);
}

void func_355(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_356(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_368();
	}
	func_359(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_358(0);
	func_357();
}

void func_357()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_359(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_367())
		{
			func_366();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_364();
		func_363(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_360();
	}
}

void func_360()
{
	if (func_367() && !func_362())
	{
		func_366();
	}
	if (func_362())
	{
		func_361();
	}
	else
	{
		func_364();
		func_363(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_361()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_362()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_363(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_364()
{
	if (func_367() && !func_362())
	{
		func_366();
	}
	func_365();
	Global_2404993.f_649 = 0;
}

void func_365()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_366()
{
	if (func_362())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_367()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_368()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_369()
{
	func_370();
	Global_2404993.f_1813 = 0;
}

void func_370()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_371()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_372(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_373(int iParam0)
{
	if (func_374() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_374()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_376(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_377())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_377()
{
	switch (func_378())
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

int func_378()
{
	return Global_25185;
}

float func_379(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
			return 1;
		
		default:
	}
	return 0;
}

int func_381(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_382(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
			return 1;
		
		default:
	}
	return 0;
}

void func_384(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

int func_385(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_330(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_386(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_387(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_346();
	}
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10954;
		
		case 142:
			return Global_262145.f_10942;
		
		case 157:
			return Global_262145.f_10909;
		
		case 159:
			return Global_262145.f_10892;
		
		case 162:
			return Global_262145.f_11003;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_388(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_389()
{
	bool bVar0;
	
	if (func_392())
	{
		bVar0 = true;
	}
	else if (func_391())
	{
		bVar0 = true;
	}
	else if (func_390(unk_0x0C1D3C552325765B()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
		{
			if (unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0xA0081090911D13E5()))
			{
				if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 2))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
				}
				unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
				unk_0x9907A24A0D12B335(unk_0x9C16D1E97E386176(Local_99.f_12));
				unk_0xEDBE0CD7C81FA37E(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 0);
				unk_0x8E02B659FFFB45DE(unk_0x9C16D1E97E386176(Local_99.f_12), 0);
			}
		}
	}
	return bVar0;
}

int func_390(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186;
}

bool func_391()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

int func_392()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_357.f_5, 0))
	{
		return 1;
	}
	if (func_394() && Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 != 3)
	{
		return 1;
	}
	if (func_393() && Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_93 != 3)
	{
		return 1;
	}
	if (Global_2394716)
	{
		return 1;
	}
	if (Global_1573924.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_393()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 5);
}

int func_394()
{
	if (((func_397() || func_391()) || func_396()) || func_395())
	{
		return 1;
	}
	return 0;
}

bool func_395()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 1);
}

bool func_396()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_397()
{
	return Global_2442442.f_576;
}

void func_398()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 6))
	{
		if (func_855())
		{
			if (func_328(unk_0x0C1D3C552325765B()) >= 1)
			{
				if (func_400(82, func_488(), 0, 0))
				{
					unk_0x88B0F0DC270164B7(&iLocal_357, 6);
				}
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&iLocal_357, 6);
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 15))
	{
		if (func_840() == 0 || func_840() == 3)
		{
			if (func_855())
			{
				if (func_328(unk_0x0C1D3C552325765B()) >= 1)
				{
					if (Local_99.f_5 != -1 || Local_99.f_7 != -1)
					{
						if (func_400(82, func_399(), 0, 0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_357, 15);
						}
					}
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 15);
			}
		}
	}
}

char* func_399()
{
	switch (func_840())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_400(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_401(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_401(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_402(&uVar0, iParam0, func_487(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_402(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_486(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(sParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(sParam7);
	}
	if (func_485(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_479(uParam6))
	{
		return 0;
	}
	if (func_476(iVar0, iVar1, iVar2))
	{
		if (func_475())
		{
			return 0;
		}
		func_474();
		return func_409(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_408(iParam4))
	{
		return 0;
	}
	func_403(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_403(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = uParam6;
	func_404(iParam4);
	func_474();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
}

void func_404(int iParam0)
{
	if (func_407(iParam0))
	{
		func_406();
		return;
	}
	func_405();
}

void func_405()
{
	Global_1336446.f_40.f_10 = 0;
}

void func_406()
{
	Global_1336446.f_40.f_10 = 1;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_408(int iParam0)
{
	return iParam0 > Global_1336446.f_40.f_8;
}

int func_409(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_473();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_470(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_467(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_470(uParam0, sParam3, sParam4);
		}
		return func_451(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_450(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_440(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_439(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_410(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_410(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_438();
	bVar0 = true;
	if (func_412(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_411(120000);
		return 1;
	}
	return 0;
}

void func_411(int iParam0)
{
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
}

int func_412(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_239(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_437(uParam5, bParam6, &iVar3);
	uVar5 = func_435(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_434(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_416(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_415();
	}
	func_438();
	func_414();
	func_413();
	return 1;
}

void func_413()
{
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_414()
{
	Global_1336446.f_40 = 3;
}

void func_415()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
}

int func_416(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_417(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_417(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_428();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_427() == 0)
	{
		func_425();
		return 0;
	}
	func_424(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_428();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_423(0);
				break;
			
			case 1:
				func_423(1);
				break;
			
			case 2:
				func_423(2);
				break;
			
			case 3:
				func_423(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
	if (bParam10)
	{
		func_428();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_422())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_421(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_418(1);
			func_421(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_418(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_420(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_210(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_419(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_419(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_210(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_210(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_210(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_210(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_210(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

bool func_420(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_421(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_422()
{
	return Global_1315229;
}

void func_423(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_424(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_426(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
}

int func_426(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_427()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_426(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

void func_428()
{
	if (func_420(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_429();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_429()
{
	func_430();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_430()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_433(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_432(unk_0xA0081090911D13E5());
			if (func_431(iVar0) && (!func_420(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_431(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_431(int iParam0)
{
	return iParam0 < 3;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_433(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_433(int iParam0)
{
	if (func_431(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_434(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_417(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_435(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_436(2, iParam1);
	return iParam0;
}

void func_436(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_437(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x509383441597090D(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_436(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
}

void func_438()
{
	Global_1336446.f_40.f_9 = 4;
}

int func_439(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_438();
	bVar0 = false;
	return func_412(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_440(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_441(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_441(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_239(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_437(uParam5, bParam6, &iVar3);
	uVar5 = func_435(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_449(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_443(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_415();
	}
	func_442();
	func_414();
	func_413();
	return 1;
}

void func_442()
{
	Global_1336446.f_40.f_9 = 3;
}

int func_443(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_444(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_444(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_428();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_448() == 0)
	{
		func_446();
		return 0;
	}
	func_445(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_423(0);
		func_423(2);
		func_423(1);
	}
	else
	{
		func_428();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_423(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_423(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_423(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_423(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_428();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_422())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_421(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_418(1);
			func_421(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_445(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_446()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_447(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_447(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_448()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_447(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_449(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_444(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_450(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	func_442();
	bVar0 = true;
	if (func_441(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_411(120000);
		return 1;
	}
	return 0;
}

int func_451(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 4))
	{
		bVar0 = func_466(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_457(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, 3))
		{
			func_456(1);
		}
		if (unk_0x08BA6DD398CA197C(iParam4, 5))
		{
			func_455(1);
		}
		func_454();
		func_414();
		func_453();
		func_452();
		return 1;
	}
	return 0;
}

void func_452()
{
	Global_2489614 = 0;
}

void func_453()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_454()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_455(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_456(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
	}
}

int func_457(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_465(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_458(sParam3, iParam4, bParam7);
}

int func_458(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x588D9B1F6CF36C3C(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_464();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_312(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_463();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_428();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_462())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_461())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_460();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_459();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_464();
	}
	return 0;
}

void func_459()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_460()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_461()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_462()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_463()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

void func_464()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_465(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_466(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_465(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_458(sParam3, iParam4, bParam7);
}

int func_467(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (func_469(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_468();
		func_454();
		func_414();
		func_453();
		func_452();
		return 1;
	}
	return 0;
}

void func_468()
{
	Global_16763 = 0;
}

bool func_469(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_465(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_458(sParam3, iParam4, bParam8);
}

int func_470(var uParam0, char* sParam1, char* sParam2)
{
	if (func_472(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_471();
		func_414();
		func_453();
		return 1;
	}
	return 0;
}

void func_471()
{
	Global_1336446.f_40.f_9 = 2;
}

bool func_472(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_465(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_458(sParam2, iParam3, 0);
}

void func_473()
{
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_474()
{
	Global_1336446.f_40 = 1;
}

bool func_475()
{
	return Global_1336446.f_40 == 1;
}

int func_476(int iParam0, int iParam1, int iParam2)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_477(int iParam0)
{
	if (!func_478())
	{
		return 0;
	}
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_478()
{
	if (Global_1336446.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_479(int iParam0)
{
	if (func_484())
	{
		return 0;
	}
	if (func_483())
	{
		return 0;
	}
	if (func_482(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_481())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(uParam0, 6))
	{
		if (func_480())
		{
			return 0;
		}
	}
	return 1;
}

bool func_480()
{
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_481()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_483()
{
	return Global_1336446.f_40 == 3;
}

bool func_484()
{
	return func_461();
}

int func_485(int iParam0, int iParam1, int iParam2)
{
	if (!func_483())
	{
		return 0;
	}
	return func_476(iParam0, iParam1, iParam2);
}

int func_486(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

char* func_487()
{
	return "TXTMSG";
}

char* func_488()
{
	switch (func_840())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_489()
{
	struct<3> Var0;
	
	if (func_840() == 0)
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
		if (!unk_0x08BA6DD398CA197C(iLocal_358, 7))
		{
			if (unk_0x999A157665D69393(Var0, func_490(), 1) < 200f)
			{
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
				{
					unk_0x88B0F0DC270164B7(&iLocal_358, 7);
				}
			}
		}
		else if (unk_0x999A157665D69393(Var0, func_490(), 1) < 121f)
		{
			unk_0xDF7253539526B7ED(0f, 0f);
		}
	}
}

Vector3 func_490()
{
	struct<3> Var0;
	
	switch (func_840())
	{
		case 0:
			Var0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			Var0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			Var0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			Var0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return Var0;
}

void func_491()
{
	int iVar0;
	
	if (!func_855() && !func_343())
	{
		return;
	}
	if (!func_232(unk_0x0C1D3C552325765B(), 20))
	{
		return;
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_357, 18))
		{
			if (unk_0x36B6788E20B0DAB6(unk_0xA0081090911D13E5(), iLocal_506, 0))
			{
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), iLocal_506, 0);
				unk_0x09C86C0C5CA26B1E(&iLocal_357, 18);
			}
			else
			{
				unk_0x09C86C0C5CA26B1E(&iLocal_357, 18);
			}
		}
		else if (unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar0, 1))
		{
			if (iLocal_506 != iVar0)
			{
				iLocal_506 = iVar0;
			}
		}
	}
	else if (!unk_0x08BA6DD398CA197C(iLocal_357, 18))
	{
		unk_0x88B0F0DC270164B7(&iLocal_357, 18);
	}
}

void func_492()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_855() && !func_343())
	{
		return;
	}
	if (!func_503())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 10))
	{
		if (Local_99.f_51 > 1)
		{
			if (func_501())
			{
				if (!func_500())
				{
					if (!func_499())
					{
						unk_0xCF03D9C8A7F1577C(func_498());
						unk_0x88B0F0DC270164B7(&iLocal_357, 10);
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), func_498(), 0);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
					}
					else if (func_497())
					{
						unk_0xCF03D9C8A7F1577C(func_498());
						unk_0x88B0F0DC270164B7(&iLocal_357, 10);
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), func_498(), 0);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
					}
				}
			}
		}
	}
	else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
	{
		if (func_501())
		{
			unk_0x0CF0F978CEED28C2(unk_0x0C1D3C552325765B());
			unk_0x43CC997B616E6D6A(unk_0x0C1D3C552325765B());
		}
	}
	if (Local_99.f_5 != -1)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 11))
		{
			if (Local_99.f_5 == unk_0x848AF823A8EA3C62())
			{
				unk_0xCF03D9C8A7F1577C(func_498());
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), func_498(), 0);
				unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				unk_0x88B0F0DC270164B7(&iLocal_357, 11);
			}
			else if (func_495())
			{
				iVar0 = func_494();
				if (iVar0 != func_18())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 10))
					{
						unk_0xCF03D9C8A7F1577C(func_498());
						unk_0x88B0F0DC270164B7(&iLocal_357, 10);
					}
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar0)))
						{
							if (func_493(unk_0xA0081090911D13E5(), unk_0x21F191D9AFF98B5E(iVar0), 1) <= 200f)
							{
								unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), func_498(), 0);
								unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
								unk_0x88B0F0DC270164B7(&iLocal_357, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_495())
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_357, 11);
		}
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_357, 11))
	{
		unk_0x09C86C0C5CA26B1E(&iLocal_357, 11);
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 8))
		{
			iVar1 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
			if (iLocal_494 != iVar1)
			{
				iLocal_494 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_855())
				{
					fVar2 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), func_490(), 1);
					if (fVar2 < 150f)
					{
						unk_0x0CF0F978CEED28C2(unk_0x0C1D3C552325765B());
						unk_0x43CC997B616E6D6A(unk_0x0C1D3C552325765B());
					}
				}
			}
		}
		else if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			if (iLocal_494 > 0)
			{
				unk_0xCF03D9C8A7F1577C(func_498());
				unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), iLocal_494, 0);
				unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
			}
			unk_0x09C86C0C5CA26B1E(&iLocal_357, 8);
		}
	}
	else if (!unk_0x08BA6DD398CA197C(iLocal_357, 8))
	{
		unk_0x88B0F0DC270164B7(&iLocal_357, 8);
	}
}

float func_493(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_494()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_99.f_5;
	if (iVar1 != -1)
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
		}
	}
	return iVar0;
}

int func_495()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_494();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	iVar1 = func_496();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_496()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_497()
{
	return (((unk_0x08BA6DD398CA197C(Local_99.f_1, 11) || unk_0x08BA6DD398CA197C(Local_99.f_1, 12)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 13)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 14));
}

int func_498()
{
	switch (func_840())
	{
		case 1:
			return Global_262145.f_10884;
		
		case 2:
			return Global_262145.f_10886;
		
		case 0:
			return Global_262145.f_10883;
		
		case 3:
			return Global_262145.f_10885;
		
		default:
	}
	return 5;
}

int func_499()
{
	switch (func_840())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_500()
{
	switch (func_840())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_501()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_840();
	switch (iVar0)
	{
		case 0:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				if (unk_0x999A157665D69393(Var1, func_490(), 1) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				if (func_502(Var1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				if (func_502(Var1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				if (unk_0x999A157665D69393(Var1, func_490(), 1) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_502(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0xDFC5B758BDC9546F(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_503()
{
	if (!func_505(1))
	{
		return 0;
	}
	if (func_333())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_358, 11))
		{
			if (!func_504())
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
				{
					unk_0x88B0F0DC270164B7(&iLocal_358, 11);
					unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_358, 11);
			}
		}
		return 0;
	}
	if (func_328(unk_0x0C1D3C552325765B()) < 1)
	{
		return 0;
	}
	if (func_855())
	{
		return 1;
	}
	if (func_343())
	{
		return 1;
	}
	return 0;
}

bool func_504()
{
	int iVar0;
	
	iVar0 = func_840();
	return iVar0 == 1;
}

int func_505(bool bParam0)
{
	if (func_337(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_126(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_520())
	{
		return 0;
	}
	if (func_317())
	{
		return 0;
	}
	if (func_422())
	{
		return 0;
	}
	if (func_311())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_66(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_313())
	{
		return 0;
	}
	if (func_337(unk_0x0C1D3C552325765B(), 0) || func_337(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_337(unk_0x0C1D3C552325765B(), 12) || func_337(unk_0x0C1D3C552325765B(), 14)) || func_337(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_519(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_510())
		{
			return 0;
		}
	}
	if (func_509())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_508(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (func_507(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_506(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_506(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_507(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (!func_930(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_509()
{
	return Global_91458.f_304 > 0;
}

int func_510()
{
	int iVar0;
	
	iVar0 = func_219(unk_0x0C1D3C552325765B());
	if (func_518(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_517(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_515(unk_0x0C1D3C552325765B()))
	{
		if (func_514(iVar0) || func_513(iVar0))
		{
			return 1;
		}
	}
	if (func_511(unk_0x0C1D3C552325765B()))
	{
		if (func_513(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_930(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_512(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_514(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_515(int iParam0)
{
	if (func_516(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_517(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_930(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_512(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_519(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_517(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_511(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_520()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

void func_521()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_99.f_3 != 1)
	{
		return;
	}
	if (!func_503())
	{
		if (iLocal_493 != -2)
		{
			if (iLocal_493 > -1)
			{
				iVar4 = unk_0x81C7A2950EF11C8A(iLocal_493);
				if (unk_0x1489FFC2CBA39486(iVar4))
				{
					iVar2 = unk_0xF3B8A064D228878B(iVar4);
					if (iVar2 != unk_0x0C1D3C552325765B())
					{
						func_595(iVar2, 421, 0);
						if (!func_855())
						{
							func_593(iVar2, 1, 0);
							func_592(iVar2, 0, 0);
							func_591(iVar2, 0);
							func_590(iVar2, Global_262145.f_10787, 0);
						}
					}
				}
			}
			else if (unk_0x16833EFAA58E63DB(uLocal_491))
			{
				unk_0x0B57C567D698C373(&uLocal_491);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_489))
			{
				unk_0x0B57C567D698C373(&uLocal_489);
			}
			iLocal_493 = -2;
			func_589();
		}
		return;
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_21(Local_99.f_29[0]))
			{
				if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_29[0])))
				{
					if (unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), -1, 0) == unk_0xA0081090911D13E5())
					{
						if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 8))
						{
							unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 8);
							func_346();
							func_348(0);
							if (unk_0x16833EFAA58E63DB(uLocal_491))
							{
								unk_0x0B57C567D698C373(&uLocal_491);
							}
						}
					}
					else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 8))
					{
						unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 8);
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 8))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 8);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 8))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 8);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 8))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 8);
		}
		if (iLocal_493 != Local_99.f_7)
		{
			if (func_21(Local_99.f_29[0]))
			{
				if (Local_99.f_7 == -1)
				{
					if (func_503())
					{
						if (func_328(unk_0x0C1D3C552325765B()) >= 1)
						{
							iVar4 = unk_0x81C7A2950EF11C8A(iLocal_493);
							if (unk_0x1489FFC2CBA39486(iVar4))
							{
								iVar2 = unk_0xF3B8A064D228878B(iVar4);
								if (iVar2 != unk_0x0C1D3C552325765B())
								{
									func_595(iVar2, 421, 0);
									if (!func_855())
									{
										func_593(iVar2, 1, 0);
										func_592(iVar2, 0, 0);
										func_591(iVar2, 0);
										func_590(iVar2, Global_262145.f_10787, 0);
									}
								}
							}
						}
					}
					func_586();
				}
				else
				{
					iVar4 = unk_0x81C7A2950EF11C8A(Local_99.f_7);
					if (unk_0x1489FFC2CBA39486(iVar4))
					{
						if (func_503())
						{
							if (func_328(unk_0x0C1D3C552325765B()) >= 1)
							{
								iVar2 = unk_0xF3B8A064D228878B(iVar4);
								if (unk_0x16833EFAA58E63DB(uLocal_491))
								{
									unk_0x0B57C567D698C373(&uLocal_491);
								}
								if (iVar2 != unk_0x0C1D3C552325765B())
								{
									if (!func_855())
									{
										if (!func_584())
										{
											func_595(iVar2, 421, 1);
											func_592(iVar2, 1, 1);
											func_593(iVar2, 1, 1);
											func_591(iVar2, 1);
											func_590(iVar2, Global_262145.f_10787, 1);
										}
										else
										{
											func_595(iVar2, 421, 1);
											func_590(iVar2, Global_262145.f_10787, 1);
										}
									}
									else if (func_584())
									{
										func_595(iVar2, 421, 1);
										func_590(iVar2, Global_262145.f_10787, 1);
									}
									else
									{
										func_595(iVar2, 421, 1);
										func_592(iVar2, 1, 1);
										func_593(iVar2, 1, 1);
										func_591(iVar2, 1);
										func_590(iVar2, Global_262145.f_10787, 1);
									}
								}
								if (iVar2 != unk_0x0C1D3C552325765B())
								{
									func_563("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_493 = Local_99.f_7;
				if (iLocal_493 == -1)
				{
				}
			}
		}
		if (func_503())
		{
			if (func_328(unk_0x0C1D3C552325765B()) > 2)
			{
				if (iLocal_493 == -1)
				{
					if (func_855())
					{
						if (!func_562("GB_AST_RETV"))
						{
							func_559("GB_AST_RETV", 0);
						}
					}
					else if (func_343())
					{
						if (!func_562("GB_AST_DESR"))
						{
							func_559("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_493 == unk_0x848AF823A8EA3C62())
				{
					if (func_855())
					{
						if (!func_562("GB_AST_DROPV"))
						{
							func_559("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_558();
					if (iVar2 != func_18())
					{
						if (func_837(1))
						{
							iVar3 = func_496();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_562("GB_AST_DROPBV"))
								{
									iVar0 = func_229(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_227(iVar0);
										func_546("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_562("GB_AST_DESR"))
							{
								func_559("GB_AST_DESR", 0);
							}
						}
						else if (!func_562("GB_AST_DESR"))
						{
							func_559("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_493 == -1)
		{
			if (unk_0x16833EFAA58E63DB(uLocal_489))
			{
				unk_0x0B57C567D698C373(&uLocal_489);
			}
			func_586();
		}
		else if (iLocal_493 == unk_0x848AF823A8EA3C62())
		{
			if (unk_0x16833EFAA58E63DB(uLocal_491))
			{
				unk_0x0B57C567D698C373(&uLocal_491);
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
			{
				if (func_328(unk_0x0C1D3C552325765B()) >= 1)
				{
					if (!unk_0x16833EFAA58E63DB(uLocal_489))
					{
						uLocal_489 = unk_0x52CE8C31DD5898E7(func_24());
						unk_0x71E206F83114C3D2(uLocal_489, 1);
					}
				}
				else if (unk_0x16833EFAA58E63DB(uLocal_489))
				{
					unk_0x0B57C567D698C373(&uLocal_489);
				}
			}
			else if (unk_0x16833EFAA58E63DB(uLocal_489))
			{
				unk_0x0B57C567D698C373(&uLocal_489);
			}
		}
		else
		{
			if (unk_0x16833EFAA58E63DB(uLocal_491))
			{
				unk_0x0B57C567D698C373(&uLocal_491);
			}
			iVar2 = func_558();
			if (iVar2 != func_18())
			{
				if (func_837(1))
				{
					iVar3 = func_496();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
							{
								if (func_328(unk_0x0C1D3C552325765B()) >= 1)
								{
									if (!unk_0x16833EFAA58E63DB(uLocal_489))
									{
										uLocal_489 = unk_0x52CE8C31DD5898E7(func_24());
										unk_0x71E206F83114C3D2(uLocal_489, 1);
									}
								}
							}
							else if (unk_0x16833EFAA58E63DB(uLocal_489))
							{
								unk_0x0B57C567D698C373(&uLocal_489);
							}
						}
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 2))
		{
			if (func_343())
			{
				if (!func_545(85))
				{
					if (func_328(unk_0x0C1D3C552325765B()) >= 1)
					{
						if (func_539(0, 1, 1, 1))
						{
							sVar5 = func_533(unk_0x81C85E54237F8A2E(Local_99.f_9));
							iVar6 = func_532(unk_0x81C85E54237F8A2E(Local_99.f_9));
							if (func_837(1))
							{
								func_531("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_531("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_530(1);
							unk_0x88B0F0DC270164B7(&iLocal_357, 2);
						}
					}
				}
			}
		}
		func_524();
	}
	func_522();
}

void func_522()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_503())
	{
		return;
	}
	if (!func_855() && !func_343())
	{
		return;
	}
	bVar6 = false;
	if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
	{
		if (func_21(Local_99.f_29[0]))
		{
			if (Local_99.f_7 == -1)
			{
				if (!func_343())
				{
					unk_0x29F530EB20218AC0(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0x29F530EB20218AC0(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_558();
				if (iVar5 != func_18())
				{
					if (!func_837(1))
					{
						unk_0x29F530EB20218AC0(6, &uVar0, &uVar1, &uVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_496();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							unk_0x29F530EB20218AC0(6, &uVar0, &uVar1, &uVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_523(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_523(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_524()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_558();
	Var1 = { func_24() };
	if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
	{
		if (unk_0xB480350E4250D92A(Local_99.f_29[0]))
		{
			if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 9))
			{
				if (iVar0 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar0)))
					{
						if (unk_0x6E07DBF03F3AC258(unk_0x21F191D9AFF98B5E(iVar0), Var1, 6f, 6f, 2f, 1, 1, 0))
						{
							func_525(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), 0, 1);
							if (unk_0x775F8FFC8E29F525(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0])))
							{
								unk_0x58046B46E2D18640(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_525(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_528(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (func_930(iVar1, 0, 1))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar1), iParam0, 0))
				{
					func_526(func_527(iVar1), 0, 0f, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	else if (!unk_0x775F8FFC8E29F525(iParam0))
	{
		unk_0x33E20212DBE504C2(iParam0);
	}
	else
	{
		if (bParam2)
		{
			unk_0x58046B46E2D18640(iParam0, 1);
		}
		unk_0xBB21B5C3111E5F85(iParam0, 0);
		if (bParam1)
		{
			unk_0x39800A40136ECF37(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 7, iParam0);
	}
}

int func_527(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

int func_528(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	if (iParam4 || !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_529(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xD3FACCDA4D66AEAD(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xA0081090911D13E5())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xEB361B4BD195A4D3(iVar2))
					{
						if (unk_0x54F0AEFB11EA090A(iVar2))
						{
							if (unk_0x7DC70BB637724B43(unk_0xA43666ACD375E339(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0xEB361B4BD195A4D3(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_529(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x6315EBE95A97CADF(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8FD32443A080784B(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, iParam1);
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x21178DF77817BF39(iVar0, 451360105) == 1 || unk_0x21178DF77817BF39(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 0), unk_0xC59DF10B4FC39DF8(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_530(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_286(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_267())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_531(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x55B5433015A91E85(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x212C24688D441F9E(iParam2);
	}
	unk_0xDA35BDB37E728640(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam3);
}

int func_532(int iParam0)
{
	int iVar0;
	
	iVar0 = func_229(iParam0);
	if (iVar0 != -1)
	{
		return func_227(iVar0);
	}
	return 1;
}

char* func_533(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		sVar0 = func_538(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return sVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		sVar0 = func_536(iParam0, 0);
		return sVar0;
	}
	if (((func_232(iParam0, 28) || func_232(unk_0x0C1D3C552325765B(), 28)) || func_535(iParam0)) && !func_534(iParam0))
	{
		return func_536(iParam0, 0);
	}
	iVar1 = func_41(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_536(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_538(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(sVar0))
		{
			return func_536(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_534(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_535(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_42(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_536(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_214(iParam0, 1))
		{
			return func_537();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_537()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_538(var uParam0)
{
	return uParam0;
}

int func_539(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_544())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	if (func_520())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_65(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_543(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_542())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_541())
	{
		return 0;
	}
	if (func_540())
	{
		return 0;
	}
	if (func_311())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_540()
{
	return Global_2442442.f_569;
}

bool func_541()
{
	return Global_2442442.f_721;
}

bool func_542()
{
	return Global_2432628.f_2489.f_585;
}

int func_543(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_544()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

bool func_545(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

void func_546(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_547(sParam0, unk_0xCF66111B26743875(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312571 = 15;
		Global_1312571.f_56 = iParam3;
		Global_1312571.f_57 = uParam4;
	}
}

int func_547(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 63)
	{
		return 0;
	}
	if (func_557(sParam0, sParam1, sParam2) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_551();
	Global_1312571 = 10;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	StringCopy(&(Global_1312571.f_32), sParam2, 64);
	Global_1312571.f_58 = uParam4;
	Global_1312571.f_56 = uParam4;
	func_550();
	func_549(bParam3);
	func_548();
	return 1;
}

void func_548()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_549(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_550()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_551()
{
	func_553();
	func_552(0);
}

void func_552(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_553()
{
	if (!func_556())
	{
	}
	if (func_555())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_554();
		unk_0x953FDEB57BB0D276();
	}
}

void func_554()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_555()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

int func_556()
{
	if (!func_555())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_554();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_557(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_555())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam2) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_32));
}

int func_558()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_99.f_7;
	if (iVar1 != -1)
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar0 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
		}
	}
	return iVar0;
}

void func_559(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_560(sParam0))
	{
		return;
	}
	func_551();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_550();
	func_549(bParam1);
	func_548();
}

bool func_560(char* sParam0)
{
	if (!func_555())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_561(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_561(char* sParam0)
{
	if (!func_555())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_562(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_555())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_560(sParam0);
}

int func_563(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x10B1B072E9514664(iParam1);
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		if ((iVar1 != -1 && unk_0x1504F110F2576375()) && iVar1 < 4)
		{
			if (Global_1626500.f_80279[iVar1] != -1)
			{
				unk_0x212C24688D441F9E(func_583(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x212C24688D441F9E(func_571(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x212C24688D441F9E(func_571(iParam1, -2, 1, 0));
		}
		unk_0xDA35BDB37E728640(func_569(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_42(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar18 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2471124.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_568(&Var2) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_564(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_564(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_567() || !unk_0x1504F110F2576375()) || !func_34(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_565(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_565(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_566(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_566(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_567()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

struct<16> func_568(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_569(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_570(&cVar0);
}

var func_570(char[4] cParam0)
{
	return cParam0;
}

int func_571(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_104(iParam0))
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
	if (func_104(unk_0x0C1D3C552325765B()) || (func_582() && func_581()))
	{
		uVar1 = func_580();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_930(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_583(iParam1, iParam0, 0);
							}
							else
							{
								return func_578(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_578(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_583(iParam1, iParam0, 0);
				}
				else
				{
					return func_572(0, -1, 0);
				}
			}
			else
			{
				return func_572(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_583(iParam1, iParam0, 0);
		}
		else
		{
			return func_578(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_578(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_572(bool bParam0, int iParam1, bool bParam2)
{
	return func_573(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_573(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_103(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_577(1);
				}
				else
				{
					return func_577(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_574(iVar0, iParam2, 1);
			}
			else
			{
				return func_574(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_577(1);
	}
	return func_577(0);
}

int func_574(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_576(iParam0, iParam1);
	if (func_575(Global_1626500.f_83867))
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

int func_575(int iParam0)
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

int func_576(int iParam0, int iParam1)
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
			if (!func_103(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_577(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_578(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if ((func_135(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_103(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_577(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_579(1);
			}
			else
			{
				return func_573(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_577(1);
			}
			else
			{
				return func_573(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_229(iParam0);
	if (!iVar3 == -1)
	{
		return func_227(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_579(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

var func_580()
{
	return Global_2359301.f_2;
}

bool func_581()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_582()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

int func_583(int iParam0, int iParam1, bool bParam2)
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
		iVar0 = func_573(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_584()
{
	switch (func_840())
	{
		case 1:
			return func_585();
		
		case 0:
		case 2:
		case 3:
			return func_495();
		
		default:
	}
	return 0;
}

int func_585()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_558();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	iVar1 = func_496();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_586()
{
	if (unk_0x16833EFAA58E63DB(uLocal_491))
	{
		return;
	}
	if (!func_855() && !func_343())
	{
		return;
	}
	if (func_328(unk_0x0C1D3C552325765B()) < 1)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_491))
		{
			unk_0x0B57C567D698C373(&uLocal_491);
		}
		return;
	}
	uLocal_491 = unk_0x91B4D18C6AFDC14C(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]));
	unk_0x03BF882778D9DF25(uLocal_491, 1);
	unk_0x2FE9515E72A14285(uLocal_491, 1);
	unk_0x420759DE4A6A9555(uLocal_491, 12);
	unk_0x32479C670EB9962F(uLocal_491, 421);
	unk_0xC40118229E47A3D7(uLocal_491, Global_262145.f_10787);
	unk_0x6F18BFEFE84565FF(uLocal_491, "GB_AST_RHN");
	if (func_855())
	{
		func_587(&uLocal_491, 9);
	}
	else
	{
		func_587(&uLocal_491, 6);
	}
	if (func_855())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 0))
		{
			unk_0x3AE9C8E8575D2576(uLocal_491, 1);
			unk_0xFB70601EAE8F9B9E(uLocal_491, 7000);
			unk_0x07FD940F5798C7D3();
			unk_0x88B0F0DC270164B7(&iLocal_357, 0);
		}
	}
}

void func_587(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		iVar0 = func_588(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, iVar0);
	}
}

int func_588(int iParam0)
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

void func_589()
{
	if (!func_555())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_551();
}

void func_590(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_377())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_700[iParam0]) || Global_2414657.f_700[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_502[iVar0] = uParam1;
			Global_2414657.f_700[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_700[iParam0] = -1;
		}
	}
}

void func_591(int iParam0, bool bParam1)
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

void func_592(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_930(iParam0, 1, 1))
		{
			Global_2414657.f_634[iParam0] = unk_0xEAE20F1125B83888();
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_364), iParam0);
			func_591(iParam0, bParam2);
		}
	}
	else
	{
		func_591(iParam0, bParam2);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_364), iParam0);
		Global_2414657.f_634[iParam0] = -1;
	}
}

void func_593(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_377())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_594(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = iParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_594(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

void func_595(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_377())
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
				func_596();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_596();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_596()
{
	Global_2414657.f_923 = 1;
}

void func_597()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;
	var uVar17;
	char* sVar18;
	int iVar19;
	
	if (Local_99.f_3 == 1)
	{
		return;
	}
	if (!func_503())
	{
		if (iLocal_492 != -2)
		{
			if (iLocal_492 > -1)
			{
				iVar2 = unk_0x81C7A2950EF11C8A(iLocal_492);
				if (unk_0x1489FFC2CBA39486(iVar2))
				{
					iVar0 = unk_0xF3B8A064D228878B(iVar2);
					if (iVar0 != unk_0x0C1D3C552325765B())
					{
						func_595(iVar0, 457, 0);
						if (!func_855())
						{
							func_593(iVar0, 1, 0);
							func_592(iVar0, 0, 0);
							func_591(iVar0, 0);
							func_590(iVar0, Global_262145.f_10787, 0);
						}
						else if (Local_99.f_9 > -1)
						{
							iVar1 = unk_0x81C85E54237F8A2E(Local_99.f_9);
							if (unk_0xCB129F9A01D14082(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_593(iVar0, 1, 0);
									func_592(iVar0, 0, 0);
									func_591(iVar0, 0);
									func_590(iVar0, Global_262145.f_10787, 0);
								}
							}
						}
					}
				}
			}
			else if (unk_0x16833EFAA58E63DB(uLocal_488))
			{
				unk_0x0B57C567D698C373(&uLocal_488);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_489))
			{
				unk_0x0B57C567D698C373(&uLocal_489);
			}
			iLocal_492 = -2;
			func_589();
		}
		return;
	}
	if (iLocal_492 != Local_99.f_5)
	{
		if (Local_99.f_5 == -1)
		{
			if (func_503())
			{
				if (func_328(unk_0x0C1D3C552325765B()) >= 1)
				{
					iVar2 = unk_0x81C7A2950EF11C8A(iLocal_492);
					if (unk_0x1489FFC2CBA39486(iVar2))
					{
						iVar0 = unk_0xF3B8A064D228878B(iVar2);
						if (iVar0 != unk_0x0C1D3C552325765B())
						{
							func_595(iVar0, 457, 0);
							if (!func_855())
							{
								func_593(iVar0, 1, 0);
								func_592(iVar0, 0, 0);
								func_591(iVar0, 0);
								func_590(iVar0, Global_262145.f_10787, 0);
							}
							else if (Local_99.f_9 > -1)
							{
								iVar1 = unk_0x81C85E54237F8A2E(Local_99.f_9);
								if (unk_0xCB129F9A01D14082(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_593(iVar0, 1, 0);
										func_592(iVar0, 0, 0);
										func_591(iVar0, 0);
										func_590(iVar0, Global_262145.f_10787, 0);
									}
								}
							}
						}
					}
					if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
					{
						func_617("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_492 != -1)
			{
				if (iLocal_492 > -1)
				{
					iVar2 = unk_0x81C7A2950EF11C8A(iLocal_492);
					if (unk_0x1489FFC2CBA39486(iVar2))
					{
						iVar0 = unk_0xF3B8A064D228878B(iVar2);
						if (iVar0 != unk_0x0C1D3C552325765B())
						{
							if (func_328(unk_0x0C1D3C552325765B()) >= 1)
							{
								func_595(iVar0, 457, 0);
								if (!func_855())
								{
									func_593(iVar0, 1, 0);
									func_592(iVar0, 0, 0);
									func_591(iVar0, 0);
									func_590(iVar0, Global_262145.f_10787, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = unk_0x81C7A2950EF11C8A(Local_99.f_5);
			if (unk_0x1489FFC2CBA39486(iVar2))
			{
				if (func_503())
				{
					if (func_328(unk_0x0C1D3C552325765B()) >= 1)
					{
						iVar0 = unk_0xF3B8A064D228878B(iVar2);
						if (func_930(iVar0, 1, 1))
						{
							if (unk_0x16833EFAA58E63DB(uLocal_488))
							{
								unk_0x0B57C567D698C373(&uLocal_488);
							}
							if (iVar0 != unk_0x0C1D3C552325765B())
							{
								if (!func_855())
								{
									if (!func_495())
									{
										func_595(iVar0, 457, 1);
										func_592(iVar0, 1, 1);
										func_593(iVar0, 1, 1);
										func_591(iVar0, 1);
										func_590(iVar0, Global_262145.f_10787, 1);
									}
									else
									{
										func_595(iVar0, 457, 1);
										func_590(iVar0, Global_262145.f_10787, 1);
									}
								}
								else if (func_495())
								{
									func_595(iVar0, 457, 1);
									func_590(iVar0, Global_262145.f_10787, 1);
								}
								else
								{
									func_595(iVar0, 457, 1);
									func_592(iVar0, 1, 1);
									func_593(iVar0, 1, 1);
									func_591(iVar0, 1);
									func_590(iVar0, Global_262145.f_10787, 1);
								}
							}
							if (iVar0 != unk_0x0C1D3C552325765B())
							{
								func_563("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_492 = Local_99.f_5;
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
		{
			if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 2))
			{
				if (unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0xA0081090911D13E5()))
				{
					unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
					func_616(1);
					func_346();
					if (func_343())
					{
						func_348(0);
						unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 6);
					}
					if (!Global_1572925)
					{
						Global_1572925 = 1;
					}
					if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_12))
						{
							unk_0xFE84F1ABBFFC8840(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
							unk_0x88B0F0DC270164B7(&iLocal_357, 12);
						}
					}
					else if (unk_0x08BA6DD398CA197C(iLocal_357, 12))
					{
						unk_0x09C86C0C5CA26B1E(&iLocal_357, 12);
						unk_0x09C86C0C5CA26B1E(&iLocal_357, 13);
					}
					iLocal_496 = unk_0x2657E29E0DD8087E();
					if (func_286(1))
					{
						unk_0xAB16AADE80707D47(iLocal_496, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						unk_0xAB16AADE80707D47(iLocal_496, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_615(unk_0xA0081090911D13E5()))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_12))
						{
							unk_0xFE84F1ABBFFC8840(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
							unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_99.f_12), Local_360, 0, 0, 1);
						}
					}
				}
			}
			else if (!unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0xA0081090911D13E5()))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
				if (Global_1572925)
				{
					Global_1572925 = 0;
				}
				if (unk_0x848AF823A8EA3C62() != Local_99.f_8)
				{
					func_616(0);
				}
				if (unk_0x08BA6DD398CA197C(iLocal_357, 12))
				{
					unk_0x09C86C0C5CA26B1E(&iLocal_357, 12);
					unk_0x09C86C0C5CA26B1E(&iLocal_357, 13);
				}
			}
			else
			{
				if (func_615(unk_0xA0081090911D13E5()))
				{
					if (unk_0xB480350E4250D92A(Local_99.f_12))
					{
						unk_0xFE84F1ABBFFC8840(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
						unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_99.f_12), Local_360, 0, 0, 1);
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_357, 12))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 13))
					{
						if (func_539(0, 1, 1, 1))
						{
							func_614("GB_ASLT_SUB", -1);
							unk_0x88B0F0DC270164B7(&iLocal_357, 13);
						}
					}
				}
			}
		}
	}
	else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 2))
	{
		unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 2);
	}
	if (iLocal_492 == -1)
	{
		if (func_503())
		{
			if (!unk_0x16833EFAA58E63DB(uLocal_488))
			{
				if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
				{
					func_613();
				}
			}
			else if (!unk_0x08BA6DD398CA197C(iLocal_357, 5))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
				{
					unk_0x88B0F0DC270164B7(&iLocal_357, 5);
					unk_0x0B57C567D698C373(&uLocal_488);
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
			{
				if (func_328(unk_0x0C1D3C552325765B()) >= 1)
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_13[0]))
					{
						if (!func_10(Local_99.f_13[0]))
						{
							unk_0x29F530EB20218AC0(6, &uVar3, &uVar4, &uVar5, &uVar6);
							unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_13[0]), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
						}
					}
				}
			}
		}
		if (unk_0x16833EFAA58E63DB(uLocal_489))
		{
			unk_0x0B57C567D698C373(&uLocal_489);
		}
	}
	else if (iLocal_492 == unk_0x848AF823A8EA3C62())
	{
		if (unk_0x16833EFAA58E63DB(uLocal_488))
		{
			unk_0x0B57C567D698C373(&uLocal_488);
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
		{
			if (func_328(unk_0x0C1D3C552325765B()) >= 1)
			{
				if (!unk_0x16833EFAA58E63DB(uLocal_489))
				{
					uLocal_489 = unk_0x52CE8C31DD5898E7(func_24());
					unk_0x71E206F83114C3D2(uLocal_489, 1);
				}
			}
			else if (unk_0x16833EFAA58E63DB(uLocal_489))
			{
				unk_0x0B57C567D698C373(&uLocal_489);
			}
		}
		else if (unk_0x16833EFAA58E63DB(uLocal_489))
		{
			unk_0x0B57C567D698C373(&uLocal_489);
		}
	}
	else
	{
		if (unk_0x16833EFAA58E63DB(uLocal_488))
		{
			unk_0x0B57C567D698C373(&uLocal_488);
		}
		iVar0 = func_494();
		if (iVar0 != func_18())
		{
			if (func_837(1))
			{
				iVar1 = func_496();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
						{
							if (func_328(unk_0x0C1D3C552325765B()) >= 1)
							{
								if (!unk_0x16833EFAA58E63DB(uLocal_489))
								{
									uLocal_489 = unk_0x52CE8C31DD5898E7(func_24());
									unk_0x71E206F83114C3D2(uLocal_489, 1);
								}
							}
						}
						else if (unk_0x16833EFAA58E63DB(uLocal_489))
						{
							unk_0x0B57C567D698C373(&uLocal_489);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_503())
		{
			if (func_328(unk_0x0C1D3C552325765B()) >= 1)
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_496();
						if (func_837(1))
						{
							if (unk_0xCB129F9A01D14082(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									unk_0x29F530EB20218AC0(6, &uVar3, &uVar4, &uVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							unk_0x29F530EB20218AC0(6, &uVar3, &uVar4, &uVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar0)))
							{
								if (unk_0x39FEE545B315414E(unk_0x21F191D9AFF98B5E(iVar0), 0) && unk_0x1F1B2B6E500380C5(unk_0xF8DB47D339B8B953(unk_0x21F191D9AFF98B5E(iVar0), 1), 0))
								{
									func_523(unk_0xF8DB47D339B8B953(unk_0x21F191D9AFF98B5E(iVar0), 1), uVar3, uVar4, uVar5);
								}
								else
								{
									unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iVar0), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 4))
	{
		unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 4);
	}
	if (func_503())
	{
		if (func_328(unk_0x0C1D3C552325765B()) > 2)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_358, 6))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
				{
					if (iLocal_492 == -1)
					{
						if (func_855())
						{
							if (!func_562("GB_AST_RETP"))
							{
								func_559("GB_AST_RETP", 0);
							}
						}
						else if (func_343())
						{
							if (!func_562("GB_AST_RETP"))
							{
								func_559("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_492 == unk_0x848AF823A8EA3C62())
					{
						if (!func_562("GB_AST_DROP"))
						{
							func_559("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_494();
						if (iVar0 != func_18())
						{
							if (func_837(1))
							{
								iVar1 = func_496();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_562("GB_AST_DROPB"))
									{
										iVar16 = func_229(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_227(iVar16);
											func_546("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_562("GB_AST_RETNG"))
									{
										func_610("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_562("GB_AST_RETGR"))
								{
									sVar18 = func_533(iVar0);
									func_607("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_562("GB_AST_RETNG"))
								{
									func_610("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_562("GB_AST_RETGR"))
							{
								sVar18 = func_533(iVar0);
								func_607("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_606() };
					if (!func_562(&Var8))
					{
						func_559(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_589();
		}
	}
	else
	{
		func_589();
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 2))
	{
		if (func_343())
		{
			if (!func_545(85))
			{
				if (func_328(unk_0x0C1D3C552325765B()) >= 1)
				{
					if (func_539(0, 1, 1, 1))
					{
						sVar18 = func_533(unk_0x81C85E54237F8A2E(Local_99.f_9));
						iVar19 = func_532(unk_0x81C85E54237F8A2E(Local_99.f_9));
						if (func_837(1))
						{
							if (Local_99.f_5 > -1)
							{
								func_531("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_531("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_99.f_5 > -1)
						{
							func_531("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_531("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_530(1);
						unk_0x88B0F0DC270164B7(&iLocal_357, 2);
					}
				}
			}
		}
	}
	func_600();
	func_599();
	func_598();
}

void func_598()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_503())
	{
		return;
	}
	if (func_328(unk_0x0C1D3C552325765B()) >= 1)
	{
		if (unk_0x0E091C9F3918F674(Local_99.f_12) && !unk_0x912AD5A10E7633F0(unk_0x9C16D1E97E386176(Local_99.f_12), 0))
		{
			if (!unk_0xA3FB2BC2E4EB48E2(unk_0x9C16D1E97E386176(Local_99.f_12)))
			{
				if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 3) && !unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
				{
					unk_0x29F530EB20218AC0(18, &uVar0, &uVar1, &uVar2, &uVar3);
					unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_99.f_12), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_599()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_494();
	Var1 = { func_24() };
	if (unk_0x16833EFAA58E63DB(uLocal_489))
	{
		unk_0x29F530EB20218AC0(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0xA75B05D6DFDD8308(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 3))
	{
		if (iVar0 == unk_0x0C1D3C552325765B())
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar0)))
			{
				if (unk_0x6E07DBF03F3AC258(unk_0x21F191D9AFF98B5E(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_600()
{
	struct<3> Var0;
	bool bVar3;
	struct<26> Var4;
	
	switch (iLocal_497)
	{
		case 0:
			if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_99.f_12), 1) };
				if (!func_388(Local_499, 0f, 0f, 0f, 0))
				{
					Local_499 = { 0f, 0f, 0f };
				}
				if (func_601(Var0, iLocal_498, 0))
				{
					iLocal_497++;
				}
				if (iLocal_497 == 0)
				{
					iLocal_498++;
				}
				if (iLocal_498 >= 36)
				{
					iLocal_498 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_99.f_5 == -1)
			{
				if (unk_0xB480350E4250D92A(Local_99.f_12))
				{
					bVar3 = true;
					if (func_388(Local_499, 0f, 0f, 0f, 0))
					{
						Local_499 = { unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_99.f_12), 1) };
					}
				}
			}
			else if (Local_99.f_5 == unk_0x848AF823A8EA3C62())
			{
				if (unk_0xB480350E4250D92A(Local_99.f_12))
				{
					if (func_388(Local_499, 0f, 0f, 0f, 0))
					{
						Local_499 = { unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_99.f_12), 1) };
					}
					bVar3 = true;
				}
				else
				{
					unk_0xDC64FA270C733B30(Local_99.f_12);
				}
			}
			if (bVar3)
			{
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_25 = -1082130432;
				Var4.f_3 = 0;
				Var4.f_5 = 1f;
				Var4.f_13[0 /*3*/] = { Local_499 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (unk_0xB480350E4250D92A(Local_99.f_12))
				{
					if (func_46(Local_499, 20f, &Local_502, &uLocal_505, Var4))
					{
						Local_502 = { Local_502 + Vector(0.5f, 0f, 0f) };
						if (unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0xA0081090911D13E5()))
						{
							unk_0x9907A24A0D12B335(unk_0x9C16D1E97E386176(Local_99.f_12));
						}
						unk_0xB8EF5851A40C2867(unk_0x9C16D1E97E386176(Local_99.f_12), Local_502, 0, 0, 1);
						unk_0xB16B53F6FE1ADDB6(unk_0x9C16D1E97E386176(Local_99.f_12), 1);
						unk_0xEDBE0CD7C81FA37E(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
						unk_0x88B0F0DC270164B7(&iLocal_358, 3);
						iLocal_497 = 0;
					}
				}
			}
			else if (Local_99.f_5 != unk_0x848AF823A8EA3C62())
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x63CE7A3848B84093(Local_99.f_12), 1) };
				if (!func_601(Var0, iLocal_498, 0))
				{
					iLocal_497 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_358, 3))
	{
		if (func_539(0, 1, 1, 1))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_358, 3);
			func_614("GB_HLP_WRP", -1);
		}
	}
}

int func_601(struct<3> Param0, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	if (func_605(iParam3))
	{
		func_602(iParam3, &Var0, &Var3, &uVar6, fParam4);
		return unk_0xDFC5B758BDC9546F(Param0, Var0, Var3, uVar6, 0, 1);
	}
	return 0;
}

void func_602(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	
	Var0 = { func_604(iParam0) };
	uVar3 = func_603(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_63(&Var4, 0f, 0f, uVar3);
	Var4 = { Var4 / FtoV(unk_0x652D2EEEF1D3E62C(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_603(int iParam0)
{
	return Global_4004959[iParam0 /*45*/].f_7;
}

Vector3 func_604(int iParam0)
{
	return Global_4004959[iParam0 /*45*/].f_4;
}

int func_605(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_606()
{
	struct<8> Var0;
	
	switch (func_840())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_607(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_608(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 16;
		Global_1312571.f_56 = iParam2;
	}
}

int func_608(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (func_609(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_551();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_550();
	func_549(bParam2);
	func_548();
	return 1;
}

bool func_609(char* sParam0, char* sParam1)
{
	if (!func_555())
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(uParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_610(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_611(sParam0, unk_0xCF66111B26743875(iParam1), bParam3, 1);
}

int func_611(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam1) > 63)
	{
		return 0;
	}
	if (func_612(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_551();
	Global_1312571 = 9;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = iParam3;
	Global_1312571.f_56 = iParam3;
	func_550();
	func_549(bParam2);
	func_548();
	return 1;
}

bool func_612(char* sParam0, char* sParam1)
{
	if (!func_555())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

void func_613()
{
	if (func_328(unk_0x0C1D3C552325765B()) < 1)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_488))
		{
			unk_0x0B57C567D698C373(&uLocal_488);
		}
		return;
	}
	if (unk_0x16833EFAA58E63DB(uLocal_488))
	{
		return;
	}
	uLocal_488 = unk_0x91B4D18C6AFDC14C(unk_0x63CE7A3848B84093(Local_99.f_12));
	unk_0x420759DE4A6A9555(uLocal_488, 12);
	unk_0x32479C670EB9962F(uLocal_488, 457);
	unk_0x03BF882778D9DF25(uLocal_488, 1);
	unk_0x2FE9515E72A14285(uLocal_488, 1);
	unk_0xC40118229E47A3D7(uLocal_488, Global_262145.f_10787);
	unk_0x6F18BFEFE84565FF(uLocal_488, "GB_AST_BLIP");
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
	{
		if (func_855())
		{
			func_587(&uLocal_488, 18);
		}
		else
		{
			func_587(&uLocal_488, 18);
		}
	}
	else
	{
		func_587(&uLocal_488, 6);
	}
	if (func_855())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 0))
		{
			unk_0x3AE9C8E8575D2576(uLocal_488, 1);
			unk_0xFB70601EAE8F9B9E(uLocal_488, 7000);
			unk_0x07FD940F5798C7D3();
			unk_0x88B0F0DC270164B7(&iLocal_357, 0);
		}
	}
}

void func_614(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

bool func_615(int iParam0)
{
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	if (unk_0x912AD5A10E7633F0(iParam0, 0))
	{
	}
	return unk_0x16A396814EC162D8(iParam0) == Global_138760;
}

void func_616(bool bParam0)
{
	if (bParam0)
	{
		if (!func_232(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_328(unk_0x0C1D3C552325765B()) != 0)
			{
				func_334(9);
			}
		}
	}
	else if (func_232(unk_0x0C1D3C552325765B(), 9))
	{
		func_336(9);
	}
}

int func_617(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_564(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_618()
{
	struct<8> Var0;
	char[] cVar8[8];
	int iVar9;
	
	if (func_333())
	{
		return;
	}
	if (func_328(unk_0x0C1D3C552325765B()) == 0)
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 5))
	{
		if (!func_855())
		{
			if (((Local_99.f_5 != -1 || Local_99.f_7 != -1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 16)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 20))
			{
				unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 5);
				unk_0x671810EE85FFCDFC(1);
				if (unk_0x0E091C9F3918F674(Local_99.f_12))
				{
					unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 0, 1);
				}
				cVar8 = func_533(unk_0x81C85E54237F8A2E(Local_99.f_9));
				iVar9 = func_532(unk_0x81C85E54237F8A2E(Local_99.f_9));
				if (func_19(unk_0x0C1D3C552325765B(), 1))
				{
					Var0 = { func_626(1) };
					if (func_503())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 0)
						{
							func_619(85, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_815(-1, 0, 0, -1);
				}
				else
				{
					Var0 = { func_626(0) };
					if (func_503())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 0)
						{
							func_619(85, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_815(-1, 0, 0, -1);
				}
				func_373(1);
			}
		}
	}
}

int func_619(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_620(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_620(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_625(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_621(&Var0);
}

int func_621(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_624(uParam0, uParam0->f_16);
	func_623(uParam0);
	if (func_622(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_270(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_622(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_623(var uParam0)
{
	if (func_272(uParam0->f_1))
	{
		uParam0->f_66 = func_230();
	}
}

void func_624(var uParam0, int iParam1)
{
	if (func_272(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_18())
	{
		return;
	}
	if (func_270(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_571(iParam1, -2, 0, 0);
		}
	}
}

void func_625(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_18();
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

struct<8> func_626(bool bParam0)
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_840())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_840())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_627()
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_358, 12))
		{
			if (func_331(unk_0x0C1D3C552325765B()))
			{
				unk_0x88B0F0DC270164B7(&iLocal_358, 12);
				unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
			}
			else if (func_328(unk_0x0C1D3C552325765B()) < 1)
			{
				unk_0x88B0F0DC270164B7(&iLocal_358, 12);
				unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
			}
		}
		else if (!func_331(unk_0x0C1D3C552325765B()))
		{
			if (func_328(unk_0x0C1D3C552325765B()) >= 1)
			{
				unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 0, 1);
				unk_0x09C86C0C5CA26B1E(&iLocal_358, 12);
			}
		}
	}
}

void func_628()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	char* sVar15;
	char[] cVar19[8];
	char[] cVar23[8];
	char[] cVar27[8];
	char[] cVar31[8];
	char* sVar35;
	char* sVar39;
	int iVar40;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 1))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_358, 6))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
			{
				func_787(&sVar15, &cVar19, &cVar23, &cVar27, &cVar31, &sVar35);
				if (func_503())
				{
					iVar0 = unk_0x81C85E54237F8A2E(Local_99.f_6);
					if (iVar0 == unk_0x0C1D3C552325765B())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(86, "GB_WINNER", &sVar15, 1, -1, 2);
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
						{
							unk_0x88B0F0DC270164B7(&iLocal_357, 17);
							func_774(1, 1, 0, 0, -1, -1, -1, -1);
						}
						func_645(159, 1, &Var2, 0);
						unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					}
					else if (func_19(unk_0x0C1D3C552325765B(), 1))
					{
						iVar1 = func_496();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_328(unk_0x0C1D3C552325765B()) > 1)
							{
								sVar39 = func_644();
								iVar40 = func_532(unk_0x0C1D3C552325765B());
								func_619(86, "GB_WINNER", &cVar19, sVar39, iVar40, 0, -1, -1, -1, 2, -1);
							}
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(1, 1, 0, 0, -1, -1, -1, -1);
							}
							if (func_856() == Local_99.f_8)
							{
								func_645(159, 1, &Var2, 0);
							}
							else
							{
								func_645(159, 0, &Var2, 0);
							}
							unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
						}
						else
						{
							if (func_328(unk_0x0C1D3C552325765B()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar39 = func_533(iVar0);
									iVar40 = func_532(iVar0);
								}
								else
								{
									sVar39 = unk_0xCF66111B26743875(iVar0);
									iVar40 = 1;
								}
								if (func_840() != 1)
								{
									func_619(87, "GB_WORK_OVER", &cVar23, sVar39, iVar40, 0, -1, -1, -1, 2, -1);
								}
								else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
								{
									func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
								}
							}
							func_645(159, 0, &Var2, 0);
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
							func_645(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar39 = func_533(iVar0);
								iVar40 = func_532(iVar0);
							}
							else
							{
								sVar39 = unk_0xCF66111B26743875(iVar0);
								iVar40 = 1;
							}
							if (func_840() != 1)
							{
								func_619(87, "GB_WORK_OVER", &cVar23, sVar39, iVar40, 0, -1, -1, -1, 2, -1);
							}
							else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
							{
								func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
						{
							unk_0x88B0F0DC270164B7(&iLocal_357, 17);
							func_774(0, 2, 0, 0, -1, -1, -1, -1);
						}
						func_645(159, 0, &Var2, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 10))
			{
				if (Local_99.f_6 > -1)
				{
					iVar0 = unk_0x81C85E54237F8A2E(Local_99.f_6);
				}
				if (func_503())
				{
					if (func_855())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							if (unk_0xCB129F9A01D14082(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar39 = func_533(iVar0);
									iVar40 = func_532(iVar0);
								}
								else
								{
									sVar39 = unk_0xCF66111B26743875(iVar0);
									iVar40 = 1;
								}
								func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
							}
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else if (Local_99.f_6 > -1)
					{
						if (func_19(unk_0x0C1D3C552325765B(), 1))
						{
							iVar1 = func_496();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == unk_0x0C1D3C552325765B())
								{
									if (func_328(unk_0x0C1D3C552325765B()) > 1)
									{
										func_818(86, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
									}
								}
								else if (func_328(unk_0x0C1D3C552325765B()) > 1)
								{
									iVar40 = func_532(unk_0x0C1D3C552325765B());
									sVar39 = func_644();
									func_619(86, "GB_WINNER", "BIGM_ASL_DESG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
								}
								if (func_855() || func_343())
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
									{
										unk_0x88B0F0DC270164B7(&iLocal_357, 17);
										func_774(1, 1, 0, 0, -1, -1, -1, -1);
									}
								}
								if (Local_99.f_6 == unk_0x0C1D3C552325765B())
								{
									func_645(159, 1, &Var2, 0);
								}
								else
								{
									func_645(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_328(unk_0x0C1D3C552325765B()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar39 = func_533(iVar0);
										iVar40 = func_532(iVar0);
									}
									else
									{
										sVar39 = unk_0xCF66111B26743875(iVar0);
										iVar40 = 1;
									}
									func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
								}
								if (func_855() || func_343())
								{
									if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
									{
										unk_0x88B0F0DC270164B7(&iLocal_357, 17);
										func_774(0, 2, 0, 0, -1, -1, -1, -1);
									}
								}
								func_645(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == unk_0x0C1D3C552325765B())
						{
							if (func_328(unk_0x0C1D3C552325765B()) > 1)
							{
								func_818(86, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2);
							}
							if (func_855() || func_343())
							{
								if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
								{
									unk_0x88B0F0DC270164B7(&iLocal_357, 17);
									func_774(1, 1, 0, 0, -1, -1, -1, -1);
								}
							}
							func_645(159, 1, &Var2, 0);
						}
						else
						{
							if (func_328(unk_0x0C1D3C552325765B()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar39 = func_533(iVar0);
									iVar40 = func_532(iVar0);
								}
								else
								{
									sVar39 = unk_0xCF66111B26743875(iVar0);
									iVar40 = 1;
								}
								func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
							}
							if (func_855() || func_343())
							{
								if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
								{
									unk_0x88B0F0DC270164B7(&iLocal_357, 17);
									func_774(0, 2, 0, 0, -1, -1, -1, -1);
								}
							}
							func_645(159, 0, &Var2, 0);
						}
					}
					else if (func_19(unk_0x0C1D3C552325765B(), 1))
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							sVar39 = func_644();
							iVar40 = func_532(unk_0x0C1D3C552325765B());
							func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 15))
			{
				if (func_503())
				{
					if (func_855())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x0C1D3C552325765B(), 1))
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							sVar39 = func_644();
							iVar40 = func_532(unk_0x0C1D3C552325765B());
							func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
			{
				if (func_503())
				{
					if (func_855())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else if (func_19(unk_0x0C1D3C552325765B(), 1))
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							sVar39 = func_644();
							iVar40 = func_532(unk_0x0C1D3C552325765B());
							func_619(87, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar39, iVar40, 0, -1, -1, -1, 2, -1);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
					else
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2);
						}
						if (func_855() || func_343())
						{
							if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
							{
								unk_0x88B0F0DC270164B7(&iLocal_357, 17);
								func_774(0, 2, 0, 0, -1, -1, -1, -1);
							}
						}
						func_645(159, 0, &Var2, 0);
					}
				}
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
			{
				func_787(&sVar15, &cVar19, &cVar23, &cVar27, &cVar31, &sVar35);
				if (func_503())
				{
					if (func_19(unk_0x0C1D3C552325765B(), 1))
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", &sVar35, 1, -1, 2);
						}
					}
					else if (func_328(unk_0x0C1D3C552325765B()) > 1)
					{
						func_818(87, "GB_WORK_OVER", &sVar35, 1, -1, 2);
					}
				}
				if (func_855() || func_343())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 17);
						func_774(0, 7, 0, 0, -1, -1, -1, -1);
					}
				}
				func_645(159, 0, &Var2, 0);
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (func_503())
				{
					if (func_855())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
						}
					}
					else if (func_328(unk_0x0C1D3C552325765B()) > 1)
					{
						func_818(87, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2);
					}
				}
				if (func_855() || func_343())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 17);
						func_774(0, 8, 0, 0, -1, -1, -1, -1);
					}
				}
				func_645(159, 0, &Var2, 0);
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 9))
			{
				if (func_503())
				{
					if (func_855())
					{
						if (func_328(unk_0x0C1D3C552325765B()) > 1)
						{
							func_818(87, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
						}
					}
					else if (func_328(unk_0x0C1D3C552325765B()) > 1)
					{
						func_818(87, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2);
					}
				}
				if (func_855() || func_343())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 17);
						func_774(0, 2, 0, 0, -1, -1, -1, -1);
					}
				}
				func_645(159, 0, &Var2, 0);
				unk_0x88B0F0DC270164B7(&iLocal_358, 6);
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_358, 6))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_358, 8))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_357, 19))
				{
					iLocal_495 = -1;
					unk_0x15761381A3072BFA(iLocal_495);
				}
				func_589();
				unk_0x88B0F0DC270164B7(&iLocal_358, 8);
				if (unk_0x08BA6DD398CA197C(iLocal_357, 20))
				{
					unk_0xB49DAD10DC051295("BG_ASSAULT_STOP");
					unk_0x0756AF366187C194("DisableFlightMusic", 0);
					unk_0x0756AF366187C194("WantedMusicDisabled", 0);
				}
			}
			if (unk_0x16833EFAA58E63DB(uLocal_491))
			{
				unk_0x0B57C567D698C373(&uLocal_491);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_490))
			{
				unk_0x0B57C567D698C373(&uLocal_490);
			}
			if (unk_0x16833EFAA58E63DB(uLocal_488))
			{
				unk_0x0B57C567D698C373(&uLocal_488);
			}
			func_643();
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 29))
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 29);
			}
			if (func_629(&uLocal_508, 1, 0))
			{
				unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 1);
			}
		}
	}
}

int func_629(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_334(29);
	if ((*uParam0 > 0 && !func_267()) && func_328(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_642())
		{
			func_641();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_640(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_636(iParam2);
				func_640(uParam0, 2);
			}
			break;
		
		case 2:
			func_636(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_630(func_631(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_640(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_640(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_630(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_631(int iParam0)
{
	if (((func_634(unk_0x0C1D3C552325765B()) || func_633(unk_0x0C1D3C552325765B())) || func_287()) || iParam0)
	{
		if (func_633(unk_0x0C1D3C552325765B()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_260(func_632()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_632()
{
	return Global_1624945;
}

bool func_633(int iParam0)
{
	return func_261(func_219(iParam0), 0);
}

bool func_634(int iParam0)
{
	return func_635(func_219(iParam0));
}

int func_635(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	return 0;
}

void func_636(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_930(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_232(unk_0x0C1D3C552325765B(), 22)) && func_328(unk_0x0C1D3C552325765B()) != 0) && !func_638(func_639())) && !func_634(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_637(func_631(iParam0), -1);
			func_530(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_637(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_639()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_641()
{
	Global_2453273 = 1;
}

int func_642()
{
	if (func_219(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_511(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

void func_643()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_358, 9))
	{
		unk_0x88B0F0DC270164B7(&iLocal_358, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (iVar1 != unk_0x0C1D3C552325765B())
				{
					if (func_504())
					{
						func_595(iVar1, 421, 0);
					}
					else
					{
						func_595(iVar1, 457, 0);
					}
					func_593(iVar1, 1, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_644()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_41(unk_0x0C1D3C552325765B());
	if (iVar0 != func_18())
	{
		if (iVar0 != unk_0x0C1D3C552325765B())
		{
			if (((func_232(iVar0, 28) || func_232(unk_0x0C1D3C552325765B(), 28)) || func_535(iVar0)) && !func_534(iVar0))
			{
				return func_536(iVar0, 0);
			}
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_536(iVar0, 0);
			}
		}
		sVar1 = func_538(&(Global_1614576[iVar0 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(sVar1))
		{
			return func_536(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_645(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	func_772(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_771(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_770(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_219(unk_0x0C1D3C552325765B()) == 167 || func_219(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_769(unk_0x0C1D3C552325765B()) > 0)
			{
				func_768();
			}
			else
			{
				func_767();
			}
		}
		else
		{
			func_766();
		}
	}
	func_737(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_726(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_289();
	if (iVar6 != func_18() && iParam0 != 148)
	{
		if (func_19(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_16(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_719(&iVar0, 1);
			}
		}
	}
	func_715(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_714();
		func_672(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_496();
		if (iVar11 != func_18())
		{
			func_671(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_837(1);
		if (iParam0 == 168)
		{
			if (!func_670())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_669())
			{
				if (!func_670())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_670())
			{
				func_660(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_670())
		{
			func_660(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_659(iParam0, iVar0);
		if (func_658(iParam0))
		{
			if (func_657(iParam0) > -1)
			{
				func_656(func_657(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_655(&Global_2452207, 0, 0);
	}
	if (func_330(unk_0x0C1D3C552325765B()) || func_231(unk_0x0C1D3C552325765B()))
	{
		func_646(iParam0);
	}
	if (func_635(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_646(int iParam0)
{
	if (func_654(unk_0x0C1D3C552325765B()) && func_669())
	{
		if (func_514(iParam0))
		{
			func_649(4611, -1);
		}
		else if (func_648(iParam0))
		{
			func_649(4613, -1);
		}
		else if (func_261(iParam0, 1))
		{
			func_649(4614, -1);
		}
		else if (func_647(iParam0))
		{
			func_649(4615, -1);
		}
	}
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_649(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_653(iParam0, func_341(iParam1), 0);
	iVar0++;
	if (!func_652(iParam0))
	{
		func_651(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_650(iParam0, iVar0, iParam1, 1);
	}
}

void func_650(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_341(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_341(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_341(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_341(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_341(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_341(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_341(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_341(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_341(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_341(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_341(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_341(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_341(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_341(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_341(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_341(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_341(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_341(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_341(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_341(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_341(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_341(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_341(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_341(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_341(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_341(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_341(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_341(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_341(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_341(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_341(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_341(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_341(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_341(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_652(int iParam0)
{
	if (Global_1352216)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

int func_653(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_341(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_654(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_655(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

void func_656(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_658(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_659(int iParam0, int iParam1)
{
	if (func_654(unk_0x0C1D3C552325765B()) && func_669())
	{
		if (func_514(iParam0) && iParam1 > 0)
		{
			func_651(4612, (func_653(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_660(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_670())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
			if (iParam1 > 0)
			{
				func_661(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
			func_661(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_661(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_670())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_36()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_668(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_667(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_662(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_662(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_663(iParam0);
	}
}

void func_663(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_670())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_666(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_664(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_664(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_665(&(uParam0->f_8.f_3));
	func_665(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_665(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_666(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_667(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_668(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_670())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = uParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = uParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_669()
{
	return func_288(unk_0x0C1D3C552325765B());
}

int func_670()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

void func_671(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_672(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_673(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_673(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_683(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_679(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_674(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_674(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_677(iParam0, 1) };
	if (iParam0 == func_676(unk_0xA0081090911D13E5()))
	{
		func_675(1);
	}
	func_679(Var0, iParam1, 0, sParam2, iParam3);
}

void func_675(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_676(var uParam0)
{
	return uParam0;
}

Vector3 func_677(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_678(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_678(var uParam0)
{
	return uParam0;
}

void func_679(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_682(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_681();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_680();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_680()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_681()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_682(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_683(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_684(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_684(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_713(unk_0x0C1D3C552325765B()) || func_712(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_711(uParam2))
	{
	}
	if (func_710())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_708(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_707(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_705(0, &iVar1);
					break;
				
				case 3:
					func_705(1, &iVar1);
					break;
				
				case 1:
					func_703(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_702(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_694((func_701(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_702(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_689(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_685((func_687(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_685((func_687(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_685(int iParam0)
{
	if (func_710())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_686(joaat("mpply_globalxp"), iParam0);
	}
}

void func_686(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_687(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_930(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_688(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_688(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_688(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_689(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_42(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_692(func_693(&Var0));
			if (iVar13 == 0)
			{
				func_691(&Global_1352222, iParam0);
				func_690(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_691(&Global_1352223, iParam0);
				func_690(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_691(&Global_1352224, iParam0);
				func_690(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_691(&Global_1352225, iParam0);
				func_690(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_691(&Global_1352226, iParam0);
				func_690(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_691(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_692(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_693(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_694(int iParam0, int iParam1, int iParam2)
{
	if (func_710())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_341(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_341(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_700(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_698(iParam0, 1);
		}
		func_650(632, iParam0, -1, 1);
		func_651(633, func_698(iParam0, 1), -1, 1, 0);
		Global_1352337[func_341(-1)] = iParam0;
		func_695(7, 0);
	}
}

void func_695(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_697(iParam0, iParam1))
	{
		iVar0 = func_696();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_696()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_697(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_698(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_699(iParam0, 0);
}

int func_699(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_700(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

int func_701(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_341(-1)];
			}
			else if (func_700(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_341(-1)];
	}
	return 0;
}

void func_702(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_653(iParam0, func_341(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_652(iParam0))
	{
		func_651(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_650(iParam0, iVar0, iParam2, 1);
	}
}

void func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_103(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_43(unk_0x0C1D3C552325765B(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_704(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_704(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_704(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_705(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_930(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_43(unk_0x0C1D3C552325765B(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_930(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_706(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_43(unk_0x0C1D3C552325765B(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_704(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_704(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_706(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_37(iParam0), func_37(iParam1));
	return 0f;
}

int func_707(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_704(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_708(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_701(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_701(unk_0x0C1D3C552325765B());
		}
	}
	if (func_709(8000, 0, 0) > 0)
	{
		if (func_709(8000, 0, 0) < (iParam0 + func_701(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_709(8000, 0, 0) - func_701(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_709(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_278713[iParam0];
}

int func_710()
{
	return 1;
}

int func_711(char* sParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_712(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_713(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_714()
{
	Global_2453272 = 1;
}

void func_715(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_307(7))
	{
		return;
	}
	iVar0 = func_717(iParam0);
	iVar1 = func_716(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_514(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_261(iParam0, 0) || func_648(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_718())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_718())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_718())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_718()
{
	return func_20(unk_0x0C1D3C552325765B());
}

void func_719(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_718())
		{
			if (func_837(0))
			{
				if (!func_286(0))
				{
					if (unk_0xCB129F9A01D14082(func_496()))
					{
						if (func_725() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_725());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_723(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_722("GB_BCUT_TICK1", func_496(), iVar0, 0, 0, 1, 1);
						}
						func_721(20);
						func_720(func_496(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_720(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_930(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_527(iParam0));
	}
}

void func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_722(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_571(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_569(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_564(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_723(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_724(1);
	}
	else
	{
		iVar1 = func_724(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_724(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_725()
{
	return Global_262145.f_10821;
}

void func_726(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_669())
			{
				Var0 = { func_736() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_735(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_735(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_729(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_728(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_721(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_286(0))
			{
				Var15 = { func_727(func_496()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_735(func_496(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_735(func_496(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_729(func_496(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_727(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_728(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_34(iVar2, 0) && !func_16(iVar2, unk_0x0C1D3C552325765B(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_729(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_734(iParam1);
	if (func_733(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_730(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_730(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_730(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_730(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_730(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_730(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_730(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_730(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_730(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_730(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_730(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_732(iParam0, iParam1))
	{
		iVar0 = func_731(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_731(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_733(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_732(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_733(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_733(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		default:
	}
	return -1;
}

int func_735(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_733(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_736()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_737(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_20(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_765();
			}
			func_764();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_756(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_755(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_728(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_721(44);
					}
				}
				func_749(*iParam3);
				func_748();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_747(iVar9))
						{
							func_739(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(unk_0x0C1D3C552325765B()))
		{
			func_738();
		}
	}
}

void func_738()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_36()];
	iVar0++;
	func_650(3647, iVar0, -1, 1);
}

void func_739(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_741(iParam0);
	func_740(iParam0, uVar0, iParam1);
}

void func_740(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_18())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_527(iParam0));
		}
	}
}

int func_741(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_746();
	iVar0 = func_744(iParam0, iVar0);
	iVar1 = Global_1614576[func_496() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_743())
	{
		iVar0 = func_743();
	}
	if (iVar0 > func_742())
	{
		iVar0 = func_742();
	}
	return iVar0;
}

int func_742()
{
	return Global_262145.f_12838;
}

int func_743()
{
	return Global_262145.f_14013;
}

int func_744(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_769(iParam0) * func_745());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_745()
{
	return Global_262145.f_14012;
}

var func_746()
{
	return Global_262145.f_10813;
}

int func_747(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_16(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_232(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_748()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_36()];
	iVar0++;
	func_650(3646, iVar0, -1, 1);
}

void func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_650(3648, iVar0, -1, 1);
	if (func_752(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_751(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_750(7666, iVar2, -1, 1);
	}
}

var func_750(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_752(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_754(iParam0, iParam1);
	uVar2 = func_753(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_753(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_754(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_755(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_763(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_762(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_761(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_757(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_757(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_761(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_757(int iParam0)
{
	int iVar0;
	
	if (func_760(iParam0))
	{
		iVar0 = func_758(func_759(iParam0));
		return func_653(iVar0, -1, 0);
	}
	return 0;
}

int func_758(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

int func_759(int iParam0)
{
	int iVar0;
	
	if (func_760(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_760(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_761(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_762(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_760(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_763(int iParam0)
{
	int iVar0;
	
	if (func_760(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_764()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_36()];
	iVar0++;
	Global_2507790[func_36()] = iVar0;
	func_650(3645, iVar0, -1, 1);
}

void func_765()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_36()];
	iVar1 = Global_2507796[func_36()];
	iVar0++;
	iVar1++;
	Global_2507787[func_36()] = iVar0;
	Global_2507796[func_36()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_650(3643, iVar0, -1, 1);
	func_650(3644, iVar1, -1, 1);
}

void func_766()
{
	if (func_718())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_767()
{
	if (func_718())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_768()
{
	if (func_718())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_769(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_772(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_773(iParam0))
	{
		if (!func_718())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_635(iParam0))
	{
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_635(iParam0))
	{
		if (func_19(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_19(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_289();
	if (iVar0 != func_18())
	{
		if (func_16(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_774(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_219(unk_0x0C1D3C552325765B());
	if (func_635(iVar0))
	{
		Global_1750587.f_2 = func_786();
		Global_1750587.f_3 = func_785();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = iParam1;
		Global_1750587.f_19 = func_779(iVar0, bParam0, func_784(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_330(unk_0x0C1D3C552325765B()) || func_329(unk_0x0C1D3C552325765B())) || func_231(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_778(func_496(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_777(func_496(), iParam2);
		}
		func_775();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = iParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_330(unk_0x0C1D3C552325765B()) || func_329(unk_0x0C1D3C552325765B())) || func_231(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_775()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_776();
}

void func_776()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_777(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_730(iParam0, iParam1, 2);
	bVar1 = func_730(iParam0, iParam1, 1);
	bVar2 = func_730(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_733(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_779(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_514(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_513(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_261(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_635(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_783(func_496()), func_782(func_496()), func_786(), func_785(), iVar1, iVar0);
	}
	func_781(iVar0);
	func_780(iVar0);
	return iVar0;
}

void func_780(int iParam0)
{
	int iVar0;
	
	iVar0 = func_653(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_651(3936, iVar0, -1, 1, 0);
}

void func_781(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_782(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_783(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_784(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_330(unk_0x0C1D3C552325765B()) || func_231(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_785()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_786()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

void func_787(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_840())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_788()
{
	if (func_232(unk_0x0C1D3C552325765B(), 20) || func_330(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 20))
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			unk_0x88B0F0DC270164B7(&iLocal_357, 20);
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 21))
		{
			if (unk_0xB49DAD10DC051295("BG_ASSAULT_START"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 21);
			}
		}
		else if (Local_99.f_5 == -1 && Local_99.f_7 == -1)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 22))
			{
				if (Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 > 1)
				{
					if (unk_0xB49DAD10DC051295("BG_ASSAULT_COLLECT"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 22);
						if (unk_0x08BA6DD398CA197C(iLocal_357, 23))
						{
							unk_0x09C86C0C5CA26B1E(&iLocal_357, 23);
						}
					}
				}
			}
		}
		else if (!unk_0x08BA6DD398CA197C(iLocal_357, 23))
		{
			if (unk_0xB49DAD10DC051295("BG_ASSAULT_DELIVER"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 23);
				if (unk_0x08BA6DD398CA197C(iLocal_357, 22))
				{
					unk_0x09C86C0C5CA26B1E(&iLocal_357, 22);
				}
			}
		}
	}
}

void func_789()
{
	if (func_504())
	{
		if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 10))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
			{
				if (!func_21(Local_99.f_29[0]))
				{
					unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_790()
{
	int iVar0;
	
	if (func_840() != 2)
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 11))
	{
		if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 12))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, 1, 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 12))
	{
		if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 13))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0xB53CC268A7051C62(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iVar0]))
			{
				if (!func_10(Local_99.f_13[iVar0]))
				{
					if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 14))
					{
						if (func_791(unk_0x564EAE6038A81C07(Local_99.f_13[iVar0])))
						{
							unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_791(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	if (func_792())
	{
		if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &uVar0))
		{
			if (unk_0x60F161681C368C4E(uVar0))
			{
				iVar1 = unk_0x90897FA118314142(iVar0);
				if (unk_0xD3FACCDA4D66AEAD(iVar1))
				{
					if (!unk_0x912AD5A10E7633F0(iVar1, 0))
					{
						if (unk_0x39FEE545B315414E(iVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_792()
{
	return Global_1573842;
}

void func_793()
{
	if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 7))
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_490))
		{
			func_795();
		}
		if (func_503())
		{
			if (func_328(unk_0x0C1D3C552325765B()) > 2)
			{
				if (!func_562("GB_ASLT_GO"))
				{
					func_608("GB_ASLT_GO", func_794(), 0, 0);
				}
			}
			else
			{
				func_589();
			}
		}
		else
		{
			func_589();
		}
		if (func_501())
		{
			unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1), 7);
		}
	}
	func_398();
}

char* func_794()
{
	switch (func_840())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_795()
{
	struct<3> Var0;
	
	if (func_328(unk_0x0C1D3C552325765B()) < 1)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_490))
		{
			unk_0x0B57C567D698C373(&uLocal_490);
		}
		return;
	}
	Var0 = { func_796() };
	if (func_855())
	{
		if (!func_388(Var0, 0f, 0f, 0f, 0))
		{
			uLocal_490 = unk_0x52CE8C31DD5898E7(Var0);
			unk_0x71E206F83114C3D2(uLocal_490, 1);
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 0))
			{
				unk_0x3AE9C8E8575D2576(uLocal_490, 1);
				unk_0xFB70601EAE8F9B9E(uLocal_490, 7000);
				unk_0x07FD940F5798C7D3();
				unk_0x88B0F0DC270164B7(&iLocal_357, 0);
			}
		}
	}
}

Vector3 func_796()
{
	struct<3> Var0;
	
	switch (func_840())
	{
		case 0:
			Var0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			Var0 = { func_490() };
			break;
	}
	return Var0;
}

void func_797()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar11;
	int iVar12;
	
	func_804();
	Var8 = { func_490() };
	if (!func_504())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_503()) && unk_0x08BA6DD398CA197C(iLocal_357, 3)) && !func_519(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (func_855())
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_357, 16))
				{
					fVar6 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var8, 0);
					if (func_840() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_359(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
						func_802();
						unk_0x88B0F0DC270164B7(&iLocal_357, 16);
					}
				}
				else
				{
					fVar6 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var8, 0);
					if (func_840() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						unk_0x09C86C0C5CA26B1E(&iLocal_357, 16);
						func_364();
						func_359(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x08BA6DD398CA197C(iLocal_357, 16))
				{
					unk_0x09C86C0C5CA26B1E(&iLocal_357, 16);
					func_364();
					func_359(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
				}
				bVar11 = true;
			}
		}
		else
		{
			bVar11 = true;
		}
		if (!bVar11)
		{
			return;
		}
		Var3 = { func_801() };
		if (func_388(Var3, 0f, 0f, 0f, 0))
		{
			return;
		}
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
		switch (func_840())
		{
			case 1:
				if (!func_502(Var0, 3, 1000, 0))
				{
					func_363(10, 0, 0);
					func_800(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_384(Var3, 1, 0);
				}
				else if (func_502(Var3, 3, 1000, 0))
				{
					func_363(10, 0, 0);
					func_800(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_384(Var3, 1, 0);
				}
				else
				{
					func_363(10, 0, 0);
					func_800(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_384(Var3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_502(Var0, 2, 1000, 0))
				{
					func_363(10, 0, 0);
					func_800(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_384(Var3, 1, 0);
				}
				else if (func_502(Var3, 2, 1000, 0))
				{
					func_363(10, 0, 0);
					func_800(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1);
					func_384(Var3, 1, 0);
				}
				else
				{
					func_363(10, 0, 0);
					func_800(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
					func_384(Var3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_363(10, 0, 0);
				func_800(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0);
				func_384(Var3, 1, 0);
				break;
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(iLocal_357, 16))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_357, 16);
			func_364();
			func_359(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		}
		if (unk_0x08BA6DD398CA197C(iLocal_357, 7))
		{
			func_357();
			func_798();
		}
	}
}

void func_798()
{
	if (Global_2412480.f_6 == unk_0xEAE20F1125B83888())
	{
		func_799();
	}
}

void func_799()
{
	struct<25> Var0;
	
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2412480 = { Var0 };
	Global_2412480.f_6 = -1;
}

void func_800(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0x96549B1C2E196049(Global_2412480.f_6))
	{
		if (!Global_2412480.f_6 == unk_0xEAE20F1125B83888())
		{
			return;
		}
	}
	else
	{
		Global_2412480.f_6 = unk_0xEAE20F1125B83888();
	}
	Var0.f_6 = Global_2412480.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_139(unk_0x0C1D3C552325765B()))
	{
		Var0.f_23 = 1;
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Global_2412480 = { Var0 };
}

Vector3 func_801()
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (func_504())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			if (func_21(Local_99.f_29[0]))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_12), 1) };
	}
	return Var0;
}

void func_802()
{
	int iVar0;
	
	iVar0 = func_840();
	switch (iVar0)
	{
		case 0:
			func_803(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_803(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_803(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_803(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_803(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_803(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_803(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_803(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_803(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_803(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_803(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_803(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_803(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_803(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_803(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_803(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_803(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_803(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_803(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_803(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_803(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_803(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_803(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_803(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_803(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_803(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_803(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_803(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_803(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_803(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_803(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_803(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_803(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_803(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_803(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_803(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_803(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_803(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_803(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_803(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_803(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404993.f_1682)
	{
	}
	if (Global_2404993.f_649 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/] = { Param0 };
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_3 = fParam3;
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_4 = iParam4;
		Global_2404993.f_649++;
	}
}

void func_804()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_855() && !func_343())
	{
		return;
	}
	if (func_504())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			if (func_21(Local_99.f_29[0]))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_29[0]), 1) };
			}
		}
	}
	else if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x9C16D1E97E386176(Local_99.f_12), 1) };
	}
	if (!func_388(Var0, 0f, 0f, 0f, 0))
	{
		if (func_503())
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				Var3 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
				fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
				if (!unk_0x08BA6DD398CA197C(iLocal_357, 3))
				{
					if (fVar6 <= 250000f)
					{
						unk_0x88B0F0DC270164B7(&iLocal_357, 3);
					}
					else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
					{
						if (func_502(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 3, 1000, 0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_357, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6) || (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6) && !func_502(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), 3, 1000, 0)))
					{
						unk_0x09C86C0C5CA26B1E(&iLocal_357, 3);
					}
				}
			}
		}
	}
}

void func_805()
{
	if (func_343())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 9))
			{
				if (func_342())
				{
					unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 1, 1);
					if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
					{
						if (unk_0x60BA85BF16A11204(unk_0x9C16D1E97E386176(Local_99.f_12), unk_0xA0081090911D13E5()))
						{
							unk_0x9907A24A0D12B335(unk_0x9C16D1E97E386176(Local_99.f_12));
						}
					}
					unk_0x88B0F0DC270164B7(&iLocal_357, 9);
				}
			}
			else if (!func_333())
			{
				if (!func_342())
				{
					unk_0xF354CD7077923AF1(unk_0x9C16D1E97E386176(Local_99.f_12), 0, 1);
					unk_0x09C86C0C5CA26B1E(&iLocal_357, 9);
				}
			}
		}
	}
}

void func_806()
{
	struct<8> Var0;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 1))
	{
		if (func_855())
		{
			if (func_328(unk_0x0C1D3C552325765B()) >= 1)
			{
				if (!func_545(85))
				{
					if (func_539(0, 1, 1, 1))
					{
						Var0 = { func_808() };
						func_637(&Var0, -1);
						func_530(1);
						unk_0x88B0F0DC270164B7(&iLocal_357, 1);
					}
				}
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&iLocal_357, 1);
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_358, 2))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_357, 1))
		{
			if (func_855())
			{
				if (Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_5 > 1)
				{
					if (func_539(0, 1, 1, 1))
					{
						if (func_539(0, 1, 1, 1))
						{
							Var0 = { func_807() };
							func_637(&Var0, -1);
							func_530(1);
							unk_0x88B0F0DC270164B7(&iLocal_358, 2);
						}
					}
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_358, 10))
	{
		if (func_855())
		{
			if (((Local_99.f_5 != -1 || Local_99.f_7 != -1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 16)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 20))
			{
				if (func_539(0, 1, 1, 1))
				{
					func_637("GB_SGHT_RVL", -1);
					func_530(1);
					unk_0x88B0F0DC270164B7(&iLocal_358, 10);
				}
			}
		}
	}
}

struct<8> func_807()
{
	struct<8> Var0;
	
	switch (func_840())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_808()
{
	struct<8> Var0;
	
	if (func_718())
	{
		switch (func_840())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_840())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_809()
{
	int iVar0;
	
	if (!func_9(&(Local_99.f_54)))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_358, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_814(&(Local_99.f_54), 0, 0));
	if (!func_503())
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_328(unk_0x0C1D3C552325765B()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_357, 19))
		{
			iLocal_495 = unk_0x2657E29E0DD8087E();
			unk_0xAB16AADE80707D47(iLocal_495, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			unk_0x88B0F0DC270164B7(&iLocal_357, 19);
		}
	}
	func_813(iVar0);
	if (iVar0 > 30000)
	{
		func_810(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (iVar0 >= 0)
	{
		func_810(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_810(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
}

void func_810(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_812(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_811(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
	}
}

void func_811(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_812(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_813(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(iLocal_357, 29))
	{
		func_192();
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 30))
	{
		if (iParam0 <= 35000)
		{
			if (unk_0xB49DAD10DC051295("APT_PRE_COUNTDOWN_STOP"))
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 30);
				unk_0x88B0F0DC270164B7(&iLocal_357, 28);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_357, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_358, 0))
			{
				if (unk_0x27971883A8701E73("APT_COUNTDOWN_30S_KILL"))
				{
					unk_0x0756AF366187C194("AllowScoreAndRadio", 1);
					unk_0x5A6B86444D23FCA8(0);
					unk_0x88B0F0DC270164B7(&iLocal_358, 0);
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_357, 31))
			{
				if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_357, 31);
				}
			}
			if (unk_0x08BA6DD398CA197C(iLocal_357, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_358, 1))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
						unk_0x88B0F0DC270164B7(&iLocal_358, 1);
					}
					if (iParam0 <= 500)
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S_KILL");
							unk_0x09C86C0C5CA26B1E(&iLocal_357, 28);
						}
					}
				}
			}
		}
	}
}

int func_814(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_815(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_219(unk_0x0C1D3C552325765B());
	if (iParam2 || func_635(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_514(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_513(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_261(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_647(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_496() != func_18())
		{
			Global_1750587.f_4 = func_783(func_496());
			Global_1750587.f_5 = func_782(func_496());
		}
		if (func_289() != func_18())
		{
			func_671(func_289(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_734(iParam1);
			Global_1750587.f_41 = func_817();
			Global_1750587.f_42 = func_735(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_778(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_496() != func_18())
		{
			Global_1750569 = func_783(func_496());
			Global_1750569.f_1 = func_782(func_496());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_816();
		Global_1750569.f_15 = 0;
		if (func_837(1))
		{
			if (func_289() == func_496())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_816()
{
	int iVar0;
	
	iVar0 = func_496();
	if (iVar0 != func_18())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

var func_817()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_732(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_818(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_625(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_621(&Var0);
}

struct<8> func_819()
{
	struct<8> Var0;
	
	switch (func_840())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_820()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_99.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_13[iVar0]))
				{
					if (func_825(Local_99.f_13[iVar0]))
					{
						if (unk_0xB480350E4250D92A(Local_99.f_13[iVar0]))
						{
							if (!func_10(Local_99.f_13[iVar0]))
							{
								if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_13[iVar0]), -1442466670) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_840() == 2)
									{
										unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_13[iVar0]), 0);
									}
									unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_821(Local_99.f_13[iVar0], &(Local_363[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_821(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_824())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_823(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_823(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_822(uParam1);
	}
}

void func_822(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_823(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, uParam4);
		unk_0x71CB3379ED1310DF(iParam0, uParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(uParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(sParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(sParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(sParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(sParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_824()
{
	return Global_1315206;
}

int func_825(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (func_826(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_826(var uParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(uParam0))
	{
		return 0;
	}
	if (func_827(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_827(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
	}
	return 0;
}

void func_828()
{
	int iVar0;
	int iVar1;
	
	if (Local_99.f_0 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (iVar1 != unk_0x0C1D3C552325765B())
				{
					if (unk_0x3F3C7C3B52DD0ECA(iVar1))
					{
						if (!unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3, iVar0))
						{
							if (func_504())
							{
								func_595(iVar1, 421, 0);
							}
							else
							{
								func_595(iVar1, 457, 0);
							}
							unk_0x88B0F0DC270164B7(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3), iVar0);
						}
					}
					else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3, iVar0))
					{
						if (func_504())
						{
							func_595(iVar1, 421, 0);
						}
						else
						{
							func_595(iVar1, 457, 0);
						}
						unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3, iVar0))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_829()
{
	if (func_840() == 0)
	{
		if (func_25() == 0)
		{
			func_830("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_830(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_831(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x88B0F0DC270164B7(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_831(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_833(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_832(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_832(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_833(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794608.f_98389[iVar12 /*12*/];
		
		case 62:
			return Global_906487.f_18805[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_833(var uParam0)
{
	int iVar0;
	
	if (unk_0x509383441597090D(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_835(uParam0->f_1))
	{
		if (func_834(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_794608.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x08BA6DD398CA197C(Global_794608.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_794608.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x08BA6DD398CA197C(Global_906487.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x08BA6DD398CA197C(Global_906487.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x28C1B9853548BD8E(&(Global_906487.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x0C1D3C552325765B())
	{
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_949333.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x08BA6DD398CA197C(Global_949333.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x28C1B9853548BD8E(&(Global_949333.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_834(var uParam0)
{
	if (Global_2398050)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_2398050.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_835(int iParam0)
{
	return iParam0 == 9999;
}

void func_836()
{
	if (func_840() != 1 && func_840() != 2)
	{
		return;
	}
	if (func_840() != 1)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			unk_0xDDA2B67F3860CB4F(Local_99.f_29[0], 1);
		}
	}
}

bool func_837(bool bParam0)
{
	return func_19(unk_0x0C1D3C552325765B(), bParam0);
}

void func_838()
{
	if (unk_0x7B0208FFAEF67EF9(1343869835))
	{
		unk_0x6A7EBBBF8B647A25(1343869835, 1, 0, 0);
		unk_0xED71B6E985126065(1343869835, 1f, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(207506449))
	{
		unk_0x6A7EBBBF8B647A25(207506449, 1, 0, 0);
		unk_0xED71B6E985126065(207506449, 1f, 0, 0);
	}
}

void func_839()
{
	Global_1748041 = 1;
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 0))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 0);
		unk_0x88B0F0DC270164B7(&Global_1748042, 0);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 1))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 1);
		unk_0x88B0F0DC270164B7(&Global_1748042, 1);
	}
	if (!unk_0x08BA6DD398CA197C(Global_2489309, 5))
	{
		unk_0x88B0F0DC270164B7(&Global_2489309, 5);
		unk_0x88B0F0DC270164B7(&Global_1748042, 5);
	}
	if (unk_0x7B0208FFAEF67EF9(-355737150))
	{
		unk_0x6A7EBBBF8B647A25(-355737150, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-580979506))
	{
		unk_0x6A7EBBBF8B647A25(-580979506, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1426452475))
	{
		unk_0x6A7EBBBF8B647A25(-1426452475, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(745417724))
	{
		unk_0x6A7EBBBF8B647A25(745417724, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1305304906))
	{
		unk_0x6A7EBBBF8B647A25(-1305304906, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-1543175077))
	{
		unk_0x6A7EBBBF8B647A25(-1543175077, 0, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(-811770997))
	{
		unk_0x6A7EBBBF8B647A25(-811770997, 0, 0, 0);
	}
}

int func_840()
{
	if (Local_99.f_3 != -1)
	{
		return Local_99.f_3;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		if (Local_99.f_3 == -1)
		{
			if (Local_99.f_3 == -1)
			{
				if (Global_2482149.f_5261 != -1)
				{
					Local_99.f_3 = Global_2482149.f_5261;
				}
				else
				{
					Local_99.f_3 = 1;
				}
			}
		}
	}
	return Local_99.f_3;
}

void func_841(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_854(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_853() != -1)
		{
			func_852(-1);
		}
		if (func_851() != -1)
		{
			func_850(-1);
		}
		func_849(iParam2);
		func_847(iParam0);
		if (!func_380(iParam0))
		{
			fVar0 = func_379(iParam0);
			if (fVar0 != 1f)
			{
				func_376(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_383(iParam0))
		{
			if (func_381(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_342())
		{
			func_334(27);
		}
		if (bParam1)
		{
			if (!func_333())
			{
				func_373(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_721(6);
			}
			func_846();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_141(unk_0x0C1D3C552325765B()) && func_330(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_842();
	}
}

void func_842()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_845();
	iVar2 = func_41(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_843(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_843(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_844(iParam0) == func_41(iParam1) || func_844(iParam1) == func_41(iParam0));
	}
	return 0;
}

int func_844(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1614576[func_41(iParam0) /*324*/].f_10.f_268;
	}
	return func_18();
}

int func_845()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_496();
	if (iVar0 != func_18())
	{
		if (func_930(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_846()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_653(3759, -1, 0);
	iVar1 = func_848(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_651(3759, iVar0, -1, 1, 0);
	}
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_849(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_850(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_851()
{
	return Global_2482149.f_4698.f_146;
}

void func_852(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

int func_853()
{
	return Global_2482149.f_4698.f_145;
}

void func_854(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

int func_855()
{
	int iVar0;
	
	iVar0 = func_856();
	if (iVar0 > -1)
	{
		if (Local_99.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_856()
{
	int iVar0;
	
	if (Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_4 != -1)
	{
		return Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_4;
	}
	if (func_20(unk_0x0C1D3C552325765B()))
	{
		Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_4 = unk_0x848AF823A8EA3C62();
		if (unk_0x848AF823A8EA3C62() == Local_99.f_8)
		{
			func_616(1);
		}
	}
	else if (func_19(unk_0x0C1D3C552325765B(), 1))
	{
		iVar0 = func_496();
		if (iVar0 != func_18())
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar0))
			{
				Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_4 = unk_0x9259DE19D910276C(iVar0);
			}
		}
	}
	return Local_164[unk_0x848AF823A8EA3C62() /*6*/].f_4;
}

int func_857()
{
	if (func_504())
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			return 0;
		}
	}
	else if (!unk_0x3CF373660FCFAFCE(Local_99.f_12))
	{
		return 0;
	}
	return 1;
}

int func_858()
{
	return Local_99.f_0;
}

int func_859(int iParam0)
{
	return Local_164[iParam0 /*6*/];
}

int func_860()
{
	if (func_861(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_289() == func_18() || !func_930(func_289(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_861(bool bParam0)
{
	bool bVar0;
	
	if (!func_837(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_18())
		{
			if (func_930(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_862(func_219(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_721(31);
				if (func_635(func_219(unk_0x0C1D3C552325765B())))
				{
					func_721(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_571(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_288(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_721(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_863()
{
	bool bVar0;
	var uVar1;
	
	func_867(&bVar0, &uVar1);
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
	if (func_866())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_865())
	{
		return 1;
	}
	if (func_864(157))
	{
		if (!func_397())
		{
			return 1;
		}
	}
	if (func_864(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_377() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_377()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_864(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_865()
{
	return Global_2451777;
}

bool func_866()
{
	return Global_2442442.f_571;
}

void func_867(var uParam0, var uParam1)
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
					func_868(iVar0);
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

void func_868(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_930(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_869(uVar4, &bVar5))
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

int func_869(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_870()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_871()
{
	var uVar0;
	
	if (func_504())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_29[0]))
		{
			if (unk_0x08BA6DD398CA197C(iLocal_358, 5))
			{
				if (!func_837(1))
				{
					if (func_21(Local_99.f_29[0]))
					{
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_29[0])))
							{
								unk_0x8474D2383AC8AF53(unk_0xA0081090911D13E5(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_915();
	unk_0x671810EE85FFCDFC(1);
	func_616(0);
	if (!unk_0x08BA6DD398CA197C(iLocal_357, 17))
	{
		if (unk_0xA86CA03D9749EEB3())
		{
			if (func_855() || func_343())
			{
				unk_0x88B0F0DC270164B7(&iLocal_357, 17);
				Global_1750569.f_2 = Local_99.f_63;
				Global_1750569.f_3 = Local_99.f_64;
				func_774(0, 4, 0, 0, -1, -1, -1, -1);
			}
		}
	}
	if (unk_0x08BA6DD398CA197C(iLocal_357, 17))
	{
		func_913(func_840(), -1, -1, -1082130432);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_357, 4))
	{
		func_372(8);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_357, 20))
	{
		unk_0xB49DAD10DC051295("BG_ASSAULT_STOP");
		unk_0x0756AF366187C194("DisableFlightMusic", 0);
		unk_0x0756AF366187C194("WantedMusicDisabled", 0);
	}
	if (Local_99.f_3 == 1)
	{
		unk_0x3607936F13065720(joaat("rhino"), 0);
	}
	unk_0xCF03D9C8A7F1577C(5);
	if (!func_912())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_12))
		{
			if (unk_0xB480350E4250D92A(Local_99.f_12))
			{
				uVar0 = unk_0x63CE7A3848B84093(Local_99.f_12);
				unk_0xFFB39FA225A945DB(&uVar0);
			}
		}
	}
	else
	{
		unk_0x88B0F0DC270164B7(&iLocal_357, 29);
	}
	func_877(1, 0);
	if (Global_2482149.f_5261 != -1)
	{
		Global_2482149.f_5261 = -1;
	}
	if (Global_1572925)
	{
		Global_1572925 = 0;
	}
	func_876();
	if (func_840() == 3)
	{
		func_875();
	}
	if (unk_0x08BA6DD398CA197C(iLocal_358, 0))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_358, 1))
		{
			unk_0x5A6B86444D23FCA8(1);
			unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
			unk_0x8821193EA2732C2C("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_192();
	func_873();
	if (unk_0x08BA6DD398CA197C(iLocal_357, 19))
	{
		unk_0x15761381A3072BFA(iLocal_495);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_357, 16))
	{
		func_364();
		func_359(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_872();
}

void func_872()
{
	unk_0x78C587487CD40B92();
}

void func_873()
{
	struct<6> Var0;
	
	if (func_840() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_874(Var0);
		}
	}
}

void func_874(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x509383441597090D(&cParam0))
	{
		return;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_12, 11))
		{
			if (func_831(&(Global_2359719[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (unk_0x08BA6DD398CA197C(Global_2359719[iVar1 /*26*/].f_13, 26))
				{
					unk_0x09C86C0C5CA26B1E(&(Global_2359719[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_875()
{
	if (unk_0x7B0208FFAEF67EF9(1343869835))
	{
		unk_0x6A7EBBBF8B647A25(1343869835, 0, 0, 0);
		unk_0xED71B6E985126065(1343869835, 0f, 0, 0);
	}
	if (unk_0x7B0208FFAEF67EF9(207506449))
	{
		unk_0x6A7EBBBF8B647A25(207506449, 0, 0, 0);
		unk_0xED71B6E985126065(207506449, 0f, 0, 0);
	}
}

void func_876()
{
	if (Global_1748041)
	{
		if (unk_0x08BA6DD398CA197C(Global_1748042, 0))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 0);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 1))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 1);
		}
		if (unk_0x08BA6DD398CA197C(Global_1748042, 5))
		{
			unk_0x09C86C0C5CA26B1E(&Global_2489309, 5);
		}
		if (unk_0x7B0208FFAEF67EF9(-355737150))
		{
			unk_0x6A7EBBBF8B647A25(-355737150, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-580979506))
		{
			unk_0x6A7EBBBF8B647A25(-580979506, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1426452475))
		{
			unk_0x6A7EBBBF8B647A25(-1426452475, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(745417724))
		{
			unk_0x6A7EBBBF8B647A25(745417724, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1305304906))
		{
			unk_0x6A7EBBBF8B647A25(-1305304906, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-1543175077))
		{
			unk_0x6A7EBBBF8B647A25(-1543175077, 1, 0, 0);
		}
		if (unk_0x7B0208FFAEF67EF9(-811770997))
		{
			unk_0x6A7EBBBF8B647A25(-811770997, 1, 0, 0);
		}
		Global_1748042 = 0;
	}
	Global_1748041 = 0;
}

void func_877(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_910();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_669() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_895(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_141(unk_0x0C1D3C552325765B()))
		{
			func_373(0);
		}
	}
	else if (func_893(unk_0x0C1D3C552325765B()) != -1)
	{
		func_854(-1);
	}
	func_892(func_18());
	if (func_307(16))
	{
		func_352(16);
	}
	func_888(0);
	func_849(-1);
	func_887();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_885(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_639();
	if ((func_260(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_884(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_514(iVar1))
	{
		func_880(-1, 1);
	}
	else if (func_638(iVar1) || func_879(iVar1))
	{
	}
	else
	{
		func_880(-1, 1);
	}
	func_336(19);
	func_336(20);
	func_336(21);
	func_336(22);
	func_336(27);
	func_352(3);
	func_352(4);
	func_352(7);
	func_878();
	if (func_330(unk_0x0C1D3C552325765B()))
	{
		func_616(0);
	}
	func_336(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_18();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_353();
	}
	if (!func_141(unk_0x0C1D3C552325765B()))
	{
		func_371();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_878()
{
	if (func_347(unk_0x0C1D3C552325765B()))
	{
		func_336(25);
	}
}

int func_879(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_880(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_639();
	}
	if (iParam0 > 0)
	{
		if (func_496() != func_18())
		{
			if (func_883(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_882(iParam0)] = 1;
			}
		}
		iVar0 = func_882(159);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(157);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(148);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(164);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(142);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(152);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(166);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(170);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(173);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(179);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(200);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(201);
		if (func_881(iVar0, Global_262145.f_11038, bParam1))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(182);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(183);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(185);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(186);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(180);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(195);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(197);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(198);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(207);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(208);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(209);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_881(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_232(unk_0x0C1D3C552325765B(), 19) && !func_232(unk_0x0C1D3C552325765B(), 20)) && !func_232(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_9(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_814(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_882(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_883(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_884(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_639();
	}
	if (iParam0 > 0)
	{
		if (func_496() != func_18())
		{
			Global_2471291.f_77[func_882(iParam0)] = 1;
		}
		iVar0 = func_882(155);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(163);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(160);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(153);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(162);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(154);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(171);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(172);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(199);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(194);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(193);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(210);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(205);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(189);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(211);
		if (func_881(iVar0, Global_262145.f_11039, 0))
		{
			func_203(&(Global_2471291[iVar0 /*2*/]));
			func_8(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_885(int iParam0)
{
	if (!func_388(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_886(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_886() };
	}
	if (!func_388(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_886(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_886() };
	}
}

Vector3 func_886()
{
	struct<3> Var0;
	
	return Var0;
}

void func_887()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_18();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_888(bool bParam0)
{
	if (bParam0)
	{
		if (!func_891(unk_0x0C1D3C552325765B(), 10))
		{
			func_890(10);
		}
	}
	else if (func_891(unk_0x0C1D3C552325765B(), 10))
	{
		func_889(10);
	}
}

void func_889(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_890(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_891(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_892(int iParam0)
{
	if (func_20(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_893(int iParam0)
{
	if (func_894(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_894(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_895(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_732(iParam0, iParam1) && func_909(iParam0, iParam1))
	{
		iVar0 = func_731(iParam0, iParam1);
		func_899(iVar0);
		func_896(iVar0, 1);
	}
}

void func_896(int iParam0, int iParam1)
{
	func_897(func_898(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_897(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		default:
	}
	return 7628;
}

void func_899(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_908(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_904(func_907(iParam0), -1, -1))
	{
		iVar0 = func_903(iVar1);
		iVar2 = func_778(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_902(iVar1);
		iVar4 = func_903(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_903(iVar1) / func_901(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_900(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_900(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_733(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_901(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_733(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_902(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_734(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_734(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_730(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_904(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_906(iParam0, iParam1);
	uVar2 = func_905(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_905(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_906(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		default:
	}
	return 9416;
}

int func_908(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_733(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

int func_909(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_732(iParam0, iParam1))
	{
		iVar0 = func_731(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_910()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_911(24);
}

void func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

int func_912()
{
	if (unk_0x08BA6DD398CA197C(iLocal_357, 24))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 9))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 10))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 15))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_913(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = unk_0x367152330DB70D69();
	Var1.f_0 = Global_1750569;
	Var1.f_1 = Global_1750569.f_1;
	Var1.f_2 = Global_1750569.f_2;
	Var1.f_3 = Global_1750569.f_3;
	Var1.f_4 = Global_1750569.f_4;
	Var1.f_5 = Global_1750569.f_5;
	Var1.f_6 = Global_1750569.f_6;
	Var1.f_7 = Global_1750569.f_7;
	Var1.f_8 = Global_1750569.f_8;
	Var1.f_9 = Global_1750569.f_9;
	Var1.f_10 = Global_1750569.f_10;
	Var1.f_11 = Global_1750569.f_11;
	Var1.f_12 = Global_1750569.f_12;
	Var1.f_13 = Global_1750569.f_14;
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1750569.f_15;
			Var15.f_15 = Global_1750569.f_16;
			Var15.f_16 = Global_1750569.f_17;
			unk_0xB52EDE17EA1502EE(&Var15);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1750569.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0xA69238A3DCFC16AF(&Var32);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1750569.f_15;
			Var49.f_15 = uParam0;
			unk_0x6228A33A89AE777D(&Var49);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1750569.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0x12EF9A511680F9C4(&Var65);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1750569.f_15;
			Var82.f_15 = uParam0;
			unk_0xAFA2BE3145862168(&Var82);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1750569.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xEB19DBB33ABC60AE(&Var98);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1750569.f_15;
			unk_0xB0FAB98E9AEC7B92(&Var116);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1750569.f_15;
			unk_0x8093409F8C94AF35(&Var134);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1750569.f_15;
			unk_0xFA930B4B51A95117(&Var153);
		}
	}
	func_914();
}

void func_914()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

void func_915()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xD9E8CA806A80203D())
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_1, 17))
		{
			Var0 = { 200f, 200f, 200f };
			Var3 = { func_24() };
			unk_0xE4EC3FD6A99953E8(Var3 - Var0, Var3 + Var0, 1, 1);
			unk_0x09C86C0C5CA26B1E(&(Local_99.f_1), 17);
		}
	}
}

void func_916(struct<20> Param0)
{
	func_928(func_929(Param0.f_0), Param0);
	unk_0x861EA6260F5D252A(1);
	unk_0xF2797029E839595C(15);
	unk_0x23DFD22869618226(5);
	func_927(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_99, 65);
	unk_0xCCA45C9E00D2BC01(&Local_164, 193);
	if (!func_926())
	{
		func_871();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
		}
		func_925();
		func_917(0, 0);
		if (func_307(8))
		{
			func_352(8);
		}
		Local_164[unk_0x848AF823A8EA3C62() /*6*/] = 0;
	}
	else
	{
		func_871();
	}
}

void func_917(int iParam0, int iParam1)
{
	func_924();
	func_921(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_920(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_718() && !func_19(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_339())
		{
			func_372(3);
		}
		func_372(4);
	}
	if (func_837(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_496();
	}
	if (func_635(iParam0))
	{
		func_776();
		Global_1750587.f_18 = func_919(func_289());
	}
	func_918();
}

void func_918()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_18();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_919(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

int func_920(int iParam0, bool bParam1)
{
	return func_16(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

void func_921(bool bParam0)
{
	int iVar0;
	
	func_911(33);
	func_911(34);
	func_911(35);
	func_911(36);
	func_911(37);
	func_911(38);
	func_911(39);
	func_911(40);
	func_911(43);
	func_911(41);
	func_911(54);
	func_911(42);
	func_911(47);
	func_923(23);
	func_923(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_922(3))
	{
		func_923(3);
	}
	else if (func_922(4))
	{
		func_923(4);
	}
	else if (func_922(5))
	{
		func_923(5);
	}
	else if (func_922(6))
	{
		func_923(6);
	}
	else if (func_922(7))
	{
		func_923(7);
	}
	else if (((((((((((((((((func_922(0) || func_922(1)) || func_922(2)) || func_922(8)) || func_922(9)) || func_922(10)) || func_922(11)) || func_922(12)) || func_922(13)) || func_922(14)) || func_922(15)) || func_922(16)) || func_922(17)) || func_922(18)) || func_922(19)) || func_922(20)) || func_922(21)) || func_922(22))
	{
		func_923(8);
		func_923(0);
		func_923(1);
		func_923(2);
		func_923(9);
		func_923(10);
		func_923(11);
		func_923(12);
		func_923(13);
		func_923(14);
		func_923(15);
		func_923(16);
		func_923(17);
		func_923(18);
		func_923(19);
		func_923(20);
		func_923(21);
		func_923(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_923(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_924()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

void func_925()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xFDDE2C1A05E64390(5, Global_1574240[iVar0], -347613984);
		unk_0xFDDE2C1A05E64390(5, -347613984, Global_1574240[iVar0]);
		iVar0++;
	}
}

int func_926()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_866())
		{
			return 0;
		}
		if (func_864(155))
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

int func_927(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_872();
			}
			else
			{
				return 0;
			}
		}
		if (!func_824())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_872();
					}
					else
					{
						return 0;
					}
				}
				if (func_866())
				{
					if (!bParam2)
					{
						func_872();
					}
					else
					{
						return 0;
					}
				}
				if (func_864(155))
				{
					if (!bParam2)
					{
						func_872();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_872();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_872();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_872();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_928(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_872();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_929(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_930(int iParam0, bool bParam1, bool bParam2)
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

