#region Local Var
	var uLocal_0 = 0;
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
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<6> Local_71 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101[2] = { 0, 0 };
	var uLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	var uLocal_154 = 16;
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
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
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
	iLocal_18 = 3;
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
	fLocal_46 = -1f;
	StringCopy(&Local_71, "", 24);
	Local_117 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_134 = -1;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2C897F101BA20806(11))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_57))
		{
			if (unk_0x9A132E8DFAE1F524(iLocal_57))
			{
				unk_0xA7130AF256ED96A1(iLocal_57);
			}
		}
		func_218();
	}
	if (func_217(256, 1))
	{
		unk_0x82706E6C897B0FA1();
	}
	if (func_175(Local_50, -1, 0, 0, 0))
	{
		func_172(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xFEC6476AFCF2033F() || iLocal_48 == 4) || iLocal_67 > 18)
		{
			if (!func_171())
			{
				if (func_170())
				{
					func_218();
				}
			}
			unk_0x0022A74B21F0C0B9("RE_DO", 0);
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				switch (iLocal_47)
				{
					case 0:
						if (!bLocal_49)
						{
							if (func_158())
							{
								func_218();
							}
							if (!bLocal_58)
							{
								func_157();
							}
							if (bLocal_58)
							{
								func_156();
							}
						}
						if (bLocal_49)
						{
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						func_148();
						if (iLocal_68 > 3)
						{
							if (!iLocal_91 && !func_147())
							{
								func_146(&uLocal_154, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_91 = 1;
							}
						}
						switch (iLocal_48)
						{
							case 0:
								func_142();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!iLocal_98)
								{
									if ((unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && unk_0x7A98E0DD2E6FAB7A(Local_105, 1f)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_105, 20f, 20f, 20f, 0, 1, 0))
									{
										func_141();
										func_132(1);
										iLocal_98 = 1;
									}
								}
								else
								{
									if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_105, 50f, 50f, 50f, 0, 1, 0))
									{
										func_130();
									}
									if (!unk_0x2DE0B96E966FD817(iLocal_57))
									{
										if (!unk_0x965556ACF6A83973(iLocal_57, Local_62, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_48 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_128();
								if (iLocal_67 > 18)
								{
									func_127();
								}
								else if (!func_147())
								{
									func_127();
								}
								break;
							
							case 7:
								func_128();
								func_123();
								break;
							
							case 4:
								func_128();
								func_75();
								if (func_74(Local_111))
								{
									func_56(0);
									func_54();
									unk_0x4EDE34FBADD967A6(0);
									func_146(&uLocal_154, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_52())
								{
									func_56(0);
									func_54();
									unk_0x4EDE34FBADD967A6(0);
									func_146(&uLocal_154, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_88)
								{
									if (func_51())
									{
										if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_111, 23f, 60f, 20f, 0, 1, 0))
										{
											func_56(0);
											func_54();
											unk_0x4EDE34FBADD967A6(0);
											if (!func_147())
											{
												func_146(&uLocal_154, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_88 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_50();
								break;
						}
						if (!unk_0x2DE0B96E966FD817(iLocal_56))
						{
							if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "f_attack_end", 3))
							{
								func_48(iLocal_56, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_47() && !func_46()) && iLocal_47 != 2)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_57))
							{
								if (unk_0x965556ACF6A83973(iLocal_57, Local_117, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
									{
										iLocal_120[8] = unk_0x8AC4394F3C9173EE(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										unk_0x07CDE0236CD8AAC8(iLocal_120[8], iLocal_57, unk_0x879EC196F941E547(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_45(0);
									unk_0x4EDE34FBADD967A6(0);
									func_54();
									iLocal_47 = 2;
								}
							}
						}
						if (func_44())
						{
							func_50();
						}
						break;
					
					case 2:
						if (func_43())
						{
							if (unk_0x538DF9E5B1DF01EB(iLocal_57))
							{
								unk_0x51A89CCC8A5317D0(&iLocal_57);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_218();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		func_3(0);
		if (Global_24684)
		{
			unk_0x495459882382D113("AC_STOP");
		}
		func_2();
		if (unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
		{
			uLocal_132 = unk_0x82212519219FCCB5(joaat("pickup_weapon_golfclub"), unk_0xBF8499F46AD9093A(iLocal_120[8], 1), unk_0x1A6D58515B4120D5(iLocal_120[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			unk_0xD4C90F16EBBFE620(&(iLocal_120[8]));
		}
		unk_0xC7210908156431E0(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x2966D41514EAE84B(255, uLocal_151, joaat("player"));
		if (bLocal_58)
		{
			unk_0xEA054561294AEC10(iLocal_95);
			unk_0xEA054561294AEC10(iLocal_96);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_56))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_56))
			{
				unk_0x2C4E82CF88213975(iLocal_56, 0);
			}
			unk_0x6B3DDEE91652BE59(&iLocal_56);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_104))
		{
			unk_0xB6FB9702660D84F6(&uLocal_104);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_101[0]))
		{
			unk_0xB6FB9702660D84F6(&(uLocal_101[0]));
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_57))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (!unk_0x202EF5D8203705EF(iLocal_57, 0))
				{
					unk_0x6336B4069B9B25B4(iLocal_57);
				}
				unk_0xA7130AF256ED96A1(iLocal_57);
				unk_0x2C4E82CF88213975(iLocal_57, 0);
				unk_0xA8BC819B54F5B824(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_120[iVar0]))
			{
				unk_0xBF1AB1205B822518(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0xC116CE577D8DDF3C(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x8C4265EEC0D6FD1A();
		iLocal_148 = 1;
	}
	if ((!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_62, 80f, 80f, 80f, 0, 1, 0) || unk_0x3FCA2F27F738473E(uLocal_132)) || !(unk_0x538DF9E5B1DF01EB(iLocal_120[8]) && !unk_0x27C40BD761A1E76F(uLocal_132)))
	{
		func_218();
	}
}

void func_2()
{
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312729;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_7(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

int func_11()
{
	return Global_24446;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_11() == 0)
		{
			return unk_0x889D01384B54BCE3(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_14()
{
	while (func_147())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_42())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_97439.f_16828.f_383 = func_41() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_47 = 3;
}

void func_15()
{
	func_16();
}

int func_16()
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_19(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_97425 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_23((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_21();
	}
}

void func_21()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_22(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_11() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_97439.f_1729.f_539.f_3213)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_35(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_34(unk_0xA16EC202D9D35357());
			if (func_33(iVar0) && (!func_32(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_32(int iParam0)
{
	return Global_34915 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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

int func_41()
{
	return (Global_97439.f_8270.f_21 + Global_97439.f_16828.f_380);
}

int func_42()
{
	return 1;
}

int func_43()
{
	if (Global_24681)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_44()
{
	if (unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x2DE0B96E966FD817(iLocal_57))
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	Global_16704 = iParam0;
}

int func_46()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_47()
{
	return Global_24680;
}

void func_48(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB3DDF1AA38C87006(iParam0, sParam1, sParam2, func_49(iParam3), 0);
}

int func_49(int iParam0)
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

void func_50()
{
	iLocal_47 = 3;
}

int func_51()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		iLocal_150 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(iLocal_150, 0))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0xD9275EB8FA656B5C(iLocal_57, iLocal_150))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_52()
{
	if (func_53() == 2)
	{
		if (func_47())
		{
			if (unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				if (!Global_24685)
				{
					unk_0x495459882382D113("AC_EN_ROUTE_CULT");
					Global_24685 = 1;
					if (!Global_24684)
					{
						Global_24684 = 1;
						return 1;
					}
				}
			}
			else if (Global_24685)
			{
				unk_0x495459882382D113("AC_LEFT_AREA");
				Global_24685 = 0;
			}
		}
	}
	return 0;
}

int func_53()
{
	func_31();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_54()
{
	Global_14559 = 0;
	func_55();
}

void func_55()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_70)
		{
			if (func_63(&uLocal_154, "REDO2AU", &Local_77, &Local_71, 8, 0, 0))
			{
				iLocal_70 = 0;
			}
		}
	}
	else if ((!iLocal_70 && unk_0xD47B332729054512()) && !func_61())
	{
		Local_77 = { func_60() };
		Local_71 = { func_59() };
		func_57();
		iLocal_70 = 1;
	}
}

void func_57()
{
	Global_14559 = 0;
	func_58();
}

void func_58()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

struct<6> func_59()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x8E904BB26E98BDB0();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_60()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

int func_61()
{
	if (((((((func_62("REDO2_DRP") || func_62("REDO2_UV")) || func_62("REDO2_UV2")) || func_62("REDO2_CULT")) || func_62("REDO2_NEAR")) || func_62("REDO2_GETOUT")) || func_62("REDO2_JACK")) || func_62("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_62(char* sParam0)
{
	var uVar0;
	
	if (func_147())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_73(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_64(sParam2, iParam4, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_72();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_71(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_70();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_69();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_68())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_67())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_66();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_65();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_72();
	}
	return 0;
}

void func_65()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_66()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_67()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_69()
{
	if (func_32(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_53();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_71(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_72()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_73(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_74(struct<3> Param0)
{
	if (func_53() == 2)
	{
		if (func_47() && !Global_24683)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0) > (fLocal_46 + 200f) || unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				Global_24683 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_75()
{
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_67 > 18)
			{
				iLocal_69++;
			}
			else if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				unk_0x00CFDDE7ACCA68D1(iLocal_57, 1f);
				if (unk_0x14F9932776F21CC2(iLocal_57, unk_0xA16EC202D9D35357(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_67 < 19)
					{
						if (func_146(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_69++;
						}
					}
					else
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 1:
			func_119();
			if (unk_0x538DF9E5B1DF01EB(iLocal_57))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_57))
				{
					if (unk_0xECFECDAD51A6184F(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 0))
					{
						if (unk_0x5E01840EE8DA8D5B(iLocal_57))
						{
							unk_0xD4C90F16EBBFE620(&(iLocal_120[8]));
						}
					}
					if (unk_0x74AE4BA75DB7653F(iLocal_57))
					{
						func_117();
						func_111();
						if (func_146(&uLocal_154, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_69++;
						}
					}
					else
					{
						unk_0x00CFDDE7ACCA68D1(iLocal_57, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_111();
			func_110();
			func_119();
			func_109();
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				func_108();
			}
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_111, 10f, 10f, 10f, 0, 1, 0))
			{
				unk_0xD28031B36012E8A1();
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_57))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_57))
				{
					if (unk_0x965556ACF6A83973(iLocal_57, Local_111, Global_19, 1, 1, 0) && func_107(1, 0, 1))
					{
						if (unk_0x5660C8AFDD9C1721(uLocal_99))
						{
							unk_0xB6FB9702660D84F6(&uLocal_99);
						}
						if (unk_0x5660C8AFDD9C1721(uLocal_100))
						{
							unk_0xB6FB9702660D84F6(&uLocal_100);
						}
						if (unk_0x202EF5D8203705EF(iLocal_57, 0))
						{
							unk_0x7DDC5160036EE766(unk_0x6ADAC08D70C79DE5(iLocal_57, 0), 10.5f, 3, 0);
							iLocal_69++;
						}
						else
						{
							iLocal_69 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_106();
			if (bLocal_144)
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_76();
			if (bLocal_144)
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_76()
{
	switch (iLocal_142)
	{
		case 0:
			unk_0xD28031B36012E8A1();
			func_57();
			if (func_146(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			iLocal_142++;
			break;
		
		case 2:
			unk_0xD28031B36012E8A1();
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				unk_0xA7130AF256ED96A1(iLocal_57);
				unk_0x6D98AA46076A68BE(&uLocal_94);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 7000, 2048, 2);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 4000);
				unk_0x353F4B963593F141(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x963BB7C99350D827(uLocal_94);
				unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
				unk_0x2AF68ED52DC74B7D(&uLocal_94);
				unk_0x2686393074E14730(iLocal_57, 1);
				iLocal_143 = unk_0x09560C7DE2A384BD() + 4000;
				iLocal_142++;
			}
			break;
		
		case 3:
			if (iLocal_143 < unk_0x09560C7DE2A384BD())
			{
				unk_0xD28031B36012E8A1();
				iLocal_142++;
			}
			break;
		
		case 4:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_97439.f_17233), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_97439.f_17233.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_97439.f_17233.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_97439.f_17233.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142++;
			}
			break;
		
		case 5:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_78(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_102();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_101(99, 1);
					func_100(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_100(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_100(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_85(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_85(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_100(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_100(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_100(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_85(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_100(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_100(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_100(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_84(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_101(95, iParam3);
					break;
				
				case 1:
					func_101(97, iParam3);
					break;
				
				case 2:
					func_101(96, iParam3);
					break;
			}
			func_101(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_100(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_100(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_100(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_34915 == 15)
	{
		func_79(0);
	}
	return 1;
}

void func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_81(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_83() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_83() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_82(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0)
{
	func_101(93, iParam0);
	func_101(29, iParam0);
	func_101(30, iParam0);
}

bool func_85(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_83() /*8064*/].f_5756.f_10, iParam0);
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)
{
	if (func_32(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_98(&Global_2542838))
	{
		if (func_96(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_2542837 - 0.5f));
}

void func_93(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_94(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_95(var uParam0)
{
	return uParam0->f_72;
}

bool func_96(var uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_98(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_102()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_105(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_106()
{
	switch (iLocal_142)
	{
		case 0:
			unk_0xD28031B36012E8A1();
			func_57();
			if (func_146(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			unk_0xD28031B36012E8A1();
			iLocal_142++;
			break;
		
		case 2:
			unk_0xD28031B36012E8A1();
			iLocal_142++;
			break;
		
		case 3:
			unk_0xD28031B36012E8A1();
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				unk_0xA7130AF256ED96A1(iLocal_57);
				unk_0x6D98AA46076A68BE(&uLocal_94);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 7000, 2048, 2);
				unk_0x976B05703BFD8E48(0, 300);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 4000);
				unk_0x353F4B963593F141(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x963BB7C99350D827(uLocal_94);
				unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
				unk_0x2AF68ED52DC74B7D(&uLocal_94);
				unk_0x2686393074E14730(iLocal_57, 1);
				if (!unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
				{
					iLocal_120[8] = unk_0x8AC4394F3C9173EE(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					unk_0x07CDE0236CD8AAC8(iLocal_120[8], iLocal_57, unk_0x879EC196F941E547(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_143 = unk_0x09560C7DE2A384BD() + 1000;
				iLocal_142++;
			}
			break;
		
		case 4:
			unk_0xD28031B36012E8A1();
			if (iLocal_143 < unk_0x09560C7DE2A384BD())
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_57))
				{
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					iLocal_143 = unk_0x09560C7DE2A384BD() + 3000;
					iLocal_142++;
				}
			}
			break;
		
		case 5:
			if (iLocal_143 < unk_0x09560C7DE2A384BD())
			{
				unk_0xD28031B36012E8A1();
				iLocal_142++;
			}
			break;
		
		case 6:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_97439.f_17233), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_97439.f_17233.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_97439.f_17233.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_97439.f_17233.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142++;
			}
			break;
		
		case 7:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (!func_61())
	{
		func_56(1);
	}
	if (!func_147())
	{
		switch (iLocal_140)
		{
			case 0:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 1:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 2:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 3:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 4:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 5:
				func_146(&uLocal_154, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 6:
				iLocal_141 = unk_0x09560C7DE2A384BD() + 1000;
				iLocal_140++;
				break;
			
			case 7:
				if (iLocal_141 < unk_0x09560C7DE2A384BD())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 8:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 9:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 10:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 11:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 12:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 13:
				iLocal_141 = unk_0x09560C7DE2A384BD() + 600;
				iLocal_140++;
				break;
			
			case 14:
				if (iLocal_141 < unk_0x09560C7DE2A384BD())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 15:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 16:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 17:
				iLocal_141 = unk_0x09560C7DE2A384BD() + 800;
				iLocal_140++;
				break;
			
			case 18:
				if (iLocal_141 < unk_0x09560C7DE2A384BD())
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_140++;
				}
				break;
			
			case 19:
				if (func_53() == 0)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_154, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 20:
				func_146(&uLocal_154, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_140++;
				break;
			}
	}
}

void func_109()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		if (!iLocal_83)
		{
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 1) && unk_0xAD203DB71ADF6E57(iLocal_57, unk_0xB49BA83A5C224F40(), 0))
				{
					func_56(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					func_146(&uLocal_154, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_83 = 1;
				}
			}
		}
		else if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 0) && unk_0xAD203DB71ADF6E57(iLocal_57, unk_0xB49BA83A5C224F40(), 0))
			{
				iLocal_83 = 0;
			}
		}
		if (!iLocal_84)
		{
			if (unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
			{
				func_56(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_146(&uLocal_154, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_84 = 1;
			}
		}
		else if (!unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
		{
			iLocal_84 = 0;
		}
		if (!iLocal_85)
		{
			if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				func_56(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_146(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
		{
			iLocal_85 = 0;
		}
	}
}

void func_110()
{
	if (unk_0x37906EF4D599CEFA(unk_0xA16EC202D9D35357()))
	{
		if (iLocal_135 == 0)
		{
			iLocal_135 = unk_0x09560C7DE2A384BD();
		}
		else
		{
			iLocal_136 = unk_0x09560C7DE2A384BD();
		}
	}
	else
	{
		iLocal_136 = 0;
		iLocal_135 = 0;
	}
	if ((iLocal_136 - iLocal_135) > 60000)
	{
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		func_146(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!unk_0x2DE0B96E966FD817(iLocal_57))
		{
			if (unk_0x965556ACF6A83973(iLocal_57, Local_114, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x353F4B963593F141(iLocal_57, Local_114, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0xAC9F22F89987627B(iLocal_57, 1193033728, 0);
			}
			unk_0x2686393074E14730(iLocal_57, 1);
			unk_0xA7130AF256ED96A1(iLocal_57);
		}
		func_50();
	}
}

void func_111()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 8f, 8f, 8f, 0, 1, 0) || unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()))
		{
			if ((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0x202EF5D8203705EF(iLocal_57, 0)) && !unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_101[0]))
				{
					uLocal_101[0] = func_115(iLocal_57, 0, 145);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_99))
				{
					unk_0xB6FB9702660D84F6(&uLocal_99);
				}
			}
			else
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_101[0]))
				{
					unk_0xB6FB9702660D84F6(&(uLocal_101[0]));
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_99))
				{
					uLocal_99 = func_113(Local_111, 1);
				}
				if (func_53() == 2 && !func_46())
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_100))
					{
						uLocal_100 = func_113(Local_117, 0);
						unk_0x2025496D9184D312(uLocal_100, 269);
						func_112();
					}
				}
			}
		}
		else
		{
			if (!unk_0x5660C8AFDD9C1721(uLocal_101[0]))
			{
				uLocal_101[0] = func_115(iLocal_57, 0, 145);
			}
			if (unk_0x5660C8AFDD9C1721(uLocal_99))
			{
				unk_0xB6FB9702660D84F6(&uLocal_99);
			}
		}
	}
}

void func_112()
{
	if (func_53() == 2)
	{
		if (!Global_24682)
		{
			func_105("CULT_BLIP_HELP", -1);
			Global_24682 = 1;
		}
	}
}

var func_113(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_114(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

float func_114(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_115(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_116(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_114(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_114(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_114(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_117()
{
	int iVar0;
	
	unk_0x6B3DDEE91652BE59(&iLocal_56);
	func_118(&uLocal_154, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		unk_0x2E674C3D6D338EFA(&(iLocal_120[iVar0]));
		iVar0++;
	}
	unk_0xB845ECB6BD2996BD("random@domestic");
}

void func_118(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_119()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (!func_122())
			{
				if (unk_0x9A132E8DFAE1F524(iLocal_57))
				{
					unk_0xA7130AF256ED96A1(iLocal_57);
				}
				if (unk_0x221AC1EF116F6053(iLocal_57, 1227113341) != 1 && unk_0x221AC1EF116F6053(iLocal_57, 1227113341) != 0)
				{
					unk_0xF3B924DCFDECDB4B(iLocal_57, unk_0xA16EC202D9D35357(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x202EF5D8203705EF(iLocal_57, 0))
				{
					unk_0xBB5AA994E06B28E2(iLocal_57, 0, 0);
				}
				if (!iLocal_90)
				{
					func_56(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_147())
					{
						if (!func_121())
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
				if (unk_0x221AC1EF116F6053(iLocal_57, 1227113341) == 1 && unk_0x221AC1EF116F6053(iLocal_57, 1227113341) == 0)
				{
					unk_0x937785D9C1929236(iLocal_57);
				}
			}
		}
		else if (!unk_0x9A132E8DFAE1F524(iLocal_57))
		{
			unk_0xE4C80CFABEAEED8F(iLocal_57, func_120());
			unk_0x59DFDC536FDF0000(iLocal_57, 1);
			unk_0x5129CFBCCCCA8250(iLocal_57, 0);
		}
	}
}

var func_120()
{
	return unk_0xF8BF19C18CE5C2B2(unk_0xA495B6AB6F2BF8C7());
}

int func_121()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1))
		{
			if ((unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1))) || unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1)))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if (((((!unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()) && !unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) && !unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357())) && !unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) && !unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357())) && !unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("rhino")))
			{
				if (unk_0xE3C88401E17BFBB2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()), 0))
		{
			if ((((!unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123()
{
	switch (iLocal_68)
	{
		case 0:
			if (!func_147())
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (func_122())
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_68 = 2;
					}
					else
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_68++;
					}
				}
				else
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_53() == 1)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_53() == 2)
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_68++;
				}
			}
			break;
		
		case 1:
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				if (!func_122())
				{
					if (!func_147())
					{
						func_146(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_138 = unk_0x09560C7DE2A384BD();
						iLocal_68++;
					}
				}
				else
				{
					iLocal_68++;
				}
			}
			else if (!func_147())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_138 = unk_0x09560C7DE2A384BD();
				iLocal_68++;
			}
			break;
		
		case 2:
			iLocal_139 = unk_0x09560C7DE2A384BD();
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_122())
					{
						unk_0x2966D41514EAE84B(255, uLocal_151, joaat("player"));
						if (func_126("REDO2_WT"))
						{
							func_54();
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_68++;
					}
					else if (!func_147() && !iLocal_86)
					{
						if (!func_121())
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_86 = 1;
					}
				}
			}
			if (iLocal_138 != 0)
			{
				if ((iLocal_139 - iLocal_138) > 60000)
				{
					if (func_146(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						unk_0x4EDE34FBADD967A6(2000);
						if (!unk_0x2DE0B96E966FD817(iLocal_57))
						{
							unk_0x6D98AA46076A68BE(&uLocal_94);
							unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 2000);
							unk_0xF53800A9F833243E(0, -1);
							unk_0xAC9F22F89987627B(0, 1193033728, 0);
							unk_0x963BB7C99350D827(uLocal_94);
							unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
							unk_0x2AF68ED52DC74B7D(&uLocal_94);
							unk_0x2686393074E14730(iLocal_57, 1);
							unk_0x4EDE34FBADD967A6(3000);
							iLocal_48 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_57) && unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
			{
				unk_0x6D98AA46076A68BE(&uLocal_94);
				if (iLocal_67 > 18)
				{
				}
				unk_0x353F4B963593F141(0, unk_0xBF8499F46AD9093A(iLocal_120[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_125(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iLocal_120[8], 1)));
				unk_0x5B5659C49032B96C(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x5B5659C49032B96C(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_94);
				unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
				unk_0x2AF68ED52DC74B7D(&uLocal_94);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_68++;
			}
			break;
		
		case 4:
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_57) && !unk_0xE44A580B551C3645(iLocal_120[8]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					unk_0x89262E1616C9CAF3(iLocal_57, iLocal_120[8], 0);
					if (unk_0x4CB0BCFFEC712BA2(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68 = 7;
					}
				}
				else if (unk_0xC9D9444186B5A374() > 10000 || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(iLocal_120[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!unk_0x5A6F774C8E17AA21(iLocal_120[8]))
					{
						unk_0x6D98AA46076A68BE(&uLocal_94);
						unk_0x5B5659C49032B96C(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x5B5659C49032B96C(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						unk_0x963BB7C99350D827(uLocal_94);
						unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
						unk_0x2AF68ED52DC74B7D(&uLocal_94);
						iLocal_68 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(iLocal_57) && !unk_0xE44A580B551C3645(iLocal_120[8]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					unk_0x89262E1616C9CAF3(iLocal_57, iLocal_120[8], 0);
					if (unk_0x4CB0BCFFEC712BA2(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0x14F9932776F21CC2(iLocal_57, unk_0xA16EC202D9D35357(), 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x07CDE0236CD8AAC8(iLocal_120[8], iLocal_57, unk_0x879EC196F941E547(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					unk_0xE4C80CFABEAEED8F(iLocal_57, unk_0xF8BF19C18CE5C2B2(unk_0x1788E93557766241()));
					unk_0x59DFDC536FDF0000(iLocal_57, 1);
					unk_0x5129CFBCCCCA8250(iLocal_57, 0);
					func_124();
					iLocal_48 = 4;
				}
			}
			break;
	}
}

void func_124()
{
	if (!func_46())
	{
		if (func_53() == 2)
		{
			Global_24680 = 1;
		}
	}
}

var func_125(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x3C616B96B92181C5((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_126(char* sParam0)
{
	var uVar0;
	
	if (func_147())
	{
		MemCopy(&uVar0, {func_59()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_127()
{
	if (!iLocal_97)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_57))
		{
			if (unk_0x14F9932776F21CC2(iLocal_57, unk_0xA16EC202D9D35357(), 12f, 12f, 5f, 0, 1, 0))
			{
				unk_0x937785D9C1929236(iLocal_57);
				unk_0x6D98AA46076A68BE(&uLocal_94);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 18000, 0, 2);
				unk_0x963BB7C99350D827(uLocal_94);
				unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
				unk_0x2AF68ED52DC74B7D(&uLocal_94);
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_57, 15000, 0, 2);
				iLocal_97 = 1;
			}
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		if (unk_0x14F9932776F21CC2(iLocal_57, unk_0xA16EC202D9D35357(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_137)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0x937785D9C1929236(iLocal_57);
					unk_0x6D98AA46076A68BE(&uLocal_94);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 0, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
					unk_0x963BB7C99350D827(uLocal_94);
					unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
					unk_0x2AF68ED52DC74B7D(&uLocal_94);
					bLocal_137 = true;
				}
				else
				{
					unk_0x937785D9C1929236(iLocal_57);
					unk_0x6D98AA46076A68BE(&uLocal_94);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 0, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
					unk_0x963BB7C99350D827(uLocal_94);
					unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
					unk_0x2AF68ED52DC74B7D(&uLocal_94);
					bLocal_137 = true;
				}
			}
			if (bLocal_137)
			{
				if (bLocal_53)
				{
					func_57();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x2DE0B96E966FD817(iLocal_57))
					{
						if (!func_147())
						{
							if (unk_0x68E6C2D89A534992(iLocal_57, unk_0xA16EC202D9D35357(), 90f))
							{
								if (func_146(&uLocal_154, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_48 = 7;
								}
							}
						}
					}
				}
				else if (!func_147())
				{
					if (func_146(&uLocal_154, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_48 = 7;
					}
				}
			}
		}
	}
}

void func_128()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_57))
	{
		if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_129())
			{
				func_45(0);
				iLocal_89 = 0;
			}
		}
		else if (func_147() && !iLocal_89)
		{
			func_45(1);
			iLocal_89 = 1;
		}
	}
}

int func_129()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	switch (iLocal_67)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_57) && !unk_0x2DE0B96E966FD817(iLocal_56))
			{
				if (unk_0x7A98E0DD2E6FAB7A(unk_0xBF8499F46AD9093A(iLocal_56, 1), 3f))
				{
					if (!func_147())
					{
						if (func_146(&uLocal_154, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							unk_0x5B5659C49032B96C(iLocal_57, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							unk_0x5B5659C49032B96C(iLocal_56, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_67++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
			{
				unk_0x07CDE0236CD8AAC8(iLocal_120[8], iLocal_56, unk_0x879EC196F941E547(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_67++;
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0xBF1AB1205B822518(iLocal_120[8], 0, 1);
						unk_0x3899C3FF414D2D90(iLocal_120[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_87 && unk_0x538DF9E5B1DF01EB(iLocal_120[8]))
			{
				if (unk_0xC406F7EDB827A6CF(iLocal_120[8]))
				{
					unk_0x9AF4B23C594DCEE5(-1, "CLOTHES_THROWN", iLocal_120[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[9]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0x07CDE0236CD8AAC8(iLocal_120[9], iLocal_56, unk_0x879EC196F941E547(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_147() || func_129())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_67++;
			}
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[9]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0xBF1AB1205B822518(iLocal_120[9], 0, 1);
						unk_0x3899C3FF414D2D90(iLocal_120[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_87 && unk_0x538DF9E5B1DF01EB(iLocal_120[9]))
			{
				if (unk_0xC406F7EDB827A6CF(iLocal_120[9]))
				{
					unk_0x9AF4B23C594DCEE5(-1, "CLOTHES_THROWN", iLocal_120[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 8:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[10]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0x07CDE0236CD8AAC8(iLocal_120[10], iLocal_56, unk_0x879EC196F941E547(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && unk_0x538DF9E5B1DF01EB(iLocal_120[10]))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0xBF1AB1205B822518(iLocal_120[10], 0, 1);
						unk_0x3899C3FF414D2D90(iLocal_120[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_87 && unk_0x538DF9E5B1DF01EB(iLocal_120[10]))
			{
				if (unk_0xC406F7EDB827A6CF(iLocal_120[10]))
				{
					unk_0x9AF4B23C594DCEE5(-1, "CLOTHES_THROWN", iLocal_120[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 11:
			if (!unk_0x2DE0B96E966FD817(iLocal_56) && !unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0x95EDB2DEFA5BB405(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x4CB0BCFFEC712BA2(iLocal_56, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0x1CAB36EC4E43E586(iLocal_56, iLocal_57, 0);
					}
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_154, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_67 = 14;
			}
			break;
		
		case 14:
			if (!func_147())
			{
				if (func_146(&uLocal_154, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_131();
					iLocal_67++;
				}
			}
			break;
		
		case 15:
			if (!func_147())
			{
				if (func_146(&uLocal_154, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_67++;
				}
			}
			break;
		
		case 16:
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				unk_0x6D98AA46076A68BE(&uLocal_94);
				unk_0x574CC08ACCB0F5FC(0);
				unk_0x5BAF25119CA70A04(0, Local_108, 0);
				unk_0x963BB7C99350D827(uLocal_94);
				unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
				unk_0x2AF68ED52DC74B7D(&uLocal_94);
				iLocal_67++;
			}
			break;
		
		case 17:
			if (unk_0x538DF9E5B1DF01EB(iLocal_56))
			{
				if (!unk_0xE44A580B551C3645(iLocal_56))
				{
					if (unk_0x965556ACF6A83973(iLocal_56, Local_108, 1f, 1f, 5f, 0, 1, 0) && unk_0x0E7E162F5A49FAAA(iLocal_56))
					{
						unk_0x51A89CCC8A5317D0(&iLocal_56);
					}
				}
			}
			if (iLocal_92 < unk_0x09560C7DE2A384BD())
			{
				if (!func_147())
				{
					if (func_146(&uLocal_154, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_92 = unk_0x09560C7DE2A384BD() + 5000;
						iLocal_93++;
					}
				}
			}
			if (iLocal_93 > 0)
			{
				iLocal_67++;
			}
			break;
		
		case 18:
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (!func_147())
				{
					if (func_146(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						unk_0xAC9F22F89987627B(iLocal_57, 1193033728, 0);
						iLocal_67++;
					}
				}
			}
			break;
	}
	if (!bLocal_53)
	{
		if (iLocal_67 > 2 && iLocal_67 < 8)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 6f, 4f, 5f, 0, 1, 0) || (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 12f, 12f, 5f, 0, 1, 2) && unk_0xF9B25E181FF6237B(unk_0x1788E93557766241())))
				{
					unk_0x937785D9C1929236(iLocal_57);
					func_131();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						func_57();
						while (func_147())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_146(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_67 > 7)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				if (unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 6f, 8f, 5f, 0, 1, 0))
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_101[0]))
					{
						unk_0xAF9E05E1AFA9F45F(uLocal_101[0], 1);
					}
					unk_0x937785D9C1929236(iLocal_57);
					func_131();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						func_54();
						while (func_147())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_146(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (iLocal_54 < unk_0x09560C7DE2A384BD())
		{
			func_57();
			if (unk_0x538DF9E5B1DF01EB(iLocal_56))
			{
				func_131();
			}
			iLocal_48 = 3;
		}
	}
}

void func_131()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_56))
	{
		unk_0x6D98AA46076A68BE(&uLocal_94);
		unk_0x047BDE74F5ADA7D9(0, Local_108, 1f, -1, 1193033728, 1056964608);
		unk_0x5B5659C49032B96C(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		unk_0x963BB7C99350D827(uLocal_94);
		unk_0x0891776D0327B77A(iLocal_56, uLocal_94);
		unk_0x2AF68ED52DC74B7D(&uLocal_94);
		unk_0x2686393074E14730(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_120[iVar0]))
			{
				unk_0xBF1AB1205B822518(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_132(int iParam0)
{
	if (func_135())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_25(Global_97428))
		{
			func_133(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_25(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_105(func_134(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_105(func_134(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_105(func_134(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

char* func_134(int iParam0)
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

int func_135()
{
	switch (func_136(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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

int func_136(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_140(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_138(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_137(uParam0, iParam4);
		}
	}
	return 2;
}

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_138(int iParam0)
{
	return func_139(iParam0, Global_34915);
}

int func_139(int iParam0, int iParam1)
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

int func_140(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_138(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_141()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_104))
	{
		unk_0xB6FB9702660D84F6(&uLocal_104);
	}
	if (!unk_0x5660C8AFDD9C1721(uLocal_101[0]))
	{
		uLocal_101[0] = func_115(iLocal_57, 0, 145);
		unk_0xAF9E05E1AFA9F45F(uLocal_101[0], 0);
	}
}

void func_142()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	unk_0x84710FE7666EBF7B(Local_62, 2f, 1, 0, 0, 0);
	unk_0x84710FE7666EBF7B(Local_59, 2f, 1, 0, 0, 0);
	unk_0xC7210908156431E0(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x01C9658D4C7F66D5(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	unk_0x4210B2DCFC2838AC(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x4210B2DCFC2838AC(Local_111 - Vector(3f, 2f, 2f), Local_111 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	unk_0x4210B2DCFC2838AC(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	unk_0x0B29CE7F19BFE6C0("rghDomestic", &uLocal_151);
	unk_0x2966D41514EAE84B(5, uLocal_151, joaat("player"));
	iLocal_56 = unk_0x6F9DE0DE8363ADF1(26, iLocal_95, Local_59, fLocal_65, 1, 1);
	unk_0x2C4E82CF88213975(iLocal_56, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_56, 17, 1);
	unk_0x15EBFEEB77BF84B7(iLocal_56, 8, 0);
	unk_0xDEB0A02F25120B62(iLocal_56, 1, 0);
	unk_0xDEB0A02F25120B62(iLocal_56, 2, 0);
	unk_0xDEB0A02F25120B62(iLocal_56, 128, 1);
	unk_0xDEB0A02F25120B62(iLocal_56, 8, 0);
	unk_0x5B5659C49032B96C(iLocal_56, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xA9465591B42213AE(iLocal_56, uLocal_151);
	func_145(iLocal_56, "GENERIC_WHATEVER", 24);
	unk_0xEA054561294AEC10(iLocal_95);
	unk_0xA1478EBA54DDE31B(iLocal_56, 185, 1);
	iLocal_57 = unk_0x6F9DE0DE8363ADF1(26, iLocal_96, Local_62, fLocal_66, 1, 1);
	unk_0x2C4E82CF88213975(iLocal_57, 1);
	unk_0xDEB0A02F25120B62(iLocal_57, 1, 1);
	unk_0xDEB0A02F25120B62(iLocal_57, 2, 0);
	unk_0xDEB0A02F25120B62(iLocal_57, 128, 1);
	unk_0xDEB0A02F25120B62(iLocal_57, 8, 0);
	unk_0xDEB0A02F25120B62(iLocal_57, 65536, 1);
	unk_0xA1478EBA54DDE31B(iLocal_57, 185, 1);
	unk_0xA1478EBA54DDE31B(iLocal_57, 206, 1);
	unk_0x49D26ECEB56A3095(iLocal_57, 0);
	unk_0xA8BC819B54F5B824(iLocal_57, 0);
	unk_0x5B5659C49032B96C(iLocal_57, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xA9465591B42213AE(iLocal_57, uLocal_151);
	func_145(iLocal_57, "GENERIC_WHATEVER", 24);
	unk_0xEA054561294AEC10(iLocal_96);
	unk_0x4745F9C50C63A48C(iLocal_57, iLocal_56, -1, 0, 2);
	unk_0x4745F9C50C63A48C(iLocal_56, iLocal_57, -1, 0, 2);
	unk_0x42544C0CC4949BD5(iLocal_56, 0, 1, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_56, 2, 1, 1, 0);
	unk_0x42544C0CC4949BD5(iLocal_56, 3, 1, 1, 0);
	unk_0x42544C0CC4949BD5(iLocal_56, 4, 1, 2, 0);
	unk_0x42544C0CC4949BD5(iLocal_57, 0, 0, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_57, 2, 1, 0, 0);
	unk_0x42544C0CC4949BD5(iLocal_57, 3, 1, 2, 0);
	unk_0x42544C0CC4949BD5(iLocal_57, 4, 1, 1, 0);
	unk_0x42544C0CC4949BD5(iLocal_57, 8, 0, 0, 0);
	func_144();
	unk_0xD0E2BFCE93AE3ABD(&uLocal_133, 5);
	if (func_53() == 0)
	{
		func_143(&uLocal_154, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
	}
	if (func_53() == 1)
	{
		func_143(&uLocal_154, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
	}
	if (func_53() == 2)
	{
		func_143(&uLocal_154, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
	}
	func_143(&uLocal_154, 3, iLocal_57, "REDOCastro", 0, 1);
	unk_0x3E99D575EE07FDB3(iLocal_57, sLocal_152);
	func_143(&uLocal_154, 4, iLocal_56, "NATHALIA", 0, 1);
	unk_0x3E99D575EE07FDB3(iLocal_56, sLocal_153);
	unk_0xC1B1E9A034A63A62(0);
	iLocal_149 = 1;
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_144()
{
	iLocal_120[0] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[0], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_tshirt_02"));
	iLocal_120[1] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[1], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_jeans_02"));
	iLocal_120[2] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[2], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_shoe_01"));
	iLocal_120[3] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[3], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_jeans_01"));
	iLocal_120[4] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[4], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_shoe_02"));
	iLocal_120[5] = unk_0x8AC4394F3C9173EE(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[5], 1);
	unk_0xEA054561294AEC10(joaat("prop_ld_shirt_01"));
	iLocal_120[6] = unk_0x8AC4394F3C9173EE(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[6], 1);
	unk_0xEA054561294AEC10(joaat("prop_porn_mag_03"));
	iLocal_120[7] = unk_0x8AC4394F3C9173EE(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	unk_0x0BBAD8A322CB595E(iLocal_120[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	unk_0x3CC3106305C40A28(iLocal_120[7], 1);
	unk_0xEA054561294AEC10(joaat("prop_porn_mag_01"));
	iLocal_120[8] = unk_0x8AC4394F3C9173EE(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_120[9] = unk_0x8AC4394F3C9173EE(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	unk_0xEA054561294AEC10(joaat("prop_cs_rub_binbag_01"));
	iLocal_120[10] = unk_0x8AC4394F3C9173EE(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	unk_0xEA054561294AEC10(joaat("prop_golf_bag_01"));
}

void func_145(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD550A19A432377FF(uParam0, sParam1, func_49(iParam2), 1);
}

bool func_146(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_73(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_64(sParam2, iParam3, 0);
}

int func_147()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_57) && !unk_0x2DE0B96E966FD817(iLocal_56))
	{
		if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
		{
			if (unk_0x864FA69DF1FAD1ED(iLocal_57, unk_0xA16EC202D9D35357()) || unk_0x864FA69DF1FAD1ED(iLocal_56, unk_0xA16EC202D9D35357()))
			{
				if (((unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_57) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_57)) || unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_56)) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_56))
				{
					if (iLocal_134 == -1)
					{
						iLocal_134 = unk_0x09560C7DE2A384BD();
					}
				}
				else
				{
					iLocal_134 = -1;
				}
			}
			if ((iLocal_134 != -1 && unk_0x09560C7DE2A384BD() > iLocal_134 + 500) || unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				func_155();
			}
		}
	}
	if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
	{
		func_155();
	}
	if (iLocal_48 == 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_57))
		{
			if (func_154(iLocal_57))
			{
				func_153();
			}
		}
	}
	if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_152();
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_56))
	{
		if (func_151(iLocal_56))
		{
			func_149();
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_57))
	{
		if (func_151(iLocal_57) || unk_0xBF8ADDCADFC4691E(iLocal_57, unk_0xA16EC202D9D35357(), 1))
		{
			func_149();
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_56))
	{
		if (func_151(iLocal_56) || unk_0xBF8ADDCADFC4691E(iLocal_56, unk_0xA16EC202D9D35357(), 1))
		{
			func_149();
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_57, 250f, 250f, 250f, 0, 1, 0) || unk_0x21FF064386DC6A0A(iLocal_57))
		{
			iLocal_48 = 11;
		}
	}
	if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
	{
		func_149();
	}
}

void func_149()
{
	func_54();
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
	{
		func_146(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_146(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		unk_0x937785D9C1929236(iLocal_57);
		unk_0x6D98AA46076A68BE(&uLocal_94);
		unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
		unk_0x963BB7C99350D827(uLocal_94);
		unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
		unk_0x2AF68ED52DC74B7D(&uLocal_94);
		unk_0x2686393074E14730(iLocal_57, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_150();
	unk_0x4EDE34FBADD967A6(0);
	func_50();
	iLocal_48 = 11;
}

void func_150()
{
	int iVar0;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_56))
	{
		unk_0xFC75211D7BD0539E(iLocal_56, -1);
		unk_0x2686393074E14730(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_120[iVar0]))
			{
				unk_0xBF1AB1205B822518(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_151(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xE44A580B551C3645(iParam0))
		{
			if (unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_152()
{
	func_150();
	func_54();
	unk_0x4EDE34FBADD967A6(0);
	func_146(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		unk_0x937785D9C1929236(iLocal_57);
		unk_0x6D98AA46076A68BE(&uLocal_94);
		unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
		unk_0x963BB7C99350D827(uLocal_94);
		unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
		unk_0x2AF68ED52DC74B7D(&uLocal_94);
		unk_0x2686393074E14730(iLocal_57, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_153()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		unk_0x937785D9C1929236(iLocal_57);
		unk_0x0676D83B2FE460E1(iLocal_57, unk_0xBF8499F46AD9093A(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 1), 150f, -1, 0, 0);
		unk_0x2686393074E14730(iLocal_57, 1);
	}
	iLocal_48 = 11;
}

int func_154(int iParam0)
{
	if (!unk_0x2DE0B96E966FD817(uParam0))
	{
		if (!unk_0x202EF5D8203705EF(iParam0, 0) && unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (unk_0x5AF66EDEBFA76B9B(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_155()
{
	func_54();
	unk_0x4EDE34FBADD967A6(0);
	func_146(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x2DE0B96E966FD817(iLocal_57))
	{
		unk_0x6D98AA46076A68BE(&uLocal_94);
		unk_0xBB5AA994E06B28E2(0, 0, 4096);
		unk_0xEA36CC2E7750344B(0, unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
		unk_0x963BB7C99350D827(uLocal_94);
		unk_0x0891776D0327B77A(iLocal_57, uLocal_94);
		unk_0x2AF68ED52DC74B7D(&uLocal_94);
		unk_0x2686393074E14730(iLocal_57, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_156()
{
	unk_0x939DA7EBCC6588FF(iLocal_95);
	unk_0x939DA7EBCC6588FF(iLocal_96);
	unk_0x939DA7EBCC6588FF(joaat("prop_golf_iron_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_cs_rub_binbag_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_golf_bag_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_tshirt_02"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_jeans_02"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_shoe_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_jeans_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_shoe_02"));
	unk_0x939DA7EBCC6588FF(joaat("prop_ld_shirt_01"));
	unk_0x939DA7EBCC6588FF(joaat("prop_porn_mag_03"));
	unk_0x939DA7EBCC6588FF(joaat("prop_porn_mag_01"));
	unk_0x3D28909AF30D70F4("random@domestic");
	unk_0x3D28909AF30D70F4("random@security_van");
	if ((((((((((((((unk_0x5494F37F35C1D7D7(iLocal_95) && unk_0x5494F37F35C1D7D7(iLocal_96)) && unk_0x5494F37F35C1D7D7(joaat("prop_golf_iron_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_cs_rub_binbag_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_golf_bag_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_tshirt_02"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_jeans_02"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_shoe_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_jeans_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_shoe_02"))) && unk_0x5494F37F35C1D7D7(joaat("prop_ld_shirt_01"))) && unk_0x5494F37F35C1D7D7(joaat("prop_porn_mag_03"))) && unk_0x5494F37F35C1D7D7(joaat("prop_porn_mag_01"))) && unk_0x6C47E32491756A1A("random@domestic")) && unk_0x6C47E32491756A1A("random@security_van"))
	{
		bLocal_49 = true;
	}
	else
	{
		unk_0x939DA7EBCC6588FF(iLocal_95);
		unk_0x939DA7EBCC6588FF(iLocal_96);
		unk_0x939DA7EBCC6588FF(joaat("prop_golf_iron_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_cs_rub_binbag_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_golf_bag_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_tshirt_02"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_jeans_02"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_shoe_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_jeans_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_shoe_02"));
		unk_0x939DA7EBCC6588FF(joaat("prop_ld_shirt_01"));
		unk_0x939DA7EBCC6588FF(joaat("prop_porn_mag_03"));
		unk_0x939DA7EBCC6588FF(joaat("prop_porn_mag_01"));
		unk_0x3D28909AF30D70F4("random@domestic");
		unk_0x3D28909AF30D70F4("random@security_van");
	}
}

void func_157()
{
	Local_105 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_95 = joaat("a_f_y_business_02");
	iLocal_96 = joaat("a_m_y_golfer_01");
	sLocal_152 = "REDOCastro";
	sLocal_153 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_59 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_65 = 348.9152f;
	Local_62 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_66 = 156.0666f;
	Local_108 = { -469.082f, 535.0479f, 123.3553f };
	Local_111 = { -1378.273f, 40.2254f, 52.6774f };
	Local_114 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_58 = true;
}

int func_158()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_169())
		{
			return 0;
		}
	}
	if (func_165())
	{
		return 1;
	}
	if (func_159(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_159(float fParam0, bool bParam1)
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_33(func_53()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_160(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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

void func_160(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(uParam1, "Abigail1", func_163(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 1:
			func_161(uParam1, "Abigail2", func_163(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 2:
			func_161(uParam1, "Barry1", func_163(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 3:
			func_161(uParam1, "Barry2", func_163(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 4:
			func_161(uParam1, "Barry3", func_163(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 5:
			func_161(uParam1, "Barry3A", func_163(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 6:
			func_161(uParam1, "Barry3C", func_163(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 7:
			func_161(uParam1, "Barry4", func_163(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_162(iParam0), 0, 0);
			break;
		
		case 8:
			func_161(uParam1, "Dreyfuss1", func_163(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 9:
			func_161(uParam1, "Epsilon1", func_163(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 10:
			func_161(uParam1, "Epsilon2", func_163(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 11:
			func_161(uParam1, "Epsilon3", func_163(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 12:
			func_161(uParam1, "Epsilon4", func_163(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 13:
			func_161(uParam1, "Epsilon5", func_163(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 14:
			func_161(uParam1, "Epsilon6", func_163(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 15:
			func_161(uParam1, "Epsilon7", func_163(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 16:
			func_161(uParam1, "Epsilon8", func_163(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 17:
			func_161(uParam1, "Extreme1", func_163(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 18:
			func_161(uParam1, "Extreme2", func_163(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 19:
			func_161(uParam1, "Extreme3", func_163(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 20:
			func_161(uParam1, "Extreme4", func_163(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 21:
			func_161(uParam1, "Fanatic1", func_163(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 22:
			func_161(uParam1, "Fanatic2", func_163(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 23:
			func_161(uParam1, "Fanatic3", func_163(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_162(iParam0), 0, 1);
			break;
		
		case 24:
			func_161(uParam1, "Hao1", func_163(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_162(iParam0), 0, 1);
			break;
		
		case 25:
			func_161(uParam1, "Hunting1", func_163(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 26:
			func_161(uParam1, "Hunting2", func_163(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 27:
			func_161(uParam1, "Josh1", func_163(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 28:
			func_161(uParam1, "Josh2", func_163(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 29:
			func_161(uParam1, "Josh3", func_163(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 30:
			func_161(uParam1, "Josh4", func_163(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 31:
			func_161(uParam1, "Maude1", func_163(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 32:
			func_161(uParam1, "Minute1", func_163(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 33:
			func_161(uParam1, "Minute2", func_163(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 34:
			func_161(uParam1, "Minute3", func_163(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 35:
			func_161(uParam1, "MrsPhilips1", func_163(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 36:
			func_161(uParam1, "MrsPhilips2", func_163(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 37:
			func_161(uParam1, "Nigel1", func_163(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 38:
			func_161(uParam1, "Nigel1A", func_163(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 39:
			func_161(uParam1, "Nigel1B", func_163(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 40:
			func_161(uParam1, "Nigel1C", func_163(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 41:
			func_161(uParam1, "Nigel1D", func_163(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 42:
			func_161(uParam1, "Nigel2", func_163(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 43:
			func_161(uParam1, "Nigel3", func_163(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 44:
			func_161(uParam1, "Omega1", func_163(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 45:
			func_161(uParam1, "Omega2", func_163(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 46:
			func_161(uParam1, "Paparazzo1", func_163(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 47:
			func_161(uParam1, "Paparazzo2", func_163(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 48:
			func_161(uParam1, "Paparazzo3", func_163(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 49:
			func_161(uParam1, "Paparazzo3A", func_163(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 50:
			func_161(uParam1, "Paparazzo3B", func_163(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 51:
			func_161(uParam1, "Paparazzo4", func_163(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 52:
			func_161(uParam1, "Rampage1", func_163(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 54:
			func_161(uParam1, "Rampage3", func_163(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 55:
			func_161(uParam1, "Rampage4", func_163(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 56:
			func_161(uParam1, "Rampage5", func_163(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 53:
			func_161(uParam1, "Rampage2", func_163(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 57:
			func_161(uParam1, "TheLastOne", func_163(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 58:
			func_161(uParam1, "Tonya1", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 59:
			func_161(uParam1, "Tonya2", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 60:
			func_161(uParam1, "Tonya3", func_163(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 61:
			func_161(uParam1, "Tonya4", func_163(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 62:
			func_161(uParam1, "Tonya5", func_163(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_161(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_162(int iParam0)
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

struct<2> func_163(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_164(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_164(int iParam0)
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

int func_165()
{
	if (func_168() && !func_169())
	{
		return 1;
	}
	if (func_167() && func_166())
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_97157 > 0;
}

int func_167()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_169()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_170()
{
	if (!func_138(5))
	{
		return 1;
	}
	if (func_165())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_169())
		{
			return 0;
		}
	}
	if (func_159(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	if ((Global_97428 == func_39() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_174(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_173();
}

void func_173()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_174(int iParam0)
{
	Global_97428 = iParam0;
}

int func_175(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_216())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_169())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_165())
		{
			return 0;
		}
		if (func_215())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_33(func_53()))
		{
			if (func_159(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_214(iParam3))
		{
			return 0;
		}
		if (func_33(func_53()))
		{
			if (func_213(func_53()) == 4 || func_213(func_53()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_53()))
		{
			if (!func_212(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_211(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_210())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_201(4))
		{
			return 0;
		}
		if (!func_138(5))
		{
			return 0;
		}
		if (func_200(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_200(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_214(30) && !func_200(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_53()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_199(iVar8))
				{
					if (func_177(iVar4))
					{
						if (!func_176(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_53() != iVar4)
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

bool func_176(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_178(iVar0);
}

int func_178(int iParam0)
{
	return func_179(iParam0, 1);
}

int func_179(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_199(iParam0))
	{
		return 0;
	}
	func_180(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_181(func_192(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_181(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_191(iParam0, iParam1))
	{
		iVar0 = func_190(iParam1);
		iVar1 = func_188(iParam0);
		iVar2 = (func_188(iParam0) - func_188(iParam1));
		iVar3 = (func_190(iParam0) - func_190(iParam1));
		iVar4 = (func_187(iParam0) - func_187(iParam1));
		iVar5 = (func_186(iParam0) - func_186(iParam1));
		iVar6 = (func_185(iParam0) - func_185(iParam1));
		iVar7 = (func_184(iParam0) - func_184(iParam1));
	}
	else
	{
		iVar0 = func_190(iParam0);
		iVar1 = func_188(iParam1);
		iVar2 = (func_188(iParam1) - func_188(iParam0));
		iVar3 = (func_190(iParam1) - func_190(iParam0));
		iVar4 = (func_187(iParam1) - func_187(iParam0));
		iVar5 = (func_186(iParam1) - func_186(iParam0));
		iVar6 = (func_185(iParam1) - func_185(iParam0));
		iVar7 = (func_184(iParam1) - func_184(iParam0));
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
		iVar4 = (iVar4 + func_183(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_182(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_182(float fParam0, float fParam1, float fParam2)
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

int func_183(int iParam0, int iParam1)
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

int func_184(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_185(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_186(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_187(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_188(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_189(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_189(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_190(int iParam0)
{
	return iParam0 & 15;
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_199(iParam1) || !func_199(iParam0))
	{
		return 1;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	var uVar0;
	
	func_198(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_197(&uVar0, unk_0x26ADBF0B08315387());
	func_196(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_195(&uVar0, unk_0xA3730885141EEA96());
	func_194(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_193(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_193(var uParam0, int iParam1)
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

void func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_195(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_190(*uParam0);
	iVar1 = func_188(*uParam0);
	if (iParam1 < 1 || iParam1 > func_183(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_196(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_199(int iParam0)
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
	iVar0 = func_184(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_185(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_186(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_188(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_190(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_187(iParam0);
	if (iVar5 < 1 || iVar5 > func_183(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_200(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_53();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_209()) || Global_96486) || Global_24448) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_205()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_209()) || Global_24448) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_209()) || Global_96486) || Global_24448) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_209()) || Global_96486) || Global_24448) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_209() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_71(8, -1)) || func_204()) || func_203()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_71(8, -1) || func_207()) || func_206()) || func_203()) || func_202())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_209()) || Global_24448) || func_208()) || func_71(8, -1)) || func_206()) || func_205()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_209()) || func_206()) || Global_96486) || Global_24448) || func_208()) || Global_35965) || func_71(8, -1)) || func_205()) || func_203()) || func_204()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_209()) || Global_96486) || Global_24448) || func_208()) || func_71(8, -1)) || func_205()) || func_203()) || func_207()) || func_206()) || func_204())
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

var func_202()
{
	return Global_90081.f_1;
}

int func_203()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_204()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_206()
{
	return Global_90094.f_291 > 0;
}

bool func_207()
{
	return Global_90094.f_290 > 0;
}

var func_208()
{
	return Global_1315891;
}

int func_209()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_210()
{
	func_69();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_211(int iParam0)
{
	return func_191(func_192(), iParam0);
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_53();
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

int func_213(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_214(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_216())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	var uVar0;
	
	if (Global_24596)
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_218()
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		func_3(0);
		if (Global_24684)
		{
			unk_0x495459882382D113("AC_STOP");
		}
		func_2();
		unk_0xC7210908156431E0(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x2966D41514EAE84B(255, uLocal_151, joaat("player"));
		if (bLocal_58)
		{
			unk_0xEA054561294AEC10(iLocal_95);
			unk_0xEA054561294AEC10(iLocal_96);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_56))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_56))
			{
				unk_0xA1478EBA54DDE31B(iLocal_56, 317, 1);
				unk_0x2C4E82CF88213975(iLocal_56, 0);
			}
			unk_0x6B3DDEE91652BE59(&iLocal_56);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_104))
		{
			unk_0xB6FB9702660D84F6(&uLocal_104);
		}
		if (unk_0x5660C8AFDD9C1721(uLocal_101[0]))
		{
			unk_0xB6FB9702660D84F6(&(uLocal_101[0]));
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_57))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_57))
			{
				unk_0xA1478EBA54DDE31B(iLocal_57, 317, 1);
				if (!unk_0x202EF5D8203705EF(iLocal_57, 0))
				{
					unk_0x6336B4069B9B25B4(iLocal_57);
				}
				unk_0xA7130AF256ED96A1(iLocal_57);
				unk_0x2C4E82CF88213975(iLocal_57, 0);
				unk_0xA8BC819B54F5B824(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_120[iVar0]))
			{
				unk_0xBF1AB1205B822518(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0xC116CE577D8DDF3C(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0x8C4265EEC0D6FD1A();
	}
	func_219(-1);
	unk_0x82706E6C897B0FA1();
}

void func_219(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_171())
	{
		func_223(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_97428, 1), 64);
		if (func_38(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_220(&Global_24505);
	Global_97429 = 0;
	func_174(-1);
}

void func_220(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

char* func_221(int iParam0, bool bParam1)
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

void func_222(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_223(int iParam0)
{
	func_224(iParam0, 0, func_229(iParam0));
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_192();
	func_227(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_226(iParam0, &uVar0);
	Var1 = { func_225(&uVar0) };
}

struct<16> func_225(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_187(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_190(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_188(*uParam0), 64);
	return Var0;
}

void func_226(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_188(*uParam0);
	iVar1 = func_190(*uParam0);
	iVar2 = func_187(*uParam0);
	iVar3 = func_186(*uParam0);
	iVar4 = func_185(*uParam0);
	iVar5 = func_184(*uParam0);
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
	iVar6 = func_183(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_183(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_228(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_198(uParam0, iParam1);
	func_197(uParam0, iParam2);
	func_196(uParam0, iParam3);
	func_195(uParam0, iParam4);
	func_194(uParam0, iParam5);
	func_193(uParam0, iParam6);
}

int func_229(int iParam0)
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

