#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 0;
	var uLocal_85 = 16;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
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
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2170E7BC25114A22(11))
	{
		func_140();
	}
	if (func_98(Local_50, -1, 0, 0, 0))
	{
		func_95(-1);
	}
	else
	{
		unk_0x01DFCA3621B68C4A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_94();
		if (unk_0x0943F317505D1E39())
		{
			if (iLocal_59 > unk_0x84A97C70FFDEC0C8())
			{
				unk_0x18D8F843A9CCB4E5();
			}
			if (!func_93())
			{
				if (!func_93())
				{
					if (func_92())
					{
						func_140();
					}
				}
				unk_0xC60972F08795B988("RE_CGF", 0);
				switch (iLocal_46)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_53 = 1;
							iLocal_46 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
						{
							if ((!unk_0x00B5B0B68211D89B(uLocal_68) && !unk_0x00B5B0B68211D89B(iLocal_69[0])) && !unk_0x00B5B0B68211D89B(iLocal_69[1]))
							{
								if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, 0, 1, 0))
								{
									uLocal_60 = func_74(uLocal_68, 0, 145);
									unk_0x0D792BA553E57B27(uLocal_60, 9);
									uLocal_61[0] = func_74(iLocal_69[0], 1, 145);
									uLocal_61[1] = func_74(iLocal_69[1], 1, 145);
									unk_0x576211BDE434AC9A(uLocal_60, 0);
									unk_0x576211BDE434AC9A(uLocal_61[0], 0);
									unk_0x576211BDE434AC9A(uLocal_61[1], 0);
									func_64(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_69)
							{
								if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]))
								{
									unk_0xBB8F1D58B7578137(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0x00B5B0B68211D89B(uLocal_68))
							{
								unk_0xBB8F1D58B7578137(uLocal_68, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				unk_0xFA5E84DCAE200259(0f);
				unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
				if (!unk_0x00B5B0B68211D89B(uLocal_68))
				{
					if (unk_0x7D720C677145C91C(uLocal_68, unk_0xD5A676B97920D126(), 1))
					{
						unk_0xBB8F1D58B7578137(uLocal_68, unk_0xD5A676B97920D126(), 150f, -1, 0, 0);
						func_63();
					}
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), uLocal_68, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_48 >= 5 && iLocal_47 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_47)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_55 = true;
									iLocal_48 = 4;
								}
								break;
							
							case 1:
								if (iLocal_48 < 7 && !unk_0x00B5B0B68211D89B(uLocal_68))
								{
									if (unk_0x205B4FC17ACAF4C8(unk_0xD5A676B97920D126(), uLocal_68, 90f))
									{
										if (unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), uLocal_68) || unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), uLocal_68))
										{
											func_58();
										}
									}
								}
								func_53();
								break;
							
							case 2:
								func_9();
								break;
							
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_63();
					}
				}
				else
				{
					if (unk_0x6901135DDCC4904D(uLocal_60))
					{
						unk_0x8A3D7569826A325D(&uLocal_60);
					}
					if (((!unk_0x00B5B0B68211D89B(iLocal_69[0]) && !unk_0x00B5B0B68211D89B(iLocal_69[1])) && !unk_0xB529B2A4B7C64D6D(iLocal_77[0], 0)) && !unk_0xB529B2A4B7C64D6D(iLocal_77[1], 0))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_69)
					{
						if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar2]))
						{
							unk_0x182DAF81B229194E(iLocal_69[iVar2], unk_0xD5A676B97920D126(), 0, 16);
							unk_0x7D99F00F48D15ADB(iLocal_69[iVar2], 1);
							if (!unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_69[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (unk_0x6901135DDCC4904D(uLocal_61[iVar2]))
						{
							unk_0x8A3D7569826A325D(&(uLocal_61[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_63();
					}
				}
			}
		}
		else
		{
			func_140();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_53 && !iLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x6901135DDCC4904D(uLocal_60))
		{
			unk_0x8A3D7569826A325D(&uLocal_60);
		}
		if (!unk_0x00B5B0B68211D89B(uLocal_68))
		{
			unk_0x58A5671D02E335D1(uLocal_68, 0);
			unk_0x5457695C257D1470(uLocal_68, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (unk_0x6901135DDCC4904D(uLocal_61[iVar0]))
			{
				unk_0x8A3D7569826A325D(&(uLocal_61[iVar0]));
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
					{
						unk_0x1DC0501F19F1A583(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xD5A676B97920D126(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x7D99F00F48D15ADB(iLocal_69[iVar0], 1);
					}
					else
					{
						unk_0xBB8F1D58B7578137(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xBB8F1D58B7578137(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
				}
				unk_0x5457695C257D1470(iLocal_69[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
			{
				unk_0xB24D3BF5DABD13AA(&(iLocal_77[iVar0]));
				if (unk_0x0FE8D1B72C1924FE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xB3C38A4B84C152BF("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xFA5E84DCAE200259(1f);
		unk_0xC8BB600EA931F89A(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x5514278C13A88AA6();
		unk_0x0AF219B759EA8670(3, 1);
		unk_0x0AF219B759EA8670(5, 1);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
		iLocal_58 = 1;
	}
	if (unk_0x8E92CDAEB8357ABD(func_2(unk_0xFB6B3EEFAB2DD12C()), Local_50, 1) > 50f)
	{
		func_140();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(uParam0), 0);
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	Global_14611 = 0;
	func_5();
}

void func_5()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
	}
}

int func_6(char* sParam0)
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0xCC257DA11A122B5F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_7()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_8()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0xC9D9444186B5A374() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]) && !unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
					{
						if (!unk_0x6901135DDCC4904D(uLocal_61[iVar0]))
						{
							uLocal_61[iVar0] = func_74(iLocal_69[iVar0], 1, 145);
							if (unk_0x6A0583ECFCCECC9B(iLocal_69[iVar0], 0))
							{
								if (!bLocal_55)
								{
									unk_0x71908EDA6E89A925(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0x456121A0AAC868D4(&uLocal_84);
									unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
									unk_0xCFE67FBB69F1C410(uLocal_84);
									unk_0x8B06B801B92CEC2D(iLocal_69[iVar0], uLocal_84);
									unk_0x873418BFBF9A6780(&uLocal_84);
									unk_0x7D99F00F48D15ADB(iLocal_69[iVar0], 1);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_41(&uLocal_85, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_69)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar1]))
				{
					if (unk_0x1AAFFE4111587B35(iLocal_69[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, 0, 1, 0))
					{
						if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar1], 0))
						{
							unk_0xC1CDF4F2825C3F22(iLocal_77[iVar1], 0);
						}
						if (unk_0x6A0583ECFCCECC9B(iLocal_69[iVar1], 0))
						{
							unk_0x456121A0AAC868D4(&uLocal_84);
							unk_0xE9148EE8AA200B60(0, 0, 0);
							unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
							unk_0xCFE67FBB69F1C410(uLocal_84);
							unk_0x8B06B801B92CEC2D(iLocal_69[iVar1], uLocal_84);
							unk_0x873418BFBF9A6780(&uLocal_84);
							unk_0x7D99F00F48D15ADB(iLocal_69[iVar1], 1);
						}
					}
					if (!unk_0x6A0583ECFCCECC9B(iLocal_69[iVar1], 0))
					{
						unk_0x182DAF81B229194E(iLocal_69[iVar1], unk_0xD5A676B97920D126(), 0, 16);
						unk_0x7D99F00F48D15ADB(iLocal_69[iVar1], 1);
					}
					if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar1], 0))
					{
						if (unk_0xA86DCE8BD0C0CF8A(iLocal_77[iVar1]))
						{
						}
					}
				}
				if (unk_0x00B5B0B68211D89B(iLocal_69[iVar1]))
				{
					if (unk_0x6901135DDCC4904D(uLocal_61[iVar1]))
					{
						unk_0x8A3D7569826A325D(&(uLocal_61[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0x00B5B0B68211D89B(iLocal_69[2]) && unk_0x00B5B0B68211D89B(iLocal_69[3])) && unk_0x00B5B0B68211D89B(iLocal_69[4])) && unk_0x00B5B0B68211D89B(iLocal_69[5]))
			{
				unk_0xB3C38A4B84C152BF("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_48++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				unk_0x37338B7B7C4982DC(uLocal_68);
				unk_0x456121A0AAC868D4(&uLocal_84);
				unk_0x0988FFC0C75637DF(0, unk_0xD5A676B97920D126(), -1, 2056, 2);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), -1);
				unk_0xCFE67FBB69F1C410(uLocal_84);
				unk_0x8B06B801B92CEC2D(uLocal_68, uLocal_84);
				unk_0x873418BFBF9A6780(&uLocal_84);
			}
			if (!unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
			{
				unk_0x3C05FE2296BF5F53(uLocal_76);
				if (!unk_0x108650178993C477(unk_0xD5A676B97920D126(), uLocal_68, 5f, 5f, 5f, 0, 1, 0))
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_48++;
			break;
		
		case 3:
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), uLocal_68, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0x205B4FC17ACAF4C8(uLocal_68, unk_0xD5A676B97920D126(), 60f))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_85, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_48++;
							}
						}
					}
				}
			}
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				if (!unk_0x108650178993C477(uLocal_68, unk_0xD5A676B97920D126(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
			{
				if (unk_0x7D720C677145C91C(uLocal_76, unk_0xD5A676B97920D126(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_48++;
			break;
		
		case 5:
			if (!unk_0x00B5B0B68211D89B(uLocal_68) && !unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
			{
				unk_0x456121A0AAC868D4(&uLocal_84);
				unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 1500);
				unk_0x87D70F1F81DB77D3(0, uLocal_76, -1, -1, 2f, 8, 0);
				unk_0xFEC48628C9B9C876(0, 2000);
				unk_0x290A57C93304EF16(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xB192238F4F854097(0, uLocal_76, 10f, 786603);
				unk_0xCFE67FBB69F1C410(uLocal_84);
				unk_0x8B06B801B92CEC2D(uLocal_68, uLocal_84);
				unk_0x873418BFBF9A6780(&uLocal_84);
				unk_0x7D99F00F48D15ADB(uLocal_68, 1);
				unk_0x9170305A9FF2AF18(uLocal_76, 1);
				iLocal_48++;
			}
			break;
		
		case 6:
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				if (unk_0xEBA40DFF7CCE3511(uLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x1F2CF2B9307EAB08(uLocal_68, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0x6A0583ECFCCECC9B(uLocal_68, 0))
					{
						unk_0xE4AE6ABECCEA542F(unk_0x7E140C583F91AE2B(unk_0x0DBD8FE531FD620D(uLocal_68, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_48++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_41(&uLocal_85, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				func_10();
			}
			break;
	}
}

void func_10()
{
	while (func_8())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_39())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_14(-1, 0);
	func_11();
	iLocal_47 = 3;
}

void func_11()
{
	func_12();
}

int func_12()
{
	if (func_13(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_13(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_36(iParam0))
	{
		func_35(iParam0, iParam1);
		if (!func_34(51))
		{
			func_25("RE_REWARD", 1, 0, 4000, 10000, func_28(), 0, 138, 0);
			func_24(51);
		}
		if (func_23(iParam0))
		{
			Global_101652.f_23938.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_101640 = iParam1;
		if (Global_101638 == 0)
		{
			if (((Global_101641 == 1 || Global_101641 == 5) || Global_101641 == 11) || Global_101641 == 25)
			{
				func_15(2);
			}
			else if ((Global_101641 == 26 || Global_101641 == 8) || Global_101641 == 17)
			{
				func_15(7);
			}
			else
			{
				func_15(1);
			}
		}
	}
}

void func_15(int iParam0)
{
	Global_101638 = iParam0;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101652.f_9137[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101652.f_9137[iParam0 /*12*/].f_6 == 11 || Global_101652.f_9137[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101652.f_9137[iParam0 /*12*/].f_5 = 1;
		Global_101652.f_9137[iParam0 /*12*/].f_10 = uParam1;
		Global_101652.f_9137[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x04A30C8E64EF23A0(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_17();
	}
}

void func_17()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101388 = 0;
	Global_101389 = 0;
	Global_101390 = 0;
	Global_101391 = 0;
	Global_101392 = 0;
	Global_101393 = 0;
	Global_101394 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101652.f_9137.f_3853;
	Global_101652.f_9137.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101652.f_9137[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101652.f_9137[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101388++;
					fVar1 = (fVar1 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101389++;
					fVar2 = (fVar2 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101390++;
					fVar3 = (fVar3 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101391++;
					fVar4 = (fVar4 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101392++;
					fVar5 = (fVar5 + (Global_101652.f_9137[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101393++;
					fVar6 = (fVar6 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101394++;
					fVar7 = (fVar7 + Global_101652.f_9137[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101371 > 0)
	{
		if (Global_101388 == Global_101371)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101372 > 0)
	{
		if (Global_101389 == Global_101372)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101373 > 0)
	{
		if (Global_101390 == Global_101373)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101374 > 0)
	{
		if (Global_101391 == Global_101374)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101375 > 0)
	{
		if (((Global_101392 == Global_101375 || (Global_101375 * 10 / Global_101392) < 41) || Global_101392 > Global_101378) || Global_101392 == Global_101378)
		{
			if (!unk_0xF44A5E894FE76438(Global_101652.f_9137.f_3856, 14))
			{
				if (Global_101392 == Global_101375)
				{
					unk_0x04A30C8E64EF23A0(joaat("num_rndevents_completed"), Global_101375, 0);
					unk_0xB8A73E7DA87B2968(&(Global_101652.f_9137.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101376 > 0)
	{
		if (Global_101393 == Global_101376)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101377 > 0)
	{
		if (Global_101394 == Global_101377)
		{
			fVar7 = 5f;
		}
	}
	Global_101652.f_9137.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101392 > Global_101378 || Global_101392 == Global_101378)
	{
		iVar9 = Global_101378;
	}
	else
	{
		iVar9 = Global_101392;
	}
	unk_0xB924315F0872835A(joaat("num_missions_completed"), Global_101388, 1);
	unk_0xB924315F0872835A(joaat("num_missions_available"), Global_101371, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_completed"), Global_101389, 1);
	unk_0xB924315F0872835A(joaat("num_minigames_available"), Global_101372, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_completed"), Global_101390, 1);
	unk_0xB924315F0872835A(joaat("num_oddjobs_available"), Global_101373, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_completed"), Global_101391, 1);
	unk_0xB924315F0872835A(joaat("num_rndpeople_available"), Global_101374, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xB924315F0872835A(joaat("num_rndevents_available"), Global_101378, 1);
	unk_0xB924315F0872835A(joaat("num_misc_completed"), (Global_101394 + Global_101393), 1);
	unk_0xB924315F0872835A(joaat("num_misc_available"), (Global_101377 + Global_101376), 1);
	Global_101395 = (Global_101388 * 100 / Global_101371);
	Global_101397 = ((Global_101390 + Global_101389) * 100 / (Global_101373 + Global_101372));
	Global_101396 = ((Global_101391 + iVar9) * 100 / (Global_101374 + Global_101378));
	Global_101398 = ((Global_101393 + Global_101394) * 100 / (Global_101376 + Global_101377));
	unk_0x45ADCFA1AACD5CCD(joaat("total_progress_made"), Global_101652.f_9137.f_3853, 1);
	unk_0xB924315F0872835A(joaat("percent_story_missions"), Global_101395, 1);
	unk_0xB924315F0872835A(joaat("percent_ambient_missions"), Global_101396, 1);
	unk_0xB924315F0872835A(joaat("percent_oddjobs"), Global_101397, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_101652.f_9137.f_3853));
	}
	if (!unk_0x56958F2CF14CF671())
	{
		if (!Global_69697)
		{
			if (func_18() == 2 == 0 && !unk_0x1995B52453EF6537())
			{
				if (unk_0x09F10A67721D6115())
				{
					Global_101386 = 0;
				}
				if (!Global_55818)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_25185;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x075D9EC324E17D48((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x0BC5C40DA70F6F4E((iParam0 - 0)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x075D9EC324E17D48((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x0BC5C40DA70F6F4E((iParam0 - 192)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x075D9EC324E17D48((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x0BC5C40DA70F6F4E((iParam0 - 513)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x075D9EC324E17D48((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x0BC5C40DA70F6F4E((iParam0 - 705)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x02A8B6976F1BEB99((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x0BC5C40DA70F6F4E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x02A8B6976F1BEB99((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x0BC5C40DA70F6F4E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xA6F84F542C2213FD((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xA6F84F542C2213FD((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x0BC5C40DA70F6F4E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xA6F84F542C2213FD((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x0BC5C40DA70F6F4E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xA6F84F542C2213FD((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xA6F84F542C2213FD((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x0BC5C40DA70F6F4E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xA6F84F542C2213FD((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x0BC5C40DA70F6F4E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x1B136FFAA64B3BE2(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312731;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_19353.f_150[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCC257DA11A122B5F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_101652.f_19353[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101652.f_19353.f_145 < 9)
	{
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_4), sParam1, 16);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_8 = (unk_0x84A97C70FFDEC0C8() + iParam3);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_9 = iParam5;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_11 = iParam6;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_12 = uParam2;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_13 = iParam7;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_14 = iParam8;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = ((unk_0x84A97C70FFDEC0C8() + iParam3) + iParam4);
		}
		else
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = -1;
		}
		Global_101652.f_19353.f_145++;
		func_27();
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101652.f_19353.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[0])
			{
				Global_101652.f_19353.f_146[0] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[1])
			{
				Global_101652.f_19353.f_146[1] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[2])
			{
				Global_101652.f_19353.f_146[2] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_28()
{
	func_29();
	switch (Global_101652.f_2079.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_33(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_32(unk_0xD5A676B97920D126());
			if (func_31(iVar0) && (!func_30(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_31(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_30(int iParam0)
{
	return Global_35777 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_19353.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_35(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_23938.f_8[iParam0]), iParam1);
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_37()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0FBCE11007AF301F(), 64);
	uVar16 = func_38(Var0);
	return uVar16;
}

int func_38(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6D9FF4C899CD785F(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_39()
{
	return 1;
}

void func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x84A97C70FFDEC0C8() + iParam0);
	while (unk_0x84A97C70FFDEC0C8() <= iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_59 > unk_0x84A97C70FFDEC0C8())
		{
			unk_0x18D8F843A9CCB4E5();
		}
	}
}

bool func_41(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_51();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_49();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_47();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_45())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_44();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_43();
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
		func_51();
	}
	return 0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_44()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_45()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_47()
{
	if (func_30(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_48();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_48()
{
	func_29();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_51()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

void func_53()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				iLocal_48++;
			}
			break;
		
		case 1:
			if (!unk_0x00B5B0B68211D89B(uLocal_68))
			{
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), uLocal_68, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x0988FFC0C75637DF(uLocal_68, unk_0xD5A676B97920D126(), -1, 2060, 2);
					func_41(&uLocal_85, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
			{
				unk_0x456121A0AAC868D4(&uLocal_84);
				unk_0x1D2CBA8F2F00D745(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0xCFE67FBB69F1C410(uLocal_84);
				unk_0x8B06B801B92CEC2D(iLocal_68, uLocal_84);
				unk_0x873418BFBF9A6780(&uLocal_84);
				iLocal_48++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_48() == 2)
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		
		case 4:
			if (!unk_0x00B5B0B68211D89B(iLocal_68))
			{
				if (unk_0x1AAFFE4111587B35(iLocal_68, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, 0, 1, 0))
				{
					if (!unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_85, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0xBE29918F5B8EC2EF(iLocal_68, unk_0xD5A676B97920D126(), -1);
								if (!unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
								{
									unk_0x3C05FE2296BF5F53(uLocal_76);
								}
								iLocal_48++;
							}
						}
					}
					else
					{
						if (!unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
						{
							unk_0x3C05FE2296BF5F53(uLocal_76);
						}
						iLocal_48 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_48++;
			}
			break;
		
		case 6:
			if (!unk_0x00B5B0B68211D89B(iLocal_68))
			{
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0) || unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0x00B5B0B68211D89B(iLocal_69[2])) && !unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
							{
								unk_0x456121A0AAC868D4(&uLocal_84);
								unk_0xB115D2E4CAD19139(0, uLocal_76, -1, -1, 1f);
								unk_0x0988FFC0C75637DF(0, iLocal_69[2], 2000, 0, 2);
								unk_0xBE29918F5B8EC2EF(0, iLocal_69[2], 0);
								unk_0xCFE67FBB69F1C410(uLocal_84);
								unk_0x8B06B801B92CEC2D(iLocal_68, uLocal_84);
								unk_0x873418BFBF9A6780(&uLocal_84);
								func_40(2000);
								func_4();
								func_40(0);
								func_41(&uLocal_85, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0xB529B2A4B7C64D6D(uLocal_76, 0)) && unk_0x6A0583ECFCCECC9B(iLocal_68, 0))
								{
									iLocal_48++;
								}
								else
								{
									if (!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0x00B5B0B68211D89B(iLocal_69[2]))
									{
										unk_0x456121A0AAC868D4(&uLocal_84);
										unk_0xD4BBFF77570A437F(0, -1);
										unk_0xCFE67FBB69F1C410(uLocal_84);
										unk_0x8B06B801B92CEC2D(iLocal_68, uLocal_84);
										unk_0x873418BFBF9A6780(&uLocal_84);
									}
									bLocal_55 = false;
									unk_0x5AE11BC36633DE4E(0);
									iLocal_48++;
								}
							}
						}
					}
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(uLocal_76, 0))
			{
				if (unk_0x7D720C677145C91C(uLocal_76, unk_0xD5A676B97920D126(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0xB529B2A4B7C64D6D(uLocal_76, 0)) && !unk_0x04D83291EB9DE51D(iLocal_68, uLocal_76, 0)) && !unk_0xD147F8B99C847EFB(iLocal_68, 0)) && !unk_0x900A6B7A2195FBE8(iLocal_68))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]) && !unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
				{
					if (((((unk_0xD791800F46A14BF7(unk_0xD5A676B97920D126(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_69[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0x7D720C677145C91C(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 1)) || unk_0x7D720C677145C91C(iLocal_77[iVar0], unk_0xD5A676B97920D126(), 1)) || unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), iLocal_69[iVar0])) || unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), iLocal_77[iVar0]))
					{
						bLocal_55 = true;
						unk_0x5AE11BC36633DE4E(2000);
						iLocal_48 = 0;
						iLocal_47 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0x00B5B0B68211D89B(iLocal_69[2]) && unk_0x00B5B0B68211D89B(iLocal_69[3])) && unk_0x00B5B0B68211D89B(iLocal_69[4])) && unk_0x00B5B0B68211D89B(iLocal_69[5]))
			{
				iLocal_48 = 2;
				iLocal_47 = 2;
			}
			if (unk_0x1AAFFE4111587B35(iLocal_69[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_69)
				{
					if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]))
					{
						if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
						{
							if (unk_0x04D83291EB9DE51D(iLocal_69[iVar0], iLocal_77[iVar0], 0))
							{
								unk_0x1DC0501F19F1A583(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xD5A676B97920D126(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0x00B5B0B68211D89B(iLocal_68))
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 15f, 15f, 15f, 0, 1, 0))
					{
						func_54();
						func_40(0);
						func_41(&uLocal_85, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_48 = 0;
				iLocal_47 = 2;
			}
			break;
	}
}

void func_54()
{
	Global_14611 = 0;
	func_55();
}

void func_55()
{
	if (unk_0x33688D334D224255())
	{
		unk_0xB6A622037A2FE913();
		Global_16756 = 0;
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

int func_56()
{
	int iVar0;
	
	if (((((((!unk_0x7887B64A08364778(iLocal_77[2]) && !unk_0x7887B64A08364778(iLocal_77[3])) && !unk_0x7887B64A08364778(iLocal_77[4])) && !unk_0x7887B64A08364778(iLocal_77[5])) && !unk_0x7887B64A08364778(iLocal_69[2])) && !unk_0x7887B64A08364778(iLocal_69[3])) && !unk_0x7887B64A08364778(iLocal_69[4])) && !unk_0x7887B64A08364778(iLocal_69[5]))
	{
		unk_0x4ACD1E4CBA159ED1(joaat("hexer"));
		unk_0x4ACD1E4CBA159ED1(joaat("g_m_y_lost_01"));
		unk_0x4ACD1E4CBA159ED1(joaat("g_m_y_lost_02"));
		unk_0xE3E53903AE9B5BD5("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0x7AD0E9452821C95D(joaat("hexer")))
		{
			iLocal_77[2] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, 1, 1);
			iLocal_77[3] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, 1, 1);
			iLocal_77[4] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, 1, 1);
			iLocal_77[5] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, 1, 1);
			unk_0x8188DB74546FF484(joaat("hexer"));
			unk_0xB494A0EDE8784750(iLocal_77[2], 3);
			unk_0xB494A0EDE8784750(iLocal_77[4], 3);
			iLocal_59 = unk_0x84A97C70FFDEC0C8() + 1500;
		}
		if ((unk_0x7AD0E9452821C95D(joaat("g_m_y_lost_01")) && unk_0x7AD0E9452821C95D(joaat("g_m_y_lost_02"))) && unk_0x0FE8D1B72C1924FE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_69[2] = unk_0x0BD2D83BDCAED6E6(iLocal_77[2], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_69[3] = unk_0x0BD2D83BDCAED6E6(iLocal_77[3], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			iLocal_69[4] = unk_0x0BD2D83BDCAED6E6(iLocal_77[4], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_69[5] = unk_0x0BD2D83BDCAED6E6(iLocal_77[5], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			func_57(&uLocal_85, 4, iLocal_69[4], "RECGFLost3", 0, 1);
			iLocal_59 = unk_0x84A97C70FFDEC0C8() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]) && !unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
				{
					unk_0x233D2784147A4FE4(iLocal_77[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0x237B0CFB6EEBD3BA(iLocal_69[iVar0], 137, 1);
					unk_0xD6E6C197BF8B123B(iLocal_69[iVar0], 0);
					unk_0xCEFA2AEA28935397(iLocal_69[iVar0], 2);
					unk_0x77E24C0B92B4FC24(iLocal_69[iVar0], 50, 1);
					unk_0xABB48CA0EFB4A847(iLocal_69[iVar0], 2);
					unk_0x1307B01DBFFE637B(iLocal_69[iVar0], 50f, 20);
					unk_0x864E32F86CD39E03(iLocal_69[iVar0], 1);
					unk_0xCC1ADAE00A66FF6C(iLocal_69[iVar0], 13);
					unk_0x006AB1912F31FD47(iLocal_69[iVar0], 100f);
					unk_0x3F0508FC63D0DEF5(iLocal_69[iVar0], 100f);
					unk_0x417BCC1ECC12E9A2(iLocal_69[iVar0], uLocal_250);
					unk_0x5457695C257D1470(iLocal_69[iVar0], 1);
					unk_0x178D16D6E43C6FAE(iLocal_69[iVar0], 3);
					unk_0xAD9B2747252CCD14(iLocal_69[iVar0], 0);
					unk_0x74084690B489CA8D(iLocal_69[iVar0], 1);
					unk_0x9B099BCCBD872090(iLocal_69[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x4408969E7EC5C720(iLocal_69[iVar0], joaat("weapon_pistol"), -1, 1, 1);
					}
					else
					{
						unk_0x4408969E7EC5C720(iLocal_69[iVar0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					}
					unk_0x456121A0AAC868D4(&uLocal_84);
					unk_0xCE8917A47B1D85F4(0, iLocal_77[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x8AEEE13F802C81D6(0, Local_50, 5000, 0, 2);
					unk_0xCFE67FBB69F1C410(uLocal_84);
					unk_0x8B06B801B92CEC2D(iLocal_69[2], uLocal_84);
					unk_0x873418BFBF9A6780(&uLocal_84);
					unk_0x456121A0AAC868D4(&uLocal_84);
					unk_0xCE8917A47B1D85F4(0, iLocal_77[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x8AEEE13F802C81D6(0, Local_50, 5000, 0, 2);
					unk_0xCFE67FBB69F1C410(uLocal_84);
					unk_0x8B06B801B92CEC2D(iLocal_69[3], uLocal_84);
					unk_0x873418BFBF9A6780(&uLocal_84);
					unk_0x7D99F00F48D15ADB(iLocal_69[3], 1);
					unk_0x456121A0AAC868D4(&uLocal_84);
					unk_0xCE8917A47B1D85F4(0, iLocal_77[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x8AEEE13F802C81D6(0, Local_50, 5000, 0, 2);
					unk_0xCFE67FBB69F1C410(uLocal_84);
					unk_0x8B06B801B92CEC2D(iLocal_69[4], uLocal_84);
					unk_0x873418BFBF9A6780(&uLocal_84);
					unk_0x456121A0AAC868D4(&uLocal_84);
					unk_0xCE8917A47B1D85F4(0, iLocal_77[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x8AEEE13F802C81D6(0, Local_50, 5000, 0, 2);
					unk_0xCFE67FBB69F1C410(uLocal_84);
					unk_0x8B06B801B92CEC2D(iLocal_69[5], uLocal_84);
					unk_0x873418BFBF9A6780(&uLocal_84);
				}
				iVar0++;
			}
			unk_0x8188DB74546FF484(joaat("hexer"));
			unk_0x8188DB74546FF484(joaat("g_m_y_lost_01"));
			unk_0x8188DB74546FF484(joaat("g_m_y_lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_58()
{
	if (!unk_0x00B5B0B68211D89B(iLocal_68))
	{
		unk_0xBB8F1D58B7578137(iLocal_68, unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
		unk_0x7D99F00F48D15ADB(iLocal_68, 1);
		if (!unk_0xB529B2A4B7C64D6D(iLocal_69[0], 0) && !unk_0xB529B2A4B7C64D6D(iLocal_69[1], 0))
		{
			unk_0xE81D470B804DC69A(iLocal_68, 101);
			unk_0x58A5671D02E335D1(iLocal_68, 0);
			unk_0xB05C28FE95F9A2F5(iLocal_69[0], iLocal_68, 1000, 0);
			unk_0xB05C28FE95F9A2F5(iLocal_69[1], iLocal_68, 1000, 0);
		}
		else
		{
			func_4();
			func_40(0);
			if (!unk_0x00B5B0B68211D89B(iLocal_68))
			{
				func_59(iLocal_68, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}

void func_59(var uParam0, char* sParam1, int iParam2)
{
	unk_0x66D323B3A964108A(uParam0, sParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_61()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_48() == 0)
					{
						func_41(&uLocal_85, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_48() == 1)
					{
						func_41(&uLocal_85, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_48() == 2)
					{
						func_41(&uLocal_85, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_48++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x00B5B0B68211D89B(iLocal_68))
			{
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_41(&uLocal_85, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_48++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_41(&uLocal_85, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_48++;
			}
			break;
		
		case 3:
			if ((!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0x00B5B0B68211D89B(iLocal_69[0])) && !unk_0x00B5B0B68211D89B(iLocal_69[1]))
			{
				if ((unk_0x83666F9FB8FEBD4B() > 5000 && !iLocal_56) && !func_8())
				{
					func_41(&uLocal_85, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_56 = 1;
				}
				if (unk_0x83666F9FB8FEBD4B() < 28000)
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0x7F70E3EF57F17B9B(iLocal_69[0], unk_0xD5A676B97920D126()) || unk_0x7F70E3EF57F17B9B(iLocal_69[1], unk_0xD5A676B97920D126())) || unk_0xEC1217CD8003F6C6(iLocal_69[0], unk_0xD5A676B97920D126())) || unk_0xEC1217CD8003F6C6(iLocal_69[1], unk_0xD5A676B97920D126()))
						{
							unk_0x0988FFC0C75637DF(iLocal_69[0], unk_0xD5A676B97920D126(), 4000, 2056, 4);
							unk_0x0988FFC0C75637DF(iLocal_69[1], unk_0xD5A676B97920D126(), 4000, 2056, 4);
							if (!iLocal_57)
							{
								func_4();
								func_40(0);
								if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
								{
									func_41(&uLocal_85, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_41(&uLocal_85, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_57 = 1;
							}
						}
					}
					else if (!unk_0xEBA40DFF7CCE3511(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0x205B4FC17ACAF4C8(iLocal_69[0], iLocal_68, 10f))
						{
							unk_0x50FF381592977875(iLocal_69[0], iLocal_68, -1, 0);
						}
					}
				}
				else if (!unk_0xB529B2A4B7C64D6D(iLocal_77[0], 0) && !unk_0xB529B2A4B7C64D6D(iLocal_77[1], 0))
				{
					func_4();
					func_40(0);
					func_41(&uLocal_85, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]))
				{
					unk_0x12A60388636C9B1C(iLocal_69[iVar0], 156, 1);
					unk_0x182DAF81B229194E(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 0, 16);
					unk_0x7D99F00F48D15ADB(iLocal_69[iVar0], 1);
				}
				iVar0++;
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_68))
			{
				unk_0xD4BBFF77570A437F(iLocal_68, -1);
			}
			iLocal_48++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (unk_0x00B5B0B68211D89B(iLocal_69[iVar0]))
				{
					if (unk_0x6901135DDCC4904D(uLocal_61[iVar0]))
					{
						unk_0x8A3D7569826A325D(&(uLocal_61[iVar0]));
						func_3(&uLocal_85, 2);
						func_3(&uLocal_85, 3);
					}
				}
				iVar0++;
			}
			if (unk_0x00B5B0B68211D89B(iLocal_69[0]) && unk_0x00B5B0B68211D89B(iLocal_69[1]))
			{
				iLocal_48 = 0;
				iLocal_47 = 1;
			}
			break;
	}
}

void func_62()
{
	if (!unk_0xBB36CABE30AE5FC4(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0x80AA649904BB5788(), 0))
		{
			if (unk_0x1AAFFE4111587B35(unk_0x80AA649904BB5788(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, 0, 1, 0))
			{
				unk_0xBB9A2DB94A862D7A(unk_0x80AA649904BB5788(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_63()
{
	iLocal_47 = 3;
}

int func_64(int iParam0)
{
	if (func_68())
	{
		Global_101642 = 1;
		Global_101639 = unk_0x84A97C70FFDEC0C8();
		if (func_23(Global_101641))
		{
			func_65(0);
		}
		unk_0x2CD0538D8247BA65(1, "RE_TITLE");
		if (iParam0 && func_23(Global_101641))
		{
			unk_0xB77AFA5DEFB190B1();
		}
		return 1;
	}
	return 0;
}

void func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101652.f_23938.f_2 < 3)
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_66(func_67(iParam0), -1);
					Global_101652.f_23938.f_2++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF44A5E894FE76438(Global_101648, 1))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_66(func_67(iParam0), -1);
					Global_101652.f_23938.f_3++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xF44A5E894FE76438(Global_101648, 2))
			{
				if (!unk_0xC3D14EA5FB0933FE())
				{
					func_66(func_67(iParam0), -1);
					Global_101652.f_23938.f_4++;
					unk_0xB8A73E7DA87B2968(&Global_101648, 2);
				}
			}
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	unk_0xA97D81951B964419(uParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_68()
{
	switch (func_69(&Global_25244, 0, 5, 0, unk_0x3ED6DDB11A7AD67F()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_69(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89297.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_73(0))
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		unk_0x680452B13E83C406(unk_0xF3F8195C98263BF5(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x503D3643C5FE49F7(8);
		}
		Global_35777 = iParam2;
		Global_35739 = *uParam0;
		Global_35740 = iParam4;
		Global_35738 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35738 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35738)
			{
				if (Global_35744[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35739 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_71(iParam2))
		{
			return 0;
		}
		if (Global_35738 == 8)
		{
			return 0;
		}
		Global_35741++;
		*uParam0 = Global_35741;
		Global_35744[Global_35738 /*4*/] = Global_35741;
		Global_35744[Global_35738 /*4*/].f_1 = iParam1;
		Global_35744[Global_35738 /*4*/].f_2 = iParam2;
		Global_35744[Global_35738 /*4*/].f_3 = 0;
		Global_35738++;
		if (iParam4 != 0)
		{
			func_70(uParam0, iParam4);
		}
	}
	return 2;
}

void func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35738 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35738)
	{
		if (Global_35744[iVar0 /*4*/] == *uParam0)
		{
			Global_35744[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_35777);
}

int func_72(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_73(int iParam0)
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	if (func_71(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_74(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_75(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(uParam0);
	if (unk_0x8041FE602D4689B1(uParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_76(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(uParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_76(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(uParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_76(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_77()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!bLocal_55)
	{
		unk_0x42AFB71D42AF78EA(255, uLocal_250, joaat("player"));
		if (!unk_0xB529B2A4B7C64D6D(iLocal_69[0], 0) && !unk_0xB529B2A4B7C64D6D(iLocal_69[1], 0))
		{
			if (unk_0x7D720C677145C91C(iLocal_69[0], unk_0xD5A676B97920D126(), 1) || unk_0x7D720C677145C91C(iLocal_69[1], unk_0xD5A676B97920D126(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0xB529B2A4B7C64D6D(unk_0x80AA649904BB5788(), 0))
			{
				if (unk_0x7D720C677145C91C(iLocal_69[0], unk_0x80AA649904BB5788(), 1) || unk_0x7D720C677145C91C(iLocal_69[1], unk_0x80AA649904BB5788(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iLocal_77[0], 0) && !unk_0xB529B2A4B7C64D6D(iLocal_77[1], 0))
		{
			if (((unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77[0], 0) || unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_77[1], 0)) || unk_0x7D720C677145C91C(iLocal_77[0], unk_0xD5A676B97920D126(), 1)) || unk_0x7D720C677145C91C(iLocal_77[1], unk_0xD5A676B97920D126(), 1))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_69[0]) && !unk_0x00B5B0B68211D89B(iLocal_69[1]))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_85, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0x00B5B0B68211D89B(iLocal_69[0]) || unk_0x00B5B0B68211D89B(iLocal_69[1]))
		{
			func_4();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var3 = { -15f, -15f, -15f };
		if (!unk_0x00B5B0B68211D89B(iLocal_69[0]))
		{
			if (unk_0x1DEB1994A3C25E35(unk_0x6DE9A8183DA7678E(iLocal_69[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			Var0 = { Var0 + unk_0x6DE9A8183DA7678E(iLocal_69[0], 31086, 0f, 0f, 0f) };
			Var3 = { Var3 + unk_0x6DE9A8183DA7678E(iLocal_69[0], 31086, 0f, 0f, 0f) };
			if (((unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_grenadelauncher"), 1)) || unk_0xC02F302EE238AE9E(Var3, Var0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0xB8BA2B805FCFD11B(unk_0x6DE9A8183DA7678E(iLocal_69[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0xD791800F46A14BF7(unk_0xD5A676B97920D126(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0x00B5B0B68211D89B(iLocal_68) && !unk_0x00B5B0B68211D89B(iLocal_69[0])) && !unk_0x00B5B0B68211D89B(iLocal_69[1]))
		{
			if (iLocal_49 != -1)
			{
				if (((unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_69[0]) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iLocal_69[1])) || unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_69[0])) || unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iLocal_69[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_68, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0x7F70E3EF57F17B9B(iLocal_69[0], unk_0xD5A676B97920D126()) || unk_0x7F70E3EF57F17B9B(iLocal_69[1], unk_0xD5A676B97920D126())) || unk_0xEC1217CD8003F6C6(iLocal_69[0], unk_0xD5A676B97920D126())) || unk_0xEC1217CD8003F6C6(iLocal_69[1], unk_0xD5A676B97920D126()))
				{
					if (!iLocal_54)
					{
						unk_0x50FF381592977875(iLocal_69[0], unk_0xD5A676B97920D126(), -1, 0);
						iLocal_54 = 1;
					}
					if (unk_0x6901135DDCC4904D(uLocal_60))
					{
						unk_0x576211BDE434AC9A(uLocal_60, 1);
					}
					if (unk_0x6901135DDCC4904D(uLocal_61[0]))
					{
						unk_0x576211BDE434AC9A(uLocal_61[0], 1);
					}
					if (unk_0x6901135DDCC4904D(uLocal_61[1]))
					{
						unk_0x576211BDE434AC9A(uLocal_61[1], 1);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_49 == -1)
						{
							iLocal_49 = unk_0x84A97C70FFDEC0C8();
							if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
							{
								func_4();
								func_40(0);
								func_41(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_40(0);
								func_41(&uLocal_85, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
				iLocal_49 = -1;
			}
			if (iLocal_49 != -1 && unk_0x84A97C70FFDEC0C8() > iLocal_49 + 10000)
			{
				func_4();
				func_40(0);
				func_41(&uLocal_85, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0x7D720C677145C91C(iLocal_69[0], unk_0xD5A676B97920D126(), 1) && !unk_0x7D720C677145C91C(iLocal_69[1], unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x7D720C677145C91C(iLocal_68, unk_0xD5A676B97920D126(), 1))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_85, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_78()
{
	if (unk_0xA4DB44DF73EF4FE5(uLocal_76, 0))
	{
		if ((!unk_0x1AAFFE4111587B35(uLocal_76, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, 0, 1, 0) && !unk_0x04D83291EB9DE51D(iLocal_68, iLocal_76, 0)) || unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_76, 1))
		{
			func_58();
		}
	}
	else
	{
		func_58();
	}
}

int func_79()
{
	int iVar0;
	
	if (((((!unk_0x7887B64A08364778(iLocal_68) && !unk_0x7887B64A08364778(iLocal_69[0])) && !unk_0x7887B64A08364778(iLocal_69[1])) && !unk_0x7887B64A08364778(iLocal_76)) && !unk_0x7887B64A08364778(iLocal_77[0])) && !unk_0x7887B64A08364778(iLocal_77[1]))
	{
		unk_0x4ACD1E4CBA159ED1(joaat("a_m_m_skidrow_01"));
		unk_0x4ACD1E4CBA159ED1(joaat("g_m_y_lost_01"));
		unk_0x4ACD1E4CBA159ED1(joaat("g_m_y_lost_02"));
		unk_0x4ACD1E4CBA159ED1(joaat("picador"));
		unk_0x4ACD1E4CBA159ED1(joaat("hexer"));
		unk_0x49E996A1E39EAAD7("random@countryside_gang_fight");
		unk_0x49E996A1E39EAAD7("veh@drivebystd_ds_grenades");
		unk_0x34868F78B53C7F66("move_m@gangster@var_i");
		if (((((((unk_0x7AD0E9452821C95D(joaat("a_m_m_skidrow_01")) && unk_0x7AD0E9452821C95D(joaat("g_m_y_lost_01"))) && unk_0x7AD0E9452821C95D(joaat("g_m_y_lost_02"))) && unk_0x7AD0E9452821C95D(joaat("picador"))) && unk_0x7AD0E9452821C95D(joaat("hexer"))) && unk_0xD7669BF035CDA5F6("random@countryside_gang_fight")) && unk_0xD7669BF035CDA5F6("veh@drivebystd_ds_grenades")) && unk_0x7F2866878D364099("move_m@gangster@var_i"))
		{
			unk_0xFA03BA297FE81584(joaat("picador"), 1);
			unk_0xFA03BA297FE81584(joaat("hexer"), 1);
			unk_0xFC9F3169185868E7(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, 0, 1);
			unk_0x2B2CCF3F6B9ED3A3(Local_50 - Vector(20f, 50f, 80f), Local_50 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0x0AF219B759EA8670(3, 0);
			unk_0x0AF219B759EA8670(5, 0);
			unk_0x5CF7BD3BFEB33582("rghLost", &uLocal_250);
			unk_0x42AFB71D42AF78EA(5, uLocal_250, joaat("player"));
			iLocal_68 = unk_0x8C855D8124E955CE(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, 1);
			unk_0x5BD2F51088536150(iLocal_68, 0, 0, 1, 0);
			unk_0x5BD2F51088536150(iLocal_68, 2, 1, 0, 0);
			unk_0x5BD2F51088536150(iLocal_68, 3, 1, 2, 0);
			unk_0x5BD2F51088536150(iLocal_68, 4, 0, 0, 0);
			unk_0x8188DB74546FF484(joaat("a_m_m_skidrow_01"));
			unk_0x5457695C257D1470(iLocal_68, 1);
			unk_0x77E24C0B92B4FC24(iLocal_68, 17, 1);
			unk_0x74084690B489CA8D(iLocal_68, 0);
			unk_0x58A5671D02E335D1(iLocal_68, 1);
			unk_0x237B0CFB6EEBD3BA(iLocal_68, 185, 1);
			unk_0x20781E01469DE714(iLocal_68, 16);
			unk_0x545EC2C7EB66F6DD(iLocal_68, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_57(&uLocal_85, 1, iLocal_68, "RECGFDealer", 0, 1);
			unk_0xBE1D89447A1203C9(iLocal_68, 1);
			unk_0x290A57C93304EF16(iLocal_68, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x0501413236B03301(iLocal_68, "move_m@gangster@var_i", 1048576000);
			iLocal_76 = unk_0xDE8A46A23FDCBBFE(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, 1, 1);
			unk_0xC243EB5E21E9A4EE(iLocal_76, 37, 0);
			unk_0x44ADE3DECA6FE50F(iLocal_76, 4, 0);
			unk_0x0FAFBEB53F57438C(iLocal_76, 1);
			unk_0x1364ED1BFBE98E4E(iLocal_76, "WDU 696");
			iLocal_69[0] = unk_0x8C855D8124E955CE(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, 1);
			func_57(&uLocal_85, 3, iLocal_69[0], "RECGFLost2", 0, 1);
			iLocal_69[1] = unk_0x8C855D8124E955CE(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, 1);
			func_57(&uLocal_85, 2, iLocal_69[1], "RECGFLost1", 0, 1);
			unk_0x8188DB74546FF484(joaat("g_m_y_lost_01"));
			unk_0x8188DB74546FF484(joaat("g_m_y_lost_02"));
			iLocal_77[0] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, 1, 1);
			iLocal_77[1] = unk_0xDE8A46A23FDCBBFE(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, 1, 1);
			unk_0x8188DB74546FF484(joaat("hexer"));
			unk_0x290A57C93304EF16(iLocal_69[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x290A57C93304EF16(iLocal_69[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_69)
			{
				if (iVar0 < 2)
				{
					unk_0xD6E6C197BF8B123B(iLocal_69[iVar0], 0);
					unk_0x417BCC1ECC12E9A2(iLocal_69[iVar0], uLocal_250);
					unk_0xCEFA2AEA28935397(iLocal_69[iVar0], 2);
					unk_0x77E24C0B92B4FC24(iLocal_69[iVar0], 50, 1);
					unk_0x864E32F86CD39E03(iLocal_69[iVar0], 0);
					unk_0x4408969E7EC5C720(iLocal_69[0], joaat("weapon_pistol"), -1, 1, 1);
					unk_0x4408969E7EC5C720(iLocal_69[1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					unk_0x7D99F00F48D15ADB(iLocal_69[iVar0], 1);
					unk_0x5457695C257D1470(iLocal_69[iVar0], 1);
					unk_0x6D20A3AA82585D8C(iLocal_69[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_59 = unk_0x84A97C70FFDEC0C8() + 1500;
			if (func_48() == 0)
			{
				func_57(&uLocal_85, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
			}
			else if (func_48() == 1)
			{
				func_57(&uLocal_85, 0, unk_0xD5A676B97920D126(), "FRANKLIN", 0, 1);
			}
			else if (func_48() == 2)
			{
				func_57(&uLocal_85, 0, unk_0xD5A676B97920D126(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_81(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_31(func_48()))
		{
			iVar36 = func_28();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 2) && !unk_0xF44A5E894FE76438(Global_101652.f_17517[iVar32 /*6*/], 3))
				{
					func_82(iVar32, &Var0);
					fVar35 = unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_83(uParam1, "Abigail1", func_85(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 1:
			func_83(uParam1, "Abigail2", func_85(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 2:
			func_83(uParam1, "Barry1", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 3:
			func_83(uParam1, "Barry2", func_85(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 4:
			func_83(uParam1, "Barry3", func_85(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 5:
			func_83(uParam1, "Barry3A", func_85(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 6:
			func_83(uParam1, "Barry3C", func_85(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 7:
			func_83(uParam1, "Barry4", func_85(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_84(iParam0), 0, 0);
			break;
		
		case 8:
			func_83(uParam1, "Dreyfuss1", func_85(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 9:
			func_83(uParam1, "Epsilon1", func_85(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 10:
			func_83(uParam1, "Epsilon2", func_85(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 11:
			func_83(uParam1, "Epsilon3", func_85(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 12:
			func_83(uParam1, "Epsilon4", func_85(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 13:
			func_83(uParam1, "Epsilon5", func_85(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 14:
			func_83(uParam1, "Epsilon6", func_85(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 15:
			func_83(uParam1, "Epsilon7", func_85(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 16:
			func_83(uParam1, "Epsilon8", func_85(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 17:
			func_83(uParam1, "Extreme1", func_85(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 18:
			func_83(uParam1, "Extreme2", func_85(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 19:
			func_83(uParam1, "Extreme3", func_85(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 20:
			func_83(uParam1, "Extreme4", func_85(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 21:
			func_83(uParam1, "Fanatic1", func_85(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 22:
			func_83(uParam1, "Fanatic2", func_85(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_84(iParam0), 1, 0);
			break;
		
		case 23:
			func_83(uParam1, "Fanatic3", func_85(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_84(iParam0), 0, 1);
			break;
		
		case 24:
			func_83(uParam1, "Hao1", func_85(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_84(iParam0), 0, 1);
			break;
		
		case 25:
			func_83(uParam1, "Hunting1", func_85(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 26:
			func_83(uParam1, "Hunting2", func_85(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 27:
			func_83(uParam1, "Josh1", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 28:
			func_83(uParam1, "Josh2", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 29:
			func_83(uParam1, "Josh3", func_85(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 30:
			func_83(uParam1, "Josh4", func_85(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 31:
			func_83(uParam1, "Maude1", func_85(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 32:
			func_83(uParam1, "Minute1", func_85(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 33:
			func_83(uParam1, "Minute2", func_85(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 34:
			func_83(uParam1, "Minute3", func_85(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 35:
			func_83(uParam1, "MrsPhilips1", func_85(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 36:
			func_83(uParam1, "MrsPhilips2", func_85(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 37:
			func_83(uParam1, "Nigel1", func_85(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 38:
			func_83(uParam1, "Nigel1A", func_85(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 39:
			func_83(uParam1, "Nigel1B", func_85(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 40:
			func_83(uParam1, "Nigel1C", func_85(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 41:
			func_83(uParam1, "Nigel1D", func_85(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_84(iParam0), 1, 1);
			break;
		
		case 42:
			func_83(uParam1, "Nigel2", func_85(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 43:
			func_83(uParam1, "Nigel3", func_85(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 1);
			break;
		
		case 44:
			func_83(uParam1, "Omega1", func_85(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 45:
			func_83(uParam1, "Omega2", func_85(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 46:
			func_83(uParam1, "Paparazzo1", func_85(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 47:
			func_83(uParam1, "Paparazzo2", func_85(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 48:
			func_83(uParam1, "Paparazzo3", func_85(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 49:
			func_83(uParam1, "Paparazzo3A", func_85(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 50:
			func_83(uParam1, "Paparazzo3B", func_85(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 51:
			func_83(uParam1, "Paparazzo4", func_85(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 52:
			func_83(uParam1, "Rampage1", func_85(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 54:
			func_83(uParam1, "Rampage3", func_85(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 55:
			func_83(uParam1, "Rampage4", func_85(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 56:
			func_83(uParam1, "Rampage5", func_85(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_84(iParam0), 0, 0);
			break;
		
		case 53:
			func_83(uParam1, "Rampage2", func_85(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_84(iParam0), 1, 0);
			break;
		
		case 57:
			func_83(uParam1, "TheLastOne", func_85(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 58:
			func_83(uParam1, "Tonya1", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 59:
			func_83(uParam1, "Tonya2", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 60:
			func_83(uParam1, "Tonya3", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 61:
			func_83(uParam1, "Tonya4", func_85(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		case 62:
			func_83(uParam1, "Tonya5", func_85(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_84(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_83(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_85(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_86(iParam0) };
	if (unk_0xC55B9553B3EDADE9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_86(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_87()
{
	if (func_90() && !func_91())
	{
		return 1;
	}
	if (func_89() && func_88())
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return Global_101370 > 0;
}

int func_89()
{
	if (Global_88741 != -1)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 20);
	}
	return 0;
}

int func_91()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x6DAE83305DF67FC4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	if (!func_71(5))
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_91())
		{
			return 0;
		}
	}
	if (func_81(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	if ((Global_101641 == func_37() && unk_0xC9DD3DCF0C4F247D()) && Global_101642)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
}

void func_95(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_97(iParam0);
	unk_0x2D619292AF9BA314(0);
	unk_0x9B7FB1F4FDC71D5B(1);
	Global_101638 = 0;
	func_96();
}

void func_96()
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			unk_0xFA03BA297FE81584(unk_0xA0A4DA31DEDFAC4F(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0)), 1);
		}
		unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
	}
}

void func_97(int iParam0)
{
	Global_101641 = iParam0;
}

int func_98(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138860)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_37();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_139())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			Var1 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x9C0A225C3A240597(unk_0xD5A676B97920D126())) > 1369f && !func_91())
			{
				return 0;
			}
		}
		if (!Global_101652.f_8028)
		{
			return 0;
		}
		if (func_13(0))
		{
			return 0;
		}
		if (func_87())
		{
			return 0;
		}
		if (func_138())
		{
			return 0;
		}
		if (Global_101641 != -1)
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_81(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_137(iParam3))
		{
			return 0;
		}
		if (func_31(func_48()))
		{
			if (func_136(func_48()) == 4 || func_136(func_48()) == 5)
			{
				return 0;
			}
		}
		if (func_31(func_48()))
		{
			if (!func_135(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_134(Global_101652.f_23938.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x84A97C70FFDEC0C8() - Global_101643) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_133())
		{
			return 0;
		}
		if (unk_0xC19959490984F18E())
		{
			return 0;
		}
		if (unk_0xC9DD3DCF0C4F247D())
		{
			return 0;
		}
		if (!func_124(4))
		{
			return 0;
		}
		if (!func_71(5))
		{
			return 0;
		}
		if (func_123(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x7B66213B5E371C3F(unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126())))
		{
			if ((unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(377.153f, -717.567f, 10.0536f) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(320.9934f, 265.2515f, 82.1221f)) || unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0x21CE631D8E3F8ECA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_123(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_137(30) && !func_123(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_31(func_48()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_101652.f_2079.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101652.f_2079.f_539.f_1524[iVar4];
				if (func_122(iVar8))
				{
					if (func_100(iVar4))
					{
						if (!func_99(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Var5) < (210f * 210f))
							{
								if (func_48() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_99(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101652.f_2079.f_539.f_1524[iParam0];
	return func_101(iVar0);
}

int func_101(int iParam0)
{
	return func_102(iParam0, 1);
}

int func_102(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_122(iParam0))
	{
		return 0;
	}
	func_103(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_104(func_115(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_104(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_114(iParam0, iParam1))
	{
		iVar0 = func_113(iParam1);
		iVar1 = func_111(iParam0);
		iVar2 = (func_111(iParam0) - func_111(iParam1));
		iVar3 = (func_113(iParam0) - func_113(iParam1));
		iVar4 = (func_110(iParam0) - func_110(iParam1));
		iVar5 = (func_109(iParam0) - func_109(iParam1));
		iVar6 = (func_108(iParam0) - func_108(iParam1));
		iVar7 = (func_107(iParam0) - func_107(iParam1));
	}
	else
	{
		iVar0 = func_113(iParam0);
		iVar1 = func_111(iParam1);
		iVar2 = (func_111(iParam1) - func_111(iParam0));
		iVar3 = (func_113(iParam1) - func_113(iParam0));
		iVar4 = (func_110(iParam1) - func_110(iParam0));
		iVar5 = (func_109(iParam1) - func_109(iParam0));
		iVar6 = (func_108(iParam1) - func_108(iParam0));
		iVar7 = (func_107(iParam1) - func_107(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_106(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_105(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_105(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_106(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_107(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_108(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_109(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_110(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_111(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_112(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_112(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_113(int iParam0)
{
	return iParam0 & 15;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_122(iParam1) || !func_122(iParam0))
	{
		return 1;
	}
	iVar0 = func_111(iParam0);
	iVar1 = func_111(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	iVar1 = func_113(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	iVar1 = func_109(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	var uVar0;
	
	func_121(&uVar0, unk_0xABA05E2C283C3D5F());
	func_120(&uVar0, unk_0xF72CA3D5BA977203());
	func_119(&uVar0, unk_0x83D6515EE2CBF18C());
	func_118(&uVar0, unk_0x3D13C79BF80EB767());
	func_117(&uVar0, unk_0xA93FEF8677A8AF58());
	func_116(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(*uParam0);
	iVar1 = func_111(*uParam0);
	if (iParam1 < 1 || iParam1 > func_106(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_119(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_108(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_109(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_111(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_113(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_110(iParam0);
	if (iVar5 < 1 || iVar5 > func_106(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0, int iParam1)
{
	if (unk_0xF44A5E894FE76438(Global_101652.f_23938.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				iVar0 = func_48();
				if (!func_31(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_132()) || Global_100699) || Global_25187) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_128()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1) || func_132()) || Global_25187) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_132()) || Global_100699) || Global_25187) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5) || Global_36324 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_132()) || Global_100699) || Global_25187) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_132() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || func_50(8, -1)) || func_127()) || func_126()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_130()) || func_129()) || func_126()) || func_125())
						{
							return 0;
						}
						if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
						{
							if ((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_132()) || Global_25187) || func_131()) || func_50(8, -1)) || func_129()) || func_128()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_132()) || func_129()) || Global_100699) || Global_25187) || func_131()) || Global_36908) || func_50(8, -1)) || func_128()) || func_126()) || func_127()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_132()) || Global_100699) || Global_25187) || func_131()) || func_50(8, -1)) || func_128()) || func_126()) || func_130()) || func_129()) || func_127())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_125()
{
	return Global_91525.f_1;
}

int func_126()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 13);
	}
	return 0;
}

int func_127()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_91538.f_304 > 0;
}

bool func_130()
{
	return Global_91538.f_303 > 0;
}

var func_131()
{
	return Global_1315229;
}

int func_132()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_133()
{
	func_47();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_134(int iParam0)
{
	return func_114(func_115(), iParam0);
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_48();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_136(int iParam0)
{
	if (!func_31(iParam0))
	{
		return 7;
	}
	return Global_101652.f_6631.f_919[iParam0];
}

bool func_137(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_139())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xF44A5E894FE76438(Global_101652.f_23938.f_1, iVar0);
	}
	return bVar1;
}

int func_138()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(uVar0, 0))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0x98BE504E8B389665(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_139()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					iVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&iVar0, 0);
					unk_0xC0F82A66B119B68A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_140()
{
	int iVar0;
	
	if (iLocal_53 && !iLocal_58)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0x6901135DDCC4904D(uLocal_60))
		{
			unk_0x8A3D7569826A325D(&uLocal_60);
		}
		if (!unk_0x00B5B0B68211D89B(iLocal_68))
		{
			unk_0x237B0CFB6EEBD3BA(iLocal_68, 317, 1);
			unk_0x58A5671D02E335D1(iLocal_68, 0);
			unk_0x5457695C257D1470(iLocal_68, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_69)
		{
			if (unk_0x6901135DDCC4904D(uLocal_61[iVar0]))
			{
				unk_0x8A3D7569826A325D(&(uLocal_61[iVar0]));
			}
			if (!unk_0x00B5B0B68211D89B(iLocal_69[iVar0]) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
					{
						unk_0x1DC0501F19F1A583(iLocal_69[iVar0], iLocal_77[iVar0], unk_0xD5A676B97920D126(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x7D99F00F48D15ADB(iLocal_69[iVar0], 1);
					}
					else
					{
						unk_0xBB8F1D58B7578137(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0xBB8F1D58B7578137(iLocal_69[iVar0], unk_0xD5A676B97920D126(), 200f, -1, 0, 0);
				}
				unk_0x5457695C257D1470(iLocal_69[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_77)
		{
			if (!unk_0xB529B2A4B7C64D6D(iLocal_77[iVar0], 0))
			{
				unk_0xB24D3BF5DABD13AA(&(iLocal_77[iVar0]));
				if (unk_0x0FE8D1B72C1924FE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xB3C38A4B84C152BF("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xFA5E84DCAE200259(1f);
		unk_0xC8BB600EA931F89A(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x5514278C13A88AA6();
		unk_0x0AF219B759EA8670(3, 1);
		unk_0x0AF219B759EA8670(5, 1);
		func_3(&uLocal_85, 1);
		func_3(&uLocal_85, 2);
		func_3(&uLocal_85, 3);
		func_3(&uLocal_85, 4);
	}
	func_141(-1);
	unk_0x01DFCA3621B68C4A();
}

void func_141(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_93())
	{
		func_145(iParam0);
		unk_0x2CD0538D8247BA65(0, 0);
		Global_101643 = unk_0x84A97C70FFDEC0C8();
		func_144(30000);
		StringCopy(&cVar0, func_143(Global_101641, 1), 64);
		if (func_36(Global_101641) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101640, 64);
		}
		unk_0x0ED8A10006DC8E99(&cVar0, Global_101638, (unk_0x84A97C70FFDEC0C8() - Global_101639), 0);
	}
	else if (unk_0xF44A5E894FE76438(Global_101648, 0) && Global_101652.f_23938.f_2 < 3)
	{
		unk_0x4EA098C870B73AB7(&Global_101648, 0);
	}
	func_142(&Global_25244);
	Global_101642 = 0;
	func_97(-1);
}

void func_142(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35739)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35738 = 0;
	Global_35740 = 0;
	Global_35777 = 15;
	Global_55815 = 0;
	Global_55816 = 0;
}

char* func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_144(int iParam0)
{
	Global_36328 = (unk_0x84A97C70FFDEC0C8() + iParam0);
}

void func_145(int iParam0)
{
	func_146(iParam0, 0, func_151(iParam0));
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_115();
	func_149(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_148(iParam0, &uVar0);
	Var1 = { func_147(&uVar0) };
}

struct<16> func_147(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_109(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_108(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_107(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_110(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_113(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_111(*uParam0), 64);
	return Var0;
}

void func_148(int iParam0, var uParam1)
{
	Global_101652.f_23938.f_43[iParam0] = *uParam1;
}

void func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_111(*uParam0);
	iVar1 = func_113(*uParam0);
	iVar2 = func_110(*uParam0);
	iVar3 = func_109(*uParam0);
	iVar4 = func_108(*uParam0);
	iVar5 = func_107(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_106(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_106(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_150(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_121(uParam0, iParam1);
	func_120(uParam0, iParam2);
	func_119(uParam0, iParam3);
	func_117(uParam0, iParam5);
	func_118(uParam0, iParam4);
	func_116(uParam0, iParam6);
}

int func_151(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

