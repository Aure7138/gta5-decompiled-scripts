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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 1065353216;
	var uLocal_113 = 1065353216;
	var uLocal_114 = 1;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = -1;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134[4] = { 0, 0, 0, 0 };
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155[3] = { 0, 0, 0 };
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	struct<3> Local_162[2];
	float fLocal_169[2] = { 0f, 0f };
	float fLocal_172 = 0f;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<2> Local_185 = { 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	struct<114> Local_196 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1621617168, 0, 0, 0, 0, 0, 0, 0, 874602658, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_310[32];
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	fLocal_96 = 3f;
	fLocal_97 = 0f;
	fLocal_98 = 2f;
	fLocal_99 = 100f;
	iLocal_152 = 3600000;
	iLocal_154 = -1;
	if (unk_0x0E063DDE8855EC52())
	{
		if (func_680(unk_0x4D29100D094E5511(), 0, 1))
		{
			if (!func_664(ScriptParam_0))
			{
				func_661(0, 1);
				func_643();
			}
		}
		else
		{
			func_643();
		}
	}
	else
	{
		func_661(0, 1);
		func_643();
	}
	while (true)
	{
		func_642();
		if (func_639())
		{
			func_661(0, 1);
			func_643();
		}
		if (func_631())
		{
			func_661(0, 1);
			func_643();
		}
		if (func_630() && func_629())
		{
			if (!func_628())
			{
				if (func_625())
				{
					func_606(170, unk_0xA8CFDE65C45F813B(func_624(), 1), &uLocal_159, 1140457472, 700f, iLocal_160);
				}
				else
				{
					func_606(170, unk_0xA8CFDE65C45F813B(func_605(), 1), &uLocal_159, 1140457472, 700f, iLocal_160);
				}
			}
		}
		func_584();
		switch (func_583(unk_0x7025777635AB04C0()))
		{
			case 0:
				if (func_582() == 1)
				{
					if (func_580())
					{
						func_579(unk_0x7025777635AB04C0(), 1);
					}
				}
				break;
			
			case 1:
				if (func_582() == 1)
				{
					func_90();
				}
				else if (func_582() == 3)
				{
					func_579(unk_0x7025777635AB04C0(), 3);
				}
				break;
			
			case 3:
				func_643();
				break;
		}
		if (unk_0x96BA6BF1BA1235CC())
		{
			if (func_89())
			{
				func_88(3);
			}
			switch (func_582())
			{
				case 0:
					if (func_64())
					{
						func_88(1);
					}
					break;
				
				case 1:
					func_10();
					func_1();
					break;
				
				case 3:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x6985B636BB8652CD(iVar0))
		{
			iVar2 = iVar0;
			iVar1 = unk_0xFAA1C60127DA6F80(iVar2);
			if (func_680(iVar1, 0, 1))
			{
				if (func_9(iVar2, 1))
				{
					bVar3 = true;
					iVar4 = iVar1;
				}
				if (!func_8(18))
				{
					if (func_5(iVar1, func_7(), 1))
					{
						if (func_9(iVar2, 6))
						{
							func_4(18);
						}
					}
				}
				if (!func_8(17))
				{
					if (func_9(iVar2, 5))
					{
						func_4(17);
					}
				}
				if (!func_8(9))
				{
					if (func_9(iVar2, 2))
					{
						func_4(9);
					}
				}
				if (!func_8(21))
				{
					if (func_9(iVar2, 7))
					{
						func_4(21);
					}
				}
				if (func_630())
				{
					if (!func_8(6))
					{
						if (func_9(iVar2, 4))
						{
							func_4(6);
							func_4(17);
						}
					}
				}
				if (func_629())
				{
					if (!func_8(7))
					{
						if (func_9(iVar2, 3))
						{
							func_4(7);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		if (!func_8(2))
		{
			Local_196.f_8 = iVar4;
			func_4(2);
		}
		if (!func_8(12))
		{
			func_4(12);
		}
	}
	else if (func_8(2))
	{
		Local_196.f_9 = Local_196.f_8;
		Local_196.f_8 = func_3();
		func_2(2);
	}
}

void func_2(int iParam0)
{
	if (!unk_0x96BA6BF1BA1235CC())
	{
		return;
	}
	unk_0xF17F4B0641AB2DE1(&(Local_196.f_1), iParam0);
}

int func_3()
{
	return -1;
}

void func_4(int iParam0)
{
	if (!unk_0x96BA6BF1BA1235CC())
	{
		return;
	}
	unk_0x26545538B51562AD(&(Local_196.f_1), iParam0);
}

int func_5(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_3())
	{
		if (!bParam2)
		{
			if (func_6(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_3())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return 0;
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 != func_3())
	{
		if (iParam0 != func_3())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_3())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_7()
{
	return Local_196.f_7;
}

bool func_8(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Local_196.f_1, iParam0);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Local_310[iParam0 /*3*/].f_1, iParam1);
}

void func_10()
{
	switch (func_63())
	{
		case 0:
			func_62(1);
			unk_0xF37879D27F66F1AF(&(Local_196.f_112), &(Local_196.f_113));
			break;
		
		case 1:
			if (func_61() == 0)
			{
				if (!func_60(&(Local_196.f_2)))
				{
					func_59(&(Local_196.f_2), 0, 0);
				}
				else
				{
					if (func_57())
					{
						if (func_51())
						{
							func_50(4);
						}
					}
					if (func_8(10))
					{
						func_50(2);
					}
					if (func_48(&(Local_196.f_2), func_49(), 0))
					{
						func_50(1);
					}
				}
				func_46();
				func_42();
				func_40();
				func_35();
				func_28();
				func_24();
				func_23();
				func_17();
				func_16();
			}
			else
			{
				func_62(2);
			}
			break;
		
		case 2:
			func_15();
			if (!func_60(&(Local_196.f_20)) && !unk_0x2006A8C1BA2AFE80(func_605(), 0))
			{
				func_59(&(Local_196.f_20), 0, 0);
			}
			else if (func_13())
			{
				if (func_12())
				{
					func_62(3);
				}
				else
				{
					if (!func_12())
					{
					}
					if (!func_11())
					{
					}
				}
			}
			break;
		
		case 3:
			func_88(3);
			break;
	}
}

int func_11()
{
	if (func_8(6) || func_8(17))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x6985B636BB8652CD(iVar0))
		{
			iVar2 = iVar0;
			if (!func_9(iVar2, 0))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (func_11())
	{
		return 1;
	}
	if (func_60(&(Local_196.f_20)))
	{
		if (func_48(&(Local_196.f_20), func_14() + 5000, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return Global_262145.f_12357;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_196.f_31[iVar0 /*17*/].f_9)
		{
			Local_196.f_31[iVar0 /*17*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_16()
{
	if (!func_8(10))
	{
		if (!unk_0x27C9C05A6B4E58D2(func_7()))
		{
			func_4(10);
		}
	}
}

void func_17()
{
	if (func_22())
	{
		if (func_21(2))
		{
			if (func_18(func_20(2), func_19(), 1))
			{
				if (Local_196.f_31[2 /*17*/].f_9 == 1)
				{
					Local_196.f_31[2 /*17*/].f_9 = 0;
				}
			}
		}
	}
}

int func_18(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD2CFFE76B625AE55(iParam0) && !unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0xD2CFFE76B625AE55(iParam1) && !unk_0x2006A8C1BA2AFE80(iParam1, 0))
		{
			if (unk_0x1C48F76B3D032074(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()
{
	if (func_22())
	{
		return unk_0x33B21EAFED8C1338(Local_196.f_100);
	}
	return 0;
}

int func_20(int iParam0)
{
	if (func_21(iParam0))
	{
		return unk_0x34BB21E7BEAD2D5A(Local_196.f_31[iParam0 /*17*/]);
	}
	return 0;
}

bool func_21(int iParam0)
{
	return unk_0xE1CAA98B09E043C9(Local_196.f_31[iParam0 /*17*/]);
}

bool func_22()
{
	return unk_0xE1CAA98B09E043C9(Local_196.f_100);
}

void func_23()
{
	int iVar0;
	bool bVar1;
	
	if (func_630() && func_629())
	{
		if (!func_8(14))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_21(iVar0))
				{
					if (!unk_0xE4F7206742848BAF(func_20(iVar0)) && !unk_0x2006A8C1BA2AFE80(func_20(iVar0), 0))
					{
						bVar1 = false;
					}
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_4(14);
			}
		}
	}
}

void func_24()
{
	int iVar0;
	
	if (unk_0x96BA6BF1BA1235CC())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_196.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					if (func_21(iVar0))
					{
						Local_196.f_31[iVar0 /*17*/].f_10 = 1;
					}
					break;
				
				case 1:
					if (func_21(iVar0))
					{
						if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
						{
							if (func_27())
							{
								Local_196.f_31[iVar0 /*17*/].f_9 = 1;
								if (iVar0 == 2)
								{
									if ((func_22() && unk_0x0B4DDB992C7BCF57(func_19(), 0)) && func_8(19))
									{
										Local_196.f_31[iVar0 /*17*/].f_10 = 3;
									}
									else
									{
										Local_196.f_31[iVar0 /*17*/].f_10 = 2;
									}
								}
								else
								{
									Local_196.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (iVar0 == 2)
					{
						if (func_21(iVar0))
						{
							if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
							{
								if ((func_22() && unk_0x0B4DDB992C7BCF57(func_19(), 0)) && func_8(19))
								{
									Local_196.f_31[iVar0 /*17*/].f_10 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (func_21(iVar0))
					{
						if (func_22())
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!func_25())
								{
									if (!unk_0x0B4DDB992C7BCF57(func_19(), 0) || unk_0x2006A8C1BA2AFE80(func_19(), 0))
									{
										if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
										{
											Local_196.f_31[iVar0 /*17*/].f_10 = 2;
										}
									}
								}
								else if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
								{
									Local_196.f_31[iVar0 /*17*/].f_10 = 2;
								}
							}
						}
						else if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
						{
							Local_196.f_31[iVar0 /*17*/].f_10 = 2;
						}
					}
					break;
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (unk_0xE1CAA98B09E043C9(Local_196.f_100))
	{
		if (unk_0x9297C590C99228DC(func_19(), -1) != 0)
		{
			if (func_26(unk_0x9297C590C99228DC(func_19(), -1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_27()
{
	return func_8(9);
}

void func_28()
{
	float fVar0;
	int iVar1;
	
	if (func_630() && func_629())
	{
		if (func_34() > func_33())
		{
			if (unk_0x53D573A48E8DFC4C(func_31(), func_624()))
			{
				if (iLocal_174 == 0)
				{
					iLocal_174 = 1;
				}
			}
			else if (iLocal_174)
			{
				if (unk_0x0BAF34551BADE6DC(func_624()))
				{
					if (func_30(Local_175))
					{
						Local_175 = { unk_0xA8CFDE65C45F813B(func_624(), 0) };
					}
				}
				else if (!func_30(Local_175))
				{
					iVar1 = (Local_196.f_13 / 5);
					Local_178 = { unk_0xA8CFDE65C45F813B(func_624(), 0) };
					fVar0 = unk_0x676D4CD42E0837CA(Local_175, Local_178, 1);
					if (fVar0 > 0f && fVar0 < (IntToFloat(func_29()) * 0.1f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 5);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.1f) && fVar0 < (IntToFloat(func_29()) * 0.2f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 10);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.2f) && fVar0 < (IntToFloat(func_29()) * 0.3f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 20);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.3f) && fVar0 < (IntToFloat(func_29()) * 0.4f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 30);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.4f) && fVar0 < (IntToFloat(func_29()) * 0.5f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 40);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.5f) && fVar0 < (IntToFloat(func_29()) * 0.6f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 50);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.6f) && fVar0 < (IntToFloat(func_29()) * 0.7f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 60);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.7f) && fVar0 < (IntToFloat(func_29()) * 0.8f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 70);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.8f) && fVar0 < (IntToFloat(func_29()) * 0.9f))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 80);
					}
					else if (fVar0 >= (IntToFloat(func_29()) * 0.9f) && fVar0 < IntToFloat(func_29()))
					{
						Local_196.f_13 = (Local_196.f_13 - (iVar1 / 100) * 90);
					}
					else if (fVar0 >= IntToFloat(func_29()))
					{
						Local_196.f_13 = (Local_196.f_13 - iVar1);
					}
					if (Local_196.f_13 < func_33())
					{
						Local_196.f_13 = func_33();
					}
					Local_175 = { 0f, 0f, 0f };
					Local_178 = { 0f, 0f, 0f };
					fVar0 = 0f;
					iLocal_174 = 0;
				}
			}
		}
	}
}

int func_29()
{
	return Global_262145.f_12365;
}

int func_30(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (func_630())
	{
		return unk_0x33B21EAFED8C1338(func_32());
	}
	return 0;
}

var func_32()
{
	return Local_196.f_14;
}

int func_33()
{
	return Global_262145.f_12372;
}

int func_34()
{
	return Local_196.f_13;
}

void func_35()
{
	if (func_630())
	{
		if (func_629())
		{
			if (!func_8(5))
			{
				if (func_38(func_624(), func_39(), 1) < func_37())
				{
					if (func_36())
					{
						func_4(5);
					}
				}
			}
		}
	}
}

int func_36()
{
	if (unk_0x0BAF34551BADE6DC(func_624()))
	{
		return 0;
	}
	if (unk_0xECC01072E61D2F3A(func_624()) > 5f)
	{
		return 0;
	}
	if (unk_0xA8ED23ED7AA60A97(func_624()))
	{
		return 0;
	}
	if (unk_0x53D573A48E8DFC4C(func_31(), func_624()))
	{
		return 0;
	}
	return 1;
}

float func_37()
{
	return Local_196.f_111;
}

float func_38(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

Vector3 func_39()
{
	return Local_196.f_108;
}

void func_40()
{
	if (!func_8(19))
	{
		if ((func_630() && !func_628()) && unk_0x0B4DDB992C7BCF57(func_31(), 0))
		{
			if (func_41(func_31(), func_624(), 0) < 200f)
			{
				func_4(19);
			}
		}
	}
}

float func_41(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

void func_42()
{
	if (func_630() && func_629())
	{
		if (unk_0x53D573A48E8DFC4C(func_31(), func_624()))
		{
			if (!func_8(11))
			{
				func_45(1);
				func_4(11);
			}
			if (!func_8(3))
			{
				func_4(3);
			}
			if (func_8(16))
			{
				func_45(0);
				func_2(16);
			}
		}
		else
		{
			if (func_8(11))
			{
				if (!func_8(16))
				{
					func_4(16);
				}
			}
			if (func_8(3))
			{
				func_2(3);
			}
		}
		if (func_60(&(Local_196.f_28)))
		{
			if (func_48(&(Local_196.f_28), func_44(), 0))
			{
				func_43(&(Local_196.f_28));
			}
		}
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_44()
{
	return Global_262145.f_12355;
}

void func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (unk_0x96BA6BF1BA1235CC())
		{
			Local_196.f_30++;
		}
	}
	if (!func_60(&(Local_196.f_28)))
	{
		func_59(&(Local_196.f_28), 0, 0);
	}
	else
	{
		func_43(&(Local_196.f_28));
		func_59(&(Local_196.f_28), 0, 0);
	}
}

void func_46()
{
	if (!func_8(4))
	{
		if (func_630() && func_629())
		{
			if (func_47())
			{
				func_4(4);
			}
		}
	}
}

bool func_47()
{
	return func_8(18);
}

int func_48(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_59(uParam0, bParam2, 0);
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	return Global_262145.f_12351;
}

void func_50(int iParam0)
{
	if (!unk_0x96BA6BF1BA1235CC())
	{
		return;
	}
	Local_196.f_5 = iParam0;
}

int func_51()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Local_196.f_6 == 0)
	{
		if (func_56())
		{
			Local_196.f_6 = 1;
			return 1;
		}
		if (func_11())
		{
			if (Local_196.f_10 == func_3())
			{
				iVar1 = unk_0xCDD2AD920F93E6AE(func_605(), &uVar0);
				iVar2 = func_52();
				if (iVar1 != func_3())
				{
					if (!func_5(iVar1, func_7(), 1))
					{
						Local_196.f_10 = iVar1;
					}
					else
					{
						Local_196.f_10 = iVar2;
					}
				}
				else if (iVar2 != func_3())
				{
					Local_196.f_10 = iVar2;
				}
			}
			Local_196.f_6 = 2;
			return 1;
		}
		if (func_8(7))
		{
			Local_196.f_6 = 3;
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar3 = func_3();
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iVar4)))
		{
			iVar2 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iVar4));
			if (!func_53(iVar2))
			{
				if (unk_0x2006A8C1BA2AFE80(func_605(), 0))
				{
					if (unk_0x48A84F010CF87F69(iVar2, func_605(), &iVar1))
					{
						if (iVar1 > iVar0)
						{
							iVar0 = iVar1;
							iVar3 = iVar2;
						}
					}
				}
				else if (unk_0xF5E2AA5132A194C1(iVar2, func_605(), &iVar1))
				{
					if (iVar1 > iVar0)
					{
						iVar0 = iVar1;
						iVar3 = iVar2;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar3 == func_3())
	{
	}
	return iVar3;
}

int func_53(int iParam0)
{
	if (func_55(iParam0) || func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 == func_7();
}

int func_55(int iParam0)
{
	return func_5(iParam0, func_7(), 0);
}

bool func_56()
{
	return func_8(5);
}

int func_57()
{
	if (func_56())
	{
		return 1;
	}
	if (func_11())
	{
		return 1;
	}
	if (func_58())
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return func_8(7);
}

void func_59(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_60(var uParam0)
{
	return uParam0->f_1;
}

int func_61()
{
	return Local_196.f_5;
}

void func_62(int iParam0)
{
	if (!unk_0x96BA6BF1BA1235CC())
	{
		return;
	}
	Local_196.f_4 = iParam0;
}

int func_63()
{
	return Local_196.f_4;
}

int func_64()
{
	if (func_81())
	{
		if (func_66())
		{
			unk_0x0049DE0B34213B12(Local_196.f_19);
			unk_0x0049DE0B34213B12(Local_196.f_27);
			Local_196.f_7 = unk_0x4D29100D094E5511();
			Local_196.f_8 = func_3();
			Local_196.f_9 = func_3();
			Local_196.f_10 = func_3();
			Local_196.f_13 = func_65();
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	return Global_262145.f_12371;
}

int func_66()
{
	if (!func_77())
	{
		return 0;
	}
	if (!func_74())
	{
		return 0;
	}
	if (!func_71())
	{
		return 0;
	}
	if (!func_67())
	{
		return 0;
	}
	return 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_21(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_68(int iParam0)
{
	if (!func_21(iParam0))
	{
		if (func_70(Local_196.f_31[iParam0 /*17*/].f_5))
		{
			if (unk_0xC0FA8416DA08599F(1))
			{
				if (func_69(&(Local_196.f_31[iParam0 /*17*/]), 26, Local_196.f_31[iParam0 /*17*/].f_5, Local_196.f_31[iParam0 /*17*/].f_1, Local_196.f_31[iParam0 /*17*/].f_4, 1, 1, 1))
				{
					unk_0x98F6ED6E1345DBB0(func_20(iParam0), 1, 0);
					unk_0xA8ED9F72DC442242(func_20(iParam0), 1);
					unk_0xA82663A60582A7D7(func_20(iParam0), 1);
					if (iParam0 == 3)
					{
						unk_0xAC9A80BE63D6295F(func_20(iParam0), Local_196.f_31[iParam0 /*17*/].f_12, 99999999, 0, 1);
					}
					else
					{
						unk_0xAC9A80BE63D6295F(func_20(iParam0), Local_196.f_31[iParam0 /*17*/].f_12, 99999999, 1, 1);
					}
					unk_0x2A3F4ACD0DB18011(func_20(iParam0), 1);
					unk_0x56F64CC9254C2E4F(func_20(iParam0), 42, 1);
					unk_0x22CE155E84E299A3(func_20(iParam0), 1);
					unk_0x7ED3655E5924C6F4(func_20(iParam0), 43, 1);
					unk_0x7ED3655E5924C6F4(func_20(iParam0), 44, 1);
					unk_0xB8A4FDD35107E443(func_20(iParam0), 1);
					unk_0x52F8C3B16C0177FB(func_20(iParam0), Local_196.f_23, 10f, 0, 0);
					unk_0x71065DDFF8D7744C(func_20(iParam0), Global_1574233);
					if (iParam0 == 3)
					{
						unk_0x0603942C851F9C09(func_20(iParam0), "WORLD_HUMAN_WELDING", 0, 0);
					}
				}
			}
		}
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xC0FA8416DA08599F(1))
	{
		return 0;
	}
	iVar0 = unk_0x91D233CD0204A37F(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x970E0945BD0DD6AC(iVar0);
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(iVar0, iParam9);
		if (unk_0x2CE3609210ACDFF4(iVar0))
		{
			if (bParam7)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x97C59C4E8349D15F(iParam0);
	return unk_0x875098323FCA8FE6(iParam0);
}

int func_71()
{
	int iVar0;
	
	if (!func_22())
	{
		if (func_70(Local_196.f_100.f_5))
		{
			if (unk_0xD6F7F0651C1EFA56(1))
			{
				if (func_73(&(Local_196.f_100), Local_196.f_100.f_5, Local_196.f_100.f_1, Local_196.f_100.f_4, 1, 1, 1, 0, 1, 1))
				{
					unk_0xB399D1EDF14937AA(func_72(), 1, 1);
					if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xE259158ED7E55524(func_19(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x90F7F7FF57758DF4("MPBitset", 3))
					{
						if (unk_0xE8E046017EE675F2(func_19(), "MPBitset"))
						{
							iVar0 = unk_0x6140AB07098540A5(func_19(), "MPBitset");
						}
						unk_0x26545538B51562AD(&iVar0, 10);
						unk_0x26545538B51562AD(&iVar0, 11);
						unk_0xE259158ED7E55524(func_19(), "MPBitset", iVar0);
					}
					unk_0x8BE1AEC303A057F7(func_19(), 0, 1, 0);
					unk_0x77E24407E71C2B27(func_19(), 1);
					unk_0x17976D9BB43321C1(func_19(), 1);
					unk_0xE7CD799CF8963ACB(func_19());
					unk_0xFA3ED0FFF3FD8F34(func_19());
					unk_0xD68E3DB5A7B827A5(func_19(), 1);
					unk_0x189621562F2788E6(func_19(), 1);
					unk_0x5139CAC1616AD6F3(func_19(), 1, 0);
					unk_0xA0ADAA40264FB4D6(1, joaat("weapon_vehicle_rocket"), func_19(), 0);
					unk_0x720A9AC8184DF8D8(func_19(), 0);
				}
			}
		}
	}
	if (!func_22())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (func_22())
	{
		return unk_0xD9545E656AC42B18(Local_196.f_100);
	}
	return -1;
}

int func_73(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0xD6F7F0651C1EFA56(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xC972AA2C9F94741D(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x4E76306EE6AE7596(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x52E0CABEEF3E4CB3(uVar0);
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(uVar0, iParam10);
		if (unk_0x2CE3609210ACDFF4(iVar0))
		{
			if (bParam8)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
			else
			{
				unk_0x4F7D17B17C66872A(*uParam0, 0);
			}
		}
		unk_0x11E91887F8A313B1(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_74()
{
	if (!func_629())
	{
		if (func_70(Local_196.f_27))
		{
			if (unk_0x2F600AC3146D596F(1))
			{
				if (func_76(&(Local_196.f_22), Local_196.f_27, Local_196.f_23, 1, 1, 0, 1))
				{
					unk_0xB399D1EDF14937AA(func_624(), 1, 1);
					unk_0x77E24407E71C2B27(func_624(), 0);
					unk_0x17976D9BB43321C1(func_624(), 1);
					unk_0xE7CD799CF8963ACB(func_624());
					unk_0xFBDCF3D5834B58D8(func_624(), Local_196.f_26);
					unk_0x51F79AC13D2AD286(func_624(), func_75());
					unk_0x6C2E94E5E71423B4(func_624(), 1200);
					unk_0x455C37AF8B5BD5B8(Local_196.f_22, 1);
				}
			}
		}
	}
	if (!func_629())
	{
		return 0;
	}
	return 1;
}

int func_75()
{
	return Global_262145.f_12367;
}

int func_76(var uParam0, var uParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	if (!unk_0x2F600AC3146D596F(1))
	{
		return 0;
	}
	*uParam0 = unk_0x8B513DBDB3BBB4A6(unk_0xA8C993B9F5CB4D92(uParam1, Param2, iParam6, bParam5, iParam7));
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		unk_0x77E24407E71C2B27(unk_0xBB4FAC4BA02ED087(*uParam0), iParam8);
		if (unk_0x2CE3609210ACDFF4(unk_0xBB4FAC4BA02ED087(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x4F7D17B17C66872A(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	
	if (!func_630())
	{
		if (func_70(Local_196.f_19))
		{
			if (unk_0xD6F7F0651C1EFA56(1))
			{
				if (func_73(&(Local_196.f_14), Local_196.f_19, Local_196.f_15, Local_196.f_18, 1, 1, 1, 0, 1, 1))
				{
					unk_0xB399D1EDF14937AA(func_605(), 1, 1);
					if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xE259158ED7E55524(func_31(), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x90F7F7FF57758DF4("MPBitset", 3))
					{
						if (unk_0xE8E046017EE675F2(func_31(), "MPBitset"))
						{
							iVar0 = unk_0x6140AB07098540A5(func_31(), "MPBitset");
						}
						unk_0x26545538B51562AD(&iVar0, 10);
						unk_0x26545538B51562AD(&iVar0, 11);
						unk_0xE259158ED7E55524(func_31(), "MPBitset", iVar0);
					}
					unk_0xFD2475756036347D(func_31(), 40, 12);
					unk_0x85E88CC5C37A1A11(func_31(), 0, 12);
					unk_0x4B6301648A814265(func_31(), 0);
					unk_0x512027BF0011D86E(func_31(), 0);
					unk_0x8BE1AEC303A057F7(func_31(), 0, 1, 0);
					unk_0x77E24407E71C2B27(func_31(), 1);
					unk_0x17976D9BB43321C1(func_31(), 1);
					unk_0xE7CD799CF8963ACB(func_31());
					unk_0xFA3ED0FFF3FD8F34(func_31());
					unk_0xD68E3DB5A7B827A5(func_31(), 1);
					unk_0x189621562F2788E6(func_31(), 1);
					unk_0x720A9AC8184DF8D8(func_31(), 0);
					unk_0x185480333425A565(func_31(), 0);
					unk_0x9A57A532E2896649(func_31(), 1);
					unk_0xD4196117AF7BB974(func_31(), 1);
					unk_0x4E20D2A627011E8E(func_31(), func_80());
					unk_0x51F79AC13D2AD286(func_31(), func_79());
					unk_0x7A9F665551CAFDAB(func_31(), func_79());
					unk_0x38B4190AFCA07B12(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x3926A2D202D1C474(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xD0BC3555421EB89C(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0x1F22B0162A37FD6C(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xB0FDAD620F0585B7(func_31(), unk_0xBBDA792448DB5A89(func_79()));
					unk_0xF63D1620AD820626(func_31(), 0);
					if (func_78())
					{
						unk_0x5139CAC1616AD6F3(func_31(), 1, 0);
					}
					else
					{
						unk_0x5139CAC1616AD6F3(func_31(), 0, 0);
					}
					unk_0xBB2333BB87DDD87F(func_31(), 0);
					if ((IntToFloat(func_79()) * 0.9f) > 900f)
					{
						unk_0x3B71EDB349153A04(func_31(), (IntToFloat(func_79()) * 0.9f));
					}
				}
			}
		}
	}
	if (!func_630())
	{
		return 0;
	}
	return 1;
}

bool func_78()
{
	return Global_262145.f_12356;
}

int func_79()
{
	return Global_262145.f_12364;
}

var func_80()
{
	return Global_262145.f_12368;
}

int func_81()
{
	if (!func_8(1))
	{
		if (func_86())
		{
			Local_196.f_11 = iLocal_155[unk_0x3A5708FEE1B560A9(0, 3)];
			Local_196.f_12 = unk_0x3A5708FEE1B560A9(0, 3);
			if (func_85() > -1)
			{
				Local_196.f_11 = func_85();
				if (Global_2460486.f_4970 != Local_196.f_11)
				{
					Global_2460486.f_4971 = -1;
					Global_2460486.f_4970 = Local_196.f_11;
				}
				if (Global_2460486.f_4971 == -1)
				{
					Local_196.f_12 = 0;
					Global_2460486.f_4971 = 0;
				}
				else if (Global_2460486.f_4971 == 0)
				{
					Local_196.f_12 = 1;
					Global_2460486.f_4971 = 1;
				}
				else if (Global_2460486.f_4971 == 1)
				{
					Local_196.f_12 = 2;
					Global_2460486.f_4971 = 2;
				}
				else
				{
					Local_196.f_12 = 0;
					Global_2460486.f_4971 = 0;
				}
			}
			if (!func_84() || func_85() > -1)
			{
				switch (Local_196.f_11)
				{
					case 0:
						Local_196.f_15 = { 189.9142f, -2513.33f, 4.9961f };
						Local_196.f_18 = 269.0188f;
						Local_196.f_23 = { 1042.862f, -2873.798f, 18.0165f };
						Local_196.f_26 = 89.5995f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 1042.85f, -2873.894f, 20.8386f };
						Local_196.f_31[0 /*17*/].f_4 = 353.3989f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 1052.66f, -2866.365f, 18.0336f };
						Local_196.f_31[1 /*17*/].f_4 = 45.1981f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 1061.598f, -2885.226f, 18.018f };
						Local_196.f_31[2 /*17*/].f_4 = 41.5981f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 1046.898f, -2873.773f, 18.018f };
						Local_196.f_31[3 /*17*/].f_4 = 104.5985f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 1057.638f, -2890.931f, 18.018f };
						Local_196.f_100.f_4 = 46.9998f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 1:
						Local_196.f_15 = { 47.3589f, -325.5841f, 43.1512f };
						Local_196.f_18 = 158.5709f;
						Local_196.f_23 = { -181.4615f, -1069.324f, 41.1378f };
						Local_196.f_26 = 140.5992f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { -182.4058f, -1069.914f, 43.96f };
						Local_196.f_31[0 /*17*/].f_4 = 167.799f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { -180.9027f, -1084.14f, 41.1747f };
						Local_196.f_31[1 /*17*/].f_4 = 150.5984f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { -171.2542f, -1084.216f, 41.1393f };
						Local_196.f_31[2 /*17*/].f_4 = 343.398f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { -178.9076f, -1066.203f, 41.1393f };
						Local_196.f_31[3 /*17*/].f_4 = 145.3985f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { -159.393f, -1085.093f, 41.139f };
						Local_196.f_100.f_4 = 27.197f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 2:
						Local_196.f_15 = { -1678.679f, 488.4541f, 127.8763f };
						Local_196.f_18 = 294.2007f;
						Local_196.f_23 = { -601.9863f, 313.6457f, 88.2f };
						Local_196.f_26 = 244.7996f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { -602.1668f, 313.48f, 91.0222f };
						Local_196.f_31[0 /*17*/].f_4 = 214.4477f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { -593.0814f, 320.082f, 88.2015f };
						Local_196.f_31[1 /*17*/].f_4 = 303.5987f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { -582.2228f, 297.6816f, 93.0922f };
						Local_196.f_31[2 /*17*/].f_4 = 62.5994f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { -605.6559f, 315.3309f, 88.2015f };
						Local_196.f_31[3 /*17*/].f_4 = 246.6474f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { -574.594f, 284.302f, 93.092f };
						Local_196.f_100.f_4 = 59.246f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 3:
						Local_196.f_15 = { -1014.687f, -1927.288f, 18.7639f };
						Local_196.f_18 = 44.0083f;
						Local_196.f_23 = { -1538.633f, -3183.779f, 12.9435f };
						Local_196.f_26 = 296.5988f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { -1538.567f, -3183.617f, 15.7656f };
						Local_196.f_31[0 /*17*/].f_4 = 5.3979f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { -1523.649f, -3198.947f, 13.6499f };
						Local_196.f_31[1 /*17*/].f_4 = 359.998f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { -1536.221f, -3200.823f, 12.9449f };
						Local_196.f_31[2 /*17*/].f_4 = 359.998f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { -1541.995f, -3185.51f, 12.9449f };
						Local_196.f_31[3 /*17*/].f_4 = 308.5976f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { -1544.632f, -3201.68f, 12.945f };
						Local_196.f_100.f_4 = 306.3984f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 4:
						Local_196.f_15 = { 1882.029f, -1045.27f, 78.2375f };
						Local_196.f_18 = 170.8719f;
						Local_196.f_23 = { 1203.167f, -1506.968f, 33.691f };
						Local_196.f_26 = 21.999f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 1202.172f, -1506.194f, 36.513f };
						Local_196.f_31[0 /*17*/].f_4 = 160.799f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 1201.206f, -1503.156f, 33.693f };
						Local_196.f_31[1 /*17*/].f_4 = 136.998f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 1208.337f, -1501.759f, 33.693f };
						Local_196.f_31[2 /*17*/].f_4 = 108.799f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 1204.782f, -1510.913f, 33.693f };
						Local_196.f_31[3 /*17*/].f_4 = 24.999f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 1199.658f, -1494.233f, 33.693f };
						Local_196.f_100.f_4 = 127.4f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 5:
						Local_196.f_15 = { -2039.003f, -265.5846f, 22.3858f };
						Local_196.f_18 = 143.0463f;
						Local_196.f_23 = { -3100.435f, 444.906f, 1.374f };
						Local_196.f_26 = 308.598f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { -3100.591f, 444.925f, 4.196f };
						Local_196.f_31[0 /*17*/].f_4 = 260.397f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { -3097.096f, 444.617f, 1.369f };
						Local_196.f_31[1 /*17*/].f_4 = 200.796f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { -3081.263f, 446.521f, 3.209f };
						Local_196.f_31[2 /*17*/].f_4 = 116.995f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { -3103.644f, 442.422f, 1.384f };
						Local_196.f_31[3 /*17*/].f_4 = 312.795f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { -3076.92f, 465.435f, 1.335f };
						Local_196.f_100.f_4 = 198.799f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 6:
						Local_196.f_15 = { 728.02f, -1408.043f, 25.4891f };
						Local_196.f_18 = 90.1806f;
						Local_196.f_23 = { 1381.42f, -762.7927f, 65.8711f };
						Local_196.f_26 = 92.8485f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 1381.338f, -763.0068f, 69.6918f };
						Local_196.f_31[0 /*17*/].f_4 = 4.94f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 1400.973f, -752.1135f, 66.2362f };
						Local_196.f_31[1 /*17*/].f_4 = 90.9655f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 1379.128f, -775.2779f, 66.2889f };
						Local_196.f_31[2 /*17*/].f_4 = 78.6381f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 1385.204f, -762.8477f, 65.683f };
						Local_196.f_31[3 /*17*/].f_4 = 92.0539f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 1361.352f, -758.7062f, 66.6214f };
						Local_196.f_100.f_4 = 326.148f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 7:
						Local_196.f_15 = { 1253.498f, 1840.716f, 79.9641f };
						Local_196.f_18 = 46.8947f;
						Local_196.f_23 = { 2774.083f, 2808.028f, 40.491f };
						Local_196.f_26 = 109.598f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 2773.714f, 2807.965f, 43.313f };
						Local_196.f_31[0 /*17*/].f_4 = 63.597f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 2772.637f, 2804.956f, 40.331f };
						Local_196.f_31[1 /*17*/].f_4 = 261.997f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 2778.04f, 2814.614f, 40.518f };
						Local_196.f_31[2 /*17*/].f_4 = 311.397f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 2778.008f, 2809.422f, 40.531f };
						Local_196.f_31[3 /*17*/].f_4 = 117.198f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 2795.438f, 2821.497f, 40.935f };
						Local_196.f_100.f_4 = 250.8f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 8:
						Local_196.f_15 = { -346.9132f, 1154.042f, 324.6277f };
						Local_196.f_18 = 16.8176f;
						Local_196.f_23 = { 672.3871f, 1285.626f, 362.1034f };
						Local_196.f_26 = 267.9326f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 672.4152f, 1285.745f, 365.9242f };
						Local_196.f_31[0 /*17*/].f_4 = 158.9035f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 661.6746f, 1280.377f, 359.296f };
						Local_196.f_31[1 /*17*/].f_4 = 265.7611f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 684.5181f, 1285.442f, 359.296f };
						Local_196.f_31[2 /*17*/].f_4 = 172.8322f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 668.6322f, 1285.944f, 362.1047f };
						Local_196.f_31[3 /*17*/].f_4 = 268.138f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 698.5234f, 1281.729f, 359.296f };
						Local_196.f_100.f_4 = 179.1677f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
					
					case 9:
						Local_196.f_15 = { 2272.492f, 4843.567f, 39.515f };
						Local_196.f_18 = 225.5383f;
						Local_196.f_23 = { 1641.274f, 3792.706f, 33.7837f };
						Local_196.f_26 = 124.0543f;
						Local_196.f_108 = { func_83() };
						Local_196.f_111 = 15f;
						Local_196.f_31[0 /*17*/].f_1 = { 1640.446f, 3792.24f, 37.6044f };
						Local_196.f_31[0 /*17*/].f_4 = 130.5668f;
						Local_196.f_31[0 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[0 /*17*/].f_8 = 0;
						Local_196.f_31[0 /*17*/].f_9 = 0;
						Local_196.f_31[0 /*17*/].f_12 = func_82();
						Local_196.f_31[1 /*17*/].f_1 = { 1651.009f, 3802.024f, 37.6556f };
						Local_196.f_31[1 /*17*/].f_4 = 171.5231f;
						Local_196.f_31[1 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[1 /*17*/].f_8 = 0;
						Local_196.f_31[1 /*17*/].f_9 = 0;
						Local_196.f_31[1 /*17*/].f_12 = func_82();
						Local_196.f_31[2 /*17*/].f_1 = { 1653.848f, 3788.61f, 33.9115f };
						Local_196.f_31[2 /*17*/].f_4 = 227.4158f;
						Local_196.f_31[2 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[2 /*17*/].f_8 = 0;
						Local_196.f_31[2 /*17*/].f_9 = 0;
						Local_196.f_31[2 /*17*/].f_12 = func_82();
						Local_196.f_31[3 /*17*/].f_1 = { 1644.477f, 3794.678f, 33.7998f };
						Local_196.f_31[3 /*17*/].f_4 = 119.3968f;
						Local_196.f_31[3 /*17*/].f_5 = joaat("s_m_y_blackops_02");
						Local_196.f_31[3 /*17*/].f_8 = 0;
						Local_196.f_31[3 /*17*/].f_9 = 0;
						Local_196.f_31[3 /*17*/].f_12 = func_82();
						Local_196.f_100.f_1 = { 1653.295f, 3761.657f, 33.7487f };
						Local_196.f_100.f_4 = 36.6346f;
						Local_196.f_100.f_5 = joaat("buzzard");
						Local_196.f_100.f_6 = 0;
						Local_196.f_100.f_7 = 0;
						break;
				}
				Global_2460486.f_4970 = Local_196.f_11;
				if ((!func_30(Local_196.f_15) && !func_30(Local_196.f_23)) && !func_30(Local_196.f_108))
				{
					func_4(1);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	int iVar0;
	
	iVar0 = unk_0x3A5708FEE1B560A9(0, 4);
	switch (iVar0)
	{
		case 0:
			return joaat("weapon_smg");
		
		case 1:
			return joaat("weapon_carbinerifle");
		
		case 2:
			return joaat("weapon_combatmg");
		
		case 3:
			return joaat("weapon_pumpshotgun");
		
		default:
	}
	return joaat("weapon_carbinerifle");
}

Vector3 func_83()
{
	switch (Local_196.f_11)
	{
		case 0:
			switch (Local_196.f_12)
			{
				case 0:
					return 1531.415f, 1684.644f, 109.006f;
				
				case 1:
					return 2073.5f, 2325.21f, 93.3021f;
				
				case 2:
					return 2452.845f, 1500.187f, 34.6955f;
				
				default:
			}
			break;
		
		case 1:
			switch (Local_196.f_12)
			{
				case 0:
					return 2777.029f, 2852.221f, 34.7472f;
				
				case 1:
					return 2386.253f, 3152.772f, 46.239f;
				
				case 2:
					return 1503.5f, 3761.3f, 33f;
				
				default:
			}
			break;
		
		case 2:
			switch (Local_196.f_12)
			{
				case 0:
					return 1662.926f, 6443.836f, 27.9099f;
				
				case 1:
					return 1987.6f, 5003.8f, 41.5f;
				
				case 2:
					return -470.0827f, 6314.478f, 12.7855f;
				
				default:
			}
			break;
		
		case 3:
			switch (Local_196.f_12)
			{
				case 0:
					return 762.7951f, 4181.884f, 39.5877f;
				
				case 1:
					return 1419.2f, 4368.2f, 42.9f;
				
				case 2:
					return 1713.144f, 4774.958f, 46.583f;
				
				default:
			}
			break;
		
		case 4:
			switch (Local_196.f_12)
			{
				case 0:
					return 369.589f, 3506.247f, 33.3387f;
				
				case 1:
					return 28.005f, 3057.184f, 39.7648f;
				
				case 2:
					return 197.4874f, 3056.602f, 41.7043f;
				
				default:
			}
			break;
		
		case 5:
			switch (Local_196.f_12)
			{
				case 0:
					return -934.4654f, 5533.987f, 5.8178f;
				
				case 1:
					return 353.4302f, 4441.722f, 62.0202f;
				
				case 2:
					return 116.9429f, 3634.013f, 38.7549f;
				
				default:
			}
			break;
		
		case 6:
			switch (Local_196.f_12)
			{
				case 0:
					return 3279.945f, 5162.452f, 18.0005f;
				
				case 1:
					return 2261.117f, 5603.044f, 53.0163f;
				
				case 2:
					return 2939.061f, 4535.25f, 47.6496f;
				
				default:
			}
			break;
		
		case 7:
			switch (Local_196.f_12)
			{
				case 0:
					return -809.7571f, -2664.963f, 12.812f;
				
				case 1:
					return -1211.795f, -2048.009f, 13.4178f;
				
				case 2:
					return 179.3704f, -2168.603f, 10.4103f;
				
				default:
			}
			break;
		
		case 8:
			switch (Local_196.f_12)
			{
				case 0:
					return 130.4951f, 6663.956f, 30.7705f;
				
				case 1:
					return -193.6152f, 6219.429f, 30.4893f;
				
				case 2:
					return 195.7f, 6412.5f, 30.2f;
				
				default:
			}
			break;
		
		case 9:
			switch (Local_196.f_12)
			{
				case 0:
					return -1567.759f, 845.0679f, 183.0854f;
				
				case 1:
					return -817.536f, 865.8911f, 202.0182f;
				
				case 2:
					return -921.0893f, -725.2122f, 18.9176f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_84()
{
	if (Global_2460486.f_4970 == Local_196.f_11)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_2460486.f_4660.f_137;
}

int func_86()
{
	int iVar0;
	float fVar1;
	float fVar2[3];
	struct<3> Var6;
	
	fVar2[0] = 9999.9f;
	fVar2[1] = 9999.9f;
	fVar2[2] = 9999.9f;
	if (func_680(unk_0x4D29100D094E5511(), 1, 1))
	{
		Var6 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
		iVar0 = 0;
		while (iVar0 < 11)
		{
			fVar1 = unk_0x676D4CD42E0837CA(Var6, func_87(iVar0), 0);
			if (fVar1 < fVar2[0])
			{
				fVar2[2] = fVar2[1];
				iLocal_155[2] = iLocal_155[1];
				fVar2[1] = fVar2[0];
				iLocal_155[1] = iLocal_155[0];
				fVar2[0] = fVar1;
				iLocal_155[0] = iVar0;
			}
			else if (fVar1 > fVar2[0] && fVar1 < fVar2[1])
			{
				fVar2[2] = fVar2[1];
				iLocal_155[2] = iLocal_155[1];
				fVar2[1] = fVar1;
				iLocal_155[1] = iVar0;
			}
			else if (fVar1 > fVar2[1] && fVar1 < fVar2[2])
			{
				fVar2[2] = fVar1;
				iLocal_155[2] = iVar0;
			}
			iVar0++;
		}
	}
	if ((iLocal_155[0] != -1 && iLocal_155[1] != -1) && iLocal_155[2] != -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 189.9142f, -2513.33f, 4.9961f;
		
		case 1:
			return 47.3589f, -325.5841f, 43.1512f;
		
		case 2:
			return -1678.679f, 488.4541f, 127.8763f;
		
		case 3:
			return -1014.687f, -1927.288f, 18.7639f;
		
		case 4:
			return 1882.029f, -1045.27f, 78.2375f;
		
		case 5:
			return -2039.003f, -265.5846f, 22.3858f;
		
		case 6:
			return 728.02f, -1408.043f, 25.4891f;
		
		case 7:
			return 1253.498f, 1840.716f, 79.9641f;
		
		case 8:
			return -346.9132f, 1154.042f, 324.6277f;
		
		case 9:
			return 2272.492f, 4843.567f, 39.515f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_88(int iParam0)
{
	Local_196.f_0 = iParam0;
}

int func_89()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return 1;
	}
	return 0;
}

void func_90()
{
	switch (func_63())
	{
		case 0:
			break;
		
		case 1:
			if (!func_578(2))
			{
				func_558(170, 1, -1);
				func_557(2);
			}
			else if (!func_578(3))
			{
				if (func_48(&(Local_196.f_2), 10000, 0))
				{
					func_557(3);
				}
			}
			func_483();
			func_482();
			func_481();
			func_480();
			func_477();
			func_474();
			func_471();
			func_469();
			func_468();
			func_467(1);
			func_463();
			func_460();
			if ((!func_455() && !func_454()) && !func_453(170))
			{
				if (func_61() == 0)
				{
					if (func_436(1))
					{
						if (!func_578(4))
						{
							func_432();
							func_557(4);
						}
						func_415();
						func_413();
						func_397();
						func_395();
						func_391();
						func_383();
						switch (func_382(unk_0x7025777635AB04C0()))
						{
							case 0:
								if (func_625())
								{
									if (!func_578(6))
									{
										func_380();
										func_378(1);
										func_377(1);
										func_376(1);
										func_557(6);
									}
									func_361(0);
									func_353(0);
									func_332(0);
									if (!func_9(unk_0xA3CDB5D555FBB382(), 6))
									{
										if (func_331())
										{
											func_330(6);
										}
									}
								}
								else if (func_329())
								{
									func_361(0);
									func_353(0);
									func_332(0);
								}
								else if (!func_329())
								{
									if (func_328() || func_327())
									{
										func_361(3);
										func_353(10);
									}
								}
								if (func_8(2))
								{
									func_326(1);
								}
								break;
							
							case 1:
								if (func_625())
								{
									if (func_325())
									{
										if (func_331())
										{
											if (!func_9(unk_0xA3CDB5D555FBB382(), 6))
											{
												func_330(6);
											}
											if (!func_578(5))
											{
												func_557(5);
											}
											func_353(7);
										}
									}
									else if (!func_578(5))
									{
										if (func_331())
										{
											if (!func_9(unk_0xA3CDB5D555FBB382(), 6))
											{
												func_330(6);
											}
											func_557(5);
										}
									}
								}
								else if (!func_329())
								{
									if (func_328() || func_327())
									{
										func_361(3);
										func_353(10);
									}
								}
								if (func_8(11))
								{
									func_326(2);
								}
								break;
							
							case 2:
								if (func_625() || func_329())
								{
									func_332(1);
									if (func_325())
									{
										func_353(8);
										if (func_38(unk_0x27D769C59BC9D030(), func_39(), 0) < 100f)
										{
											func_353(12);
										}
									}
									else
									{
										func_353(9);
									}
									if (func_8(15))
									{
										func_353(11);
									}
								}
								else
								{
									func_361(3);
									func_353(10);
								}
								break;
							}
						}
				}
			}
			else
			{
				func_318();
				func_317();
				if (func_630())
				{
					if (!unk_0xB34F1074D0EA9D95(func_31(), unk_0x4D29100D094E5511()))
					{
						unk_0x85874D3067D4DBBD(func_31(), unk_0x4D29100D094E5511(), 1);
					}
				}
			}
			break;
		
		case 2:
			if (func_316(unk_0x4D29100D094E5511()))
			{
				func_378(0);
			}
			if (Global_2460486.f_4980 == 1)
			{
				Global_2460486.f_4980 = 0;
			}
			func_290();
			func_279();
			func_383();
			func_318();
			func_91();
			break;
		
		case 3:
			break;
	}
}

void func_91()
{
	bool bVar0;
	int iVar1;
	
	if (func_61() != 0)
	{
		if (func_436(1))
		{
			if ((!func_455() && !func_454()) && !func_453(171))
			{
				if (func_277())
				{
					switch (func_61())
					{
						case 2:
							func_361(11);
							break;
						
						case 3:
							break;
						
						case 1:
							if (func_625())
							{
								func_361(2);
							}
							else
							{
								func_361(8);
							}
							break;
						
						case 4:
							if (Local_196.f_6 != 0)
							{
								switch (Local_196.f_6)
								{
									case 1:
										if (func_625() || func_329())
										{
											if (!func_329())
											{
												bVar0 = true;
												func_276();
											}
											func_361(1);
										}
										else
										{
											func_361(10);
										}
										break;
									
									case 2:
										if (func_625() || func_329())
										{
											func_361(2);
										}
										else if (func_275())
										{
											bVar0 = true;
											func_361(4);
											func_276();
										}
										else if (func_274())
										{
											func_361(5);
											func_276();
										}
										else if (func_273())
										{
											if (func_271(func_272(), 1))
											{
												func_361(7);
											}
											else
											{
												func_361(6);
											}
										}
										else
										{
											func_361(8);
										}
										break;
									
									case 3:
										if (func_625() || func_329())
										{
											func_361(2);
										}
										else if (func_270(unk_0x4D29100D094E5511()))
										{
											func_361(9);
										}
										else
										{
											func_361(8);
										}
										break;
									
									case 4:
										if (func_625())
										{
											bVar0 = true;
											func_361(12);
										}
										else
										{
											func_361(13);
										}
										break;
									}
							}
							break;
						}
				}
				if (!func_578(1))
				{
					iVar1 = unk_0x4D29100D094E5511();
					func_268(0, iVar1);
					if (bVar0)
					{
						if (Local_196.f_6 == 1)
						{
							if (func_625())
							{
								iLocal_110 = (iLocal_110 + func_34());
							}
						}
						else if (Local_196.f_6 == 2)
						{
							if (func_275())
							{
								iLocal_110 = (iLocal_110 + func_65());
							}
						}
					}
					func_117(170, bVar0, &iLocal_110);
					func_661(bVar0, 0);
					func_557(1);
				}
			}
		}
	}
	if (func_92(&uLocal_120, 0))
	{
		func_330(0);
	}
}

int func_92(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_116(29);
	if ((*uParam0 > 0 && !func_115()) && func_108(unk_0x4D29100D094E5511()) != 0)
	{
		if (!func_105())
		{
			func_104();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_60(&(uParam0->f_3)))
			{
				func_59(&(uParam0->f_3), 0, 0);
			}
			else if (func_48(&(uParam0->f_3), 1000, 0))
			{
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 2);
				if (bParam1)
				{
					unk_0x26545538B51562AD(&(Global_2460486.f_4426), 0);
					func_59(&(uParam0->f_5), 0, 0);
				}
				func_59(&(uParam0->f_1), 0, 0);
				func_103(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_60(&(uParam0->f_5)))
			{
				if (func_48(&(uParam0->f_5), 3000, 0))
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
				func_97();
				func_103(uParam0, 2);
			}
			break;
		
		case 2:
			func_97();
			if (func_48(&(uParam0->f_1), 15000, 0))
			{
				if (func_93(func_94()))
				{
					unk_0x5BD150B52CE8D356(1);
				}
				func_103(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_48(&(uParam0->f_1), 23500, 0))
			{
				unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 1);
				unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 2);
				func_103(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 1);
			unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_93(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

char* func_94()
{
	if (func_95(func_96()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_95(int iParam0)
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
	return 0;
}

int func_96()
{
	return Global_1615885;
}

void func_97()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4426, 0))
	{
		if ((((((((!unk_0x9A8D90020C5C606B() && !unk_0xF426A5DE932B3BEE(Global_2460486.f_743, 2)) && func_680(unk_0x4D29100D094E5511(), 1, 1)) && !Global_68058) && !Global_52930) && !unk_0x3934E959DB2478D3()) && !func_102(unk_0x4D29100D094E5511(), 22)) && func_108(unk_0x4D29100D094E5511()) != 0) && !func_100(func_101()))
		{
			unk_0x26545538B51562AD(&(Global_2460486.f_4426), 1);
			func_99(func_94(), -1);
			func_98(1);
			unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4426), 0);
		}
	}
}

void func_98(int iParam0)
{
	if (iParam0 && !func_115())
	{
		unk_0x954BCDB8FDB0AC0F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_99(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 0, iParam1);
}

int func_100(int iParam0)
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

int func_101()
{
	var uVar0;
	
	uVar0 = unk_0x3AA961419D971CB2();
	if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

bool func_102(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_104()
{
	Global_2444574 = 1;
}

int func_105()
{
	if (func_106(unk_0x4D29100D094E5511()) == 170)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

int func_107(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_114(iParam0) && !func_113(iParam0)) && !unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 8));
	bVar2 = func_270(iParam0);
	uVar3 = func_112();
	uVar4 = func_455();
	if ((bVar1 && (func_111(iParam0) || func_110(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_316(iParam0)) && !func_109(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

bool func_109(int iParam0)
{
	return func_102(iParam0, 19);
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return 0;
}

bool func_112()
{
	return Global_1312416;
}

bool func_113(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_1, 2);
}

int func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return 0;
}

bool func_115()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

void func_116(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

void func_117(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	
	func_266(iParam0, &fVar2, &fVar3);
	if (iParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + iParam2->f_1);
		iVar0 = (iVar0 + *iParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_265(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = (iVar0 + func_264(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * iParam2->f_2));
	}
	if (bParam1)
	{
		if (func_263(unk_0x4D29100D094E5511()) > 0)
		{
			func_262();
		}
		else
		{
			func_261();
		}
	}
	else
	{
		func_260();
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_259(unk_0x4D29100D094E5511()))
			{
				if (iParam2->f_5)
				{
					iVar0 = (iVar0 + func_251(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_119));
				}
				else
				{
					iVar4 = iParam2->f_7;
					if (iParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + iParam2->f_8);
					}
					iVar5 = func_250(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_249(&uVar7);
					iVar9 = Global_262145.f_13508;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12730));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (iParam2->f_6)
					{
						iVar0 = (iVar0 + *iParam2);
					}
					if (iVar8 > 0 && iParam2->f_9 != 4)
					{
						func_248(44);
					}
				}
				func_242(iVar0);
				func_241();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xD81B83309CFE36FF())
				{
					iVar13 = iVar12;
					if (unk_0x6985B636BB8652CD(iVar13))
					{
						iVar14 = unk_0xFAA1C60127DA6F80(iVar13);
						if (func_240(iVar14))
						{
							func_232(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_259(unk_0x4D29100D094E5511()))
		{
			func_231();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_259(unk_0x4D29100D094E5511()))
		{
			if (bParam1)
			{
				func_230();
			}
			func_229();
		}
	}
	iVar15 = func_228();
	if (iVar15 != func_3() && iParam0 != 148)
	{
		if (func_271(unk_0x4D29100D094E5511(), 0))
		{
			if (!func_5(unk_0x4D29100D094E5511(), iVar15, 1))
			{
				func_192(&iVar0, 1);
			}
		}
	}
	func_188(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_187();
		func_136(0, unk_0x27D769C59BC9D030(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_135();
		if (iVar20 != func_3())
		{
			func_134(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_133(1);
		if (iParam0 == 168)
		{
			if (!func_132())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_132())
		{
			func_122(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2558146[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x42D6C3736E56420E(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_121(iParam0))
		{
			if (func_120(iParam0) > -1)
			{
				func_119(func_120(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_118(&Global_2443512, 0, 0);
	}
}

void func_118(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x20D394965B47B01A();
		}
		else
		{
			*uParam0 = unk_0xBADD1A643AD56F36();
		}
	}
	else
	{
		*uParam0 = unk_0xA0F74982C6AAA9D4();
	}
	uParam0->f_1 = 1;
}

void func_119(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_120(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_121(int iParam0)
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
	}
	return iVar0;
}

void func_122(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_132())
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
			if (iParam1 > 0)
			{
				func_123(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_123(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_123(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_132())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x6DDA083DB04D1FA1(func_131()) || unk_0xC0EF410FE489E4BC())
		{
			Global_2558637 = 1;
			return 0;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0xFF60755759699F54(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB4593E48EB78775A(iVar3))
		{
			*uParam0 = func_130(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_129(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_124(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_124(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_125(iParam0);
	}
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_132())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8B4018F9DEC0BCDE();
			}
		}
		else if (!bVar0)
		{
			unk_0xA5546C3771405485(Global_2558146[iParam0 /*73*/]);
		}
		func_126(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_126(var uParam0)
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
	func_127(&(uParam0->f_8.f_3));
	func_127(&(uParam0->f_8.f_16));
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

void func_127(var uParam0)
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

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_129(int iParam0, var uParam1)
{
	Global_2445534 = uParam1;
	Global_2445533 = iParam0;
}

int func_130(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_132())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = uParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = uParam2;
			Global_2558146[iVar0 /*73*/].f_7 = uParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = uParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (bParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_131()
{
	return Global_1312747;
}

int func_132()
{
	if (unk_0xDFCB321F1D24137F())
	{
		return 1;
	}
	return 0;
}

bool func_133(bool bParam0)
{
	return func_271(unk_0x4D29100D094E5511(), bParam0);
}

void func_134(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

int func_135()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10;
}

int func_136(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_137(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_137(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_147(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD2CFFE76B625AE55(iParam1))
		{
			if (unk_0x54F37403E01EFD97(iParam1))
			{
				iVar1 = unk_0x97EA5EA3E7FE8500(iParam1);
				func_143(unk_0x52AB056B2AF7BB53(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_138(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_138(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_141(iParam0, 1) };
	if (iParam0 == func_140(unk_0x27D769C59BC9D030()))
	{
		func_139(1);
	}
	func_143(Var0, iParam1, 0, sParam2);
}

void func_139(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_140(int iParam0)
{
	return iParam0;
}

Vector3 func_141(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_142(unk_0x27D769C59BC9D030()) && unk_0xD7DDFCF6557D9296(unk_0x7DC564DE3CF907A4()) == 4)
	{
		Var0 = { unk_0xD7C4E2CB0B216852(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		fVar3 = unk_0x4D6B971C8AEE130C(iParam0);
	}
	unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x8E183FB8F99DD2D7(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_142(int iParam0)
{
	return iParam0;
}

void func_143(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = { Param0 };
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_146(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = unk_0x20D394965B47B01A();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_145();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_144();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_144()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return 1;
	}
	Global_2428492.f_1355 = 0;
	return 0;
}

var func_145()
{
	var uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_146(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x676D4CD42E0837CA(unk_0xDD23360B0FA2E0E2(), Param0, 1);
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

var func_147(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_148(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_148(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_186(unk_0x4D29100D094E5511()) || func_185(unk_0x4D29100D094E5511()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_184(uParam2))
	{
	}
	if (func_183())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_181(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_180(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_177(0, &iVar1);
					break;
				
				case 3:
					func_177(1, &iVar1);
					break;
				
				case 1:
					func_173(&iVar1);
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
			func_170(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_159((func_169(unk_0x4D29100D094E5511()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x3D7FB311FE0FCB8D(iVar1, iParam8, iParam9);
				if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_2 != -1)
				{
					func_170(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_153(iVar1);
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
				func_149((func_151(unk_0x4D29100D094E5511()) + iVar1));
			}
			else
			{
				func_149((func_151(unk_0x4D29100D094E5511()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_149(int iParam0)
{
	if (func_183())
	{
		Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_5 = iParam0;
		func_150(joaat("mpply_globalxp"), iParam0);
	}
}

void func_150(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
}

int func_151(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_680(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return func_152(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_152(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_153(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_158(unk_0x4D29100D094E5511()) };
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(&Var0))
		{
			iVar13 = func_156(func_157(&Var0));
			if (iVar13 == 0)
			{
				func_155(&Global_1347641, iParam0);
				func_154(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_155(&Global_1347642, iParam0);
				func_154(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_155(&Global_1347643, iParam0);
				func_154(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_155(&Global_1347644, iParam0);
				func_154(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_155(&Global_1347645, iParam0);
				func_154(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_154(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_157(var uParam0)
{
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

struct<13> func_158(int iParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(iParam0, &Var0, 13);
	return Var0;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_168(-1)])
				{
					unk_0x3D7FB311FE0FCB8D(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_168(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_167(unk_0x4D29100D094E5511()))
		{
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_6 = func_165(iParam0, 1);
		}
		func_164(632, iParam0, -1, 1);
		func_163(633, func_165(iParam0, 1), -1, 1);
		Global_1347756[func_168(-1)] = iParam0;
		func_160(7, 0);
	}
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_162(iParam0, iParam1))
	{
		iVar0 = func_161();
		Global_2442990[iVar0] = iParam0;
	}
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_162(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

void func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_168(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_168(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_168(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_168(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_168(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_168(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_168(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_168(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_168(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_168(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_168(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_168(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_168(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_168(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_168(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_168(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_168(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_168(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_168(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_168(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_168(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_168(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_168(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_168(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_168(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_168(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_168(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_168(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_168(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_168(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_168(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_168(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_165(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_166(iParam0, 0);
}

int func_166(int iParam0, int iParam1)
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
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
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

int func_167(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_2428492.f_1, iParam0);
	}
	return 1;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_131();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_169(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return Global_1347756[func_168(-1)];
			}
			else if (func_167(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_168(-1)];
	}
	return 0;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, func_168(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_171(iParam0))
	{
		func_163(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_164(iParam0, iVar0, iParam2, 1);
	}
}

int func_171(int iParam0)
{
	if (Global_1347635)
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
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_168(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
	iVar0 = 0;
	while (iVar0 < unk_0xD81B83309CFE36FF())
	{
		iVar4 = unk_0xA9A38637698616EF(iVar0);
		if (unk_0x6985B636BB8652CD(iVar4))
		{
			iVar5 = unk_0xFAA1C60127DA6F80(iVar4);
			if (unk_0xEDB589A956C2855F(iVar5) != -1)
			{
				if (unk_0xEDB589A956C2855F(iVar5) == iVar1 || func_176(unk_0xEDB589A956C2855F(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x4D29100D094E5511())
					{
						if (func_175(unk_0x4D29100D094E5511(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_174(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_175(int iParam0, int iParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_158(iParam0) };
		Global_2459453 = { func_158(iParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)
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
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 0);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 1);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 2);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 4);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 5);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 6);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 8);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 9);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 10);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 12);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 13);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 14);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_177(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xD81B83309CFE36FF())
		{
			iVar3 = iVar0;
			if (unk_0x6985B636BB8652CD(iVar3))
			{
				iVar4 = unk_0xFAA1C60127DA6F80(iVar3);
				if (func_680(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x4D29100D094E5511())
					{
						iVar1++;
						if (func_175(unk_0x4D29100D094E5511(), iVar4))
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
			if (func_680(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x4D29100D094E5511())
				{
					if (func_178(unk_0x4D29100D094E5511(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_175(unk_0x4D29100D094E5511(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_174(*iParam1, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_174(*iParam1, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_178(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_179(iParam0), func_179(iParam1));
	return 0f;
}

Vector3 func_179(int iParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (unk_0xF436232699272DC3() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_174(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x2D8D75F813225B7B(iParam0) > func_169(unk_0x4D29100D094E5511()))
		{
			iParam0 = -func_169(unk_0x4D29100D094E5511());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_169(unk_0x4D29100D094E5511())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_169(unk_0x4D29100D094E5511()));
		}
	}
	return iParam0;
}

int func_182(int iParam0, bool bParam1, int iParam2)
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
	return Global_275884[iParam0];
}

int func_183()
{
	return 1;
}

int func_184(var uParam0)
{
	if (unk_0x0275404839C0A19A(uParam0))
	{
		return 1;
	}
	else if (unk_0xC1C5B83BB6719C6C(uParam0, "") || unk_0xC1C5B83BB6719C6C(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

bool func_186(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_187()
{
	Global_2444573 = 1;
}

void func_188(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_191(7))
	{
		return;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_189(iParam0);
	iVar2 = unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(Global_2460486.f_4660.f_67, unk_0x20D394965B47B01A()));
	if (iVar2 > Global_262145.f_10334)
	{
		iVar2 = Global_262145.f_10334;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10425;
		
		case 152:
			return Global_262145.f_10460;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10448;
		
		case 157:
			return Global_262145.f_10415;
		
		case 159:
			return Global_262145.f_10398;
		
		case 164:
			return Global_262145.f_10438;
		
		case 160:
			return Global_262145.f_10488;
		
		case 162:
			return Global_262145.f_10508;
		
		case 163:
			return Global_262145.f_10473;
		
		case 154:
			return Global_262145.f_10543;
		
		case 155:
			return Global_262145.f_10533;
		
		case 153:
			return Global_262145.f_10497;
		
		case 170:
			return Global_262145.f_12375;
		
		case 171:
			return Global_262145.f_12434;
		
		case 172:
			return Global_262145.f_12452;
		
		case 173:
			return Global_262145.f_12393;
		
		case 166:
			return Global_262145.f_12408;
		
		case 167:
			return Global_262145.f_12499;
		
		case 169:
			return Global_262145.f_12471;
		
		case 168:
			return Global_262145.f_12464;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10424;
		
		case 152:
			return Global_262145.f_10459;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10447;
		
		case 157:
			return Global_262145.f_10414;
		
		case 159:
			return Global_262145.f_10397;
		
		case 164:
			return Global_262145.f_10437;
		
		case 160:
			return Global_262145.f_10487;
		
		case 162:
			return Global_262145.f_10507;
		
		case 163:
			return Global_262145.f_10472;
		
		case 154:
			return Global_262145.f_10542;
		
		case 155:
			return Global_262145.f_10532;
		
		case 153:
			return Global_262145.f_10496;
		
		case 170:
			return Global_262145.f_12374;
		
		case 171:
			return Global_262145.f_12433;
		
		case 172:
			return Global_262145.f_12451;
		
		case 173:
			return Global_262145.f_12392;
		
		case 166:
			return Global_262145.f_12407;
		
		default:
	}
	return 0;
}

bool func_191(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4660.f_18, iParam0);
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_227())
		{
			if (func_133(0))
			{
				if (unk_0x27C9C05A6B4E58D2(func_135()))
				{
					if (func_226() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_226());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_224(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_195("GB_BCUT_TICK1", func_135(), iVar0, 0, 0, 1, 1);
					}
					func_248(20);
					func_193(func_135(), iVar0, 1);
				}
			}
		}
	}
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_680(iParam0, 0, 1))
	{
		Var0.f_0 = 447;
		Var0.f_1 = unk_0x4D29100D094E5511();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCE8ECD07286D394D(1, &Var0, 5, func_194(iParam0));
	}
}

var func_194(int iParam0)
{
	var uVar0;
	
	unk_0x26545538B51562AD(&uVar0, iParam0);
	return uVar0;
}

int func_195(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		unk_0x5411F6B456B04A6B(sParam0);
		unk_0xF4D4BFD98B32BF85(func_204(iParam1, -2, 1, 0));
		unk_0xF9E9E11D6DF3EBF8(func_202(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF4D4BFD98B32BF85(iParam3);
		}
		unk_0x90805938ADF0F45C(iParam2);
		iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
		func_196(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_196(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_201() || !unk_0x9404B1BCD022816B()) || !func_199(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_197(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_198(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_199(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_200(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_200(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_131();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_201()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

var func_202(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_203(&cVar0);
}

var func_203(char[4] cParam0)
{
	return cParam0;
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_222(iParam0))
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
	if (func_222(unk_0x4D29100D094E5511()) || (func_221() && func_220()))
	{
		uVar0 = func_219();
		if (unk_0xD2CFFE76B625AE55(uVar0))
		{
			if (unk_0x30D6008994E431E8(iVar0))
			{
				if (unk_0x881548CC6D5B749B(iVar0) != -1)
				{
					if (func_680(unk_0x881548CC6D5B749B(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_218(iParam1, iParam0, 0);
							}
							else
							{
								return func_211(iParam0, unk_0x881548CC6D5B749B(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_211(iParam0, unk_0x881548CC6D5B749B(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_218(iParam1, iParam0, 0);
				}
				else
				{
					return func_205(0, -1, 0);
				}
			}
			else
			{
				return func_205(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_218(iParam1, iParam0, 0);
		}
		else
		{
			return func_211(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
		}
	}
	return func_211(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
}

int func_205(bool bParam0, int iParam1, bool bParam2)
{
	return func_206(unk_0x4D29100D094E5511(), bParam0, iParam1, bParam2);
}

int func_206(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xEDB589A956C2855F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_176(iVar0, iParam2, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_210(1);
				}
				else
				{
					return func_210(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 20))
			{
				return func_207(iVar0, iParam2, 1);
			}
			else
			{
				return func_207(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_210(1);
	}
	return func_210(0);
}

int func_207(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_209(iParam0, iParam1);
	if (func_208(Global_1617379.f_70365))
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

int func_208(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
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
			if (!func_176(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_210(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_211(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xEDB589A956C2855F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_217(iParam1, iParam0, iVar0, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)) || ((func_176(unk_0xEDB589A956C2855F(iParam1), unk_0xEDB589A956C2855F(iParam0), 0) && unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 23)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)))
			{
				return func_210(1);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 26))
			{
				return func_216(1);
			}
			else
			{
				return func_206(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_210(1);
			}
			else
			{
				return func_206(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_214(iParam0);
	if (!iVar3 == -1)
	{
		return func_212(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(iParam0);
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
		
		default:
	}
	return 1;
}

var func_213(int iParam0)
{
	return Global_2413760.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_214(int iParam0)
{
	if (!iParam0 == func_3())
	{
		if (func_271(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_215(iParam0)];
		}
	}
	return -1;
}

int func_215(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_3();
}

int func_216(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == iParam2;
	}
	return unk_0xEDB589A956C2855F(iParam0) == iParam2;
}

int func_218(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 29))
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
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_206(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

int func_219()
{
	return Global_2359301.f_2;
}

bool func_220()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 4);
}

bool func_221()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

int func_222(int iParam0)
{
	if (func_199(iParam0, 0))
	{
		return 1;
	}
	if (func_223())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_223()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

void func_224(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_225(1);
	}
	else
	{
		iVar1 = func_225(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_225(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10329;
}

int func_226()
{
	return Global_262145.f_10328;
}

bool func_227()
{
	return func_259(unk_0x4D29100D094E5511());
}

int func_228()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_30;
}

void func_229()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_131()];
	iVar0++;
	Global_2493048[func_131()] = iVar0;
	func_164(3245, iVar0, -1, 1);
}

void func_230()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_131()];
	iVar1 = Global_2493058[func_131()];
	iVar0++;
	iVar1++;
	Global_2493043[func_131()] = iVar0;
	Global_2493058[func_131()] = iVar1;
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_85 = iVar1;
	func_164(3243, iVar0, -1, 1);
	func_164(3244, iVar1, -1, 1);
}

void func_231()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_131()];
	iVar0++;
	func_164(3247, iVar0, -1, 1);
}

void func_232(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_234(iParam0);
	func_233(iParam0, uVar0, iParam1);
}

void func_233(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 444;
	Var0.f_1 = unk_0x4D29100D094E5511();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_3())
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			unk_0xCE8ECD07286D394D(1, &Var0, 4, func_194(iParam0));
		}
	}
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239();
	iVar0 = func_237(iParam0, iVar0);
	iVar1 = Global_1610316[func_135() /*174*/].f_10.f_152;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12335));
	if (iVar0 < func_236())
	{
		iVar0 = func_236();
	}
	if (iVar0 > func_235())
	{
		iVar0 = func_235();
	}
	return iVar0;
}

int func_235()
{
	return Global_262145.f_12336;
}

int func_236()
{
	return Global_262145.f_13498;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_263(iParam0) * func_238());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_238()
{
	return Global_262145.f_13497;
}

var func_239()
{
	return Global_262145.f_10320;
}

int func_240(int iParam0)
{
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (iParam0 != unk_0x4D29100D094E5511())
		{
			if (func_5(iParam0, unk_0x4D29100D094E5511(), 0))
			{
				if (!func_102(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_241()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_131()];
	iVar0++;
	func_164(3246, iVar0, -1, 1);
}

void func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_131()];
	iVar0 = (iVar0 + iParam0);
	func_164(3248, iVar0, -1, 1);
	if (func_245(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_244(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_243(7666, iVar2, -1, 1);
	}
}

var func_243(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_131();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x8870B9E70F312A20(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13641;
			break;
		
		case 2:
			return Global_262145.f_13642;
			break;
		
		case 3:
			return Global_262145.f_13643;
			break;
		
		case 4:
			return Global_262145.f_13644;
			break;
		
		case 5:
			return Global_262145.f_13645;
			break;
		
		case 6:
			return Global_262145.f_13646;
			break;
		
		case 7:
			return Global_262145.f_13647;
			break;
		
		case 8:
			return Global_262145.f_13648;
			break;
		
		case 9:
			return Global_262145.f_13649;
			break;
		
		case 10:
			return Global_262145.f_13650;
			break;
		
		case 11:
			return Global_262145.f_13651;
			break;
		
		case 12:
			return Global_262145.f_13652;
			break;
		
		case 13:
			return Global_262145.f_13653;
			break;
		
		case 14:
			return Global_262145.f_13654;
			break;
		
		case 15:
			return Global_262145.f_13655;
			break;
		
		case 16:
			return Global_262145.f_13656;
			break;
		
		case 17:
			return Global_262145.f_13657;
			break;
		
		case 18:
			return Global_262145.f_13658;
			break;
		
		case 19:
			return Global_262145.f_13659;
			break;
		
		case 20:
			return Global_262145.f_13660;
			break;
		
		case 21:
			return Global_262145.f_13661;
			break;
		
		case 22:
			return Global_262145.f_13662;
			break;
		
		case 23:
			return Global_262145.f_13663;
			break;
		
		case 24:
			return Global_262145.f_13664;
			break;
	}
	return 0;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	iVar1 = func_247(iParam0, iParam1);
	uVar2 = func_246(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x0B086D355E92A814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCE0666B95FEBDB76((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCE0666B95FEBDB76((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCE0666B95FEBDB76((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCE0666B95FEBDB76((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCE0666B95FEBDB76((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCE0666B95FEBDB76((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCE0666B95FEBDB76((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCE0666B95FEBDB76((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCE0666B95FEBDB76((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCE0666B95FEBDB76((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCE0666B95FEBDB76((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCE0666B95FEBDB76((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCE0666B95FEBDB76((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_131();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xC39A166421C618E0((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xE1C2CBC9B45C3225((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xA4D5856DC25329B0((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_249(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(iVar0)))
		{
			iVar2 = unk_0x6EED86A16F7EA8F2(iVar0);
			if (!func_199(iVar2, 0) && !func_5(iVar2, unk_0x4D29100D094E5511(), 1))
			{
				iVar1++;
			}
			else if (func_199(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

var func_250(int iParam0)
{
	if (iParam0 >= Global_262145.f_12708)
	{
		return Global_262145.f_12729;
	}
	else if (iParam0 >= Global_262145.f_12707)
	{
		return Global_262145.f_12728;
	}
	else if (iParam0 >= Global_262145.f_12706)
	{
		return Global_262145.f_12727;
	}
	else if (iParam0 >= Global_262145.f_12705)
	{
		return Global_262145.f_12726;
	}
	else if (iParam0 >= Global_262145.f_12704)
	{
		return Global_262145.f_12725;
	}
	else if (iParam0 >= Global_262145.f_12703)
	{
		return Global_262145.f_12724;
	}
	else if (iParam0 >= Global_262145.f_12702)
	{
		return Global_262145.f_12723;
	}
	else if (iParam0 >= Global_262145.f_12701)
	{
		return Global_262145.f_12722;
	}
	else if (iParam0 >= Global_262145.f_12700)
	{
		return Global_262145.f_12721;
	}
	else if (iParam0 >= Global_262145.f_12699)
	{
		return Global_262145.f_12720;
	}
	else if (iParam0 >= Global_262145.f_12698)
	{
		return Global_262145.f_12719;
	}
	else if (iParam0 >= Global_262145.f_12697)
	{
		return Global_262145.f_12718;
	}
	else if (iParam0 >= Global_262145.f_12696)
	{
		return Global_262145.f_12717;
	}
	else if (iParam0 >= Global_262145.f_12695)
	{
		return Global_262145.f_12716;
	}
	else if (iParam0 >= Global_262145.f_12694)
	{
		return Global_262145.f_12715;
	}
	else if (iParam0 >= Global_262145.f_12693)
	{
		return Global_262145.f_12714;
	}
	else if (iParam0 >= Global_262145.f_12692)
	{
		return Global_262145.f_12713;
	}
	else if (iParam0 >= Global_262145.f_12691)
	{
		return Global_262145.f_12712;
	}
	else if (iParam0 >= Global_262145.f_12690)
	{
		return Global_262145.f_12711;
	}
	else if (iParam0 >= Global_262145.f_12689)
	{
		return Global_262145.f_12710;
	}
	return Global_262145.f_12709;
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_258(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_257(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_256(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_252(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_252(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_256(unk_0x3A5708FEE1B560A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_252(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = func_253(func_254(iParam0));
		return func_172(iVar0, -1, 0);
	}
	return 0;
}

int func_253(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_255(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_12908;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_12906;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_12910;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_12904;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_12902;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_12912;
	}
	return 0;
}

int func_257(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1728679[iVar0] == iParam1 && Global_1728686[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_3())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_260()
{
	if (func_227())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_261()
{
	if (func_227())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_262()
{
	if (func_227())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70 = (Global_2435528.f_3065.f_70 - 1);
			Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

int func_263(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10445) * Global_262145.f_10450));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10395) * Global_262145.f_10400));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10422) * Global_262145.f_10426));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10435) * Global_262145.f_10439));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10457) * Global_262145.f_10462));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10619) * Global_262145.f_10620));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10625) * Global_262145.f_10626));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10623) * Global_262145.f_10624));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10617) * Global_262145.f_10618));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10621) * Global_262145.f_10622));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10615) * Global_262145.f_10616));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12431;
		
		case 172:
			return Global_262145.f_12447;
		
		case 173:
			return Global_262145.f_12390;
		
		case 166:
			return 0;
		
		default:
	}
	return 0;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10446) * Global_262145.f_10451));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10396) * Global_262145.f_10401));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10423) * Global_262145.f_10427));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10436) * Global_262145.f_10440));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10458) * Global_262145.f_10463));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10495) * Global_262145.f_10498));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10541) * Global_262145.f_10544));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10531) * Global_262145.f_10534));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10486) * Global_262145.f_10489));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10506) * Global_262145.f_10511));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10471) * Global_262145.f_10474));
		
		case 170:
			return Global_262145.f_12373;
		
		case 171:
			return Global_262145.f_12432;
		
		case 172:
			return Global_262145.f_12448;
		
		case 173:
			return Global_262145.f_12391;
		
		case 166:
			return 0;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return 0;
}

void func_266(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_267(iParam0))
	{
		if (!func_227())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10339;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10338;
	*uParam2 = Global_262145.f_10337;
	if (func_271(unk_0x4D29100D094E5511(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_228();
	if (iVar0 != func_3())
	{
		if (func_5(unk_0x4D29100D094E5511(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_267(int iParam0)
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

void func_268(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_3())
	{
		if (unk_0x27C9C05A6B4E58D2(iParam1))
		{
			if (iParam1 == unk_0x4D29100D094E5511())
			{
				iVar0 = 1;
			}
			else if (func_269(iParam1, unk_0x4D29100D094E5511()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_680(unk_0x4D29100D094E5511(), 1, 1))
		{
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
			unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
			Global_2460486.f_4660.f_170 = unk_0x9CC4C10F8D665832();
		}
	}
}

int func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_3() && iParam1 != func_3())
	{
		iVar0 = func_215(iParam0);
		if (iVar0 != func_3())
		{
			return iVar0 == func_215(iParam1);
		}
	}
	return 0;
}

bool func_270(int iParam0)
{
	return func_102(iParam0, 20);
}

bool func_271(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_259(iParam0))
		{
			return 0;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_3();
}

int func_272()
{
	return Local_196.f_10;
}

int func_273()
{
	if (func_272() != func_3())
	{
		if (!func_275() && !func_274())
		{
			return 1;
		}
	}
	return 0;
}

int func_274()
{
	if (func_133(1))
	{
		if (func_272() != func_3())
		{
			if (func_5(func_272(), func_135(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_275()
{
	if (unk_0x4D29100D094E5511() == func_272())
	{
		return 1;
	}
	return 0;
}

void func_276()
{
	if (!func_578(15))
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
		{
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
			unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
		}
		func_557(15);
	}
}

int func_277()
{
	if ((func_680(unk_0x4D29100D094E5511(), 1, 1) && !unk_0x9A8D90020C5C606B()) && func_278())
	{
		return 1;
	}
	return 0;
}

int func_278()
{
	if (unk_0xCBB243DDC0D132D1() && Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_220 == 99)
	{
		return 1;
	}
	return 0;
}

void func_279()
{
	if (func_630())
	{
		if (func_629())
		{
			if (unk_0xFFB05175212D9D1A(func_32()) && unk_0xFFB05175212D9D1A(func_289()))
			{
				if (unk_0x2C1D8B3B19E517CC(func_31(), func_624()) && unk_0x53D573A48E8DFC4C(func_31(), func_624()))
				{
					unk_0xC85758401811319B(func_31(), func_624());
					unk_0x1F34B0626C594380(func_31(), func_624());
				}
			}
		}
		if (func_288())
		{
			if (func_60(&(Local_196.f_20)))
			{
				iLocal_154 = (func_14() - func_287(&(Local_196.f_20), 0, 0));
				if (iLocal_154 <= 0)
				{
					if (unk_0xFFB05175212D9D1A(func_32()))
					{
						unk_0xCD0F5594F1C6772F(func_31(), 1);
						unk_0x25992F7526B31C35(func_31(), 1);
						unk_0xE178F7EAFD5EBD9B(func_31(), 1, 0, -1);
						func_330(5);
					}
				}
				if (func_436(1))
				{
					if (!func_455() && !func_454())
					{
						if (iLocal_154 >= 0)
						{
							if (func_18(unk_0x27D769C59BC9D030(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
							{
								if ((!func_286() && func_625()) || func_329())
								{
									func_332(2);
									func_283(iLocal_154, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
									func_282();
								}
							}
						}
						else if (func_18(unk_0x27D769C59BC9D030(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
						{
							if ((!func_286() && func_625()) || func_329())
							{
								func_283(0, "HTV_DESTR_R", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0);
								func_282();
							}
						}
						if (func_18(unk_0x27D769C59BC9D030(), func_31(), 1) || (func_329() && func_18(func_219(), func_31(), 1)))
						{
							if (iLocal_173 == 0)
							{
								if (func_280())
								{
									if (!func_60(&uLocal_183))
									{
										func_59(&uLocal_183, 0, 0);
									}
									else if (func_48(&uLocal_183, 1000, 0))
									{
										uLocal_153 = unk_0x9EE81D7901D9BCE2();
										unk_0x2A5264C35FD91CE4(uLocal_153, "Explosion_Countdown", func_605(), "GTAO_FM_Events_Soundset", 0, 25);
										unk_0xE35939C3B3CA3B85(uLocal_153, "Time", unk_0xBBDA792448DB5A89((iLocal_154 / 1000) + 1));
										iLocal_173 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iLocal_173)
		{
			if (!unk_0x1E18C8095B37D998(uLocal_153))
			{
				unk_0x972F93B6DF7649AC(uLocal_153);
				unk_0xB79BFBEF5A2CE64B(uLocal_153);
			}
			iLocal_173 = 0;
		}
	}
}

int func_280()
{
	if (func_115())
	{
		if (func_281(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return 1;
		
		default:
	}
	return 0;
}

void func_282()
{
	Global_1339940.f_941 = 1;
}

void func_283(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_285(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_284(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_284(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_1339940.f_4726[iParam0]), iParam1);
}

bool func_285(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1339940.f_4726[iParam0], iParam1);
}

int func_286()
{
	if (func_453(170))
	{
		return 1;
	}
	if (func_455())
	{
		return 1;
	}
	if (!func_436(1))
	{
		return 1;
	}
	return 0;
}

int func_287(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0);
		}
		else
		{
			return unk_0x46979BF7DA499D4E(unk_0xBADD1A643AD56F36(), *uParam0);
		}
	}
	return unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0);
}

int func_288()
{
	if (func_8(6))
	{
		return 0;
	}
	if (func_8(17))
	{
		return 0;
	}
	if (unk_0x2006A8C1BA2AFE80(func_31(), 0))
	{
		return 0;
	}
	return 1;
}

var func_289()
{
	return Local_196.f_22;
}

void func_290()
{
	char* sVar0;
	
	if (func_286())
	{
		if (func_315())
		{
			func_317();
		}
		return;
	}
	sVar0 = 0;
	switch (func_63())
	{
		case 1:
			switch (func_382(unk_0x7025777635AB04C0()))
			{
				case 0:
					if (func_625() || func_329())
					{
						if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					break;
				
				case 1:
					if (func_625() || func_329())
					{
						if (func_311())
						{
							if ((func_325() || func_310()) && func_331())
							{
								if (!func_313("GB_AIRF_OT_04"))
								{
									func_317();
									func_312("GB_AIRF_OT_04", 0);
								}
							}
							else if (func_325() || func_310())
							{
								if (!func_313("GB_AIRF_OT_01"))
								{
									func_317();
									func_312("GB_AIRF_OT_01", 0);
								}
							}
							else if (func_311())
							{
								if (!func_308("GB_AIRF_OT_02", func_309()))
								{
									func_317();
									func_307("GB_AIRF_OT_02", func_309(), 1, 0);
								}
							}
						}
						else if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					else if (func_327() || func_328())
					{
						sVar0 = func_303(func_7());
						if (!unk_0x75CB9E30BA492FF0(sVar0))
						{
							if (!func_302("GB_AIRF_OT_07", sVar0))
							{
								func_317();
								func_292("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
				
				case 2:
					if (func_625() || func_329())
					{
						if (func_325() || func_310())
						{
							if (func_291())
							{
								if (!func_313("GB_AIRF_OT_05"))
								{
									func_317();
									func_312("GB_AIRF_OT_05", 0);
								}
							}
							else if (!func_313("GB_AIRF_OT_04"))
							{
								func_317();
								func_312("GB_AIRF_OT_04", 0);
							}
						}
						else if (func_311())
						{
							if (!func_308("GB_AIRF_OT_06", func_309()))
							{
								func_317();
								func_307("GB_AIRF_OT_06", func_309(), 1, 0);
							}
						}
						else if (!func_313("GB_AIRF_OT_00"))
						{
							func_312("GB_AIRF_OT_00", 0);
						}
					}
					else
					{
						sVar0 = func_303(func_7());
						if (!unk_0x75CB9E30BA492FF0(sVar0))
						{
							if (!func_302("GB_AIRF_OT_07", sVar0))
							{
								func_317();
								func_292("GB_AIRF_OT_07", sVar0, 0, 1);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if (func_630())
			{
				if (func_288())
				{
					if (func_625() || func_329())
					{
						if (func_18(unk_0x27D769C59BC9D030(), func_31(), 0) || (func_329() && func_18(func_219(), func_31(), 0)))
						{
							if (!func_313("GB_AIR_OT_08"))
							{
								func_312("GB_AIR_OT_08", 0);
							}
						}
						else
						{
							func_317();
						}
					}
					else
					{
						func_317();
					}
				}
				else
				{
					func_317();
				}
			}
			else
			{
				func_317();
			}
			break;
	}
}

bool func_291()
{
	return func_8(3);
}

int func_292(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	if (unk_0x171888B136481692(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(sParam1))
	{
		return 0;
	}
	if (unk_0x171888B136481692(sParam1) > 63)
	{
		return 0;
	}
	if (func_302(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_296();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0x3AA961419D971CB2(), 24);
	Global_1312577.f_7 = unk_0x70ABFF261710305D(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = iParam3;
	func_295();
	func_294(bParam2);
	func_293();
	return 1;
}

void func_293()
{
	unk_0x26545538B51562AD(&(Global_1312577.f_57), 1);
}

void func_294(bool bParam0)
{
	if (bParam0)
	{
		unk_0x26545538B51562AD(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0xF17F4B0641AB2DE1(&(Global_1312577.f_57), 0);
}

void func_295()
{
	Global_1312577.f_8 = unk_0xECBDE2498459EE0C(unk_0x20D394965B47B01A(), 86400000);
	Global_1312577.f_9 = unk_0x20D394965B47B01A();
}

void func_296()
{
	func_298();
	func_297(0);
}

void func_297(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x0E063DDE8855EC52();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x20D394965B47B01A();
		Global_1312577.f_9 = unk_0x20D394965B47B01A();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_298()
{
	if (!func_301())
	{
	}
	if (func_300())
	{
		unk_0xC24FF75972174905(&(Global_1312577.f_10));
		func_299();
		unk_0x6332DFF0815F4AB7();
	}
}

void func_299()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x90805938ADF0F45C(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x90805938ADF0F45C(Global_1312577.f_50);
			unk_0x90805938ADF0F45C(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x182296DAFE790204(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x182296DAFE790204(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_55);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_14));
			unk_0xF4D4BFD98B32BF85(Global_1312577.f_54);
			unk_0x2B088D6251C2080D(&(Global_1312577.f_46));
			unk_0xF9E9E11D6DF3EBF8(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_300()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_301()
{
	if (!func_300())
	{
		return 0;
	}
	unk_0x907B9289657244FB(&(Global_1312577.f_10));
	func_299();
	return unk_0x07B8D9CA22BFDA75();
}

bool func_302(char* sParam0, int iParam1)
{
	if (!func_300())
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(iParam1))
	{
		return 0;
	}
	if (!unk_0x70ABFF261710305D(sParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(iParam1) == unk_0x70ABFF261710305D(&(Global_1312577.f_14));
}

char* func_303(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		uVar0 = func_306(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return uVar0;
	}
	if (((func_102(iParam0, 28) || func_102(unk_0x4D29100D094E5511(), 28)) || func_305(iParam0)) && !func_304(iParam0))
	{
		return unk_0xC754513C760635E8("GB_REST_ACC");
	}
	iVar1 = func_215(iParam0);
	if (iVar1 != func_3())
	{
		uVar0 = func_306(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (unk_0x75CB9E30BA492FF0(uVar0))
		{
			return unk_0xC754513C760635E8("GB_REST_ACC");
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_304(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_158(iParam0) };
	if (unk_0xD0333FE560420AC5() && unk_0xA68EEF5FA3062966(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_158(iParam0) };
	if (unk_0x748A964A12412EBB() || unk_0xDFCB321F1D24137F())
	{
		if (unk_0x01B09CB427A5F1A1(0))
		{
			return 0;
		}
	}
	else if (unk_0xD0333FE560420AC5())
	{
		if (unk_0xA68EEF5FA3062966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_306(var uParam0)
{
	return uParam0;
}

void func_307(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_292(sParam0, unk_0xD358A441FAC2240C(iParam1), bParam3, 1);
}

bool func_308(char* sParam0, int iParam1)
{
	return func_302(sParam0, unk_0xD358A441FAC2240C(iParam1));
}

int func_309()
{
	return Local_196.f_8;
}

int func_310()
{
	int iVar0;
	
	if (func_329())
	{
		iVar0 = unk_0x881548CC6D5B749B(func_219());
		if (func_309() == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_311()
{
	return func_309() != func_3();
}

void func_312(char* sParam0, bool bParam1)
{
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return;
	}
	if (unk_0x171888B136481692(sParam0) > 23)
	{
		return;
	}
	if (func_313(sParam0))
	{
		return;
	}
	func_296();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x3AA961419D971CB2(), 24);
	Global_1312577.f_7 = unk_0x70ABFF261710305D(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_295();
	func_294(bParam1);
	func_293();
}

bool func_313(char* sParam0)
{
	if (!func_300())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_314(sParam0);
	}
	if (unk_0x75CB9E30BA492FF0(sParam0))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(sParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_10));
}

bool func_314(int iParam0)
{
	if (!func_300())
	{
		return 0;
	}
	if (unk_0x75CB9E30BA492FF0(uParam0))
	{
		return 0;
	}
	return unk_0x70ABFF261710305D(iParam0) == unk_0x70ABFF261710305D(&(Global_1312577.f_14));
}

int func_315()
{
	if (!func_300())
	{
		return 0;
	}
	if (!unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == Global_1312577.f_7)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_102(iParam0, 9);
	}
	return 0;
}

void func_317()
{
	if (!func_300())
	{
		return;
	}
	if (!unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == Global_1312577.f_7)
	{
		return;
	}
	func_296();
}

void func_318()
{
	func_323();
	func_321();
	func_319();
}

void func_319()
{
	if (func_320())
	{
		unk_0x9403D0F4C7711241(&uLocal_133);
	}
}

bool func_320()
{
	return unk_0x7B4654D62B7E0E9E(uLocal_133);
}

void func_321()
{
	if (func_629())
	{
		if (func_322())
		{
			unk_0x9403D0F4C7711241(&uLocal_132);
		}
	}
}

bool func_322()
{
	return unk_0x7B4654D62B7E0E9E(uLocal_132);
}

void func_323()
{
	if (func_630())
	{
		if (func_324())
		{
			unk_0x9403D0F4C7711241(&uLocal_131);
		}
	}
}

bool func_324()
{
	return unk_0x7B4654D62B7E0E9E(uLocal_131);
}

bool func_325()
{
	return func_309() == unk_0x4D29100D094E5511();
}

void func_326(int iParam0)
{
	Local_310[unk_0x7025777635AB04C0() /*3*/].f_2 = iParam0;
}

bool func_327()
{
	return func_8(4);
}

int func_328()
{
	if (func_629() && func_311())
	{
		if (func_41(unk_0xC834A7C58DEB59B4(func_309()), func_624(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

int func_329()
{
	int iVar0;
	
	if (func_222(unk_0x4D29100D094E5511()))
	{
		if (unk_0xD2CFFE76B625AE55(func_219()))
		{
			if (unk_0x30D6008994E431E8(func_219()))
			{
				iVar0 = unk_0x881548CC6D5B749B(func_219());
				if (func_53(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_330(int iParam0)
{
	unk_0x26545538B51562AD(&(Local_310[unk_0x7025777635AB04C0() /*3*/].f_1), iParam0);
}

int func_331()
{
	if (func_629())
	{
		if (func_41(unk_0x27D769C59BC9D030(), func_624(), 1) < 150f)
		{
			return 1;
		}
	}
	return 0;
}

void func_332(int iParam0)
{
	if (func_352())
	{
		switch (iParam0)
		{
			case 0:
				if (!func_578(7))
				{
					if (func_333(82, "GB_AIRF_TXT_01", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_557(7);
					}
				}
				break;
			
			case 1:
				if (!func_578(8))
				{
					if (func_333(82, "GB_AIRF_TXT_02", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_557(8);
					}
				}
				break;
			
			case 2:
				if (!func_578(9))
				{
					if (func_333(82, "GB_AIRF_TXT_03", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_557(9);
					}
				}
				break;
			}
	}
}

int func_333(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xF17F4B0641AB2DE1(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_334(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0x26545538B51562AD(&Global_2283, 1);
			unk_0x26545538B51562AD(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_334(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xC1C5B83BB6719C6C(sParam14, sParam15))
	{
	}
	func_346();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if (unk_0xABE2848258482F49(unk_0x27D769C59BC9D030()))
			{
				return 0;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_345() == 0)
	{
		func_343();
		return 0;
	}
	func_342(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_341(0);
		func_341(2);
		func_341(1);
	}
	else
	{
		func_346();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_341(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_341(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_341(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_341(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_346();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_340())
			{
				unk_0x954BCDB8FDB0AC0F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_339(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_335(1);
			func_339(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_335(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_338(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar2);
								unk_0x7E5FA681CB7A2EF7();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = 0;
									iVar4 = Global_2562131;
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(Global_2289);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar6);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar7);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 8)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if ((iVar1 == 23 && unk_0xC1C5B83BB6719C6C(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF426A5DE932B3BEE(Global_2284, 6))
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_337(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609099.f_1;
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_336(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_336(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x75CB9E30BA492FF0(iParam7))
	{
		func_337(iParam7);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam8))
	{
		func_337(iParam8);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam9))
	{
		func_337(iParam9);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam10))
	{
		func_337(iParam10);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam11))
	{
		func_337(iParam11);
	}
	unk_0x7E5FA681CB7A2EF7();
}

void func_337(int iParam0)
{
	unk_0x37B602106C6E0E91(iParam0);
	unk_0xD3076D52458B36EF();
}

bool func_338(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_339(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E5FA681CB7A2EF7();
}

bool func_340()
{
	return Global_1315913;
}

void func_341(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_342(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2FADF5E93AB8D64B();
	uVar1 = unk_0x51C7DC141C5D0E6B();
	uVar2 = unk_0xEFEADD7EBD01C0A6();
	uVar3 = unk_0x388418AD39C0F4DE();
	uVar4 = unk_0xE3911478C9FE04B2() + 1;
	uVar5 = unk_0x8FB5B60BC869990E();
	Global_101154.f_12831[iParam0 /*104*/].f_18 = uVar0;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_343()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
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
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_344(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

int func_344(struct<6> Param0, struct<6> Param6)
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

int func_345()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
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
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_344(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_346()
{
	if (func_338(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_347();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_347()
{
	func_348();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_348()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_351(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_350(unk_0x27D769C59BC9D030());
			if (func_349(iVar0) && (!func_338(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_349(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_349(int iParam0)
{
	return iParam0 < 3;
}

int func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_351(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_351(int iParam0)
{
	if (func_349(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_352()
{
	if (func_680(unk_0x4D29100D094E5511(), 1, 1))
	{
		return 1;
	}
	return 1;
}

void func_353(int iParam0)
{
	int iVar0;
	
	if (func_359())
	{
		if (!func_358(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					if (func_357())
					{
						func_99("GB_AIRF_HT_00", -1);
					}
					else
					{
						func_99("GB_AIRF_HT_01", -1);
					}
					func_98(1);
					func_356(iParam0);
					break;
				
				case 7:
					func_99("GB_AIRF_HT_03", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 8:
					func_99("GB_AIRF_HT_04", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 9:
					if (func_311())
					{
						func_355("GB_AIRF_HT_05", unk_0xD358A441FAC2240C(func_309()), func_204(func_309(), -2, 0, 0), -1);
						func_98(1);
						func_356(iParam0);
					}
					break;
				
				case 11:
					func_356(iParam0);
					break;
				
				case 12:
					func_99("GB_AIRF_HT_06", -1);
					func_98(1);
					func_356(iParam0);
					break;
				
				case 10:
					iVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(iVar0))
					{
						func_354("GB_AIRF_HT_02", iVar0, func_204(func_7(), -2, 0, 0), -1);
						func_98(1);
						func_356(iParam0);
					}
					break;
				}
			}
	}
}

void func_354(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam2);
	}
	unk_0xF9E9E11D6DF3EBF8(iParam1);
	unk_0x9785EE0D78241684(0, 0, 0, iParam3);
}

void func_355(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF4D4BFD98B32BF85(iParam2);
	}
	unk_0xF9E9E11D6DF3EBF8(sParam1);
	unk_0x9785EE0D78241684(0, 0, 0, iParam3);
}

void func_356(int iParam0)
{
	unk_0x26545538B51562AD(&uLocal_128, iParam0);
}

bool func_357()
{
	return unk_0x4D29100D094E5511() == func_7();
}

bool func_358(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(uLocal_128, iParam0);
}

int func_359()
{
	if ((((!func_360() && !unk_0x1E114237D972903B()) && !unk_0x9A8D90020C5C606B()) && func_680(unk_0x4D29100D094E5511(), 1, 1)) && !func_115())
	{
		return 1;
	}
	return 0;
}

bool func_360()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

void func_361(int iParam0)
{
	char* sVar0;
	
	if (func_375())
	{
		if (!func_374(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					unk_0x5BD150B52CE8D356(1);
					func_373(84, "GB_AIRF_BMT_00", "GB_AIRF_BMS_00", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 1:
					unk_0x5BD150B52CE8D356(1);
					func_373(85, "GB_WINNER", "GB_AIRF_BMS_01", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 2:
					unk_0x5BD150B52CE8D356(1);
					func_373(87, "GB_WORK_OVER", "GB_AIRF_BMS_02", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 12:
					unk_0x5BD150B52CE8D356(1);
					func_373(85, "GB_WORK_OVER", "GB_AIRF_BMS_13", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 3:
					sVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(sVar0))
					{
						unk_0x5BD150B52CE8D356(1);
						func_370(84, "GB_AIRF_BMT_00", "GB_AIRF_BMS_03", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 4:
					unk_0x5BD150B52CE8D356(1);
					func_373(85, "GB_WINNER", "GB_AIRF_BMS_04", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 5:
					unk_0x5BD150B52CE8D356(1);
					func_373(85, "GB_WINNER", "GB_AIRF_BMS_05", 1, -1, 2);
					func_372(iParam0);
					break;
				
				case 6:
					if (func_272() != func_3())
					{
						unk_0x5BD150B52CE8D356(1);
						func_362(86, func_272(), -1, "GB_AIRF_BMS_06", "GB_WORK_OVER", 1, -1, 2);
						func_372(iParam0);
					}
					break;
				
				case 7:
					if (func_272() != func_3())
					{
						sVar0 = func_303(func_272());
						if (!unk_0x75CB9E30BA492FF0(sVar0))
						{
							unk_0x5BD150B52CE8D356(1);
							func_370(84, "GB_WORK_OVER", "GB_AIRF_BMS_07", sVar0, func_204(func_272(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
							func_372(iParam0);
						}
					}
					break;
				
				case 8:
					sVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(sVar0))
					{
						unk_0x5BD150B52CE8D356(1);
						func_370(84, "GB_WORK_OVER", "GB_AIRF_BMS_08", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 9:
					sVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(sVar0))
					{
						unk_0x5BD150B52CE8D356(1);
						func_370(84, "GB_WINNER", "GB_AIRF_BMS_09", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 10:
					sVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(sVar0))
					{
						unk_0x5BD150B52CE8D356(1);
						func_370(84, "GB_WORK_OVER", "GB_AIRF_BMS_10", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 13:
					sVar0 = func_303(func_7());
					if (!unk_0x75CB9E30BA492FF0(sVar0))
					{
						unk_0x5BD150B52CE8D356(1);
						func_370(84, "GB_WORK_OVER", "GB_AIRF_BMS_14", sVar0, func_204(func_7(), -2, 0, 0), 0, -1, -1, -1, 2, -1);
						func_372(iParam0);
					}
					break;
				
				case 11:
					unk_0x5BD150B52CE8D356(1);
					if (func_625())
					{
						func_373(85, "GB_WORK_OVER", "GB_AIRF_BMS_11", 1, -1, 2);
						func_372(iParam0);
					}
					else
					{
						func_373(85, "GB_WORK_OVER", "GB_AIRF_BMS_12", 1, -1, 2);
						func_372(iParam0);
					}
					break;
				}
			}
	}
}

int func_362(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_369(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_363(&Var0);
}

int func_363(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return 0;
		}
	}
	func_368(uParam0, uParam0->f_16);
	func_365(uParam0);
	if (func_364(uParam0->f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = { Global_2428492.f_2171[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428492.f_2171[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 1);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_281(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_364(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_365(var uParam0)
{
	if (func_367(uParam0->f_1))
	{
		uParam0->f_66 = func_366();
	}
}

int func_366()
{
	return 21;
}

int func_367(int iParam0)
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

void func_368(var uParam0, int iParam1)
{
	if (func_367(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_3())
	{
		return;
	}
	if (func_281(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_204(iParam1, -2, 0, 0);
		}
	}
}

void func_369(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_3();
	uParam1->f_17 = func_3();
	uParam1->f_18 = func_3();
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

int func_370(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_3();
	iVar1 = func_3();
	iVar2 = func_3();
	return func_371(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_371(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_369(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x26545538B51562AD(&(Var0.f_63), 2);
	return func_363(&Var0);
}

void func_372(int iParam0)
{
	unk_0x26545538B51562AD(&uLocal_129, iParam0);
}

int func_373(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_369(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_363(&Var0);
}

bool func_374(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(uLocal_129, iParam0);
}

int func_375()
{
	if ((func_680(unk_0x4D29100D094E5511(), 1, 1) && !unk_0x1E114237D972903B()) && !func_360())
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0)
{
	Global_1318728 = iParam0;
}

void func_377(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_2460486.f_1641, 9))
		{
			unk_0x26545538B51562AD(&(Global_2460486.f_1641), 9);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_2460486.f_1641, 9))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1641), 9);
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		if (!func_102(unk_0x4D29100D094E5511(), 9))
		{
			if (func_108(unk_0x4D29100D094E5511()) != 0)
			{
				func_116(9);
			}
		}
	}
	else if (func_102(unk_0x4D29100D094E5511(), 9))
	{
		func_379(9);
	}
}

void func_379(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

void func_380()
{
	if (!func_381(unk_0x4D29100D094E5511()))
	{
		func_116(25);
	}
}

bool func_381(int iParam0)
{
	return func_102(iParam0, 25);
}

int func_382(int iParam0)
{
	return Local_310[iParam0 /*3*/].f_2;
}

void func_383()
{
	if (!unk_0xF426A5DE932B3BEE(uLocal_195, 3))
	{
		if (iLocal_152 > 35000)
		{
			if (func_625())
			{
				if (!func_56())
				{
					if (Local_196.f_6 == 0)
					{
						if (func_8(12))
						{
							func_388(1);
						}
						if (func_331())
						{
							func_388(2);
						}
					}
					else if (func_288())
					{
						if (func_387())
						{
							func_388(3);
						}
						else
						{
							func_384();
						}
					}
					else
					{
						func_384();
					}
				}
				else if (Local_196.f_6 != 0)
				{
					if (func_288())
					{
						if (func_387())
						{
							func_388(3);
						}
						else
						{
							func_384();
						}
					}
					else
					{
						func_384();
					}
				}
			}
		}
		else if ((func_625() || func_270(unk_0x4D29100D094E5511())) || func_578(11))
		{
			switch (iLocal_194)
			{
				case 0:
					if ((func_382(unk_0x7025777635AB04C0()) == 0 || func_382(unk_0x7025777635AB04C0()) == 1) || func_382(unk_0x7025777635AB04C0()) == 2)
					{
						if (iLocal_152 <= 35000 && iLocal_152 >= 29000)
						{
							if (unk_0xAD68522F73EA2CC1("APT_PRE_COUNTDOWN_STOP"))
							{
								unk_0x68BD4F826EFDDC53("APT_PRE_COUNTDOWN_STOP");
								iLocal_194 = 1;
							}
						}
					}
					break;
				
				case 1:
					if (!unk_0xF426A5DE932B3BEE(uLocal_195, 1))
					{
						if (iLocal_152 <= 30000)
						{
							if (unk_0xAD68522F73EA2CC1("APT_COUNTDOWN_30S"))
							{
								unk_0xF01E9C7FDA2976B1("AllowScoreAndRadio", 1);
								unk_0xB690D98009ECA44C(0);
								unk_0x68BD4F826EFDDC53("APT_COUNTDOWN_30S");
								unk_0xAD68522F73EA2CC1("APT_COUNTDOWN_30S_KILL");
								unk_0x26545538B51562AD(&uLocal_195, 1);
							}
						}
					}
					else if (!unk_0xF426A5DE932B3BEE(uLocal_195, 2))
					{
						if (iLocal_152 <= 27000)
						{
							unk_0xB690D98009ECA44C(1);
							unk_0xF01E9C7FDA2976B1("AllowScoreAndRadio", 0);
							unk_0x26545538B51562AD(&uLocal_195, 2);
							iLocal_194 = 2;
						}
					}
					break;
				
				case 2:
					if (!unk_0xF426A5DE932B3BEE(uLocal_195, 3))
					{
						if (iLocal_152 <= 0)
						{
							unk_0xB8DE4A0771D4330D("APT_COUNTDOWN_30S");
							if (unk_0xAD68522F73EA2CC1("APT_FADE_IN_RADIO"))
							{
								unk_0x68BD4F826EFDDC53("APT_FADE_IN_RADIO");
								unk_0xB8DE4A0771D4330D("APT_COUNTDOWN_30S_KILL");
								unk_0xAD68522F73EA2CC1("APT_COUNTDOWN_30S_KILL");
								unk_0x26545538B51562AD(&uLocal_195, 3);
							}
						}
						else if (Local_196.f_5 != 0)
						{
							if (unk_0xAD68522F73EA2CC1("APT_FADE_IN_RADIO"))
							{
								unk_0xB8DE4A0771D4330D("APT_COUNTDOWN_30S");
								unk_0x68BD4F826EFDDC53("APT_COUNTDOWN_30S_KILL");
								unk_0x68BD4F826EFDDC53("APT_FADE_IN_RADIO");
								unk_0xAD68522F73EA2CC1("APT_COUNTDOWN_30S_KILL");
								unk_0x26545538B51562AD(&uLocal_195, 3);
							}
						}
					}
					break;
				}
			}
	}
}

void func_384()
{
	if (!func_386(7))
	{
		if (func_386(0))
		{
			if (Local_196.f_6 == 1)
			{
				func_388(4);
			}
			else
			{
				func_388(5);
			}
			unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 0);
			unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 0);
		}
		func_385(7);
	}
}

void func_385(int iParam0)
{
	unk_0x26545538B51562AD(&uLocal_130, iParam0);
}

bool func_386(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(uLocal_130, iParam0);
}

int func_387()
{
	if (func_630() && func_26(func_31()))
	{
		if (func_18(unk_0x27D769C59BC9D030(), func_31(), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0)
{
	func_390();
	if (!func_386(iParam0))
	{
		unk_0x68BD4F826EFDDC53(func_389(iParam0));
		func_385(iParam0);
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIRFREIGHT_START";
		
		case 2:
			return "EXEC1_AIRFREIGHT_DELIVERING_SMA";
		
		case 3:
			return "EXEC1_AIRFREIGHT_SELF_DESTRUCT_SMA";
		
		case 4:
			return "EXEC1_AIRFREIGHT_STOP";
		
		case 5:
			return "EXEC1_AIRFREIGHT_FAIL";
		
		case 6:
			return "EXEC1_AIRFREIGHT_ATTACKERS_START";
		
		default:
	}
	return "";
}

void func_390()
{
	if (!func_386(0))
	{
		unk_0xF01E9C7FDA2976B1("DisableFlightMusic", 1);
		unk_0xF01E9C7FDA2976B1("WantedMusicDisabled", 1);
		func_385(0);
	}
}

void func_391()
{
	if (func_630())
	{
		if (!func_628())
		{
			if (func_625())
			{
				if (func_680(unk_0x4D29100D094E5511(), 1, 1) && func_18(unk_0x27D769C59BC9D030(), func_31(), 0))
				{
					if (unk_0x9297C590C99228DC(func_31(), -1) == unk_0x27D769C59BC9D030())
					{
						if (!func_9(unk_0xA3CDB5D555FBB382(), 1))
						{
							func_330(1);
							unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 417, 1);
							if (Global_2460486.f_4980 == 0)
							{
								Global_2460486.f_4980 = 1;
							}
						}
					}
					if (func_165(func_394(unk_0x4D29100D094E5511(), 1), 0) >= func_393(1))
					{
						unk_0xB189B8BC796B5135(unk_0x4D29100D094E5511(), 1);
					}
				}
				else
				{
					if (func_9(unk_0xA3CDB5D555FBB382(), 1))
					{
						func_392(1);
						unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 417, 0);
					}
					if (Global_2460486.f_4980 == 1)
					{
						Global_2460486.f_4980 = 0;
					}
				}
			}
		}
	}
}

void func_392(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Local_310[unk_0x7025777635AB04C0() /*3*/].f_1), iParam0);
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2853 > -1)
			{
				return Global_262145.f_2853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2854 > -1)
			{
				return Global_262145.f_2854;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2855 > -1)
			{
				return Global_262145.f_2855;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2856 > -1)
			{
				return Global_262145.f_2856;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2857 > -1)
			{
				return Global_262145.f_2857;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2858 > -1)
			{
				return Global_262145.f_2858;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2859 > -1)
			{
				return Global_262145.f_2859;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2860 > -1)
			{
				return Global_262145.f_2860;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2861 > -1)
			{
				return Global_262145.f_2861;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2862 > -1)
			{
				return Global_262145.f_2862;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case joaat("mpsv_lp0_31"):
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	return 0;
}

int func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0);
}

void func_395()
{
	if (func_629())
	{
		if (!func_578(10))
		{
			if (!func_8(11))
			{
				if (func_41(unk_0x27D769C59BC9D030(), func_624(), 1) <= 150f)
				{
					func_557(10);
				}
			}
		}
		else if (func_41(unk_0x27D769C59BC9D030(), func_624(), 1) > 150f || func_8(11))
		{
			func_396(10);
		}
	}
}

void func_396(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&uLocal_127, iParam0);
}

void func_397()
{
	int iVar0;
	
	if (func_412())
	{
		if (func_629() && !func_411())
		{
			if (func_382(unk_0x7025777635AB04C0()) == 1)
			{
				if (func_578(10))
				{
					if (iLocal_160 == 0 || func_410())
					{
						iVar0 = unk_0x3A5708FEE1B560A9(0, 2);
						func_409(10, 0, 0);
						func_402(Local_162[iVar0 /*3*/], fLocal_169[iVar0], fLocal_172, 1, 15f, 0, 0, 15f, 1, 1);
						func_401(unk_0xA8CFDE65C45F813B(func_624(), 1), 1, 0);
						iLocal_160 = 1;
					}
				}
				else if (iLocal_160)
				{
					func_400();
					func_398();
					iLocal_160 = 0;
				}
			}
			else if (iLocal_160)
			{
				func_400();
				func_398();
				iLocal_160 = 0;
			}
		}
	}
}

void func_398()
{
	if (Global_2410702.f_6 == unk_0xF42B3EF31F918DB2())
	{
		func_399();
	}
}

void func_399()
{
	struct<25> Var0;
	
	if (unk_0xA6C3B54732ED5989(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == unk_0xF42B3EF31F918DB2())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2410702 = { Var0 };
	Global_2410702.f_6 = -1;
}

void func_400()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == unk_0xF42B3EF31F918DB2())
	{
		Global_2404956.f_469 = { Var0 };
	}
}

void func_401(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404956.f_39.f_49 = { Param0 };
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_402(struct<3> Param0, var uParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11)
{
	struct<25> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	if (unk_0xA6C3B54732ED5989(Global_2410702.f_6))
	{
		if (!Global_2410702.f_6 == unk_0xF42B3EF31F918DB2())
		{
			return;
		}
	}
	else
	{
		Global_2410702.f_6 = unk_0xF42B3EF31F918DB2();
	}
	Var0.f_6 = Global_2410702.f_6;
	Var0 = { Param0 };
	Var0.f_5 = uParam3;
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
	if (func_403(unk_0x4D29100D094E5511()))
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
	Global_2410702 = { Var0 };
}

int func_403(int iParam0)
{
	if ((func_404(iParam0, 1) || func_114(iParam0)) || func_107(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_404(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_408(iParam0) != 0;
	}
	return func_405(iParam0, bParam1);
}

int func_405(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_406(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_406(int iParam0)
{
	return func_407(iParam0);
}

bool func_407(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

int func_408(int iParam0)
{
	if (func_680(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

void func_409(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = unk_0xF42B3EF31F918DB2();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

int func_410()
{
	if (!func_680(unk_0x4D29100D094E5511(), 1, 1))
	{
		if (iLocal_161 == 0)
		{
			iLocal_161 = 1;
		}
	}
	else if (func_278())
	{
		if (iLocal_161 == 1)
		{
			iLocal_161 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_411()
{
	return unk_0x2006A8C1BA2AFE80(func_624(), 0);
}

int func_412()
{
	if (Local_196.f_11 == 3)
	{
		return 1;
	}
	return 0;
}

void func_413()
{
	if (!func_625() && !func_329())
	{
		if (func_327())
		{
			if (!func_578(5))
			{
				if (func_578(13))
				{
					func_380();
					func_557(5);
				}
				if (func_578(12))
				{
					func_380();
					func_557(5);
				}
				if (func_578(14))
				{
					func_380();
					func_557(5);
				}
				if (func_41(unk_0x27D769C59BC9D030(), func_605(), 1) <= 100f)
				{
					func_380();
					func_557(5);
				}
			}
			if (!func_270(unk_0x4D29100D094E5511()))
			{
				if (!func_578(11))
				{
					if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()) && unk_0xE1CAA98B09E043C9(Local_196.f_14))
					{
						if (func_41(unk_0x27D769C59BC9D030(), func_605(), 0) < 500f)
						{
							func_557(11);
							func_116(19);
							func_376(1);
						}
					}
				}
				else if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()) && unk_0xE1CAA98B09E043C9(Local_196.f_14))
				{
					if (func_41(unk_0x27D769C59BC9D030(), func_605(), 0) > 700f)
					{
						func_396(11);
						func_379(19);
						func_376(0);
					}
				}
				if (func_578(13))
				{
					func_414(0);
				}
				if (func_578(12))
				{
					func_414(0);
				}
				if (func_578(14))
				{
					func_414(0);
				}
			}
		}
	}
}

void func_414(int iParam0)
{
	if (!func_270(unk_0x4D29100D094E5511()))
	{
		if (iParam0 || func_108(unk_0x4D29100D094E5511()) != 0)
		{
			func_116(20);
			if (func_114(unk_0x4D29100D094E5511()))
			{
				if (!unk_0xF426A5DE932B3BEE(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1, 8))
				{
					unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1), 8);
				}
			}
		}
	}
}

void func_415()
{
	if (func_625() || func_329())
	{
		func_290();
		func_430();
		func_418();
		func_416();
	}
	else
	{
		switch (func_108(unk_0x4D29100D094E5511()))
		{
			case 0:
				func_317();
				break;
			
			case 1:
			case 2:
				func_418();
				break;
			
			case 3:
				func_418();
				func_416();
				func_290();
				func_430();
				break;
			}
	}
}

void func_416()
{
	if (func_625() || func_329())
	{
		if (func_630() && !func_311())
		{
			func_417(func_605(), uLocal_146, uLocal_147, uLocal_148);
		}
		if (func_629() && !func_291())
		{
			func_417(func_624(), uLocal_143, uLocal_144, uLocal_145);
		}
		if (func_8(11))
		{
			unk_0x40EAE8F940A33315(1, func_39(), 0f, 0f, 0f, 0f, 0f, 0f, 20f, 20f, 2f, uLocal_149, uLocal_150, uLocal_151, 100, 0, 0, 2, 0, 0, 0, 0);
		}
	}
	else if (func_630() && func_327())
	{
		func_417(func_605(), uLocal_140, uLocal_141, uLocal_142);
	}
}

void func_417(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0x40EAE8F940A33315(2, unk_0xA8CFDE65C45F813B(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_418()
{
	if (func_286())
	{
		return;
	}
	switch (func_382(unk_0x7025777635AB04C0()))
	{
		case 0:
			if (func_625() || func_329())
			{
				func_424();
				if (!func_311())
				{
					func_423(1);
				}
			}
			else if (func_328() || func_327())
			{
				func_423(0);
			}
			break;
		
		case 1:
			if (func_625() || func_329())
			{
				func_424();
				func_422(1);
			}
			else if (func_328() || func_327())
			{
				func_423(0);
			}
			break;
		
		case 2:
			if (func_625() || func_329())
			{
				func_424();
				if (func_291())
				{
					func_321();
					func_419();
				}
				else if (func_325() || func_310())
				{
					func_319();
					func_422(1);
				}
			}
			else
			{
				func_423(0);
			}
			break;
	}
}

void func_419()
{
	if (!func_320())
	{
		uLocal_133 = unk_0x43B8950858CAD66F(Local_196.f_108);
		func_420(&uLocal_133, 12);
	}
}

void func_420(var uParam0, int iParam1)
{
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		unk_0x8D910E607F73E53D(*uParam0, func_421(iParam1));
	}
}

int func_421(int iParam0)
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
	unk_0x188B46661C05B1DA(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_422(bool bParam0)
{
	if (func_629())
	{
		if (!func_322())
		{
			uLocal_132 = unk_0xABF4388EB11AD060(func_624());
			if (bParam0)
			{
				unk_0x216986E3E3E543F2(uLocal_132, 68);
				func_420(&uLocal_132, 18);
			}
			else
			{
				func_420(&uLocal_132, 6);
			}
			unk_0xC5B67A5E18AF2B72(uLocal_132, "GB_AIRF_CONTAINER");
			unk_0x1FDCAFA848ABB8FA(uLocal_132, 10);
			unk_0xBFAFDBA74467F7B4(uLocal_132, 0);
		}
	}
}

void func_423(bool bParam0)
{
	if (func_630())
	{
		if (!func_324())
		{
			uLocal_131 = unk_0xABF4388EB11AD060(func_605());
			unk_0x216986E3E3E543F2(uLocal_131, 481);
			unk_0xC5B67A5E18AF2B72(uLocal_131, "GB_AIRF_CARGOBOB");
			unk_0x1FDCAFA848ABB8FA(uLocal_131, 10);
			unk_0xBFAFDBA74467F7B4(uLocal_131, 0);
			if (bParam0)
			{
				func_420(&uLocal_131, 9);
			}
			else
			{
				func_420(&uLocal_131, 6);
			}
			if (!func_578(17))
			{
				unk_0xE26C5C53C581ABE3(uLocal_131, 7000);
				func_557(17);
			}
		}
		else if (unk_0x2DD0FD059F33CAA3(uLocal_131) != 481)
		{
			unk_0x216986E3E3E543F2(uLocal_131, 481);
		}
	}
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x7B4654D62B7E0E9E(uLocal_134[iVar0]))
		{
			if (func_21(iVar0))
			{
				if (!unk_0xE4F7206742848BAF(func_20(iVar0)) && !unk_0x2006A8C1BA2AFE80(func_20(iVar0), 0))
				{
					if (Local_196.f_31[iVar0 /*17*/].f_9 == 1 && func_41(unk_0x27D769C59BC9D030(), func_20(iVar0), 0) <= 100f)
					{
						uLocal_134[iVar0] = func_429(func_20(iVar0), 1, 145);
						unk_0x216986E3E3E543F2(uLocal_134[iVar0], 270);
						func_420(&(uLocal_134[iVar0]), 6);
					}
				}
			}
		}
		else if (func_21(iVar0))
		{
			if (((unk_0xE4F7206742848BAF(func_20(iVar0)) || unk_0x2006A8C1BA2AFE80(func_20(iVar0), 0)) || Local_196.f_31[iVar0 /*17*/].f_9 == 0) || func_41(unk_0x27D769C59BC9D030(), func_20(iVar0), 0) > 100f)
			{
				unk_0x9403D0F4C7711241(&(uLocal_134[iVar0]));
			}
		}
		else
		{
			unk_0x9403D0F4C7711241(&(uLocal_134[iVar0]));
		}
		iVar0++;
	}
	if (!unk_0x7B4654D62B7E0E9E(uLocal_139))
	{
		if (func_22() && !func_428())
		{
			if (func_21(2))
			{
				if (func_18(func_20(2), func_19(), 1))
				{
					uLocal_139 = func_425(func_72(), 1, 0);
					unk_0x216986E3E3E543F2(uLocal_139, 353);
					func_420(&uLocal_139, 6);
				}
			}
		}
		else if (unk_0x7B4654D62B7E0E9E(uLocal_139))
		{
			unk_0x9403D0F4C7711241(&uLocal_139);
		}
	}
	else
	{
		if (!func_22())
		{
			unk_0x9403D0F4C7711241(&uLocal_139);
		}
		if (func_22() && (!func_26(func_19()) || !unk_0x0B4DDB992C7BCF57(func_19(), 0)))
		{
			unk_0x9403D0F4C7711241(&uLocal_139);
		}
	}
}

int func_425(int iParam0, bool bParam1, bool bParam2)
{
	return func_426(iParam0, !bParam1, bParam2);
}

int func_426(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xABF4388EB11AD060(iParam0);
	if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_427(unk_0x0E063DDE8855EC52(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD1B211F2EB392B46(uVar0, bParam1);
		}
		else
		{
			unk_0x8D910E607F73E53D(uVar0, 2);
		}
	}
	else if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_427(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
		unk_0xD1B211F2EB392B46(uVar0, bParam1);
	}
	else if (unk_0xEB9962C184DA6150(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_427(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_427(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_428()
{
	return unk_0x2006A8C1BA2AFE80(func_72(), 0);
}

var func_429(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_426(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x7B4654D62B7E0E9E(uVar0)) && unk_0x2A19A119886EC3BF(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		unk_0xC5B67A5E18AF2B72(uVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

void func_430()
{
	int iVar0;
	
	if (func_286())
	{
		return;
	}
	if (func_60(&(Local_196.f_2)))
	{
		iLocal_152 = (func_49() - func_287(&(Local_196.f_2), 0, 0));
		if (iLocal_152 < func_49())
		{
			if (iLocal_152 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			if (((func_625() || func_329()) || func_327()) || func_328())
			{
				func_282();
				if (iLocal_152 > 0)
				{
					func_283(iLocal_152, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_283(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0);
				}
				if ((func_625() || func_329()) && func_8(12))
				{
					func_431(Local_196.f_13, "GB_AIRF_CONT_VAL", -1, 1, 5, 0, "HUD_CASH", 1, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_431(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	
	if (func_184(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_285(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_284(3, iVar0);
		Global_1339940.f_2432[iVar0] = uParam0;
		StringCopy(&(Global_1339940.f_2432.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_2432.f_183[iVar0] = iParam3;
		Global_1339940.f_2432.f_172[iVar0] = iParam2;
		Global_1339940.f_2432.f_205[iVar0] = iParam4;
		Global_1339940.f_2432.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_2432.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_2432.f_420[iVar0] = iParam7;
		Global_1339940.f_2432.f_453[iVar0] = iParam8;
		Global_1339940.f_2432.f_431[iVar0] = iParam9;
		Global_1339940.f_2432.f_442[iVar0] = iParam10;
		Global_1339940.f_2432.f_464[iVar0] = iParam11;
	}
}

void func_432()
{
	if (func_135() != func_3())
	{
		Global_1727400 = func_435(func_135());
		Global_1727400.f_1 = func_434(func_135());
	}
	Global_1727400.f_5 = unk_0x9CC4C10F8D665832();
	Global_1727400.f_13 = func_433();
	Global_1727400.f_15 = 0;
	if (func_133(1))
	{
		if (func_228() == func_135())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_433()
{
	int iVar0;
	
	iVar0 = func_135();
	if (iVar0 != func_3())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

var func_434(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

var func_435(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_7[0];
}

int func_436(bool bParam0)
{
	if (func_452(unk_0x4D29100D094E5511(), 21))
	{
		return 0;
	}
	if (unk_0x233AF2DB663CF21D())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x20193FE47924AD7F())
		{
			return 0;
		}
	}
	if (func_451(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_450())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (func_448())
	{
		return 0;
	}
	if (unk_0x9404B1BCD022816B())
	{
		return 0;
	}
	if (func_406(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!func_446())
	{
		return 0;
	}
	if (func_452(unk_0x4D29100D094E5511(), 0) || func_452(unk_0x4D29100D094E5511(), 3))
	{
		return 0;
	}
	if ((func_452(unk_0x4D29100D094E5511(), 12) || func_452(unk_0x4D29100D094E5511(), 14)) || func_452(unk_0x4D29100D094E5511(), 13))
	{
		return 0;
	}
	if (func_445(unk_0x4D29100D094E5511(), 0, 0))
	{
		if ((!func_444(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_9) && !func_442(unk_0x4D29100D094E5511())) || (func_106(unk_0x4D29100D094E5511()) != 167 && func_106(unk_0x4D29100D094E5511()) != 168))
		{
			return 0;
		}
	}
	if (func_441())
	{
		return 0;
	}
	if (Global_1715399)
	{
		return 0;
	}
	if (func_440(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_438(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (func_437(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

int func_437(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0)
{
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	if (Global_2552549.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (!func_680(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

bool func_441()
{
	return Global_91330.f_297 > 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (func_680(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_443(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
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
	}
	return -1;
}

int func_444(int iParam0)
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

int func_445(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 0))
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
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446()
{
	if (func_447() == 0)
	{
		return 1;
	}
	return 0;
}

int func_447()
{
	return Global_1312466.f_18;
}

bool func_448()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_180 != 0;
}

bool func_449()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 5;
}

bool func_450()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 0);
}

int func_451(int iParam0)
{
	if (func_405(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_452(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_453(int iParam0)
{
	if (!func_227() && !func_271(unk_0x4D29100D094E5511(), 1))
	{
		if (!func_316(unk_0x4D29100D094E5511()))
		{
			if (func_455())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_454()
{
	return 0;
}

int func_455()
{
	if ((func_102(unk_0x4D29100D094E5511(), 21) || func_102(unk_0x4D29100D094E5511(), 22)) || func_458())
	{
		return 1;
	}
	if (func_456())
	{
		func_116(22);
		return 1;
	}
	return 0;
}

int func_456()
{
	if (func_107(unk_0x4D29100D094E5511(), 0))
	{
		if ((func_112() && !func_457()) || func_452(unk_0x4D29100D094E5511(), 21))
		{
			if (!func_102(unk_0x4D29100D094E5511(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_379(27);
		}
	}
	return 0;
}

bool func_457()
{
	return Global_1312416.f_1;
}

bool func_458()
{
	return func_459(283, -1);
}

int func_459(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2490231[iParam0 /*5*/][func_168(iParam1)];
	if (unk_0xA4169622221F92AC(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_460()
{
	if (unk_0xE1CAA98B09E043C9(Local_196.f_14))
	{
		if (unk_0xFB1CEF9E7943CFF5(func_605()))
		{
			if ((unk_0x49DCB5DE283168AD(func_31()) && !func_8(21)) && !func_9(unk_0xA3CDB5D555FBB382(), 7))
			{
				unk_0x428C32696D60D6EC(func_31(), func_462(), func_461(), 0);
				func_330(7);
			}
		}
	}
}

float func_461()
{
	return 5f;
}

float func_462()
{
	return 5f;
}

void func_463()
{
	if (func_327() && func_8(11))
	{
		if (func_466())
		{
			if (!unk_0x82E739904D3B17C8(Local_185.f_0))
			{
				unk_0xE30816F61FB9618B(func_465());
				Local_185.f_0 = unk_0x189D6441C37278D8(func_464(), Local_196.f_108, 0f, 0f, 0f, 2f, 0, 0, 0, 1);
				unk_0x7ABC69FEA15E8E46(Local_185.f_0, 0.8f, 0.18f, 0.19f, 1);
			}
		}
	}
}

char* func_464()
{
	return "scr_lowrider_flare";
}

char* func_465()
{
	return "scr_lowrider";
}

int func_466()
{
	unk_0xF2F528B91BF55839(func_465());
	if (unk_0x1C5E63684D4DB42F(func_465()))
	{
		return 1;
	}
	return 0;
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (!func_578(16))
		{
			if (unk_0xE1CAA98B09E043C9(Local_196.f_14))
			{
				unk_0x455C37AF8B5BD5B8(Local_196.f_14, 1);
				func_557(16);
			}
		}
	}
	else if (func_578(16))
	{
		if (unk_0xE1CAA98B09E043C9(Local_196.f_14))
		{
			unk_0x455C37AF8B5BD5B8(Local_196.f_14, 0);
			func_396(16);
		}
	}
}

void func_468()
{
	if (unk_0xE1CAA98B09E043C9(Local_196.f_22))
	{
		if (unk_0xFFB05175212D9D1A(Local_196.f_22))
		{
			if (unk_0xBF99E4112970270F(unk_0xD9545E656AC42B18(Local_196.f_22)))
			{
				unk_0x77E24407E71C2B27(unk_0xD9545E656AC42B18(Local_196.f_22), 1);
			}
			else
			{
				unk_0x77E24407E71C2B27(unk_0xD9545E656AC42B18(Local_196.f_22), 0);
			}
		}
	}
}

void func_469()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		iVar1 = unk_0x946C63BD9EF05437(iVar0);
		if (func_470(iVar1))
		{
			if (iVar0 != func_31())
			{
				if (unk_0xFB1CEF9E7943CFF5(iVar0))
				{
					unk_0x1F34B0626C594380(iVar0, func_624());
				}
			}
		}
	}
}

int func_470(int iParam0)
{
	if (((iParam0 == joaat("cargobob") || iParam0 == joaat("cargobob2")) || iParam0 == joaat("cargobob3")) || iParam0 == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

void func_471()
{
	int iVar0;
	
	if (func_8(9))
	{
		return;
	}
	if (func_9(unk_0xA3CDB5D555FBB382(), 2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			if (func_625())
			{
				if (func_41(unk_0x27D769C59BC9D030(), func_20(iVar0), 1) < 50f && unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()))
				{
					func_330(2);
					return;
				}
				if ((func_41(unk_0x27D769C59BC9D030(), func_20(iVar0), 1) < 100f && func_387()) && unk_0x0BAF34551BADE6DC(func_31()))
				{
					func_330(2);
					return;
				}
			}
			if (func_41(unk_0x27D769C59BC9D030(), func_20(iVar0), 1) < 50f && unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
			{
				func_330(2);
				return;
			}
			if (func_472(func_20(iVar0)))
			{
				func_330(2);
				return;
			}
			if (unk_0x2006A8C1BA2AFE80(func_20(iVar0), 0) || unk_0xE4F7206742848BAF(func_20(iVar0)))
			{
				func_330(2);
				return;
			}
		}
		iVar0++;
	}
}

int func_472(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	if (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	if (func_473())
	{
		if (unk_0x8C4BD6734BEF3418(unk_0x4D29100D094E5511(), &uVar0))
		{
			if (unk_0x54F37403E01EFD97(uVar0))
			{
				iVar1 = unk_0x97EA5EA3E7FE8500(iVar0);
				if (unk_0xD2CFFE76B625AE55(iVar1))
				{
					if (!unk_0x2006A8C1BA2AFE80(iVar1, 0))
					{
						if (unk_0x9A4E2270C2271219(iVar1, 0))
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

bool func_473()
{
	return Global_1573831;
}

void func_474()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_21(iVar0))
		{
			switch (Local_196.f_31[iVar0 /*17*/].f_10)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 2:
					if (unk_0xFFB05175212D9D1A(Local_196.f_31[iVar0 /*17*/]))
					{
						if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
						{
							if (unk_0x810AFFABCBF31E2D(func_20(iVar0), -1794415470) == 1 || unk_0x810AFFABCBF31E2D(func_20(iVar0), -1794415470) == 0)
							{
								unk_0xF156AA2A744B309E(func_20(iVar0));
							}
							if (unk_0x810AFFABCBF31E2D(func_20(iVar0), 1120685857) != 1 && unk_0x810AFFABCBF31E2D(func_20(iVar0), 1120685857) != 0)
							{
								unk_0xA8ED9F72DC442242(func_20(iVar0), 1);
								unk_0xDAF499362B4CEDC5(func_20(iVar0), func_476());
								unk_0x496B6221561AC306(func_20(iVar0), Local_196.f_23, 299f, 0);
							}
						}
					}
					break;
				
				case 3:
					if ((func_22() && unk_0x0B4DDB992C7BCF57(func_19(), 0)) && !unk_0x2006A8C1BA2AFE80(func_19(), 0))
					{
						if (unk_0xFFB05175212D9D1A(Local_196.f_31[iVar0 /*17*/]))
						{
							if (!func_18(func_20(iVar0), func_19(), 0))
							{
								if (!unk_0xE4F7206742848BAF(func_20(iVar0)))
								{
									if (unk_0x810AFFABCBF31E2D(func_20(iVar0), -1794415470) != 1 && unk_0x810AFFABCBF31E2D(func_20(iVar0), -1794415470) != 0)
									{
										unk_0xA8ED9F72DC442242(func_20(iVar0), 1);
										unk_0x835BBE043A81D6DD(func_20(iVar0), func_19(), 20000, -1, 1073741824, 1, 0);
									}
								}
							}
							else if ((((!unk_0xE4F7206742848BAF(func_20(iVar0)) && func_26(func_20(iVar0))) && func_26(func_19())) && func_630()) && func_26(func_31()))
							{
								if (unk_0x810AFFABCBF31E2D(func_20(iVar0), -1273030092) != 1 && unk_0x810AFFABCBF31E2D(func_20(iVar0), -1273030092) != 0)
								{
									unk_0xA8ED9F72DC442242(func_20(iVar0), 1);
									unk_0xDAF499362B4CEDC5(func_20(iVar0), func_475());
									unk_0xA0ADAA40264FB4D6(1, joaat("vehicle_weapon_space_rocket"), func_19(), func_20(iVar0));
									unk_0xA0ADAA40264FB4D6(1, joaat("weapon_vehicle_rocket"), func_19(), func_20(iVar0));
									unk_0x3AB61754C8347114(func_20(iVar0), joaat("vehicle_weapon_player_buzzard"));
									unk_0x226F512FA46B0F22(func_20(iVar0), joaat("FIRING_PATTERN_FULL_AUTO"));
									if (func_328())
									{
										iVar1 = func_31();
									}
									else
									{
										iVar1 = 0;
									}
									unk_0xC2804AD13A70DAC1(func_20(iVar0), func_19(), iVar1, 0, Local_196.f_23, 6, 60f, 100f, -1f, 200, 25, -1f, 4096);
								}
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_475()
{
	return 5;
}

int func_476()
{
	return 75;
}

void func_477()
{
	if (func_629())
	{
		if (unk_0xFFB05175212D9D1A(func_289()))
		{
			if (unk_0x4C3235E6E203703D(func_624()) < (func_75() / 2))
			{
				unk_0x51F79AC13D2AD286(func_624(), func_75());
			}
		}
		if (!func_9(unk_0xA3CDB5D555FBB382(), 3))
		{
			if (!unk_0xBF99E4112970270F(func_624()))
			{
				if (func_479(func_624()))
				{
					func_330(3);
				}
				if (func_478(func_624(), 1))
				{
					func_330(3);
				}
			}
		}
	}
}

int func_478(int iParam0, int iParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0) || iParam1)
		{
			if (unk_0xA8ED23ED7AA60A97(iParam0))
			{
				if (unk_0xE9A5D068FA8717DC(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_479(int iParam0)
{
	if (!unk_0xA8ED23ED7AA60A97(uParam0))
	{
		return 0;
	}
	return unk_0xE9A5D068FA8717DC(iParam0) >= 1f;
}

void func_480()
{
	if (func_630())
	{
		if (!func_9(unk_0xA3CDB5D555FBB382(), 4))
		{
			if (func_628())
			{
				func_330(4);
			}
			if (!func_26(func_605()))
			{
				func_330(4);
			}
		}
	}
}

void func_481()
{
	if (func_630())
	{
		if (func_26(func_31()) && !func_628())
		{
			if (func_625())
			{
				if (unk_0xB34F1074D0EA9D95(func_31(), unk_0x4D29100D094E5511()))
				{
					unk_0x85874D3067D4DBBD(func_31(), unk_0x4D29100D094E5511(), 0);
				}
			}
			else if (!unk_0xB34F1074D0EA9D95(func_31(), unk_0x4D29100D094E5511()))
			{
				unk_0x85874D3067D4DBBD(func_31(), unk_0x4D29100D094E5511(), 1);
			}
		}
	}
}

void func_482()
{
	if (func_630())
	{
		if (unk_0xFFB05175212D9D1A(func_32()))
		{
			if (!func_8(12))
			{
				if (unk_0xD95CC5D2AB15A09F(func_31()))
				{
					unk_0xDC994C828DF12354(func_31(), 1);
					unk_0x25992F7526B31C35(func_31(), 0);
					unk_0xCD0F5594F1C6772F(func_31(), 0);
				}
			}
			else if (!unk_0xD95CC5D2AB15A09F(func_31()))
			{
				unk_0xDC994C828DF12354(func_31(), 0);
				unk_0x25992F7526B31C35(func_31(), 1);
				unk_0xCD0F5594F1C6772F(func_31(), 1);
			}
		}
	}
}

void func_483()
{
	struct<3> Var0;
	var uVar3;
	struct<24> Var4;
	
	if (func_630())
	{
		if (unk_0xFFB05175212D9D1A(func_32()) && !func_628())
		{
			if (((unk_0xE06C11511DE39267(func_31(), 0, func_556()) || unk_0xE06C11511DE39267(func_31(), 1, func_556())) || unk_0xE06C11511DE39267(func_31(), 3, func_556())) || unk_0xE06C11511DE39267(func_31(), 2, func_556()))
			{
				Var4.f_3 = 1125515264;
				Var4.f_4 = 1;
				Var4.f_5 = 1;
				Var4.f_7 = 1082130432;
				Var4.f_8 = 1;
				Var4.f_11 = 1;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_23 = 1;
				Var4.f_0 = 20f;
				Var4.f_3 = 150f;
				Var4.f_1 = 1;
				Var4.f_10 = 1;
				Var4.f_11 = 0;
				Var4.f_4 = 0;
				if (func_484(unk_0xA8CFDE65C45F813B(func_31(), 1), 0f, 0f, 0f, Local_196.f_19, 1, &Var0, &uVar3, &Var4))
				{
					unk_0xB399D1EDF14937AA(func_31(), 1, 1);
					unk_0x018805F05877E2E2(func_31(), Var0, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(func_31(), uVar3);
					unk_0xFA3ED0FFF3FD8F34(func_31());
				}
			}
		}
	}
}

int func_484(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	struct<57> Var2;
	struct<57> Var59;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!unk_0x00798D768A589710() > 7 && !unk_0x00798D768A589710() == 5)
		{
			return 0;
		}
	}
	if (Global_2404956.f_485)
	{
		Global_2404956.f_485 = 0;
		return 0;
	}
	if (!func_167(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!Global_2404956.f_558 == 0 && unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_563) < func_555(0))
	{
		if (!Global_2404956.f_610 == 0)
		{
			Global_2404956.f_610 = 0;
			func_554();
			func_553();
		}
		return 0;
	}
	if (!unk_0xF42B3EF31F918DB2() == Global_2404956.f_609)
	{
		if (!Global_2404956.f_610 == 0)
		{
			if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_613) < func_555(0))
			{
				return 0;
			}
			else
			{
				Global_2404956.f_610 = 0;
			}
		}
	}
	else
	{
		if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_611) > 30000)
		{
			Global_2404956.f_610 = 0;
		}
		if (!Global_2404956.f_610 == 0)
		{
			if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_613) > func_555(1))
			{
				Global_2404956.f_610 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_549(Param0))
		{
			if (func_548(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404956.f_610 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404956.f_622, Param0) > 100f)
		{
			return 0;
		}
	}
	unk_0x5B8694CEA5B5F33F((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404956.f_610 == 0)
	{
		Global_2404956.f_616 = 0;
		Global_2404956.f_611 = unk_0xBADD1A643AD56F36();
		Global_2404956.f_609 = unk_0xF42B3EF31F918DB2();
		Global_2404956.f_613 = unk_0xBADD1A643AD56F36();
		Global_2404956.f_622 = { Param0 };
		Global_2404956.f_615 = unk_0xBADD1A643AD56F36();
		Global_2404956.f_610 = 2;
		func_554();
		func_544(Param0);
	}
	switch (Global_2404956.f_610)
	{
		case 2:
			if (unk_0x8A51433F74CC1603((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404956.f_617 = { Param0 };
				Global_2404956.f_620 = 0f;
				if (((uParam10->f_2 && func_541(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_538(Param0, *uParam9, iParam6, unk_0x4D29100D094E5511(), 0))
				{
					Global_2404956.f_617 = { Param0 };
					Global_2404956.f_620 = *uParam9;
				}
				else
				{
					Var2.f_6 = 1082130432;
					Var2.f_7 = 1176255488;
					Var2.f_8 = 1;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 1;
					Var2.f_16 = 1;
					Var2.f_31 = 1;
					Var2.f_34 = joaat("tailgater");
					Var2.f_38 = 2;
					Var2.f_45 = 2;
					Var2.f_49 = 1123024896;
					Var2.f_53 = 999;
					Var2.f_54 = 1176256410;
					Var2.f_55 = 1;
					Var2.f_56 = 1;
					Var2.f_9 = iParam7;
					Var2.f_3 = 7f;
					Var2.f_10 = uParam10->f_4;
					Var2.f_4 = *uParam10;
					Var2.f_13 = uParam10->f_1;
					Var2.f_5 = uParam10->f_3;
					Var2.f_15 = uParam10->f_5;
					Var2.f_11 = uParam10->f_6;
					Var2.f_6 = uParam10->f_7;
					Var2.f_16 = uParam10->f_8;
					Var2.f_17 = uParam10->f_9;
					Var2 = { Param3 };
					Var2.f_12 = 1;
					Var2.f_34 = iParam6;
					Var2.f_31 = uParam10->f_11;
					Var2.f_30 = 1;
					Var2.f_48 = uParam10->f_12;
					Var2.f_56 = uParam10->f_23;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var2.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_498(&(Global_2404956.f_617), &(Global_2404956.f_620), &Var2);
				}
				func_496(Global_2404956.f_617, Global_2404956.f_620, iParam6);
				Global_2404956.f_607 = 0;
				Global_2404956.f_608 = 0;
				Global_2404956.f_616++;
				Global_2404956.f_612 = unk_0xBADD1A643AD56F36();
				Global_2404956.f_611 = unk_0xBADD1A643AD56F36();
				Global_2404956.f_610 = 3;
			}
			break;
		
		case 3:
			if (Global_2404956.f_607)
			{
				if (Global_2404956.f_608)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_495(Global_2404956.f_617, 2f);
						Global_2404956.f_610 = 4;
						Global_2404956.f_614 = unk_0xBADD1A643AD56F36();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_494();
				}
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_612) > 3000)
			{
				func_494();
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_612) < 10000)
				{
					if (unk_0x5A1D67DA03AA7F06(Global_2404956.f_621))
					{
						if (unk_0x3435E3667ECEBDAC(Global_2404956.f_621))
						{
							if (!unk_0xF4C11AD6BB2226E4(Global_2404956.f_621))
							{
								if (func_493(Global_2404956.f_617, Global_2404956.f_620, iParam6, unk_0x4D29100D094E5511(), 0) || func_485(Global_2404956.f_617, Global_2404956.f_620, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_494();
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_494();
							}
						}
					}
					else
					{
						func_494();
					}
				}
				else
				{
					func_494();
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404956.f_617 = { Param0 };
			Global_2404956.f_620 = 0f;
			Var59.f_6 = 1082130432;
			Var59.f_7 = 1176255488;
			Var59.f_8 = 1;
			Var59.f_10 = 1;
			Var59.f_13 = 1;
			Var59.f_15 = 1;
			Var59.f_16 = 1;
			Var59.f_31 = 1;
			Var59.f_34 = joaat("tailgater");
			Var59.f_38 = 2;
			Var59.f_45 = 2;
			Var59.f_49 = 1123024896;
			Var59.f_53 = 999;
			Var59.f_54 = 1176256410;
			Var59.f_55 = 1;
			Var59.f_56 = 1;
			Var59.f_9 = iParam7;
			Var59.f_3 = 3.5f;
			Var59.f_10 = uParam10->f_4;
			Var59.f_4 = *uParam10;
			Var59.f_12 = 1;
			Var59.f_13 = 0;
			Var59.f_15 = uParam10->f_5;
			Var59.f_11 = uParam10->f_6;
			Var59.f_6 = uParam10->f_7;
			Var59 = { Param3 };
			Var59.f_34 = iParam6;
			Var59.f_31 = uParam10->f_11;
			Var59.f_30 = 1;
			Var59.f_48 = uParam10->f_12;
			Var59.f_56 = uParam10->f_23;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var59.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var59.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_498(&(Global_2404956.f_617), &(Global_2404956.f_620), &Var59);
			Global_2404956.f_610 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404956.f_622 = { Param0 };
	Global_2404956.f_613 = unk_0xBADD1A643AD56F36();
	if (bVar0)
	{
		*uParam8 = { Global_2404956.f_617 };
		*uParam9 = Global_2404956.f_620;
		Global_2404956.f_610 = 0;
		func_554();
		func_553();
		return 1;
	}
	return 0;
}

int func_485(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam9 == 0)
		{
			if (func_680(iVar1, bParam5, bParam6))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam8 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_492(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && iParam10) && bParam7) && func_490(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (func_486(func_179(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_486(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_489(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_488(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_487(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x43698C98CC255554((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x43698C98CC255554((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x43698C98CC255554((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_487(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x9151153185C776B3(iParam0))
	{
		unk_0x3DE83953A8E7C5D3(iParam0, fParam1, fParam2);
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

void func_488(var uParam0, struct<3> Param1)
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

float func_489(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_487(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_490(int iParam0)
{
	if (func_175(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	Global_2459440 = { func_158(iParam0) };
	if (unk_0xCD9EF71963819AF0(&Global_2459440))
	{
		return 1;
	}
	if (func_491(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_215(iParam0);
	if (!iVar0 == func_3())
	{
		if (iVar0 == func_215(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_492(int iParam0)
{
	if (unk_0xDF5FCBDBA9ECE63C(unk_0xC834A7C58DEB59B4(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_493(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_680(iVar1, 0, 1) && func_680(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_486(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_486(func_179(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_486(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_680(iVar1, 0, 0))
			{
				if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
				{
					if (func_486(func_179(iVar1), Param0, uParam3, iParam4, 1036831949))
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

void func_494()
{
	if (Global_2404956.f_616 < 20 && unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_615) < 30000)
	{
		Global_2404956.f_610 = 2;
	}
	else
	{
		Global_2404956.f_610 = 5;
	}
}

void func_495(struct<3> Param0, float fParam3)
{
	func_554();
	Global_2404956.f_621 = unk_0x3B0C667873707E03(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
}

void func_496(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 337;
	Var0.f_1 = unk_0x4D29100D094E5511();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0xCE8ECD07286D394D(1, &Var0, 7, func_497(1, 1));
}

var func_497(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6EED86A16F7EA8F2(iVar1);
		if (func_680(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4D29100D094E5511() || iParam0)
			{
				if (bParam1)
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
				else if (!func_199(iVar2, 0))
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_498(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_537(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_499(uParam0, uParam1, uParam2);
	}
}

void func_499(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
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
	var uVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_532(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_527(uParam0, 1))
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
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xACD6C8E078389F4E(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x98FC5491A0C1C7C7(iVar8))
		{
			unk_0x77812F84643C3C4A(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409361.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC61F08A082469192(iVar8)) || unk_0x8810C33CA8D476DD(iVar8))
			{
				unk_0x94BBFE6F5B663AC9(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_521(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_518(Var1))
									{
										if (!func_517(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_513(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_527(&Var1, 0)) || uParam2->f_48 == 0)
														{
															Var1 = { func_510(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
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
																	if ((uParam2->f_12 && !func_509(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_532(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (func_541(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_541(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_485(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_507(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = { Var1 };
																									Global_2409361.f_121[0] = uVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_506(Var1, uVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
																								Global_2409361.f_121[Global_2409361.f_162] = uVar4;
																								Global_2409361.f_162++;
																								if (func_513(Var1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
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
																						*uParam1 = uVar4;
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
																				*uParam1 = uVar4;
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
				if (Global_2409361.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_504(0, uParam2);
						}
						iVar24 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
						Var25 = { Global_2409361[0 /*3*/] };
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = { Global_2409361[iVar24 /*3*/] };
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = { Var25 };
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_499(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x3A5708FEE1B560A9((1 + iVar15), (40 + iVar15));
						unk_0xEFE2D8C4B92E42FD(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_510(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_532(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_527(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_499(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = uVar32;
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
				func_499(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_500(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409361.f_164 = iVar8;
	}
}

void func_500(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_501(*(uParam0[iVar2 /*4*/]), 5f, unk_0x4D29100D094E5511(), 0, 0))
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

int func_501(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_503(Param0, fParam3, iParam4, iParam5, 0) || func_502(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_502(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_486(Param0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_680(iVar1, 0, 1) && func_680(iParam3, 0, 1))
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

int func_503(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (bParam6)
			{
				if (func_680(iVar1, 0, 1) && func_680(iParam4, 0, 1))
				{
					if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_680(iVar1, 0, 1) && func_680(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_179(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_680(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_179(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_504(int iParam0, var uParam1)
{
	if (!func_513(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162 = (Global_2409361.f_162 - 1);
		func_505(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_504(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_504(iParam0 + 1, uParam1);
	}
}

void func_505(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409361[iParam0 /*3*/] = { Global_2409361[iParam0 + 1 /*3*/] };
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_506(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409361[iParam4 /*3*/] };
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = { Param0 };
	Global_2409361.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_506(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_507(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_508(iVar5))
		{
			Var1 = { func_179(iVar5) };
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

int func_508(int iParam0)
{
	if (func_680(iParam0, 0, 1))
	{
		if (!func_222(iParam0))
		{
			if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam0))
			{
				if (!unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
				{
					if (func_405(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_176(unk_0xEDB589A956C2855F(iParam0), unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
				{
					if (!func_405(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_490(iParam0))
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

int func_509(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_493(Param0, uParam3, iParam4, iParam5, iParam6) || func_538(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

Vector3 func_510(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_511(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x94BBFE6F5B663AC9(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x53F874E7C513393E(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
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
				func_487(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_511(Param0, *uParam3, Param6))
		{
			if (bParam5)
			{
				*uParam3 = (*uParam3 + 180f);
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
	Var0 = { unk_0x8E183FB8F99DD2D7(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x65CAD66C4C6B66F6(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_487(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_511(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_488(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_512(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_512(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_513(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_516(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_514(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xCC0EABB8FAB8D0DE(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_514(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_515(&Param3, &Param6);
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

void func_515(var uParam0, var uParam1)
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

bool func_516(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_517(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_405(unk_0x4D29100D094E5511(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_486(Param0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_486(Param0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_486(Param0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
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

int func_518(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_520(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[iVar1])
	{
		if (func_519(Param0, &(Global_2408393[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_519(Param0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_519(struct<3> Param0, var uParam3)
{
	return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_520(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0.f_0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0.f_0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408388[3])
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

int func_521(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if (func_526(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			func_525(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_522(Var1, &uVar0) || func_526(Var1))
			{
				Var1 = { *uParam0 };
				func_525(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_522(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_524();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_523(Param0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_523(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_516(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404956.f_1714) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_514(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_524()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_525(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
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
		func_488(&Var0, 0f, 0f, unk_0x5C02660403071A83(0f, 360f));
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

int func_526(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
		{
			return 1;
		}
	}
	return 0;
}

bool func_527(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_516(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_514(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xCC0EABB8FAB8D0DE(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_528(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_528(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_525(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_531(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_529(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x73C1A9AD53AC8AD8(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_516(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_514(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xCC0EABB8FAB8D0DE(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_529(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_530(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_512(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_512(Var6, Var3) >= 0f)
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
		Var6 = { func_530(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_530(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_512(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_512(Var6, Var29) >= 0f)
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

Vector3 func_530(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_531(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_532(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_549(Param0))
	{
		if (func_536(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_534(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_533(*uParam3, 1056964608))
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
				func_525(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0);
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

int func_533(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_534(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_522(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_535(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_522(Var2, &uVar1) || func_526(Var2))
			{
				Var2 = { *uParam0 };
				func_535(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_535(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_528(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_528(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_528(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_525(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_531(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_529(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_536(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_523(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407408[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_535(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_536(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_535(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_537(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
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
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_532(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_527(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			Var1 = { Global_2404956.f_1151[iVar0 /*4*/] };
			uVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_509(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_532(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
									if (func_541(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_541(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_485(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_507(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = { Var1 };
													Global_2409361.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar5 /*3*/], uParam2->f_35))
															{
																func_506(Var1, uVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
												Global_2409361.f_121[Global_2409361.f_162] = uVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = uVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = uVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_504(0, uParam2);
				}
				iVar13 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
				Var14 = { Global_2409361[0 /*3*/] };
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = { Global_2409361[iVar13 /*3*/] };
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = { Var14 };
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_537(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_499(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_538(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_540(Param0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_539(Param0, uParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_680(iVar1, 0, 1) && func_680(iParam5, 0, 1))
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

int func_539(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	
	if (func_486(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_487(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x43698C98CC255554((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x43698C98CC255554((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x43698C98CC255554((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_488(&Var23, 0f, 0f, uParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_488(&Var26, 0f, 0f, uParam3);
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
		if (func_486(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_540(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_489(iParam3, 1008981770);
	fVar1 = func_489(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_541(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x058784EB5BE12044(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x838311C5B5F34E30(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x838311C5B5F34E30(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x5EDE06C252535A86(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam13)
	{
		if (unk_0x7E5CC56729CE6D59(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_543(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_542(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404956++;
	return 1;
}

int func_542(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_680(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x676D4CD42E0837CA(func_179(unk_0x4D29100D094E5511()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
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
		if (func_680(iVar1, 1, 1))
		{
			if (!func_199(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if ((func_492(iVar1) || !bParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x676D4CD42E0837CA(func_179(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam8 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x676D4CD42E0837CA(func_179(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
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

int func_543(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam8 == 0)
		{
			if (func_680(iVar1, bParam4, bParam5))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam7 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_492(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && uParam9) && bParam6) && func_490(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (unk_0x676D4CD42E0837CA(func_179(iVar1), Param0, 1) < fParam3)
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

void func_544(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_547(Param0);
	if (iVar0 > -1 && !func_546())
	{
		func_553();
		switch (iVar0)
		{
			case 0:
				func_545(-1139.678f, -2694.165f, 12.949f, 283.4298f);
				func_545(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
				func_545(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
				func_545(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
				func_545(-1110.51f, -2693.236f, 12.9595f, 298.84f);
				func_545(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
				func_545(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
				func_545(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
				func_545(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
				break;
			
			case 1:
				func_545(-1411.731f, -533.6462f, 30.2703f, 215.116f);
				func_545(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
				func_545(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
				func_545(-1438.8f, -584.4678f, 29.595f, 118.1207f);
				break;
			
			case 2:
				func_545(-780.5905f, 292.8159f, 84.673f, 97.2697f);
				func_545(-788.6147f, 291.8073f, 84.72f, 97.7348f);
				func_545(-765.572f, 294.4459f, 84.5182f, 93.9327f);
				func_545(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
				break;
			
			case 3:
				func_545(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
				func_545(-647.239f, 49.2068f, 40.7135f, 355.9723f);
				func_545(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
				func_545(-610.5603f, 5.1258f, 41.2404f, 98.696f);
				break;
			
			case 4:
				func_545(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
				func_545(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
				func_545(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
				func_545(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
				break;
			
			case 5:
				func_545(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
				func_545(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
				func_545(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
				func_545(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
				break;
			
			case 6:
				func_545(-58.1347f, -573.486f, 36.5789f, 341.8442f);
				func_545(-64.227f, -590.2214f, 35.1654f, 338.972f);
				func_545(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
				func_545(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
				break;
			
			case 7:
				func_545(-232.1917f, -978.1431f, 28.166f, 160.2115f);
				func_545(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
				func_545(-251.993f, -998.3963f, 28.3747f, 249.3297f);
				func_545(-262.222f, -994.5226f, 29.23f, 249.4673f);
				break;
			
			case 8:
				func_545(151.624f, -1309.343f, 28.2023f, 243.201f);
				func_545(152.7886f, -1305.608f, 28.2023f, 243.9973f);
				func_545(145.8017f, -1287.19f, 28.312f, 120.6275f);
				func_545(142.8935f, -1282.286f, 28.3156f, 120.3024f);
				break;
			
			case 9:
				func_545(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
				func_545(-2322.187f, 277.638f, 168.4671f, 23.4249f);
				func_545(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
				func_545(-2314.396f, 290.9f, 168.4671f, 114.3983f);
				func_545(-2316.81f, 296.424f, 168.4671f, 113.6228f);
				func_545(-2318.572f, 299.2423f, 168.4671f, 293.83f);
				func_545(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
				func_545(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
				func_545(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
				func_545(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
				func_545(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
				func_545(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
				break;
			
			case 10:
				func_545(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
				func_545(-612.8933f, 692.116f, 148.7577f, 79.1005f);
				func_545(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
				func_545(-639.3558f, 696.9992f, 150.5134f, 77.481f);
				break;
			
			case 11:
				func_545(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_545(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_545(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_545(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 12:
				func_545(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_545(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_545(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_545(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 13:
				func_545(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
				func_545(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
				func_545(-1283.894f, 467.2136f, 95.4036f, 95.058f);
				func_545(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
				break;
			
			case 14:
				func_545(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
				func_545(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
				func_545(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
				func_545(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
				break;
			
			case 15:
				func_545(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_545(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_545(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_545(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 16:
				func_545(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_545(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_545(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_545(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 17:
				func_545(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				func_545(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_545(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_545(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				break;
			
			case 18:
				func_545(128.4334f, 578.7522f, 182.2934f, 106.5458f);
				func_545(97.7791f, 576.8907f, 181.5599f, 91.3539f);
				func_545(83.5896f, 576.4791f, 181.0832f, 89.7262f);
				func_545(69.9599f, 575.9902f, 180.5019f, 91.4926f);
				break;
			
			case 19:
				func_545(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
				func_545(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
				func_545(-931.6637f, 703.693f, 151.369f, 87.7447f);
				func_545(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
				break;
			
			case 20:
				func_545(-872.1293f, 698.7591f, 148.5084f, 339.673f);
				func_545(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
				func_545(-907.3458f, 695.8158f, 150.396f, 270.6491f);
				func_545(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
				break;
			
			case 21:
			case 25:
				func_545(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_545(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_545(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_545(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_545(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_545(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_545(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_545(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
				break;
			
			case 22:
			case 26:
				func_545(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_545(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_545(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_545(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_545(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_545(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_545(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_545(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
				break;
			
			case 23:
			case 27:
				func_545(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_545(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_545(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_545(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_545(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_545(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_545(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_545(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
				break;
			
			case 24:
			case 28:
				func_545(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_545(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_545(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_545(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_545(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_545(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_545(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_545(-9.239f, -773.0505f, 43.0788f, 318.0367f);
				break;
			}
	}
}

void func_545(struct<3> Param0, float fParam3)
{
	if (Global_2404956.f_1150 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404956.f_1151[Global_2404956.f_1150 /*4*/] = { Param0 };
		Global_2404956.f_1151[Global_2404956.f_1150 /*4*/].f_3 = fParam3;
		Global_2404956.f_1150++;
	}
}

int func_546()
{
	if (unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 0) && !Global_2435528.f_5852)
	{
		return 0;
	}
	return 0;
}

int func_547(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2409143[iVar0 /*7*/].f_2 + Global_2409143[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_519(Param0, &(Global_2409143[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_548(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2409106[iVar0 /*7*/].f_2 + Global_2409106[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_519(Var1, &(Global_2409106[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_529(&Var1, Global_2409106[iVar0 /*7*/], Global_2409106[iVar0 /*7*/].f_3, Global_2409106[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_404(unk_0x4D29100D094E5511(), 1))
		{
			return 1;
		}
		if (!func_552(Param0, 1008981770))
		{
			if (!func_536(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_536(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_551(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_550(&(Global_2404956.f_39[iVar0 /*12*/])) };
				if (!func_536(&Var1, 0, 0, 0))
				{
					if (!func_536(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_550(var uParam0)
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

int func_551(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_523(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_552(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_523(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_553()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404956.f_1151[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404956.f_1150 = 0;
}

void func_554()
{
	if (unk_0x5A1D67DA03AA7F06(Global_2404956.f_621))
	{
		unk_0x787D88A5449F44F7(Global_2404956.f_621);
	}
	Global_2404956.f_621 = -1;
}

int func_555(bool bParam0)
{
	if (unk_0x3934E959DB2478D3())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_556()
{
	return 10000;
}

void func_557(int iParam0)
{
	unk_0x26545538B51562AD(&uLocal_127, iParam0);
}

void func_558(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 != iParam0)
	{
		func_577(-1);
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 = iParam0;
		if (func_85() != -1)
		{
			func_576(-1);
		}
		if (func_575() != -1)
		{
			func_574(-1);
		}
		func_572(iParam2);
		func_570(iParam0);
		if (!func_569(iParam0))
		{
			fVar0 = func_568(iParam0);
			if (fVar0 != 1f)
			{
				func_565(fVar0);
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 1);
			}
		}
		if (!func_564(iParam0))
		{
			if (func_563(iParam0, iParam2))
			{
				unk_0x193107EFB9C9FD44(0);
				unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 0);
				unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
				unk_0x26545538B51562AD(&(Global_1727391.f_3), 0);
			}
			else if (unk_0x0094DC02313D5ADE() < 5)
			{
				unk_0xE71148ED586F1ED1(1f);
				unk_0x193107EFB9C9FD44(5);
			}
		}
		if (func_112())
		{
			func_116(27);
		}
		if (bParam1)
		{
			if (!func_455())
			{
				func_562(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 1) || unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 4)) || unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 0))
			{
				func_248(6);
			}
			func_561();
		}
		if (iParam0 == 164)
		{
			unk_0xCBBD6CF628E1DF2B(3, 0);
			unk_0xCBBD6CF628E1DF2B(5, 0);
		}
		if (func_114(unk_0x4D29100D094E5511()) && func_316(unk_0x4D29100D094E5511()))
		{
			unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1), 8);
		}
		func_559();
	}
}

void func_559()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_560();
	iVar2 = func_215(unk_0x4D29100D094E5511());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (unk_0x27C9C05A6B4E58D2(iVar1))
		{
			if (func_5(iVar1, iVar2, 1))
			{
				unk_0xA017073E76197359(unk_0x4D29100D094E5511(), iVar1, uVar3);
				unk_0xA017073E76197359(iVar1, unk_0x4D29100D094E5511(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_560()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_135();
	if (iVar0 != func_3())
	{
		if (func_680(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xF426A5DE932B3BEE(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_561()
{
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 1))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 1);
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 4))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 4);
	}
	if (unk_0xF426A5DE932B3BEE(Global_2460486.f_4414, 6))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 6);
	}
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 0);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4414), 2);
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		unk_0x193107EFB9C9FD44(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_562(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_563(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
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
	}
	return 0;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_565(float fParam0)
{
	float fVar0;
	
	if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) == func_566())
	{
		return;
	}
	fVar0 = (Global_2460486.f_4655 - fParam0);
	if (unk_0xA6C3B54732ED5989(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == unk_0xF42B3EF31F918DB2() && unk_0x43698C98CC255554(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = unk_0xF42B3EF31F918DB2();
}

int func_566()
{
	switch (func_567())
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

int func_567()
{
	return Global_25120;
}

float func_568(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return 1;
		
		default:
	}
	return 0;
}

void func_570(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_172(3351, -1, 0);
	iVar1 = func_571(iParam0);
	if (iVar1 != -1)
	{
		unk_0x26545538B51562AD(&uVar0, iVar1);
		func_163(3351, uVar0, -1, 1);
	}
}

int func_571(int iParam0)
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

void func_572(int iParam0)
{
	func_573(unk_0x4D29100D094E5511(), iParam0);
}

void func_573(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_574(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

int func_575()
{
	return Global_2460486.f_4660.f_138;
}

void func_576(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

void func_577(int iParam0)
{
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_27 = iParam0;
}

bool func_578(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(uLocal_127, iParam0);
}

void func_579(int iParam0, int iParam1)
{
	Local_310[iParam0 /*3*/] = iParam1;
}

int func_580()
{
	var uVar0;
	
	unk_0x188B46661C05B1DA(6, &uLocal_140, &uLocal_141, &uLocal_142, &uVar0);
	unk_0x188B46661C05B1DA(18, &uLocal_143, &uLocal_144, &uLocal_145, &uVar0);
	unk_0x188B46661C05B1DA(9, &uLocal_146, &uLocal_147, &uLocal_148, &uVar0);
	unk_0x188B46661C05B1DA(12, &uLocal_149, &uLocal_150, &uLocal_151, &uVar0);
	if (Local_196.f_11 == 3)
	{
		func_581();
		Local_162[0 /*3*/] = { -1493.738f, -3245.335f, 12.9449f };
		fLocal_169[0] = 8.0591f;
		Local_162[1 /*3*/] = { -1613.85f, -3173.267f, 12.9449f };
		fLocal_169[1] = 298.6925f;
		fLocal_172 = 30f;
	}
	Global_2460486.f_4970 = Local_196.f_11;
	Local_185.f_1 = joaat("prop_flare_01");
	return 1;
}

void func_581()
{
	Global_1724872 = 1;
	if (!unk_0xF426A5DE932B3BEE(Global_2467235, 0))
	{
		unk_0x26545538B51562AD(&Global_2467235, 0);
		unk_0x26545538B51562AD(&Global_1724873, 0);
	}
	if (!unk_0xF426A5DE932B3BEE(Global_2467235, 1))
	{
		unk_0x26545538B51562AD(&Global_2467235, 1);
		unk_0x26545538B51562AD(&Global_1724873, 1);
	}
	if (!unk_0xF426A5DE932B3BEE(Global_2467235, 5))
	{
		unk_0x26545538B51562AD(&Global_2467235, 5);
		unk_0x26545538B51562AD(&Global_1724873, 5);
	}
	if (unk_0xF677DFDD2122F4F1(-355737150))
	{
		unk_0x29A7F2256763EE17(-355737150, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(-580979506))
	{
		unk_0x29A7F2256763EE17(-580979506, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(-1426452475))
	{
		unk_0x29A7F2256763EE17(-1426452475, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(745417724))
	{
		unk_0x29A7F2256763EE17(745417724, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(-1305304906))
	{
		unk_0x29A7F2256763EE17(-1305304906, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(-1543175077))
	{
		unk_0x29A7F2256763EE17(-1543175077, 0, 0, 0);
	}
	if (unk_0xF677DFDD2122F4F1(-811770997))
	{
		unk_0x29A7F2256763EE17(-811770997, 0, 0, 0);
	}
}

int func_582()
{
	return Local_196.f_0;
}

int func_583(int iParam0)
{
	return Local_310[iParam0 /*3*/];
}

void func_584()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		switch (iVar1)
		{
			case 168:
				unk_0xB03A3CBE4F7737B0(1, iVar0, &uVar2, 2);
				if (unk_0x96BA6BF1BA1235CC())
				{
				}
				break;
			
			case 179:
				func_585(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	int iVar16;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var6, 10))
	{
		if (unk_0xD2CFFE76B625AE55(Var6.f_0))
		{
			if (unk_0xEB9962C184DA6150(Var6.f_0))
			{
				iVar0 = unk_0xF85370D360C5C95C(Var6.f_0);
				if (iVar0 == func_604())
				{
					if (!func_625())
					{
						if (!func_578(12))
						{
							if (unk_0xD2CFFE76B625AE55(Var6.f_1))
							{
								if (unk_0x54F37403E01EFD97(Var6.f_1))
								{
									if (unk_0x30D6008994E431E8(unk_0x97EA5EA3E7FE8500(Var6.f_1)))
									{
										if (unk_0x881548CC6D5B749B(unk_0x97EA5EA3E7FE8500(Var6.f_1)) == unk_0x4D29100D094E5511())
										{
											func_557(12);
										}
									}
								}
							}
						}
					}
					if (unk_0x96BA6BF1BA1235CC())
					{
						if (unk_0x33E3225602B37F79(Var6.f_4) == 3)
						{
							func_603();
							return;
						}
						if (unk_0x33E3225602B37F79(Var6.f_4) == 2)
						{
							func_603();
							return;
						}
						if (unk_0x33E3225602B37F79(Var6.f_4) == 5)
						{
							func_602();
							return;
						}
						if (unk_0x33E3225602B37F79(Var6.f_4) == 7 || Var6.f_7)
						{
							func_591();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_591();
							return;
						}
						if (unk_0x33E3225602B37F79(Var6.f_4) == 0)
						{
							func_591();
							return;
						}
					}
				}
			}
			if (unk_0x8F8858152A9B9959(Var6.f_0))
			{
				iVar2 = unk_0x35E488C304B2E03E(Var6.f_0);
				if (iVar2 == func_31())
				{
					if (unk_0x96BA6BF1BA1235CC())
					{
						if (Local_196.f_10 == func_3())
						{
							if (unk_0xD2CFFE76B625AE55(Var6.f_1))
							{
								if (unk_0x54F37403E01EFD97(Var6.f_1))
								{
									if (unk_0x30D6008994E431E8(unk_0x97EA5EA3E7FE8500(Var6.f_1)))
									{
										if (Var6.f_3 || func_8(6))
										{
											iVar4 = unk_0x881548CC6D5B749B(unk_0x97EA5EA3E7FE8500(Var6.f_1));
											if (!func_5(iVar4, func_7(), 1))
											{
												Local_196.f_10 = iVar4;
											}
											else
											{
												iVar5 = func_52();
												if (iVar5 != func_3())
												{
													Local_196.f_10 = iVar5;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!func_625())
					{
						if (!func_578(13))
						{
							if (unk_0xD2CFFE76B625AE55(Var6.f_1))
							{
								if (unk_0x54F37403E01EFD97(Var6.f_1))
								{
									if (unk_0x30D6008994E431E8(unk_0x97EA5EA3E7FE8500(Var6.f_1)))
									{
										if (unk_0x881548CC6D5B749B(unk_0x97EA5EA3E7FE8500(Var6.f_1)) == unk_0x4D29100D094E5511())
										{
											func_557(13);
										}
									}
								}
							}
						}
					}
					if (unk_0x33E3225602B37F79(Var6.f_4) == 3)
					{
						if (unk_0xD2CFFE76B625AE55(Var6.f_1))
						{
							if (unk_0x54F37403E01EFD97(Var6.f_1))
							{
								if (!unk_0x30D6008994E431E8(unk_0x97EA5EA3E7FE8500(Var6.f_1)))
								{
									func_586(0);
								}
							}
						}
					}
					if (unk_0x33E3225602B37F79(Var6.f_4) == 5 || Var6.f_4 == joaat("weapon_vehicle_rocket"))
					{
						if (unk_0xD2CFFE76B625AE55(Var6.f_1))
						{
							if (unk_0x54F37403E01EFD97(Var6.f_1))
							{
								if (unk_0x30D6008994E431E8(unk_0x97EA5EA3E7FE8500(Var6.f_1)))
								{
									func_586(1);
								}
							}
						}
					}
				}
			}
			if (unk_0x54F37403E01EFD97(Var6.f_0))
			{
				if (!func_625())
				{
					if (!func_578(14))
					{
						if (iVar3 == unk_0x97EA5EA3E7FE8500(Var6.f_0))
						{
							if (unk_0x30D6008994E431E8(iVar3))
							{
								iVar16 = unk_0x881548CC6D5B749B(iVar3);
								if (func_55(iVar16) || func_54(iVar16))
								{
									func_557(14);
								}
							}
						}
					}
				}
			}
		}
		if (unk_0x96BA6BF1BA1235CC())
		{
			if (unk_0xD2CFFE76B625AE55(Var6.f_1))
			{
				if (unk_0xEB9962C184DA6150(Var6.f_1))
				{
					iVar1 = unk_0xF85370D360C5C95C(Var6.f_1);
					if (iVar1 == func_604())
					{
						if (unk_0x33E3225602B37F79(Var6.f_4) == 7 || Var6.f_7)
						{
							func_591();
							return;
						}
						if (Var6.f_4 == joaat("weapon_rammed_by_car"))
						{
							func_591();
							return;
						}
						if (unk_0x33E3225602B37F79(Var6.f_4) == 0)
						{
							func_591();
							return;
						}
					}
				}
			}
		}
	}
}

void func_586(bool bParam0)
{
	float fVar0;
	int iVar1;
	
	if (func_589())
	{
		iVar1 = unk_0x3A5708FEE1B560A9(0, 100);
		if (bParam0)
		{
			fVar0 = func_588();
		}
		else
		{
			fVar0 = func_587();
		}
		if (IntToFloat(iVar1) < fVar0)
		{
			if (func_629())
			{
				if (unk_0xFFB05175212D9D1A(func_32()) && unk_0xFFB05175212D9D1A(func_289()))
				{
					if (unk_0x53D573A48E8DFC4C(func_31(), func_624()))
					{
						unk_0xC85758401811319B(func_31(), func_624());
					}
				}
			}
		}
	}
}

var func_587()
{
	return Global_262145.f_12354;
}

var func_588()
{
	return Global_262145.f_12353;
}

int func_589()
{
	if (func_590())
	{
		return 0;
	}
	if (func_60(&(Local_196.f_28)))
	{
		if (!func_48(&(Local_196.f_28), func_44(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_590()
{
	return Global_262145.f_12366;
}

void func_591()
{
	if (func_600())
	{
		Local_196.f_13 = (Local_196.f_13 - func_593(3));
		func_592();
		if (func_34() < func_33())
		{
			Local_196.f_13 = func_33();
		}
	}
}

void func_592()
{
	if (!func_60(&uLocal_181))
	{
		func_59(&uLocal_181, 0, 0);
	}
	else
	{
		func_118(&uLocal_181, 0, 0);
		func_59(&uLocal_181, 0, 0);
	}
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_599();
		
		case 1:
			return func_598();
		
		case 2:
			return func_597();
		
		case 3:
			return unk_0x3A5708FEE1B560A9(func_596(), func_595() + 1);
		
		default:
	}
	return func_594();
}

int func_594()
{
	return 250;
}

int func_595()
{
	return Global_262145.f_12359;
}

var func_596()
{
	return Global_262145.f_12360;
}

var func_597()
{
	return Global_262145.f_12362;
}

var func_598()
{
	return Global_262145.f_12361;
}

var func_599()
{
	return Global_262145.f_12358;
}

int func_600()
{
	if (func_34() <= func_33())
	{
		return 0;
	}
	if (func_60(&uLocal_181))
	{
		if (!func_48(&uLocal_181, func_601(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_601()
{
	return Global_262145.f_12363;
}

void func_602()
{
	if (func_600())
	{
		Local_196.f_13 = (Local_196.f_13 - func_593(1));
		func_592();
		if (func_34() < func_33())
		{
			Local_196.f_13 = func_33();
		}
	}
}

void func_603()
{
	if (func_600())
	{
		Local_196.f_13 = (Local_196.f_13 - func_593(0));
		func_592();
		if (func_34() < func_33())
		{
			Local_196.f_13 = func_33();
		}
	}
}

int func_604()
{
	if (func_629())
	{
		return unk_0xBB4FAC4BA02ED087(func_289());
	}
	return 0;
}

int func_605()
{
	if (func_630())
	{
		return unk_0xD9545E656AC42B18(func_32());
	}
	return 0;
}

void func_606(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_114(unk_0x4D29100D094E5511()) && !func_113(unk_0x4D29100D094E5511())) && !unk_0xF426A5DE932B3BEE(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_1, 8)) && (func_111(unk_0x4D29100D094E5511()) || func_110(unk_0x4D29100D094E5511())))
	{
		return;
	}
	Global_1727391 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Param1);
	func_622(iParam0, fVar0);
	if (unk_0x1E114237D972903B() && unk_0xE0D1D679E4B5371F() == 15)
	{
		if (func_316(unk_0x4D29100D094E5511()) || func_621(unk_0x4D29100D094E5511()))
		{
			if (!unk_0x1E83AF5FFE7732D0(1344549371))
			{
				unk_0x3D275368655C2DE8(1344549371);
			}
		}
		else if (unk_0x1E83AF5FFE7732D0(1344549371))
		{
			unk_0xF006BF9DA519F097(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_452(unk_0x4D29100D094E5511(), 21))
		{
			func_401(Param1, 1, 0);
		}
		if (!*uParam4 && func_680(unk_0x4D29100D094E5511(), 1, 1))
		{
			*uParam4 = 1;
			if (func_564(iParam0))
			{
				unk_0xE71148ED586F1ED1(func_620(iParam0));
				if (func_563(iParam0, -1))
				{
					unk_0x193107EFB9C9FD44(0);
					if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
					{
						unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), 0, 1);
						unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 1);
					}
					unk_0x26545538B51562AD(&(Global_1727391.f_3), 0);
				}
			}
			if (func_569(iParam0))
			{
				fVar1 = func_568(iParam0);
				if (fVar1 != 1f)
				{
					func_565(fVar1);
					unk_0x26545538B51562AD(&(Global_1727391.f_3), 1);
				}
			}
			if (!Global_2391042)
			{
				if (func_619(iParam0) && func_316(unk_0x4D29100D094E5511()))
				{
					func_562(1);
					func_618(2);
				}
			}
			func_116(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_102(unk_0x4D29100D094E5511(), 19))
			{
				func_379(19);
			}
		}
		if (*uParam4 && func_680(unk_0x4D29100D094E5511(), 1, 1))
		{
			*uParam4 = 0;
			if (func_564(iParam0))
			{
				if (unk_0xF426A5DE932B3BEE(Global_1727391.f_3, 0))
				{
					unk_0xE71148ED586F1ED1(1f);
					unk_0x193107EFB9C9FD44(5);
					unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 0);
				}
			}
			if (func_569(iParam0))
			{
				func_617();
				unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 1);
			}
			if (uParam7 && !func_114(unk_0x4D29100D094E5511()))
			{
				if (func_106(unk_0x4D29100D094E5511()) != 152)
				{
					func_608();
				}
			}
			if (func_191(2))
			{
				func_562(0);
				func_607(2);
			}
		}
	}
}

void func_607(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_608()
{
	Global_2404956.f_20 = { Global_2406765 };
	Global_2404956.f_22 = { Global_2406767 };
	func_615();
	func_609(1, 1);
}

void func_609(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404956.f_39 = { Global_2406784 };
	}
	else
	{
		Global_2404956.f_39 = { Global_2406784 };
		Global_2404956.f_39.f_49 = { Global_2406784.f_49 };
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (bParam0)
	{
		func_614();
	}
	func_611(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_610(0);
	func_400();
}

void func_610(bool bParam0)
{
	if (bParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_611(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_612();
		func_409(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_612();
		func_409(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_612()
{
	func_613();
	Global_2404956.f_635 = 0;
}

void func_613()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_614()
{
	Global_2404956.f_347 = { Global_2407092 };
}

void func_615()
{
	func_616();
	Global_2404956.f_1280 = 0;
}

void func_616()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_617()
{
	if (unk_0xA6C3B54732ED5989(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == unk_0xF42B3EF31F918DB2() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

void func_618(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_18), iParam0);
}

int func_619(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

float func_620(int iParam0)
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
		
		default:
	}
	return 1f;
}

int func_621(int iParam0)
{
	if (func_259(iParam0))
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_622(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_623(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_380();
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10461;
		
		case 142:
			return Global_262145.f_10449;
		
		case 157:
			return Global_262145.f_10416;
		
		case 159:
			return Global_262145.f_10399;
		
		case 162:
			return Global_262145.f_10510;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_624()
{
	if (func_629())
	{
		return unk_0xD9545E656AC42B18(func_289());
	}
	return 0;
}

int func_625()
{
	if (func_357() || func_626())
	{
		return 1;
	}
	return 0;
}

int func_626()
{
	return func_627(func_7(), 0);
}

int func_627(int iParam0, bool bParam1)
{
	return func_5(unk_0x4D29100D094E5511(), iParam0, bParam1);
}

bool func_628()
{
	return unk_0x2006A8C1BA2AFE80(func_605(), 0);
}

bool func_629()
{
	return unk_0xE1CAA98B09E043C9(func_289());
}

bool func_630()
{
	return unk_0xE1CAA98B09E043C9(func_32());
}

int func_631()
{
	bool bVar0;
	
	func_636(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_635())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_634())
	{
		return 1;
	}
	if (func_633(157))
	{
		if (!func_632())
		{
			return 1;
		}
	}
	if (func_633(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_566() != 0)
	{
		if (unk_0xD32535FA4397160F(func_566()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_632()
{
	return Global_2434762.f_574;
}

int func_633(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_634()
{
	return Global_2443085;
}

bool func_635()
{
	return Global_2434762.f_569;
}

void func_636(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_637(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
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

void func_637(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_680(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(iVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(iVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_638(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_638(int iParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(iParam0))
		{
			if (unk_0x2380875F8B6B9911(iParam0))
			{
				unk_0xAF3355298F537BB0(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(iParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_639()
{
	if (func_640(1))
	{
		return 1;
	}
	if (Global_2460486.f_4660.f_14)
	{
		Global_2460486.f_4660.f_14 = 0;
		return 1;
	}
	return 0;
}

int func_640(bool bParam0)
{
	bool bVar0;
	
	if (!func_133(1))
	{
		bVar0 = false;
		if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 != func_3())
		{
			if (func_680(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51, 0, 1) && Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_641(func_106(unk_0x4D29100D094E5511())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_248(31);
				if (unk_0x27C9C05A6B4E58D2(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_204(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609014 = 1;
				}
				Global_1608998 = { Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_74 };
			}
			return 1;
		}
	}
	return 0;
}

int func_641(int iParam0)
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
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

void func_642()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_643()
{
	var uVar0;
	
	func_467(0);
	uVar0 = func_31();
	if (unk_0xD2CFFE76B625AE55(uVar0))
	{
		if (unk_0xFB1CEF9E7943CFF5(iVar0))
		{
			unk_0x9846B4D56971A958(&iVar0);
		}
	}
	iVar0 = func_19();
	if (unk_0xD2CFFE76B625AE55(iVar0))
	{
		if (unk_0xFB1CEF9E7943CFF5(iVar0))
		{
			unk_0x9846B4D56971A958(&iVar0);
		}
	}
	if (Local_196.f_11 == 3)
	{
		func_660();
	}
	if (Global_2460486.f_4980 == 1)
	{
		Global_2460486.f_4980 = 0;
	}
	if (func_625())
	{
		func_376(0);
	}
	if (func_316(unk_0x4D29100D094E5511()))
	{
		func_378(0);
	}
	Global_1727400.f_2 = Local_196.f_112;
	Global_1727400.f_3 = Local_196.f_113;
	func_658(Local_196.f_30, Local_196.f_11, Local_196.f_12, -1082130432);
	func_644(1);
	func_317();
	func_384();
	unk_0x7C3AA2D27E16E2AD();
}

void func_644(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 167 || Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 168)
	{
		func_656();
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 164)
	{
		unk_0xCBBD6CF628E1DF2B(3, 1);
		unk_0xCBBD6CF628E1DF2B(5, 1);
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 = -1;
		if (!unk_0xF426A5DE932B3BEE(Global_1573883.f_1, 14) && !func_114(unk_0x4D29100D094E5511()))
		{
			func_562(0);
		}
	}
	else if (func_654(unk_0x4D29100D094E5511()) != -1)
	{
		func_577(-1);
	}
	func_572(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_651(iVar0);
		iVar0++;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1727391.f_3, 0))
	{
		unk_0xE71148ED586F1ED1(1f);
		unk_0x193107EFB9C9FD44(5);
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 0);
	}
	if (func_95(func_101()))
	{
		func_650(-1);
	}
	else if (func_100(func_101()))
	{
	}
	else
	{
		func_646(-1, 1);
	}
	func_379(19);
	func_379(20);
	func_379(21);
	func_379(22);
	func_379(27);
	func_607(3);
	func_607(4);
	func_607(7);
	func_645();
	if (func_316(unk_0x4D29100D094E5511()))
	{
		func_378(0);
	}
	func_379(29);
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 = func_3();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (bParam0)
	{
		func_608();
	}
	if (!func_114(unk_0x4D29100D094E5511()))
	{
		func_617();
		unk_0xF17F4B0641AB2DE1(&(Global_1727391.f_3), 1);
	}
}

void func_645()
{
	if (func_381(unk_0x4D29100D094E5511()))
	{
		func_379(25);
	}
}

void func_646(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_101();
	}
	if (iParam0 > 0)
	{
		if (func_135() != func_3())
		{
			if (func_649(unk_0x4D29100D094E5511()) == unk_0x4D29100D094E5511())
			{
				Global_2459488.f_35[func_648(iParam0)] = 1;
			}
		}
		iVar0 = func_648(159);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(157);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(148);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(164);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(142);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(152);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(166);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(170);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(173);
		if (func_647(iVar0, Global_262145.f_10545, bParam1))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_647(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_102(unk_0x4D29100D094E5511(), 19) && !func_102(unk_0x4D29100D094E5511(), 20)) && !func_102(unk_0x4D29100D094E5511(), 9))
		{
			return 0;
		}
	}
	if (Global_2459488.f_35[iParam0] == 1 && func_60(&(Global_2459488[iParam0 /*2*/])))
	{
		if (func_287(&(Global_2459488[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_648(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_649(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_650(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_101();
	}
	if (iParam0 > 0)
	{
		if (func_135() != func_3())
		{
			Global_2459488.f_35[func_648(iParam0)] = 1;
		}
		iVar0 = func_648(155);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(163);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(160);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(153);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(162);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(154);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(171);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_648(172);
		if (func_647(iVar0, Global_262145.f_10546, 0))
		{
			func_43(&(Global_2459488[iVar0 /*2*/]));
			func_59(&(Global_2459488[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_651(int iParam0)
{
	if (!func_652(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_104[iParam0 /*3*/], func_653(), 0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_104[iParam0 /*3*/] = { func_653() };
	}
	if (!func_652(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_94[iParam0 /*3*/], func_653(), 0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_94[iParam0 /*3*/] = { func_653() };
	}
}

bool func_652(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_653()
{
	struct<3> Var0;
	
	return Var0;
}

int func_654(int iParam0)
{
	if (func_655(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

int func_655(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_656()
{
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1643), 28);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1643), 29);
	func_657(24);
}

void func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_658(var uParam0, var uParam1, var uParam2, int iParam3)
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
	
	uVar0 = unk_0x3AA961419D971CB2();
	Var1.f_0 = Global_1727400;
	Var1.f_1 = Global_1727400.f_1;
	Var1.f_2 = Global_1727400.f_2;
	Var1.f_3 = Global_1727400.f_3;
	Var1.f_4 = Global_1727400.f_4;
	Var1.f_5 = Global_1727400.f_5;
	Var1.f_6 = Global_1727400.f_6;
	Var1.f_7 = Global_1727400.f_7;
	Var1.f_8 = Global_1727400.f_8;
	Var1.f_9 = Global_1727400.f_9;
	Var1.f_10 = Global_1727400.f_10;
	Var1.f_11 = Global_1727400.f_11;
	Var1.f_12 = Global_1727400.f_12;
	Var1.f_13 = Global_1727400.f_14;
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0xC1C5B83BB6719C6C(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x9DF5A6B2A65CC289(&Var15);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = uParam1;
			unk_0x813B1B6A3864DFB6(&Var32);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = uParam0;
			unk_0x9100F5A1C14BE6B0(&Var49);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = uParam1;
			unk_0x949F0B92C8512472(&Var65);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = uParam0;
			unk_0x1E1529AC897B45DF(&Var82);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = uParam1;
			Var98.f_17 = uParam2;
			unk_0x385A5AC3A9B28064(&Var98);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = uParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = uParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (unk_0xC1C5B83BB6719C6C(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = uParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_659();
}

void func_659()
{
	struct<18> Var0;
	
	Global_1727400 = { Var0 };
}

void func_660()
{
	if (Global_1724872)
	{
		if (unk_0xF426A5DE932B3BEE(Global_1724873, 0))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2467235, 0);
		}
		if (unk_0xF426A5DE932B3BEE(Global_1724873, 1))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2467235, 1);
		}
		if (unk_0xF426A5DE932B3BEE(Global_1724873, 5))
		{
			unk_0xF17F4B0641AB2DE1(&Global_2467235, 5);
		}
		if (unk_0xF677DFDD2122F4F1(-355737150))
		{
			unk_0x29A7F2256763EE17(-355737150, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(-580979506))
		{
			unk_0x29A7F2256763EE17(-580979506, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(-1426452475))
		{
			unk_0x29A7F2256763EE17(-1426452475, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(745417724))
		{
			unk_0x29A7F2256763EE17(745417724, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(-1305304906))
		{
			unk_0x29A7F2256763EE17(-1305304906, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(-1543175077))
		{
			unk_0x29A7F2256763EE17(-1543175077, 1, 0, 0);
		}
		if (unk_0xF677DFDD2122F4F1(-811770997))
		{
			unk_0x29A7F2256763EE17(-811770997, 1, 0, 0);
		}
		Global_1724873 = 0;
	}
	Global_1724872 = 0;
}

void func_661(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_578(0))
	{
		uVar1 = func_663(func_61(), bParam0, bVar0, bParam1);
		func_662(bParam0, uVar1);
		func_557(0);
	}
}

void func_662(bool bParam0, var uParam1)
{
	Global_1727400.f_6 = unk_0x9CC4C10F8D665832();
	if (bParam0)
	{
		Global_1727400.f_7 = 1;
	}
	else
	{
		Global_1727400.f_7 = 0;
	}
	Global_1727400.f_8 = uParam1;
	if (Global_1727400.f_4 == 0)
	{
		if ((func_316(unk_0x4D29100D094E5511()) || func_109(unk_0x4D29100D094E5511())) || func_270(unk_0x4D29100D094E5511()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

int func_663(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_664(struct<20> Param0)
{
	int iVar0;
	
	func_678(func_679(Param0.f_0), Param0);
	unk_0x760D563099DDA295(func_676(170, -1));
	unk_0xD76663230247F023(func_674(170, -1));
	unk_0x50B946C04FF5E5E4(func_672(170, -1));
	func_669(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_196, 114);
	unk_0xEC578E04792A69AD(&Local_310, 97);
	unk_0xF160EBCA8FFA0E2A(0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_155[iVar0] = -1;
		iVar0++;
	}
	func_665(0, 0);
	return 1;
}

void func_665(int iParam0, int iParam1)
{
	func_668();
	func_667();
	if ((iParam0 != 0 && unk_0x27C9C05A6B4E58D2(iParam1)) && func_627(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x26545538B51562AD(&Global_1727386, 0);
				break;
			}
	}
	if (!func_227() && !func_271(unk_0x4D29100D094E5511(), 1))
	{
		if (func_458())
		{
			func_618(3);
		}
		func_618(4);
	}
	if (func_133(0))
	{
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_51 = func_135();
	}
	func_666();
}

void func_666()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_3();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

void func_667()
{
	func_657(33);
	func_657(34);
	func_657(35);
	func_657(36);
	func_657(37);
	func_657(38);
	func_657(39);
	func_657(40);
	func_657(43);
	func_657(41);
	func_657(54);
	func_657(42);
	func_657(47);
}

void func_668()
{
	struct<14> Var0;
	
	Global_1727400 = { Var0 };
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

int func_669(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3F2703DCC0FC2191();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_671();
			}
			else
			{
				return 0;
			}
		}
		if (!func_670())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x0E063DDE8855EC52())
				{
					if (!bParam2)
					{
						func_671();
					}
					else
					{
						return 0;
					}
				}
				if (func_635())
				{
					if (!bParam2)
					{
						func_671();
					}
					else
					{
						return 0;
					}
				}
				if (func_633(155))
				{
					if (!bParam2)
					{
						func_671();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92CB7725500E696A())
			{
				if (!bParam2)
				{
					func_671();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			if (!bParam2)
			{
				func_671();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92CB7725500E696A())
	{
		if (!bParam2)
		{
			func_671();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_670()
{
	return Global_1315888;
}

void func_671()
{
	unk_0x7C3AA2D27E16E2AD();
}

int func_672(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_673(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 6;
		
		default:
	}
	return 0;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_674(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_675(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		default:
	}
	return 0;
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_676(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_677(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		default:
	}
	return 0;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

void func_678(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		func_671();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
}

int func_679(int iParam0)
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

int func_680(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

