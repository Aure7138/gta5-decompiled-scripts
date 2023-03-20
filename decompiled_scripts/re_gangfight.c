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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	int iLocal_68[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_75 = 0;
	int iLocal_76[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_83 = 0;
	var uLocal_84 = 16;
	var uLocal_85 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC11469DCA6FC3BB5(11))
	{
		func_140();
	}
	if (func_98(Local_49, -1, 0, 0, 0))
	{
		func_95(-1);
	}
	else
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_94();
		if (unk_0x4F4FF2F3B81506A7())
		{
			if (iLocal_58 > unk_0x4F67E8ECA7D3F667())
			{
				unk_0x72ED2136CB143D65();
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
				unk_0xCBBDAEEE9AB391E3("RE_CGF", 0);
				switch (iLocal_45)
				{
					case 0:
						if (func_80())
						{
							func_140();
						}
						if (func_79())
						{
							iLocal_52 = 1;
							iLocal_45 = 1;
						}
						break;
					
					case 1:
						func_78();
						if (!func_77() || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
						{
							if ((!unk_0x6CFF81397164A1D3(uLocal_67) && !unk_0x6CFF81397164A1D3(iLocal_68[0])) && !unk_0x6CFF81397164A1D3(iLocal_68[1]))
							{
								if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), 969.2191f, 3608.665f, 41.8758f, 100f, 80f, 20f, 0, 1, 0))
								{
									uLocal_59 = func_74(uLocal_67, 0, 145);
									unk_0x4C05DD2F0D812453(uLocal_59, 9);
									uLocal_60[0] = func_74(iLocal_68[0], 1, 145);
									uLocal_60[1] = func_74(iLocal_68[1], 1, 145);
									unk_0x8BB337CC6CD674F2(uLocal_59, 0);
									unk_0x8BB337CC6CD674F2(uLocal_60[0], 0);
									unk_0x8BB337CC6CD674F2(uLocal_60[1], 0);
									func_64(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_68)
							{
								if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]))
								{
									unk_0x06C6AD4F38E8412D(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
								}
								iVar0++;
							}
							if (!unk_0x6CFF81397164A1D3(uLocal_67))
							{
								unk_0x06C6AD4F38E8412D(uLocal_67, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
							}
							func_63();
						}
						break;
				}
			}
			else
			{
				unk_0xD7FA719CB54866C2(0f);
				unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
				if (!unk_0x6CFF81397164A1D3(uLocal_67))
				{
					if (unk_0x7B6E7BEC1143AC86(uLocal_67, unk_0x096275889B8E0EE0(), 1))
					{
						unk_0x06C6AD4F38E8412D(uLocal_67, unk_0x096275889B8E0EE0(), 150f, -1, 0, 0);
						func_63();
					}
					if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_67, 150f, 150f, 50f, 0, 1, 0))
					{
						if (iLocal_47 >= 5 && iLocal_46 == 2)
						{
						}
						else
						{
							func_78();
							func_62();
						}
						switch (iLocal_46)
						{
							case 0:
								func_61();
								if (func_77())
								{
									bLocal_54 = true;
									iLocal_47 = 4;
								}
								break;
							
							case 1:
								if (iLocal_47 < 7 && !unk_0x6CFF81397164A1D3(uLocal_67))
								{
									if (unk_0x9B4CC17D919C8FC4(unk_0x096275889B8E0EE0(), uLocal_67, 90f))
									{
										if (unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), uLocal_67) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), uLocal_67))
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
					if (unk_0xCD82FA174080B3B1(uLocal_59))
					{
						unk_0xF2C3C9DA47AAA54A(&uLocal_59);
					}
					if (((!unk_0x6CFF81397164A1D3(iLocal_68[0]) && !unk_0x6CFF81397164A1D3(iLocal_68[1])) && !unk_0x7D5B1F88E7504BBA(iLocal_76[0])) && !unk_0x7D5B1F88E7504BBA(iLocal_76[1]))
					{
						func_63();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_68)
					{
						if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar2]))
						{
							unk_0xD46E4661E977AEE0(iLocal_68[iVar2], unk_0x096275889B8E0EE0(), 0, 16);
							unk_0x2AD4789CBFD829EC(iLocal_68[iVar2], 1);
							if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_68[iVar2], 150f, 150f, 50f, 0, 1, 0))
							{
								func_63();
							}
							iVar1 = 1;
						}
						else if (unk_0xCD82FA174080B3B1(uLocal_60[iVar2]))
						{
							unk_0xF2C3C9DA47AAA54A(&(uLocal_60[iVar2]));
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
	
	if (iLocal_52 && !iLocal_57)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xCD82FA174080B3B1(uLocal_59))
		{
			unk_0xF2C3C9DA47AAA54A(&uLocal_59);
		}
		if (!unk_0x6CFF81397164A1D3(uLocal_67))
		{
			unk_0x473598683095D430(uLocal_67, 0);
			unk_0x49876BF356F39E66(uLocal_67, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (unk_0xCD82FA174080B3B1(uLocal_60[iVar0]))
			{
				unk_0xF2C3C9DA47AAA54A(&(uLocal_60[iVar0]));
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
					{
						unk_0x8B5A576784E393A4(iLocal_68[iVar0], iLocal_76[iVar0], unk_0x096275889B8E0EE0(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x2AD4789CBFD829EC(iLocal_68[iVar0], 1);
					}
					else
					{
						unk_0x06C6AD4F38E8412D(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x06C6AD4F38E8412D(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
				}
				unk_0x49876BF356F39E66(iLocal_68[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_76)
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
			{
				unk_0x6C9B2BE03BBD5C98(&(iLocal_76[iVar0]));
				if (unk_0x2E882EA08284F674("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xC27FB879C2B9A2EB("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xD7FA719CB54866C2(1f);
		unk_0x305538B87F955257(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x7E42B5424BF0E844();
		unk_0x50E52637EF70EF77(3, 1);
		unk_0x50E52637EF70EF77(5, 1);
		func_3(&uLocal_84, 1);
		func_3(&uLocal_84, 2);
		func_3(&uLocal_84, 3);
		func_3(&uLocal_84, 4);
		iLocal_57 = 1;
	}
	if (unk_0x0BE7F4E3CDBAFB28(func_2(unk_0x217E9DC48139933D()), Local_49, 1) > 50f)
	{
		func_140();
	}
}

Vector3 func_2(var uParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(uParam0), 0);
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
	Global_14558 = 0;
	func_5();
}

void func_5()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

int func_6(char* sParam0)
{
	var uVar0;
	
	if (func_8())
	{
		MemCopy(&uVar0, {func_7()}, 4);
		if (unk_0xD3852F22AB713A1F(sParam0, &uVar0))
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
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_8()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_47)
	{
		case 0:
			if (unk_0xC9D9444186B5A374() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]) && !unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
					{
						if (!unk_0xCD82FA174080B3B1(uLocal_60[iVar0]))
						{
							uLocal_60[iVar0] = func_74(iLocal_68[iVar0], 1, 145);
							if (unk_0x52BE10F427339B39(iLocal_68[iVar0], 0))
							{
								if (!bLocal_54)
								{
									unk_0x1A373BA62A07ADC1(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 0, 0f, 0f, 0f, 150f, 100, 1, -753768974);
								}
								else
								{
									unk_0xF4BF3E3D7FE56705(&uLocal_83);
									unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
									unk_0xFF7E39890B2840DD(uLocal_83);
									unk_0xD59C10966EB589EA(iLocal_68[iVar0], uLocal_83);
									unk_0x5EC7E18324A7D03D(&uLocal_83);
									unk_0x2AD4789CBFD829EC(iLocal_68[iVar0], 1);
								}
							}
						}
					}
					iVar0++;
				}
				if (!func_8())
				{
					if (func_41(&uLocal_84, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_47++;
					}
				}
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_68)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar1]))
				{
					if (unk_0x5E58342602E94718(iLocal_68[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, 0, 1, 0))
					{
						if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar1]))
						{
							unk_0x43FB2E98C3D3A62B(iLocal_76[iVar1], 0);
						}
						if (unk_0x52BE10F427339B39(iLocal_68[iVar1], 0))
						{
							unk_0xF4BF3E3D7FE56705(&uLocal_83);
							unk_0x36DBE8E570B9FBCE(0, 0, 0);
							unk_0xD46E4661E977AEE0(0, unk_0x096275889B8E0EE0(), 0, 16);
							unk_0xFF7E39890B2840DD(uLocal_83);
							unk_0xD59C10966EB589EA(iLocal_68[iVar1], uLocal_83);
							unk_0x5EC7E18324A7D03D(&uLocal_83);
							unk_0x2AD4789CBFD829EC(iLocal_68[iVar1], 1);
						}
					}
					if (!unk_0x52BE10F427339B39(iLocal_68[iVar1], 0))
					{
						unk_0xD46E4661E977AEE0(iLocal_68[iVar1], unk_0x096275889B8E0EE0(), 0, 16);
						unk_0x2AD4789CBFD829EC(iLocal_68[iVar1], 1);
					}
					if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar1]))
					{
						if (unk_0x5A7472606EC5B7C1(iLocal_76[iVar1]))
						{
						}
					}
				}
				if (unk_0x6CFF81397164A1D3(iLocal_68[iVar1]))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_60[iVar1]))
					{
						unk_0xF2C3C9DA47AAA54A(&(uLocal_60[iVar1]));
					}
				}
				iVar1++;
			}
			if (((unk_0x6CFF81397164A1D3(iLocal_68[2]) && unk_0x6CFF81397164A1D3(iLocal_68[3])) && unk_0x6CFF81397164A1D3(iLocal_68[4])) && unk_0x6CFF81397164A1D3(iLocal_68[5]))
			{
				unk_0xC27FB879C2B9A2EB("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_47++;
			}
			break;
		
		case 2:
			func_40(1500);
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				unk_0x0F1ABE64C3C18E5A(uLocal_67);
				unk_0xF4BF3E3D7FE56705(&uLocal_83);
				unk_0xD4648EA39998A07B(0, unk_0x096275889B8E0EE0(), -1, 2056, 2);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), -1);
				unk_0xFF7E39890B2840DD(uLocal_83);
				unk_0xD59C10966EB589EA(uLocal_67, uLocal_83);
				unk_0x5EC7E18324A7D03D(&uLocal_83);
			}
			if (!unk_0x7D5B1F88E7504BBA(uLocal_75))
			{
				unk_0xBB19AC7D4DCEFD0F(uLocal_75);
				if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_67, 5f, 5f, 5f, 0, 1, 0))
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_47++;
			break;
		
		case 3:
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_67, 6f, 6f, 6f, 0, 1, 0))
				{
					if (unk_0x9B4CC17D919C8FC4(uLocal_67, unk_0x096275889B8E0EE0(), 60f))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_84, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_47++;
							}
						}
					}
				}
			}
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				if (!unk_0xC057F02B837A27F6(uLocal_67, unk_0x096275889B8E0EE0(), 120f, 120f, 120f, 0, 1, 0))
				{
					func_10();
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(uLocal_75))
			{
				if (unk_0x7B6E7BEC1143AC86(uLocal_75, unk_0x096275889B8E0EE0(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 4:
			iLocal_47++;
			break;
		
		case 5:
			if (!unk_0x6CFF81397164A1D3(uLocal_67) && !unk_0x7D5B1F88E7504BBA(uLocal_75))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_83);
				unk_0xFE920E72A4B34285(0, unk_0x096275889B8E0EE0(), 1500);
				unk_0x12C24A48BF610759(0, uLocal_75, -1, -1, 2f, 8, 0);
				unk_0xD105DD793D092030(0, 2000);
				unk_0x8DBC05C86F873CC9(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x02C53261E93C1B87(0, uLocal_75, 10f, 786603);
				unk_0xFF7E39890B2840DD(uLocal_83);
				unk_0xD59C10966EB589EA(uLocal_67, uLocal_83);
				unk_0x5EC7E18324A7D03D(&uLocal_83);
				unk_0x2AD4789CBFD829EC(uLocal_67, 1);
				unk_0x0723A01D741CF31D(uLocal_75, 1);
				iLocal_47++;
			}
			break;
		
		case 6:
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				if (unk_0xDEE49D5CA6C49148(uLocal_67, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (unk_0x6B0B5671C53485D8(uLocal_67, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && unk_0x52BE10F427339B39(uLocal_67, 0))
					{
						unk_0x7EE8856C1E1B4835(unk_0xC899C78DB72CCBCC(unk_0xB3598EA616C3FFC3(uLocal_67, 0), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_47++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_8())
			{
				func_41(&uLocal_84, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
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
	iLocal_46 = 3;
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
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_13(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
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
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_22(iParam0, iParam1) != 322)
		{
			func_16(func_22(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_15(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
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
	Global_97339 = iParam0;
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
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_18() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_12();
				}
			}
		}
	}
}

int func_18()
{
	return Global_24444;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312737;
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
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_26(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_26(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD3852F22AB713A1F(sParam0, ""))
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0xD3852F22AB713A1F(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (unk_0x4F67E8ECA7D3F667() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((unk_0x4F67E8ECA7D3F667() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_27();
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_28()
{
	func_29();
	switch (Global_97353.f_1729.f_539.f_3213)
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
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_33(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_32(unk_0x096275889B8E0EE0());
			if (func_31(iVar0) && (!func_30(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_31(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_30(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(uParam0);
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
		return Global_97353.f_29774[iParam0 /*29*/];
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
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_35(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x8F77B33B6A34D8BA(), 64);
	uVar16 = func_38(Var0);
	return uVar16;
}

int func_38(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xFD340785ADF8CFB7(&cParam0))
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
	
	iVar0 = (unk_0x4F67E8ECA7D3F667() + iParam0);
	while (unk_0x4F67E8ECA7D3F667() <= iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_58 > unk_0x4F67E8ECA7D3F667())
		{
			unk_0x72ED2136CB143D65();
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_42(sParam2, iParam3, 0);
}

int func_42(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0x89EEEEF0CEB4D045(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_49();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_47();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_46())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_44();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_43();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_44()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_45()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_48();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_48()
{
	func_29();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_51()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_53()
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 0:
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				iLocal_47++;
			}
			break;
		
		case 1:
			if (!unk_0x6CFF81397164A1D3(uLocal_67))
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), uLocal_67, 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0xD4648EA39998A07B(uLocal_67, unk_0x096275889B8E0EE0(), -1, 2060, 2);
					func_41(&uLocal_84, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_47++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x7D5B1F88E7504BBA(uLocal_75))
			{
				unk_0xF4BF3E3D7FE56705(&uLocal_83);
				unk_0x14A4402A811D03C0(0, 916.5764f, 3602.146f, 31.9262f, 1f, 40000, 1048576000, 0, 1193033728);
				unk_0xFF7E39890B2840DD(uLocal_83);
				unk_0xD59C10966EB589EA(iLocal_67, uLocal_83);
				unk_0x5EC7E18324A7D03D(&uLocal_83);
				iLocal_47++;
			}
			break;
		
		case 3:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (func_48() == 2)
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_47++;
			}
			break;
		
		case 4:
			if (!unk_0x6CFF81397164A1D3(iLocal_67))
			{
				if (unk_0x5E58342602E94718(iLocal_67, 916.5764f, 3602.146f, 31.9262f, 3.3f, 3.3f, 3.3f, 0, 1, 0))
				{
					if (!unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 8f, 8f, 8f, 0, 1, 0))
					{
						if (!func_8())
						{
							if (func_41(&uLocal_84, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								unk_0xFE920E72A4B34285(iLocal_67, unk_0x096275889B8E0EE0(), -1);
								if (!unk_0x7D5B1F88E7504BBA(uLocal_75))
								{
									unk_0xBB19AC7D4DCEFD0F(uLocal_75);
								}
								iLocal_47++;
							}
						}
					}
					else
					{
						if (!unk_0x7D5B1F88E7504BBA(uLocal_75))
						{
							unk_0xBB19AC7D4DCEFD0F(uLocal_75);
						}
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 5:
			if (!func_8())
			{
				if (func_48() == 0)
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (func_48() == 1)
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_47++;
			}
			break;
		
		case 6:
			if (!unk_0x6CFF81397164A1D3(iLocal_67))
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 8f, 8f, 8f, 0, 1, 0))
				{
					if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
					{
						if (func_56())
						{
							func_40(1000);
							if ((!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x6CFF81397164A1D3(iLocal_68[2])) && !unk_0x7D5B1F88E7504BBA(uLocal_75))
							{
								unk_0xF4BF3E3D7FE56705(&uLocal_83);
								unk_0xF2A31501A9CF06FD(0, uLocal_75, -1, -1, 1f);
								unk_0xD4648EA39998A07B(0, iLocal_68[2], 2000, 0, 2);
								unk_0xFE920E72A4B34285(0, iLocal_68[2], 0);
								unk_0xFF7E39890B2840DD(uLocal_83);
								unk_0xD59C10966EB589EA(iLocal_67, uLocal_83);
								unk_0x5EC7E18324A7D03D(&uLocal_83);
								func_40(2000);
								func_4();
								func_40(0);
								func_41(&uLocal_84, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x7D5B1F88E7504BBA(uLocal_75)) && unk_0x52BE10F427339B39(iLocal_67, 0))
								{
									iLocal_47++;
								}
								else
								{
									if (!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x6CFF81397164A1D3(iLocal_68[2]))
									{
										unk_0xF4BF3E3D7FE56705(&uLocal_83);
										unk_0x6EE9AE1124E7C613(0, -1);
										unk_0xFF7E39890B2840DD(uLocal_83);
										unk_0xD59C10966EB589EA(iLocal_67, uLocal_83);
										unk_0x5EC7E18324A7D03D(&uLocal_83);
									}
									bLocal_54 = false;
									unk_0x5AE11BC36633DE4E(0);
									iLocal_47++;
								}
							}
						}
					}
				}
			}
			if (!unk_0x7D5B1F88E7504BBA(uLocal_75))
			{
				if (unk_0x7B6E7BEC1143AC86(uLocal_75, unk_0x096275889B8E0EE0(), 0))
				{
					func_63();
				}
			}
			break;
		
		case 7:
			if ((((!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x7D5B1F88E7504BBA(uLocal_75)) && !unk_0x9C8E4D238C999648(iLocal_67, uLocal_75, 0)) && !unk_0x6CA7C07CB3ECF0BA(iLocal_67, 0)) && !unk_0xD2949F106BE07909(iLocal_67))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]) && !unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
				{
					if (((((unk_0x3A05A71233588E80(unk_0x096275889B8E0EE0(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), 0, 1) || unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_68[iVar0], 5f, 5f, 5f, 0, 1, 0)) || unk_0x7B6E7BEC1143AC86(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 1)) || unk_0x7B6E7BEC1143AC86(iLocal_76[iVar0], unk_0x096275889B8E0EE0(), 1)) || unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_68[iVar0])) || unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_76[iVar0]))
					{
						bLocal_54 = true;
						unk_0x5AE11BC36633DE4E(2000);
						iLocal_47 = 0;
						iLocal_46 = 2;
					}
				}
				iVar0++;
			}
			if (((unk_0x6CFF81397164A1D3(iLocal_68[2]) && unk_0x6CFF81397164A1D3(iLocal_68[3])) && unk_0x6CFF81397164A1D3(iLocal_68[4])) && unk_0x6CFF81397164A1D3(iLocal_68[5]))
			{
				iLocal_47 = 2;
				iLocal_46 = 2;
			}
			if (unk_0x5E58342602E94718(iLocal_68[2], 970.3641f, 3629.886f, 31.3694f, 5f, 5f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 13000)
			{
				func_40(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]))
					{
						if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
						{
							if (unk_0x9C8E4D238C999648(iLocal_68[iVar0], iLocal_76[iVar0], 0))
							{
								unk_0x8B5A576784E393A4(iLocal_68[iVar0], iLocal_76[iVar0], unk_0x096275889B8E0EE0(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, 1);
							}
						}
					}
					iVar0++;
				}
				if (!unk_0x6CFF81397164A1D3(iLocal_67))
				{
					if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 15f, 15f, 15f, 0, 1, 0))
					{
						func_54();
						func_40(0);
						func_41(&uLocal_84, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				unk_0x5AE11BC36633DE4E(0);
				iLocal_47 = 0;
				iLocal_46 = 2;
			}
			break;
	}
}

void func_54()
{
	Global_14558 = 0;
	func_55();
}

void func_55()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

int func_56()
{
	int iVar0;
	
	if (((((((!unk_0xD42BD6EB2E0F1677(iLocal_76[2]) && !unk_0xD42BD6EB2E0F1677(iLocal_76[3])) && !unk_0xD42BD6EB2E0F1677(iLocal_76[4])) && !unk_0xD42BD6EB2E0F1677(iLocal_76[5])) && !unk_0xD42BD6EB2E0F1677(iLocal_68[2])) && !unk_0xD42BD6EB2E0F1677(iLocal_68[3])) && !unk_0xD42BD6EB2E0F1677(iLocal_68[4])) && !unk_0xD42BD6EB2E0F1677(iLocal_68[5]))
	{
		unk_0xFA28FE3A6246FC30(joaat("hexer"));
		unk_0xFA28FE3A6246FC30(joaat("g_m_y_lost_01"));
		unk_0xFA28FE3A6246FC30(joaat("g_m_y_lost_02"));
		unk_0x5F70787AC4BF7928("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (unk_0x1283B8B89DD5D1B6(joaat("hexer")))
		{
			iLocal_76[2] = unk_0xF757863E1E2D8F12(joaat("hexer"), 863.4697f, 3633.5f, 31.9874f, 290.5797f, 1, 1);
			iLocal_76[3] = unk_0xF757863E1E2D8F12(joaat("hexer"), 866.4073f, 3636.039f, 31.9514f, 270.3649f, 1, 1);
			iLocal_76[4] = unk_0xF757863E1E2D8F12(joaat("hexer"), 866.3153f, 3631.587f, 31.9545f, 276.6327f, 1, 1);
			iLocal_76[5] = unk_0xF757863E1E2D8F12(joaat("hexer"), 868.5937f, 3633.523f, 31.9622f, 267.0991f, 1, 1);
			unk_0x4AD96EF928BD4F9A(joaat("hexer"));
			unk_0x1027B10102082F34(iLocal_76[2], 3);
			unk_0x1027B10102082F34(iLocal_76[4], 3);
			iLocal_58 = unk_0x4F67E8ECA7D3F667() + 1500;
		}
		if ((unk_0x1283B8B89DD5D1B6(joaat("g_m_y_lost_01")) && unk_0x1283B8B89DD5D1B6(joaat("g_m_y_lost_02"))) && unk_0x2E882EA08284F674("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_68[2] = unk_0x63FC6DA06F97F02C(iLocal_76[2], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_68[3] = unk_0x63FC6DA06F97F02C(iLocal_76[3], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			iLocal_68[4] = unk_0x63FC6DA06F97F02C(iLocal_76[4], 22, joaat("g_m_y_lost_01"), -1, 1, 1);
			iLocal_68[5] = unk_0x63FC6DA06F97F02C(iLocal_76[5], 22, joaat("g_m_y_lost_02"), -1, 1, 1);
			func_57(&uLocal_84, 4, iLocal_68[4], "RECGFLost3", 0, 1);
			iLocal_58 = unk_0x4F67E8ECA7D3F667() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]) && !unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
				{
					unk_0x70D3E526218BF867(iLocal_76[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0);
					unk_0x020E173F318C12DA(iLocal_68[iVar0], 137, 1);
					unk_0x5222F3E172937744(iLocal_68[iVar0], 0);
					unk_0x34559010D1FB41F8(iLocal_68[iVar0], 2);
					unk_0x32A582AACCBCAEFE(iLocal_68[iVar0], 50, 1);
					unk_0x40E19C80775FA738(iLocal_68[iVar0], 2);
					unk_0x234C08CC6D013462(iLocal_68[iVar0], 50f, 20);
					unk_0x7FD49ABD4677E015(iLocal_68[iVar0], 1);
					unk_0x162D5BC3EB4F75B0(iLocal_68[iVar0], 13);
					unk_0xE5B6890FA711D462(iLocal_68[iVar0], 100f);
					unk_0xBFC6F67A8A8B15A7(iLocal_68[iVar0], 100f);
					unk_0x6ECBACF91786FB7A(iLocal_68[iVar0], uLocal_249);
					unk_0x49876BF356F39E66(iLocal_68[iVar0], 1);
					unk_0x860F3EB3D71920CB(iLocal_68[iVar0], 3);
					unk_0x082FA643218F5655(iLocal_68[iVar0], 0);
					unk_0x5E95290AF8605EA1(iLocal_68[iVar0], 1);
					unk_0x0A5D170C44CB2189(iLocal_68[iVar0], 1, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						unk_0x5F07E4B73A7FA39C(iLocal_68[iVar0], joaat("weapon_pistol"), -1, 1, 1);
					}
					else
					{
						unk_0x5F07E4B73A7FA39C(iLocal_68[iVar0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					}
					unk_0xF4BF3E3D7FE56705(&uLocal_83);
					unk_0xBB26FB233542CFFE(0, iLocal_76[2], 966.7098f, 3633.926f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x67BFB35F43BF984D(0, Local_49, 5000, 0, 2);
					unk_0xFF7E39890B2840DD(uLocal_83);
					unk_0xD59C10966EB589EA(iLocal_68[2], uLocal_83);
					unk_0x5EC7E18324A7D03D(&uLocal_83);
					unk_0xF4BF3E3D7FE56705(&uLocal_83);
					unk_0xBB26FB233542CFFE(0, iLocal_76[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x67BFB35F43BF984D(0, Local_49, 5000, 0, 2);
					unk_0xFF7E39890B2840DD(uLocal_83);
					unk_0xD59C10966EB589EA(iLocal_68[3], uLocal_83);
					unk_0x5EC7E18324A7D03D(&uLocal_83);
					unk_0x2AD4789CBFD829EC(iLocal_68[3], 1);
					unk_0xF4BF3E3D7FE56705(&uLocal_83);
					unk_0xBB26FB233542CFFE(0, iLocal_76[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x67BFB35F43BF984D(0, Local_49, 5000, 0, 2);
					unk_0xFF7E39890B2840DD(uLocal_83);
					unk_0xD59C10966EB589EA(iLocal_68[4], uLocal_83);
					unk_0x5EC7E18324A7D03D(&uLocal_83);
					unk_0xF4BF3E3D7FE56705(&uLocal_83);
					unk_0xBB26FB233542CFFE(0, iLocal_76[5], 974.8073f, 3633.771f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					unk_0x67BFB35F43BF984D(0, Local_49, 5000, 0, 2);
					unk_0xFF7E39890B2840DD(uLocal_83);
					unk_0xD59C10966EB589EA(iLocal_68[5], uLocal_83);
					unk_0x5EC7E18324A7D03D(&uLocal_83);
				}
				iVar0++;
			}
			unk_0x4AD96EF928BD4F9A(joaat("hexer"));
			unk_0x4AD96EF928BD4F9A(joaat("g_m_y_lost_01"));
			unk_0x4AD96EF928BD4F9A(joaat("g_m_y_lost_02"));
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

void func_58()
{
	if (!unk_0x6CFF81397164A1D3(iLocal_67))
	{
		unk_0x06C6AD4F38E8412D(iLocal_67, unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
		unk_0x2AD4789CBFD829EC(iLocal_67, 1);
		if (!unk_0x7D5B1F88E7504BBA(iLocal_68[0]) && !unk_0x7D5B1F88E7504BBA(iLocal_68[1]))
		{
			unk_0xB25E22832517B44E(iLocal_67, 101);
			unk_0x473598683095D430(iLocal_67, 0);
			unk_0xD71FEE088E160031(iLocal_68[0], iLocal_67, 1000, 0);
			unk_0xD71FEE088E160031(iLocal_68[1], iLocal_67, 1000, 0);
		}
		else
		{
			func_4();
			func_40(0);
			if (!unk_0x6CFF81397164A1D3(iLocal_67))
			{
				func_59(iLocal_67, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_40(1000);
		func_63();
	}
}

void func_59(var uParam0, char* sParam1, int iParam2)
{
	unk_0x17033CDF9E0B42C6(uParam0, sParam1, func_60(iParam2), 1);
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
	
	switch (iLocal_47)
	{
		case 0:
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 45f, 45f, 20f, 0, 1, 0))
			{
				if (!func_8())
				{
					if (func_48() == 0)
					{
						func_41(&uLocal_84, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (func_48() == 1)
					{
						func_41(&uLocal_84, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (func_48() == 2)
					{
						func_41(&uLocal_84, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_47++;
				}
			}
			break;
		
		case 1:
			if (!unk_0x6CFF81397164A1D3(iLocal_67))
			{
				if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 40f, 40f, 20f, 0, 1, 0))
				{
					if (func_41(&uLocal_84, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_47++;
					}
				}
			}
			break;
		
		case 2:
			if (!func_8())
			{
				func_41(&uLocal_84, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_47++;
			}
			break;
		
		case 3:
			if ((!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x6CFF81397164A1D3(iLocal_68[0])) && !unk_0x6CFF81397164A1D3(iLocal_68[1]))
			{
				if ((unk_0x83666F9FB8FEBD4B() > 5000 && !iLocal_55) && !func_8())
				{
					func_41(&uLocal_84, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_55 = 1;
				}
				if (unk_0x83666F9FB8FEBD4B() < 28000)
				{
					if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 12f, 12f, 2.5f, 0, 1, 0))
					{
						if (((unk_0xB6C3A42B887CE035(iLocal_68[0], unk_0x096275889B8E0EE0()) || unk_0xB6C3A42B887CE035(iLocal_68[1], unk_0x096275889B8E0EE0())) || unk_0xE88F19660651D566(iLocal_68[0], unk_0x096275889B8E0EE0())) || unk_0xE88F19660651D566(iLocal_68[1], unk_0x096275889B8E0EE0()))
						{
							unk_0xD4648EA39998A07B(iLocal_68[0], unk_0x096275889B8E0EE0(), 4000, 2056, 4);
							unk_0xD4648EA39998A07B(iLocal_68[1], unk_0x096275889B8E0EE0(), 4000, 2056, 4);
							if (!iLocal_56)
							{
								func_4();
								func_40(0);
								if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
								{
									func_41(&uLocal_84, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									func_41(&uLocal_84, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_56 = 1;
							}
						}
					}
					else if (!unk_0xDEE49D5CA6C49148(iLocal_68[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!unk_0x9B4CC17D919C8FC4(iLocal_68[0], iLocal_67, 10f))
						{
							unk_0x0B11639CBB53F15F(iLocal_68[0], iLocal_67, -1, 0);
						}
					}
				}
				else if (!unk_0x7D5B1F88E7504BBA(iLocal_76[0]) && !unk_0x7D5B1F88E7504BBA(iLocal_76[1]))
				{
					func_4();
					func_40(0);
					func_41(&uLocal_84, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_40(2000);
					func_58();
				}
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]))
				{
					unk_0x28AC5FC91EA70789(iLocal_68[iVar0], 156, 1);
					unk_0xD46E4661E977AEE0(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 0, 16);
					unk_0x2AD4789CBFD829EC(iLocal_68[iVar0], 1);
				}
				iVar0++;
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_67))
			{
				unk_0x6EE9AE1124E7C613(iLocal_67, -1);
			}
			iLocal_47++;
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (unk_0x6CFF81397164A1D3(iLocal_68[iVar0]))
				{
					if (unk_0xCD82FA174080B3B1(uLocal_60[iVar0]))
					{
						unk_0xF2C3C9DA47AAA54A(&(uLocal_60[iVar0]));
						func_3(&uLocal_84, 2);
						func_3(&uLocal_84, 3);
					}
				}
				iVar0++;
			}
			if (unk_0x6CFF81397164A1D3(iLocal_68[0]) && unk_0x6CFF81397164A1D3(iLocal_68[1]))
			{
				iLocal_47 = 0;
				iLocal_46 = 1;
			}
			break;
	}
}

void func_62()
{
	if (!unk_0x2E941B5FFA2989C6(916.4631f, 3601.261f, 31.9327f, 3f))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
		{
			if (unk_0x5E58342602E94718(unk_0x2F96E7720B0B19EA(), 916.4631f, 3601.261f, 31.9327f, 2f, 2f, 2f, 0, 1, 0))
			{
				unk_0xF6A103413A202C37(unk_0x2F96E7720B0B19EA(), 915.6531f, 3595.061f, 32.0774f, 1, 0, 0, 1);
			}
		}
	}
}

void func_63()
{
	iLocal_46 = 3;
}

int func_64(int iParam0)
{
	if (func_68())
	{
		Global_97343 = 1;
		Global_97340 = unk_0x4F67E8ECA7D3F667();
		if (func_23(Global_97342))
		{
			func_65(0);
		}
		unk_0x402669A4BDAA72DA(1, "RE_TITLE");
		if (iParam0 && func_23(Global_97342))
		{
			unk_0x4AF8018BE2CC3D3D();
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
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_66(func_67(iParam0), -1);
					Global_97353.f_28192.f_2++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 1))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_66(func_67(iParam0), -1);
					Global_97353.f_28192.f_3++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x4ED6CFDFE8D4131A(Global_97349, 2))
			{
				if (!unk_0x301EBDED0F656624())
				{
					func_66(func_67(iParam0), -1);
					Global_97353.f_28192.f_4++;
					unk_0xF73FBE4845C43B5B(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	unk_0x0718552FB84CF252(uParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
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
	switch (func_69(&Global_24503, 0, 5, 0, unk_0x55525C346BEF6960()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xFEBEEBC9CBDF4B12(unk_0x47E385B0D957C8D4(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x768C017FB878E4F4(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
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
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
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
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, Global_34913);
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
	if (Global_34913 == 15)
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
	if ((iParam2 != 145 && unk_0xCD82FA174080B3B1(uVar0)) && unk_0x73C258C68D6F55B6(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x0A062D6D7C0B2C2C(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_75(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xAF129458D90982F3(uParam0);
	if (unk_0xC3D96AF45FCCEC4C(uParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_76(unk_0x03A753E2C8458335(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x5F3268378F24D97B(uVar0, bParam1);
		}
		else
		{
			unk_0x2954B7F696FF4E2C(uVar0, 2);
		}
	}
	else if (unk_0xCF8176912DDA4EA5(uParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_76(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
		unk_0x5F3268378F24D97B(uVar0, bParam1);
	}
	else if (unk_0x0A27A546A375FDEF(uParam0))
	{
		unk_0x17D3E31025A05A57(uVar0, func_76(unk_0x03A753E2C8458335(), 0.7f, 0.7f));
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
	
	if (!bLocal_54)
	{
		unk_0x9E0FEFE102840007(255, uLocal_249, joaat("player"));
		if (!unk_0x7D5B1F88E7504BBA(iLocal_68[0]) && !unk_0x7D5B1F88E7504BBA(iLocal_68[1]))
		{
			if (unk_0x7B6E7BEC1143AC86(iLocal_68[0], unk_0x096275889B8E0EE0(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_68[1], unk_0x096275889B8E0EE0(), 1))
			{
				func_4();
				return 1;
			}
			if (!unk_0x7D5B1F88E7504BBA(unk_0x2F96E7720B0B19EA()))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_68[0], unk_0x2F96E7720B0B19EA(), 1) || unk_0x7B6E7BEC1143AC86(iLocal_68[1], unk_0x2F96E7720B0B19EA(), 1))
				{
					func_4();
					return 1;
				}
			}
		}
		if (!unk_0x7D5B1F88E7504BBA(iLocal_76[0]) && !unk_0x7D5B1F88E7504BBA(iLocal_76[1]))
		{
			if (((unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_76[0], 0) || unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_76[1], 0)) || unk_0x7B6E7BEC1143AC86(iLocal_76[0], unk_0x096275889B8E0EE0(), 1)) || unk_0x7B6E7BEC1143AC86(iLocal_76[1], unk_0x096275889B8E0EE0(), 1))
			{
				if (!unk_0x6CFF81397164A1D3(iLocal_68[0]) && !unk_0x6CFF81397164A1D3(iLocal_68[1]))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_84, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (unk_0x6CFF81397164A1D3(iLocal_68[0]) || unk_0x6CFF81397164A1D3(iLocal_68[1]))
		{
			func_4();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var3 = { -15f, -15f, -15f };
		if (!unk_0x6CFF81397164A1D3(iLocal_68[0]))
		{
			if (unk_0xC652FD308772D79E(unk_0x012B43913EE9671C(iLocal_68[0], 31086, 0f, 0f, 0f), 5f, 1))
			{
				func_4();
				return 1;
			}
			Var0 = { Var0 + unk_0x012B43913EE9671C(iLocal_68[0], 31086, 0f, 0f, 0f) };
			Var3 = { Var3 + unk_0x012B43913EE9671C(iLocal_68[0], 31086, 0f, 0f, 0f) };
			if (((unk_0x04965FB9E14235C7(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x04965FB9E14235C7(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x04965FB9E14235C7(Var3, Var0, joaat("weapon_grenadelauncher"), 1)) || unk_0x04965FB9E14235C7(Var3, Var0, joaat("weapon_stickybomb"), 1))
			{
				func_4();
				return 1;
			}
			if (unk_0xB6AD30D8788B3682(unk_0x012B43913EE9671C(iLocal_68[0], 31086, 0f, 0f, 0f), 3f))
			{
				func_4();
				return 1;
			}
		}
		if (unk_0x3A05A71233588E80(unk_0x096275889B8E0EE0(), (973.053f - 30f), (3616.738f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.738f + 30f), (32.6181f + 30f), 0, 1))
		{
			func_4();
			return 1;
		}
		if ((!unk_0x6CFF81397164A1D3(iLocal_67) && !unk_0x6CFF81397164A1D3(iLocal_68[0])) && !unk_0x6CFF81397164A1D3(iLocal_68[1]))
		{
			if (iLocal_48 != -1)
			{
				if (((unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_68[0]) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iLocal_68[1])) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_68[0])) || unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), iLocal_68[1]))
				{
					func_4();
					return 1;
				}
			}
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iLocal_67, 12f, 12f, 2.5f, 0, 1, 0))
			{
				if (((unk_0xB6C3A42B887CE035(iLocal_68[0], unk_0x096275889B8E0EE0()) || unk_0xB6C3A42B887CE035(iLocal_68[1], unk_0x096275889B8E0EE0())) || unk_0xE88F19660651D566(iLocal_68[0], unk_0x096275889B8E0EE0())) || unk_0xE88F19660651D566(iLocal_68[1], unk_0x096275889B8E0EE0()))
				{
					if (!iLocal_53)
					{
						unk_0x0B11639CBB53F15F(iLocal_68[0], unk_0x096275889B8E0EE0(), -1, 0);
						iLocal_53 = 1;
					}
					if (unk_0xCD82FA174080B3B1(uLocal_59))
					{
						unk_0x8BB337CC6CD674F2(uLocal_59, 1);
					}
					if (unk_0xCD82FA174080B3B1(uLocal_60[0]))
					{
						unk_0x8BB337CC6CD674F2(uLocal_60[0], 1);
					}
					if (unk_0xCD82FA174080B3B1(uLocal_60[1]))
					{
						unk_0x8BB337CC6CD674F2(uLocal_60[1], 1);
					}
					if ((!func_8() || func_6("RECGF_SHUTUP")) || func_6("RECGF_PAYUP"))
					{
						if (iLocal_48 == -1)
						{
							iLocal_48 = unk_0x4F67E8ECA7D3F667();
							if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
							{
								func_4();
								func_40(0);
								func_41(&uLocal_84, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								func_4();
								func_40(0);
								func_41(&uLocal_84, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_53 = 0;
				iLocal_48 = -1;
			}
			if (iLocal_48 != -1 && unk_0x4F67E8ECA7D3F667() > iLocal_48 + 10000)
			{
				func_4();
				func_40(0);
				func_41(&uLocal_84, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!unk_0x7B6E7BEC1143AC86(iLocal_68[0], unk_0x096275889B8E0EE0(), 1) && !unk_0x7B6E7BEC1143AC86(iLocal_68[1], unk_0x096275889B8E0EE0(), 1))
			{
				if (unk_0x7B6E7BEC1143AC86(iLocal_67, unk_0x096275889B8E0EE0(), 1))
				{
					if (func_93())
					{
						func_4();
						func_40(0);
						func_41(&uLocal_84, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
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
	if (unk_0xB86D29B10F627379(uLocal_75, 0))
	{
		if ((!unk_0x5E58342602E94718(uLocal_75, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, 0, 1, 0) && !unk_0x9C8E4D238C999648(iLocal_67, iLocal_75, 0)) || unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), iLocal_75, 1))
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
	
	if (((((!unk_0xD42BD6EB2E0F1677(iLocal_67) && !unk_0xD42BD6EB2E0F1677(iLocal_68[0])) && !unk_0xD42BD6EB2E0F1677(iLocal_68[1])) && !unk_0xD42BD6EB2E0F1677(iLocal_75)) && !unk_0xD42BD6EB2E0F1677(iLocal_76[0])) && !unk_0xD42BD6EB2E0F1677(iLocal_76[1]))
	{
		unk_0xFA28FE3A6246FC30(joaat("a_m_m_skidrow_01"));
		unk_0xFA28FE3A6246FC30(joaat("g_m_y_lost_01"));
		unk_0xFA28FE3A6246FC30(joaat("g_m_y_lost_02"));
		unk_0xFA28FE3A6246FC30(joaat("picador"));
		unk_0xFA28FE3A6246FC30(joaat("hexer"));
		unk_0xA862A2AD321F94B4("random@countryside_gang_fight");
		unk_0xA862A2AD321F94B4("veh@drivebystd_ds_grenades");
		unk_0x18EBAFC307C79DD2("move_m@gangster@var_i");
		if (((((((unk_0x1283B8B89DD5D1B6(joaat("a_m_m_skidrow_01")) && unk_0x1283B8B89DD5D1B6(joaat("g_m_y_lost_01"))) && unk_0x1283B8B89DD5D1B6(joaat("g_m_y_lost_02"))) && unk_0x1283B8B89DD5D1B6(joaat("picador"))) && unk_0x1283B8B89DD5D1B6(joaat("hexer"))) && unk_0x27FF6FE8009B40CA("random@countryside_gang_fight")) && unk_0x27FF6FE8009B40CA("veh@drivebystd_ds_grenades")) && unk_0xD280D9E0E6D4D29F("move_m@gangster@var_i"))
		{
			unk_0x57F925DF866E2CBD(joaat("picador"), 1);
			unk_0x57F925DF866E2CBD(joaat("hexer"), 1);
			unk_0x014C4B659562111A(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 0, 0, 1);
			unk_0x55686F8055FF786B(Local_49 - Vector(20f, 50f, 80f), Local_49 + Vector(20f, 50f, 70f), 0, 1, 1, 1);
			unk_0x50E52637EF70EF77(3, 0);
			unk_0x50E52637EF70EF77(5, 0);
			unk_0x352AB5EAB2338B18("rghLost", &uLocal_249);
			unk_0x9E0FEFE102840007(5, uLocal_249, joaat("player"));
			iLocal_67 = unk_0x9066DFD4D92E6773(26, joaat("a_m_m_skidrow_01"), 973.053f, 3616.738f, 31.6181f, 110.2753f, 1, 1);
			unk_0x584EEBEECD248926(iLocal_67, 0, 0, 1, 0);
			unk_0x584EEBEECD248926(iLocal_67, 2, 1, 0, 0);
			unk_0x584EEBEECD248926(iLocal_67, 3, 1, 2, 0);
			unk_0x584EEBEECD248926(iLocal_67, 4, 0, 0, 0);
			unk_0x4AD96EF928BD4F9A(joaat("a_m_m_skidrow_01"));
			unk_0x49876BF356F39E66(iLocal_67, 1);
			unk_0x32A582AACCBCAEFE(iLocal_67, 17, 1);
			unk_0x5E95290AF8605EA1(iLocal_67, 0);
			unk_0x473598683095D430(iLocal_67, 1);
			unk_0x020E173F318C12DA(iLocal_67, 185, 1);
			unk_0x8C5919F3F8EEA14C(iLocal_67, 16);
			unk_0xD937A3C5EF78C429(iLocal_67, "A_M_M_TRAMP_01_BLACK_MINI_01");
			func_57(&uLocal_84, 1, iLocal_67, "RECGFDealer", 0, 1);
			unk_0x1A6DC1AE2121C6C4(iLocal_67, 1);
			unk_0x8DBC05C86F873CC9(iLocal_67, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0xCC853EDF7160419D(iLocal_67, "move_m@gangster@var_i", 1048576000);
			iLocal_75 = unk_0xF757863E1E2D8F12(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, 1, 1);
			unk_0xB375807E9837A2E6(iLocal_75, 37, 0);
			unk_0x9E3F1A6B5BDD1931(iLocal_75, 4, 0);
			unk_0x652712478F1721F4(iLocal_75, 1);
			unk_0x7CC8C8811EBB989E(iLocal_75, "WDU 696");
			iLocal_68[0] = unk_0x9066DFD4D92E6773(22, joaat("g_m_y_lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, 1, 1);
			func_57(&uLocal_84, 3, iLocal_68[0], "RECGFLost2", 0, 1);
			iLocal_68[1] = unk_0x9066DFD4D92E6773(22, joaat("g_m_y_lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, 1, 1);
			func_57(&uLocal_84, 2, iLocal_68[1], "RECGFLost1", 0, 1);
			unk_0x4AD96EF928BD4F9A(joaat("g_m_y_lost_01"));
			unk_0x4AD96EF928BD4F9A(joaat("g_m_y_lost_02"));
			iLocal_76[0] = unk_0xF757863E1E2D8F12(joaat("hexer"), 968.2626f, 3611.717f, 31.7874f, 296.8978f, 1, 1);
			iLocal_76[1] = unk_0xF757863E1E2D8F12(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, 1, 1);
			unk_0x4AD96EF928BD4F9A(joaat("hexer"));
			unk_0x8DBC05C86F873CC9(iLocal_68[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			unk_0x8DBC05C86F873CC9(iLocal_68[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (iVar0 < 2)
				{
					unk_0x5222F3E172937744(iLocal_68[iVar0], 0);
					unk_0x6ECBACF91786FB7A(iLocal_68[iVar0], uLocal_249);
					unk_0x34559010D1FB41F8(iLocal_68[iVar0], 2);
					unk_0x32A582AACCBCAEFE(iLocal_68[iVar0], 50, 1);
					unk_0x7FD49ABD4677E015(iLocal_68[iVar0], 0);
					unk_0x5F07E4B73A7FA39C(iLocal_68[0], joaat("weapon_pistol"), -1, 1, 1);
					unk_0x5F07E4B73A7FA39C(iLocal_68[1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					unk_0x2AD4789CBFD829EC(iLocal_68[iVar0], 1);
					unk_0x49876BF356F39E66(iLocal_68[iVar0], 1);
					unk_0x9B9EE31AED48072E(iLocal_68[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_58 = unk_0x4F67E8ECA7D3F667() + 1500;
			if (func_48() == 0)
			{
				func_57(&uLocal_84, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
			}
			else if (func_48() == 1)
			{
				func_57(&uLocal_84, 0, unk_0x096275889B8E0EE0(), "FRANKLIN", 0, 1);
			}
			else if (func_48() == 2)
			{
				func_57(&uLocal_84, 0, unk_0x096275889B8E0EE0(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_91())
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
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (func_31(func_48()))
		{
			iVar36 = func_28();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 2) && !unk_0x4ED6CFDFE8D4131A(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_82(iVar32, &Var0);
					fVar35 = unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var0.f_6, 1);
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
	if (unk_0x2CF12F9ACF18F048(&cVar2))
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
	return Global_97071 > 0;
}

int func_89()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_91()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
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
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_91())
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
	if ((Global_97342 == func_37() && unk_0x924D54E5698AE3E0()) && Global_97343)
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
	unk_0x7FE28E92FA9F21C3(0);
	unk_0xB1ADCCC4150C6473(1);
	Global_97339 = 0;
	func_96();
}

void func_96()
{
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x57F925DF866E2CBD(unk_0xDA76A9F39210D365(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0)), 1);
		}
		unk_0x020E173F318C12DA(unk_0x096275889B8E0EE0(), 32, 0);
	}
}

void func_97(int iParam0)
{
	Global_97342 = iParam0;
}

int func_98(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
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
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			Var1 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC3BBBD114C2B597B(unk_0x096275889B8E0EE0())) > 1369f && !func_91())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
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
		if (Global_97342 != -1)
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
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
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
		if (!func_134(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x4F67E8ECA7D3F667() - Global_97344) < 150000)
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
		if (unk_0xB15CD1CF58771DE1())
		{
			return 0;
		}
		if (unk_0x924D54E5698AE3E0())
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
		if (unk_0x017C1B3159F79F6C(unk_0xB417689857646F61(unk_0x096275889B8E0EE0())))
		{
			if ((unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(377.153f, -717.567f, 10.0536f) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(320.9934f, 265.2515f, 82.1221f)) || unk_0xB417689857646F61(unk_0x096275889B8E0EE0()) == unk_0xCDD36C9E5C469070(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_123(0, 0))
		{
			return 0;
		}
		if (Global_24590)
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
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_122(iVar8))
				{
					if (func_100(iVar4))
					{
						if (!func_99(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 0), Var5) < (210f * 210f))
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

bool func_99(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_112(unk_0x4ED6CFDFE8D4131A(iParam0, 31), -1, 1)) + 2011;
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
	
	func_121(&uVar0, unk_0xB6101ABE62B5F080());
	func_120(&uVar0, unk_0x4E162231B823DBBF());
	func_119(&uVar0, unk_0xC82CF208C2B19199());
	func_118(&uVar0, unk_0xDF2FD796C54480A5());
	func_117(&uVar0, unk_0x2D44E8FC79EAB1AC());
	func_116(&uVar0, unk_0xE136DCA28C4A48BA());
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
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
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
						if (((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_132()) || Global_96400) || Global_24446) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_128()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1) || func_132()) || Global_24446) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_132()) || Global_96400) || Global_24446) || func_131()) || func_50(8, -1)) || func_128()) || func_130()) || func_129()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0)) || func_132()) || Global_96400) || Global_24446) || func_131()) || func_50(8, -1)) || func_130()) || func_129()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_132() || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || func_50(8, -1)) || func_127()) || func_126()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_50(8, -1) || func_130()) || func_129()) || func_126()) || func_125())
						{
							return 0;
						}
						if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
						{
							if ((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_132()) || Global_24446) || func_131()) || func_50(8, -1)) || func_129()) || func_128()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || func_132()) || func_129()) || Global_96400) || Global_24446) || func_131()) || Global_35957) || func_50(8, -1)) || func_128()) || func_126()) || func_127()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xE1B9C14B617F05EF(unk_0x096275889B8E0EE0(), 0) || !unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D())) || !unk_0xAA67BCB0097F2FA3(unk_0x217E9DC48139933D())) || !unk_0x37F9A426FBCF4AF2()) || unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0)) || unk_0xC1DB1F019BEDAE9D(unk_0x096275889B8E0EE0())) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) || unk_0xF555167F2CB5C972(unk_0x096275889B8E0EE0())) || unk_0xB600CF743D8150FB(unk_0x096275889B8E0EE0())) || unk_0xC8183AE963C58374(unk_0x217E9DC48139933D(), 1)) || unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D())) || func_132()) || Global_96400) || Global_24446) || func_131()) || func_50(8, -1)) || func_128()) || func_126()) || func_130()) || func_129()) || func_127())
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
	return Global_90001.f_1;
}

int func_126()
{
	if (Global_87289 != -1)
	{
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_127()
{
	if (unk_0x8E34C953364A76DD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_90014.f_291 > 0;
}

bool func_130()
{
	return Global_90014.f_290 > 0;
}

var func_131()
{
	return Global_1315900;
}

int func_132()
{
	if (!unk_0x03A753E2C8458335())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_133()
{
	func_47();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_97353.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_138()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
		if (unk_0xB86D29B10F627379(uVar0, 0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0xD214895E39AA3787(uVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139()
{
	var uVar0;
	
	if (unk_0x678AD9D5AC57ADBF())
	{
		if (unk_0x4ED6CFDFE8D4131A(unk_0x59555B52B08EAD8E(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (unk_0x179A3B2BFCDDD9DF())
	{
		if (unk_0xBEA038AAF3BCAE99())
		{
			if (unk_0xB88CF9E7E0420A4A())
			{
				if (unk_0x678AD9D5AC57ADBF())
				{
					uVar0 = unk_0x59555B52B08EAD8E(866);
					unk_0xF73FBE4845C43B5B(&uVar0, 0);
					unk_0x6EDBA20BD26B698C(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_140()
{
	int iVar0;
	
	if (iLocal_52 && !iLocal_57)
	{
		if (!func_6("RECGF_SHOOT"))
		{
			func_4();
		}
		if (unk_0xCD82FA174080B3B1(uLocal_59))
		{
			unk_0xF2C3C9DA47AAA54A(&uLocal_59);
		}
		if (!unk_0x6CFF81397164A1D3(iLocal_67))
		{
			unk_0x020E173F318C12DA(iLocal_67, 317, 1);
			unk_0x473598683095D430(iLocal_67, 0);
			unk_0x49876BF356F39E66(iLocal_67, 0);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (unk_0xCD82FA174080B3B1(uLocal_60[iVar0]))
			{
				unk_0xF2C3C9DA47AAA54A(&(uLocal_60[iVar0]));
			}
			if (!unk_0x6CFF81397164A1D3(iLocal_68[iVar0]) && !unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				if (iVar0 < 2)
				{
					if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
					{
						unk_0x8B5A576784E393A4(iLocal_68[iVar0], iLocal_76[iVar0], unk_0x096275889B8E0EE0(), 8, 20f, 786469, 150f, 10f, 1);
						unk_0x2AD4789CBFD829EC(iLocal_68[iVar0], 1);
					}
					else
					{
						unk_0x06C6AD4F38E8412D(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
					}
				}
				else
				{
					unk_0x06C6AD4F38E8412D(iLocal_68[iVar0], unk_0x096275889B8E0EE0(), 200f, -1, 0, 0);
				}
				unk_0x49876BF356F39E66(iLocal_68[iVar0], 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_76)
		{
			if (!unk_0x7D5B1F88E7504BBA(iLocal_76[iVar0]))
			{
				unk_0x6C9B2BE03BBD5C98(&(iLocal_76[iVar0]));
				if (unk_0x2E882EA08284F674("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		unk_0xC27FB879C2B9A2EB("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		unk_0xD7FA719CB54866C2(1f);
		unk_0x305538B87F955257(417.901f, 3578.002f, 31.176f, 1305.897f, 3604.306f, 40.1064f, 100.0625f, 1);
		unk_0x7E42B5424BF0E844();
		unk_0x50E52637EF70EF77(3, 1);
		unk_0x50E52637EF70EF77(5, 1);
		func_3(&uLocal_84, 1);
		func_3(&uLocal_84, 2);
		func_3(&uLocal_84, 3);
		func_3(&uLocal_84, 4);
	}
	func_141(-1);
	unk_0x5E8B6D17FF91CD59();
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
		unk_0x402669A4BDAA72DA(0, 0);
		Global_97344 = unk_0x4F67E8ECA7D3F667();
		func_144(30000);
		StringCopy(&cVar0, func_143(Global_97342, 1), 64);
		if (func_36(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		unk_0x937D8BBA51EBAAA8(&cVar0, Global_97339, (unk_0x4F67E8ECA7D3F667() - Global_97340), 0);
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		unk_0x7D1D4A3602B6AD4E(&Global_97349, 0);
	}
	func_142(&Global_24503);
	Global_97343 = 0;
	func_97(-1);
}

void func_142(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
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
	Global_35464 = (unk_0x4F67E8ECA7D3F667() + iParam0);
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
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
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
	func_118(uParam0, iParam4);
	func_117(uParam0, iParam5);
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

