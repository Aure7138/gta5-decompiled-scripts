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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	struct<6> Local_72 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102[2] = { 0, 0 };
	var uLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	int iLocal_121[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	bool bLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	var uLocal_155 = 16;
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
	var uLocal_319 = 0;
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
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	StringCopy(&Local_72, "", 24);
	Local_118 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_135 = -1;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xBCA819F9975BEDFA(11))
	{
		if (!unk_0xCA41A00932714525(iLocal_58))
		{
			if (unk_0xF30AB065E07D2B0F(iLocal_58))
			{
				unk_0xFB2D342CDD441DD9(iLocal_58);
			}
		}
		func_218();
	}
	if (func_217(256, 1))
	{
		unk_0x921053BAF754303D();
	}
	if (func_175(Local_51, -1, 0, 0, 0))
	{
		func_172(-1);
	}
	else
	{
		unk_0x921053BAF754303D();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0x3291E05256869D44() || iLocal_49 == 4) || iLocal_68 > 18)
		{
			if (!func_171())
			{
				if (func_170())
				{
					func_218();
				}
			}
			unk_0x31683E0D6DBB707E("RE_DO", 0);
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (!bLocal_50)
						{
							if (func_158())
							{
								func_218();
							}
							if (!bLocal_59)
							{
								func_157();
							}
							if (bLocal_59)
							{
								func_156();
							}
						}
						if (bLocal_50)
						{
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						func_148();
						if (iLocal_69 > 3)
						{
							if (!iLocal_92 && !func_147())
							{
								func_146(&uLocal_155, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
						}
						switch (iLocal_49)
						{
							case 0:
								func_142();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!iLocal_99)
								{
									if ((unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && unk_0xF7E1BD8196545EE3(Local_106, 1f)) || unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_106, 20f, 20f, 20f, 0, 1, 0))
									{
										func_141();
										func_132(1);
										iLocal_99 = 1;
									}
								}
								else
								{
									if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_106, 50f, 50f, 50f, 0, 1, 0))
									{
										func_130();
									}
									if (!unk_0xCA41A00932714525(iLocal_58))
									{
										if (!unk_0x1C34CE8087E3897C(iLocal_58, Local_63, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_49 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_128();
								if (iLocal_68 > 18)
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
								if (func_74(Local_112))
								{
									func_56(0);
									func_54();
									unk_0x4EDE34FBADD967A6(0);
									func_146(&uLocal_155, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_52())
								{
									func_56(0);
									func_54();
									unk_0x4EDE34FBADD967A6(0);
									func_146(&uLocal_155, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_89)
								{
									if (func_51())
									{
										if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_112, 23f, 60f, 20f, 0, 1, 0))
										{
											func_56(0);
											func_54();
											unk_0x4EDE34FBADD967A6(0);
											if (!func_147())
											{
												func_146(&uLocal_155, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_89 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_50();
								break;
						}
						if (!unk_0xCA41A00932714525(iLocal_57))
						{
							if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "f_attack_end", 3))
							{
								func_48(iLocal_57, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_47() && !func_46()) && iLocal_48 != 2)
						{
							if (!unk_0xCA41A00932714525(iLocal_58))
							{
								if (unk_0x1C34CE8087E3897C(iLocal_58, Local_118, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!unk_0x23E9113C762466ED(iLocal_121[8]))
									{
										iLocal_121[8] = unk_0x521A82CF998EDB21(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										unk_0x593C85206F061E3E(iLocal_121[8], iLocal_58, unk_0x0FC45085FB4E85B8(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_45(0);
									unk_0x4EDE34FBADD967A6(0);
									func_54();
									iLocal_48 = 2;
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
							if (unk_0x23E9113C762466ED(iLocal_58))
							{
								unk_0x478AE709A466CB7E(&iLocal_58);
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
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_25428)
		{
			unk_0x5BE53482EFD49141("AC_STOP");
		}
		func_2();
		if (unk_0x23E9113C762466ED(iLocal_121[8]))
		{
			uLocal_133 = unk_0xC70DFF4A4A4D72AB(joaat("pickup_weapon_golfclub"), unk_0x57240623C1BC6E88(iLocal_121[8], 1), unk_0xED13B51A133E020F(iLocal_121[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			unk_0x1AAFEA627BB9C402(&(iLocal_121[8]));
		}
		unk_0xB82FD68B5DE68F01(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xDE574EA7A7A2CAF8(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_96);
			unk_0x924CDE68BA2ED3BA(iLocal_97);
		}
		if (unk_0x23E9113C762466ED(iLocal_57))
		{
			if (!unk_0xCA41A00932714525(iLocal_57))
			{
				unk_0xCC61640A821F277C(iLocal_57, 0);
			}
			unk_0x6500ADB01E821BC0(&iLocal_57);
		}
		if (unk_0xA3794949321E107C(uLocal_105))
		{
			unk_0x020DF7300725ECAB(&uLocal_105);
		}
		if (unk_0xA3794949321E107C(uLocal_102[0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_102[0]));
		}
		if (unk_0x23E9113C762466ED(iLocal_58))
		{
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (!unk_0xFD0FE723227D5AB6(iLocal_58, 0))
				{
					unk_0xE31C711433681463(iLocal_58);
				}
				unk_0xFB2D342CDD441DD9(iLocal_58);
				unk_0xCC61640A821F277C(iLocal_58, 0);
				unk_0x6F65279C9BC14EDB(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x23E9113C762466ED(iLocal_121[iVar0]))
			{
				unk_0xB2E72B5CFE1EC372(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0xD211CBCC0E735E4F(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0xCC76050C3A61CF48();
		iLocal_149 = 1;
	}
	if ((!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_63, 80f, 80f, 80f, 0, 1, 0) || unk_0x386274C5877FE8E9(uLocal_133)) || !(unk_0x23E9113C762466ED(iLocal_121[8]) && !unk_0xAF6D1E258B973F1D(uLocal_133)))
	{
		func_218();
	}
}

void func_2()
{
	Global_25424 = 0;
	Global_25425 = 0;
	Global_25427 = 0;
	Global_25428 = 0;
	Global_25429 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 46)
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
		unk_0x21E7933CCC7B3724(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x21E7933CCC7B3724(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, iParam3);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312735;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_11()
{
	return Global_25190;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0xEB79FECD9022AAF0(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_11() == 0)
		{
			return unk_0x48B8265059381CD0(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
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
	Global_101700.f_17533.f_383 = func_41() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_48 = 3;
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
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
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
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0)
		{
			if (((Global_101689 == 1 || Global_101689 == 5) || Global_101689 == 11) || Global_101689 == 25)
			{
				func_19(2);
			}
			else if ((Global_101689 == 26 || Global_101689 == 8) || Global_101689 == 17)
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
	Global_101686 = iParam0;
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
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_22(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_11() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
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
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_19369.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_101700.f_2095.f_539.f_3549)
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
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_35(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_34(unk_0x17B5CC8A8615737D());
			if (func_33(iVar0) && (!func_32(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_33(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_32(int iParam0)
{
	return Global_35781 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_23954.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x6AF6B39BFDB53CB5(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x765F5B806B517045(&cParam0))
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
	return (Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380);
}

int func_42()
{
	return 1;
}

int func_43()
{
	if (Global_25425)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_44()
{
	if (unk_0xCA41A00932714525(iLocal_57) && unk_0xCA41A00932714525(iLocal_58))
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)
{
	Global_16756 = iParam0;
}

int func_46()
{
	if (Global_101700.f_23954.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_47()
{
	return Global_25424;
}

void func_48(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xECF05B7D463A3321(iParam0, sParam1, sParam2, func_49(iParam3), 0);
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
	iLocal_48 = 3;
}

int func_51()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iLocal_151 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (unk_0x45CD66F0A131E554(iLocal_151, 0))
		{
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x7B816C72877502C5(iLocal_58, iLocal_151))
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
			if (unk_0x3DC4639D5F23DEA2(-1014.154f, 4881.411f, 245.0001f, unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), 0), 1) < 400f)
			{
				if (!Global_25429)
				{
					unk_0x5BE53482EFD49141("AC_EN_ROUTE_CULT");
					Global_25429 = 1;
					if (!Global_25428)
					{
						Global_25428 = 1;
						return 1;
					}
				}
			}
			else if (Global_25429)
			{
				unk_0x5BE53482EFD49141("AC_LEFT_AREA");
				Global_25429 = 0;
			}
		}
	}
	return 0;
}

int func_53()
{
	func_31();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_54()
{
	Global_14611 = 0;
	func_55();
}

void func_55()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_71)
		{
			if (func_63(&uLocal_155, "REDO2AU", &Local_78, &Local_72, 8, 0, 0))
			{
				iLocal_71 = 0;
			}
		}
	}
	else if ((!iLocal_71 && unk_0x55C74612BE548D78()) && !func_61())
	{
		Local_78 = { func_60() };
		Local_72 = { func_59() };
		func_57();
		iLocal_71 = 1;
	}
}

void func_57()
{
	Global_14611 = 0;
	func_58();
}

void func_58()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

struct<6> func_59()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
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
	if (Global_15745 == 4)
	{
		return Global_15364;
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
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &uVar0))
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
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_64(sParam2, iParam4, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x660E8E7836E95077(0);
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
					func_72();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_71(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_70();
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_69();
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_68())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_66();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_65();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_66()
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_67()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		Global_14443 = func_53();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_70()
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

bool func_71(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_72()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_73(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_74(struct<3> Param0)
{
	if (func_53() == 2)
	{
		if (func_47() && !Global_25427)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Param0) > (fLocal_47 + 200f) || unk_0x3DC4639D5F23DEA2(-1014.154f, 4881.411f, 245.0001f, unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(unk_0x592069F95C314814()), 0), 1) < 400f)
			{
				Global_25427 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_75()
{
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_68 > 18)
			{
				iLocal_70++;
			}
			else if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0x7B0D34D6C9709C7A(iLocal_58, 1f);
				if (unk_0x4E84D2C9B54F79BA(iLocal_58, unk_0x17B5CC8A8615737D(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_68 < 19)
					{
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_70++;
						}
					}
					else
					{
						iLocal_70++;
					}
				}
			}
			break;
		
		case 1:
			func_119();
			if (unk_0x23E9113C762466ED(iLocal_58))
			{
				if (!unk_0xCA41A00932714525(iLocal_58))
				{
					if (unk_0x45CD66F0A131E554(unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D()), 0))
					{
						if (unk_0x9172DCBCA2E183EC(iLocal_58))
						{
							unk_0x1AAFEA627BB9C402(&(iLocal_121[8]));
						}
					}
					if (unk_0xD035C652F0986F10(iLocal_58))
					{
						func_117();
						func_111();
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_70++;
						}
					}
					else
					{
						unk_0x7B0D34D6C9709C7A(iLocal_58, 1f);
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
			if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_112, 10f, 10f, 10f, 0, 1, 0))
			{
				unk_0x05528626031014B3();
			}
			if (unk_0x23E9113C762466ED(iLocal_58))
			{
				if (!unk_0xCA41A00932714525(iLocal_58))
				{
					if (unk_0x1C34CE8087E3897C(iLocal_58, Local_112, Global_19, 1, 1, 0) && func_107(1, 0, 1))
					{
						if (unk_0xA3794949321E107C(uLocal_100))
						{
							unk_0x020DF7300725ECAB(&uLocal_100);
						}
						if (unk_0xA3794949321E107C(uLocal_101))
						{
							unk_0x020DF7300725ECAB(&uLocal_101);
						}
						if (unk_0xFD0FE723227D5AB6(iLocal_58, 0))
						{
							unk_0xEEA9C8F490BB3507(unk_0x60604E51E30D25B8(iLocal_58, 0), 10.5f, 3, 0);
							iLocal_70++;
						}
						else
						{
							iLocal_70 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_106();
			if (bLocal_145)
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_76();
			if (bLocal_145)
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_76()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x05528626031014B3();
			func_57();
			if (func_146(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			iLocal_143++;
			break;
		
		case 2:
			unk_0x05528626031014B3();
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0xFB2D342CDD441DD9(iLocal_58);
				unk_0x86DD54980FE55567(&uLocal_95);
				unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 7000, 2048, 2);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 4000);
				unk_0x084522380FECC554(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x007AE2AA9E15FA7B(uLocal_95);
				unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
				unk_0x08377FB2AE4C6899(&uLocal_95);
				unk_0x650BB0E111420EAF(iLocal_58, 1);
				iLocal_144 = unk_0x94E3E074F38DF86C() + 4000;
				iLocal_143++;
			}
			break;
		
		case 3:
			if (iLocal_144 < unk_0x94E3E074F38DF86C())
			{
				unk_0x05528626031014B3();
				iLocal_143++;
			}
			break;
		
		case 4:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_101700.f_17938), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_101700.f_17938.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_101700.f_17938.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_101700.f_17938.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_143++;
			}
			break;
		
		case 5:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_145 = true;
			}
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_78(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x7FE4F330D3D74809(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x731753D8494ABECD(iVar1, iVar0, 1);
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
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
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
					switch (unk_0xBDF22BDA553CBEE4())
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
	iVar5 = (Global_52996[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52996[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52996[iVar2] = 2147483647;
				}
				else
				{
					Global_52996[iVar2] = (Global_52996[iVar2] + iParam3);
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
				if ((Global_52996[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52996[iVar2];
			Global_52996[iVar2] = (Global_52996[iVar2] - iParam3);
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
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_35781 == 15)
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
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!bParam0)
		{
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52996[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x731753D8494ABECD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x731753D8494ABECD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x731753D8494ABECD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_81(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0) || unk_0x48B8265059381CD0(Global_2097152[func_83() /*10758*/].f_7546.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x21E7933CCC7B3724(&(Global_101700.f_19523.f_471), iParam0);
		unk_0x21E7933CCC7B3724(&(Global_2097152[func_83() /*10758*/].f_7546.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xBD18006F0815A298("COUP_RED");
		unk_0x34D84D73B5DF8E80(func_82(iParam0));
		unk_0x6132B0FB7289E50A(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x63C468D583002D23())
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19523.f_471, iParam0);
	}
	return unk_0x48B8265059381CD0(Global_2097152[func_83() /*10758*/].f_7546.f_10, iParam0);
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xF0EE2EF8EA972239(27))
	{
		return 0;
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x7FE4F330D3D74809(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x7FE4F330D3D74809(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x731753D8494ABECD(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xF0EE2EF8EA972239(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702)
	{
		return 0;
	}
	if (func_98(&Global_2595550))
	{
		if (func_96(&Global_2595550, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_2595550, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xDDAC6D364DFB4FD7(iParam0))
		{
			return 0;
		}
		if (unk_0xF0EE2EF8EA972239(iParam0))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	
	if (unk_0xF0EE2EF8EA972239(iParam1))
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
	func_94(uParam0, (Global_2595549 - 0.5f));
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
	
	unk_0x7FE4F330D3D74809(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x731753D8494ABECD(iParam0, iVar0, 1);
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_102()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		unk_0x7FE4F330D3D74809(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52996[0] == iVar0)
		{
			Global_52996[0] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52996[1] == iVar0)
		{
			Global_52996[1] = iVar0;
		}
		unk_0x7FE4F330D3D74809(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52996[2] == iVar0)
		{
			Global_52996[2] = iVar0;
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
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_106()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x05528626031014B3();
			func_57();
			if (func_146(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			unk_0x05528626031014B3();
			iLocal_143++;
			break;
		
		case 2:
			unk_0x05528626031014B3();
			iLocal_143++;
			break;
		
		case 3:
			unk_0x05528626031014B3();
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0xFB2D342CDD441DD9(iLocal_58);
				unk_0x86DD54980FE55567(&uLocal_95);
				unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 7000, 2048, 2);
				unk_0xC47A71ED8C26841E(0, 300);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 4000);
				unk_0x084522380FECC554(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x007AE2AA9E15FA7B(uLocal_95);
				unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
				unk_0x08377FB2AE4C6899(&uLocal_95);
				unk_0x650BB0E111420EAF(iLocal_58, 1);
				if (!unk_0x23E9113C762466ED(iLocal_121[8]))
				{
					iLocal_121[8] = unk_0x521A82CF998EDB21(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					unk_0x593C85206F061E3E(iLocal_121[8], iLocal_58, unk_0x0FC45085FB4E85B8(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_144 = unk_0x94E3E074F38DF86C() + 1000;
				iLocal_143++;
			}
			break;
		
		case 4:
			unk_0x05528626031014B3();
			if (iLocal_144 < unk_0x94E3E074F38DF86C())
			{
				if (!unk_0xCA41A00932714525(iLocal_58))
				{
					unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
					iLocal_144 = unk_0x94E3E074F38DF86C() + 3000;
					iLocal_143++;
				}
			}
			break;
		
		case 5:
			if (iLocal_144 < unk_0x94E3E074F38DF86C())
			{
				unk_0x05528626031014B3();
				iLocal_143++;
			}
			break;
		
		case 6:
			if (!func_147())
			{
				func_105("DOM_GOLF", -1);
				func_104(&(Global_101700.f_17938), 16);
				if (func_53() == 0)
				{
					func_103(&(Global_101700.f_17938.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_103(&(Global_101700.f_17938.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_103(&(Global_101700.f_17938.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_143++;
			}
			break;
		
		case 7:
			if (unk_0x83666F9FB8FEBD4B() > 5000)
			{
				bLocal_145 = true;
			}
			break;
	}
}

int func_107(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
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
		switch (iLocal_141)
		{
			case 0:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 1:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 2:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 3:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 4:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 5:
				func_146(&uLocal_155, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 6:
				iLocal_142 = unk_0x94E3E074F38DF86C() + 1000;
				iLocal_141++;
				break;
			
			case 7:
				if (iLocal_142 < unk_0x94E3E074F38DF86C())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 8:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 9:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 10:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 11:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 12:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 13:
				iLocal_142 = unk_0x94E3E074F38DF86C() + 600;
				iLocal_141++;
				break;
			
			case 14:
				if (iLocal_142 < unk_0x94E3E074F38DF86C())
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 15:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 16:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 17:
				iLocal_142 = unk_0x94E3E074F38DF86C() + 800;
				iLocal_141++;
				break;
			
			case 18:
				if (iLocal_142 < unk_0x94E3E074F38DF86C())
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_141++;
				}
				break;
			
			case 19:
				if (func_53() == 0)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_146(&uLocal_155, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 20:
				func_146(&uLocal_155, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_141++;
				break;
			}
	}
}

void func_109()
{
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		if (!iLocal_84)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
			{
				if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), unk_0x0C00E753D78DEA62(), 1) && unk_0x2315BB1606BC3DC3(iLocal_58, unk_0x0C00E753D78DEA62(), 0))
				{
					func_56(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					func_146(&uLocal_155, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_84 = 1;
				}
			}
		}
		else if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
		{
			if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), unk_0x0C00E753D78DEA62(), 0) && unk_0x2315BB1606BC3DC3(iLocal_58, unk_0x0C00E753D78DEA62(), 0))
			{
				iLocal_84 = 0;
			}
		}
		if (!iLocal_85)
		{
			if (unk_0x34D81E587C110E92(unk_0x17B5CC8A8615737D()))
			{
				func_56(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_146(&uLocal_155, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (!unk_0x34D81E587C110E92(unk_0x17B5CC8A8615737D()))
		{
			iLocal_85 = 0;
		}
		if (!iLocal_86)
		{
			if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				func_56(0);
				func_54();
				unk_0x4EDE34FBADD967A6(0);
				func_146(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_86 = 1;
			}
		}
		else if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
		{
			iLocal_86 = 0;
		}
	}
}

void func_110()
{
	if (unk_0x078054927A8129E2(unk_0x17B5CC8A8615737D()))
	{
		if (iLocal_136 == 0)
		{
			iLocal_136 = unk_0x94E3E074F38DF86C();
		}
		else
		{
			iLocal_137 = unk_0x94E3E074F38DF86C();
		}
	}
	else
	{
		iLocal_137 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_137 - iLocal_136) > 60000)
	{
		func_54();
		unk_0x4EDE34FBADD967A6(0);
		func_146(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!unk_0xCA41A00932714525(iLocal_58))
		{
			if (unk_0x1C34CE8087E3897C(iLocal_58, Local_115, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x084522380FECC554(iLocal_58, Local_115, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x401B18D8E7BEEC86(iLocal_58, 1193033728, 0);
			}
			unk_0x650BB0E111420EAF(iLocal_58, 1);
			unk_0xFB2D342CDD441DD9(iLocal_58);
		}
		func_50();
	}
}

void func_111()
{
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x9CE8181CB6710437(unk_0x17B5CC8A8615737D()))
		{
			if ((unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !unk_0xFD0FE723227D5AB6(iLocal_58, 0)) && !unk_0x9CE8181CB6710437(unk_0x17B5CC8A8615737D()))
			{
				if (!unk_0xA3794949321E107C(uLocal_102[0]))
				{
					uLocal_102[0] = func_115(iLocal_58, 0, 145);
				}
				if (unk_0xA3794949321E107C(uLocal_100))
				{
					unk_0x020DF7300725ECAB(&uLocal_100);
				}
			}
			else
			{
				if (unk_0xA3794949321E107C(uLocal_102[0]))
				{
					unk_0x020DF7300725ECAB(&(uLocal_102[0]));
				}
				if (!unk_0xA3794949321E107C(uLocal_100))
				{
					uLocal_100 = func_113(Local_112, 1);
				}
				if (func_53() == 2 && !func_46())
				{
					if (!unk_0xA3794949321E107C(uLocal_101))
					{
						uLocal_101 = func_113(Local_118, 0);
						unk_0xA0BCCD5C2B5FC84F(uLocal_101, 269);
						func_112();
					}
				}
			}
		}
		else
		{
			if (!unk_0xA3794949321E107C(uLocal_102[0]))
			{
				uLocal_102[0] = func_115(iLocal_58, 0, 145);
			}
			if (unk_0xA3794949321E107C(uLocal_100))
			{
				unk_0x020DF7300725ECAB(&uLocal_100);
			}
		}
	}
}

void func_112()
{
	if (func_53() == 2)
	{
		if (!Global_25426)
		{
			func_105("CULT_BLIP_HELP", -1);
			Global_25426 = 1;
		}
	}
}

var func_113(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_114(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
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
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_114(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_114(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_114(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_117()
{
	int iVar0;
	
	unk_0x6500ADB01E821BC0(&iLocal_57);
	func_118(&uLocal_155, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		unk_0x7572E8CAC3330ACE(&(iLocal_121[iVar0]));
		iVar0++;
	}
	unk_0xF9FFB9857F3120F8("random@domestic");
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
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (!func_122())
			{
				if (unk_0xF30AB065E07D2B0F(iLocal_58))
				{
					unk_0xFB2D342CDD441DD9(iLocal_58);
				}
				if (unk_0x1F8F07D86DA1A701(iLocal_58, 1227113341) != 1 && unk_0x1F8F07D86DA1A701(iLocal_58, 1227113341) != 0)
				{
					unk_0x834EF3BF2E6A8D29(iLocal_58, unk_0x17B5CC8A8615737D(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0xFD0FE723227D5AB6(iLocal_58, 0))
				{
					unk_0x83150B7E65C16AFE(iLocal_58, 0, 0);
				}
				if (!iLocal_91)
				{
					func_56(0);
					func_54();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_147())
					{
						if (!func_121())
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
				if (unk_0x1F8F07D86DA1A701(iLocal_58, 1227113341) == 1 && unk_0x1F8F07D86DA1A701(iLocal_58, 1227113341) == 0)
				{
					unk_0x15848523A8959DBC(iLocal_58);
				}
			}
		}
		else if (!unk_0xF30AB065E07D2B0F(iLocal_58))
		{
			unk_0xD25D00F8613DE69F(iLocal_58, func_120());
			unk_0xE4FFBEDDCAF2776A(iLocal_58, 1);
			unk_0x346D6A5BC2F879E2(iLocal_58, 0);
		}
	}
}

var func_120()
{
	return unk_0xDC8370280C455166(unk_0x592069F95C314814());
}

int func_121()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		if (unk_0x45CD66F0A131E554(unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D()), 1))
		{
			if ((unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1))) || unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1)))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x45CD66F0A131E554(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0))
		{
			if (((((!unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()) && !unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D())) && !unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D())) && !unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D())) && !unk_0xA66773CB22F42448(unk_0x17B5CC8A8615737D())) && !unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("rhino")))
			{
				if (unk_0x58060A1B26EA2597(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		if (unk_0x45CD66F0A131E554(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D()), 0))
		{
			if ((((!unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D()))) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && !unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && !unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123()
{
	switch (iLocal_69)
	{
		case 0:
			if (!func_147())
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if (func_122())
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_69 = 2;
					}
					else
					{
						if (func_53() == 0)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_69++;
					}
				}
				else
				{
					if (func_53() == 0)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_53() == 1)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_53() == 2)
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_69++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!func_122())
				{
					if (!func_147())
					{
						func_146(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_139 = unk_0x94E3E074F38DF86C();
						iLocal_69++;
					}
				}
				else
				{
					iLocal_69++;
				}
			}
			else if (!func_147())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_139 = unk_0x94E3E074F38DF86C();
				iLocal_69++;
			}
			break;
		
		case 2:
			iLocal_140 = unk_0x94E3E074F38DF86C();
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_122())
					{
						unk_0xDE574EA7A7A2CAF8(255, uLocal_152, joaat("player"));
						if (func_126("REDO2_WT"))
						{
							func_54();
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_69++;
					}
					else if (!func_147() && !iLocal_87)
					{
						if (!func_121())
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_146(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_87 = 1;
					}
				}
			}
			if (iLocal_139 != 0)
			{
				if ((iLocal_140 - iLocal_139) > 60000)
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						unk_0x4EDE34FBADD967A6(2000);
						if (!unk_0xCA41A00932714525(iLocal_58))
						{
							unk_0x86DD54980FE55567(&uLocal_95);
							unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 2000);
							unk_0x61B5A2C8D0F2B440(0, -1);
							unk_0x401B18D8E7BEEC86(0, 1193033728, 0);
							unk_0x007AE2AA9E15FA7B(uLocal_95);
							unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
							unk_0x08377FB2AE4C6899(&uLocal_95);
							unk_0x650BB0E111420EAF(iLocal_58, 1);
							unk_0x4EDE34FBADD967A6(3000);
							iLocal_49 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xCA41A00932714525(iLocal_58) && unk_0x23E9113C762466ED(iLocal_121[8]))
			{
				unk_0x86DD54980FE55567(&uLocal_95);
				if (iLocal_68 > 18)
				{
				}
				unk_0x084522380FECC554(0, unk_0x57240623C1BC6E88(iLocal_121[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_125(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iLocal_121[8], 1)));
				unk_0xEB1EFACA68933402(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0xEB1EFACA68933402(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				unk_0x007AE2AA9E15FA7B(uLocal_95);
				unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
				unk_0x08377FB2AE4C6899(&uLocal_95);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_69++;
			}
			break;
		
		case 4:
		case 5:
			if (!unk_0xCA41A00932714525(iLocal_58) && !unk_0xA929B2923D14E2F8(iLocal_121[8], 0))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0xBA2FCD05F658F91E(iLocal_58, iLocal_121[8], 0);
					if (unk_0x8E978F99E8F731CB(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69 = 7;
					}
				}
				else if (unk_0xC9D9444186B5A374() > 10000 || unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iLocal_121[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!unk_0xDDBA7A42B9B819EE(iLocal_121[8]))
					{
						unk_0x86DD54980FE55567(&uLocal_95);
						unk_0xEB1EFACA68933402(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0xEB1EFACA68933402(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						unk_0x007AE2AA9E15FA7B(uLocal_95);
						unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
						unk_0x08377FB2AE4C6899(&uLocal_95);
						iLocal_69 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0xCA41A00932714525(iLocal_58) && !unk_0xA929B2923D14E2F8(iLocal_121[8], 0))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0xBA2FCD05F658F91E(iLocal_58, iLocal_121[8], 0);
					if (unk_0x8E978F99E8F731CB(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x4E84D2C9B54F79BA(iLocal_58, unk_0x17B5CC8A8615737D(), 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x593C85206F061E3E(iLocal_121[8], iLocal_58, unk_0x0FC45085FB4E85B8(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					unk_0xD25D00F8613DE69F(iLocal_58, unk_0xDC8370280C455166(unk_0xBE369BE1BC57A796()));
					unk_0xE4FFBEDDCAF2776A(iLocal_58, 1);
					unk_0x346D6A5BC2F879E2(iLocal_58, 0);
					func_124();
					iLocal_49 = 4;
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
			Global_25424 = 1;
		}
	}
}

var func_125(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xC659BC2E3EDC150A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_126(char* sParam0)
{
	var uVar0;
	
	if (func_147())
	{
		MemCopy(&uVar0, {func_59()}, 4);
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_127()
{
	if (!iLocal_98)
	{
		if (!unk_0xCA41A00932714525(iLocal_58))
		{
			if (unk_0x4E84D2C9B54F79BA(iLocal_58, unk_0x17B5CC8A8615737D(), 12f, 12f, 5f, 0, 1, 0))
			{
				unk_0x15848523A8959DBC(iLocal_58);
				unk_0x86DD54980FE55567(&uLocal_95);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 0);
				unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 18000, 0, 2);
				unk_0x007AE2AA9E15FA7B(uLocal_95);
				unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
				unk_0x08377FB2AE4C6899(&uLocal_95);
				unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_58, 15000, 0, 2);
				iLocal_98 = 1;
			}
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		if (unk_0x4E84D2C9B54F79BA(iLocal_58, unk_0x17B5CC8A8615737D(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_138)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					unk_0x15848523A8959DBC(iLocal_58);
					unk_0x86DD54980FE55567(&uLocal_95);
					unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 0, 2);
					unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
					unk_0x007AE2AA9E15FA7B(uLocal_95);
					unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
					unk_0x08377FB2AE4C6899(&uLocal_95);
					bLocal_138 = true;
				}
				else
				{
					unk_0x15848523A8959DBC(iLocal_58);
					unk_0x86DD54980FE55567(&uLocal_95);
					unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 0, 2);
					unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
					unk_0x007AE2AA9E15FA7B(uLocal_95);
					unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
					unk_0x08377FB2AE4C6899(&uLocal_95);
					bLocal_138 = true;
				}
			}
			if (bLocal_138)
			{
				if (bLocal_54)
				{
					func_57();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0xCA41A00932714525(iLocal_58))
					{
						if (!func_147())
						{
							if (unk_0xCAA82A181F15BFF5(iLocal_58, unk_0x17B5CC8A8615737D(), 90f))
							{
								if (func_146(&uLocal_155, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_49 = 7;
								}
							}
						}
					}
				}
				else if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 7;
					}
				}
			}
		}
	}
}

void func_128()
{
	if (unk_0x23E9113C762466ED(iLocal_58))
	{
		if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_129())
			{
				func_45(0);
				iLocal_90 = 0;
			}
		}
		else if (func_147() && !iLocal_90)
		{
			func_45(1);
			iLocal_90 = 1;
		}
	}
}

int func_129()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	switch (iLocal_68)
	{
		case 0:
			if (!unk_0xCA41A00932714525(iLocal_58) && !unk_0xCA41A00932714525(iLocal_57))
			{
				if (unk_0xF7E1BD8196545EE3(unk_0x57240623C1BC6E88(iLocal_57, 1), 3f))
				{
					if (!func_147())
					{
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							unk_0xEB1EFACA68933402(iLocal_58, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							unk_0xEB1EFACA68933402(iLocal_57, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_68++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[8]))
			{
				unk_0x593C85206F061E3E(iLocal_121[8], iLocal_57, unk_0x0FC45085FB4E85B8(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_68++;
			}
			break;
		
		case 2:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[8]))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0xB2E72B5CFE1EC372(iLocal_121[8], 0, 1);
						unk_0x5C9883713FC5A923(iLocal_121[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_88 && unk_0x23E9113C762466ED(iLocal_121[8]))
			{
				if (unk_0xDF0087E7822095AA(iLocal_121[8]))
				{
					unk_0xEE4ED1F88396A702(-1, "CLOTHES_THROWN", iLocal_121[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 4:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[9]))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0x593C85206F061E3E(iLocal_121[9], iLocal_57, unk_0x0FC45085FB4E85B8(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_68++;
			}
			break;
		
		case 6:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[9]))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0xB2E72B5CFE1EC372(iLocal_121[9], 0, 1);
						unk_0x5C9883713FC5A923(iLocal_121[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_88 && unk_0x23E9113C762466ED(iLocal_121[9]))
			{
				if (unk_0xDF0087E7822095AA(iLocal_121[9]))
				{
					unk_0xEE4ED1F88396A702(-1, "CLOTHES_THROWN", iLocal_121[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 8:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[10]))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0x593C85206F061E3E(iLocal_121[10], iLocal_57, unk_0x0FC45085FB4E85B8(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0xCA41A00932714525(iLocal_57) && unk_0x23E9113C762466ED(iLocal_121[10]))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0xB2E72B5CFE1EC372(iLocal_121[10], 0, 1);
						unk_0x5C9883713FC5A923(iLocal_121[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_88 && unk_0x23E9113C762466ED(iLocal_121[10]))
			{
				if (unk_0xDF0087E7822095AA(iLocal_121[10]))
				{
					unk_0xEE4ED1F88396A702(-1, "CLOTHES_THROWN", iLocal_121[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 11:
			if (!unk_0xCA41A00932714525(iLocal_57) && !unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x5132972D2BBC5A62(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x8E978F99E8F731CB(iLocal_57, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0x6349785089ED32B4(iLocal_57, iLocal_58, 0);
					}
				}
			}
			if (!func_147() || func_129())
			{
				func_146(&uLocal_155, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_68 = 14;
			}
			break;
		
		case 14:
			if (!func_147())
			{
				if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_131();
					iLocal_68++;
				}
			}
			break;
		
		case 15:
			if (!func_147())
			{
				if (func_146(&uLocal_155, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_68++;
				}
			}
			break;
		
		case 16:
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0x86DD54980FE55567(&uLocal_95);
				unk_0xEF9294ED57E4AC3D(0);
				unk_0x9F7BF6124414BCF4(0, Local_109, 0);
				unk_0x007AE2AA9E15FA7B(uLocal_95);
				unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
				unk_0x08377FB2AE4C6899(&uLocal_95);
				iLocal_68++;
			}
			break;
		
		case 17:
			if (unk_0x23E9113C762466ED(iLocal_57))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_57, 0))
				{
					if (unk_0x1C34CE8087E3897C(iLocal_57, Local_109, 1f, 1f, 5f, 0, 1, 0) && unk_0xF6563E19EDE84B8C(iLocal_57))
					{
						unk_0x478AE709A466CB7E(&iLocal_57);
					}
				}
			}
			if (iLocal_93 < unk_0x94E3E074F38DF86C())
			{
				if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x94E3E074F38DF86C() + 5000;
						iLocal_94++;
					}
				}
			}
			if (iLocal_94 > 0)
			{
				iLocal_68++;
			}
			break;
		
		case 18:
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (!func_147())
				{
					if (func_146(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						unk_0x401B18D8E7BEEC86(iLocal_58, 1193033728, 0);
						iLocal_68++;
					}
				}
			}
			break;
	}
	if (!bLocal_54)
	{
		if (iLocal_68 > 2 && iLocal_68 < 8)
		{
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 6f, 4f, 5f, 0, 1, 0) || (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 12f, 12f, 5f, 0, 1, 2) && unk_0xB6FF35C3DAE3B8A1(unk_0xBE369BE1BC57A796())))
				{
					unk_0x15848523A8959DBC(iLocal_58);
					func_131();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_57();
						while (func_147())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_68 > 7)
		{
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 6f, 8f, 5f, 0, 1, 0))
				{
					if (unk_0xA3794949321E107C(uLocal_102[0]))
					{
						unk_0x1441D969BF79AD61(uLocal_102[0], 1);
					}
					unk_0x15848523A8959DBC(iLocal_58);
					func_131();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_54();
						while (func_147())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_146(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_56)
	{
		if (iLocal_55 < unk_0x94E3E074F38DF86C())
		{
			func_57();
			if (unk_0x23E9113C762466ED(iLocal_57))
			{
				func_131();
			}
			iLocal_49 = 3;
		}
	}
}

void func_131()
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iLocal_57))
	{
		unk_0x86DD54980FE55567(&uLocal_95);
		unk_0x9C16B2DABAEC929A(0, Local_109, 1f, -1, 1193033728, 1056964608);
		unk_0xEB1EFACA68933402(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_95);
		unk_0x00E85C3B3BD34B10(iLocal_57, uLocal_95);
		unk_0x08377FB2AE4C6899(&uLocal_95);
		unk_0x650BB0E111420EAF(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x23E9113C762466ED(iLocal_121[iVar0]))
			{
				unk_0xB2E72B5CFE1EC372(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_132(int iParam0)
{
	if (func_135())
	{
		Global_101690 = 1;
		Global_101687 = unk_0x94E3E074F38DF86C();
		if (func_25(Global_101689))
		{
			func_133(0);
		}
		unk_0x2A8465C4D16098B7(1, "RE_TITLE");
		if (iParam0 && func_25(Global_101689))
		{
			unk_0x3CB6B08E51C56965();
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
			if (Global_101700.f_23954.f_2 < 3)
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_105(func_134(iParam0), -1);
					Global_101700.f_23954.f_2++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x48B8265059381CD0(Global_101696, 1))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_105(func_134(iParam0), -1);
					Global_101700.f_23954.f_3++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x48B8265059381CD0(Global_101696, 2))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_105(func_134(iParam0), -1);
					Global_101700.f_23954.f_4++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 2);
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
	switch (func_136(&Global_25249, 0, 5, 0, unk_0xE9A5FDFDC239B2ED()))
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
		if (Global_89302.f_44 == 1)
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
		Global_35745++;
		*uParam0 = Global_35745;
		unk_0xF7A1A67D26D29975(unk_0x592069F95C314814(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBED07ACDB4C03BB0(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *uParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35742 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742)
			{
				if (Global_35748[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *uParam0)
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
		if (Global_35742 == 8)
		{
			return 0;
		}
		Global_35745++;
		*uParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
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
	
	if (Global_35742 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742)
	{
		if (Global_35748[iVar0 /*4*/] == *uParam0)
		{
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_138(int iParam0)
{
	return func_139(iParam0, Global_35781);
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
	if (Global_35781 == 15)
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
	if (unk_0xA3794949321E107C(uLocal_105))
	{
		unk_0x020DF7300725ECAB(&uLocal_105);
	}
	if (!unk_0xA3794949321E107C(uLocal_102[0]))
	{
		uLocal_102[0] = func_115(iLocal_58, 0, 145);
		unk_0x1441D969BF79AD61(uLocal_102[0], 0);
	}
}

void func_142()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	unk_0x1B60289D0F2A2E3C(Local_63, 2f, 1, 0, 0, 0);
	unk_0x1B60289D0F2A2E3C(Local_60, 2f, 1, 0, 0, 0);
	unk_0xB82FD68B5DE68F01(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x286691C5D34EF4EC(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	unk_0xD1D19967E553E144(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0xD1D19967E553E144(Local_112 - Vector(3f, 2f, 2f), Local_112 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	unk_0xD1D19967E553E144(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	unk_0x1EF7A8224AE81790("rghDomestic", &uLocal_152);
	unk_0xDE574EA7A7A2CAF8(5, uLocal_152, joaat("player"));
	iLocal_57 = unk_0x2AD5F4170F4ACBEB(26, iLocal_96, Local_60, fLocal_66, 1, 1);
	unk_0xCC61640A821F277C(iLocal_57, 1);
	unk_0xC96275575DC981A9(iLocal_57, 17, 1);
	unk_0xC96275575DC981A9(iLocal_57, 8, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_57, 1, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_57, 2, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_57, 128, 1);
	unk_0xB195EE9DB37DA7F2(iLocal_57, 8, 0);
	unk_0xEB1EFACA68933402(iLocal_57, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3BB70315907D9456(iLocal_57, uLocal_152);
	func_145(iLocal_57, "GENERIC_WHATEVER", 24);
	unk_0x924CDE68BA2ED3BA(iLocal_96);
	unk_0x6018E338F7ABCE75(iLocal_57, 185, 1);
	iLocal_58 = unk_0x2AD5F4170F4ACBEB(26, iLocal_97, Local_63, fLocal_67, 1, 1);
	unk_0xCC61640A821F277C(iLocal_58, 1);
	unk_0xB195EE9DB37DA7F2(iLocal_58, 1, 1);
	unk_0xB195EE9DB37DA7F2(iLocal_58, 2, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_58, 128, 1);
	unk_0xB195EE9DB37DA7F2(iLocal_58, 8, 0);
	unk_0xB195EE9DB37DA7F2(iLocal_58, 65536, 1);
	unk_0x6018E338F7ABCE75(iLocal_58, 185, 1);
	unk_0x6018E338F7ABCE75(iLocal_58, 206, 1);
	unk_0x17E7D6CE3100F6AF(iLocal_58, 0);
	unk_0x6F65279C9BC14EDB(iLocal_58, 0);
	unk_0xEB1EFACA68933402(iLocal_58, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x3BB70315907D9456(iLocal_58, uLocal_152);
	func_145(iLocal_58, "GENERIC_WHATEVER", 24);
	unk_0x924CDE68BA2ED3BA(iLocal_97);
	unk_0x4718A774D9248520(iLocal_58, iLocal_57, -1, 0, 2);
	unk_0x4718A774D9248520(iLocal_57, iLocal_58, -1, 0, 2);
	unk_0x2F933BB106547968(iLocal_57, 0, 1, 0, 0);
	unk_0x2F933BB106547968(iLocal_57, 2, 1, 1, 0);
	unk_0x2F933BB106547968(iLocal_57, 3, 1, 1, 0);
	unk_0x2F933BB106547968(iLocal_57, 4, 1, 2, 0);
	unk_0x2F933BB106547968(iLocal_58, 0, 0, 0, 0);
	unk_0x2F933BB106547968(iLocal_58, 2, 1, 0, 0);
	unk_0x2F933BB106547968(iLocal_58, 3, 1, 2, 0);
	unk_0x2F933BB106547968(iLocal_58, 4, 1, 1, 0);
	unk_0x2F933BB106547968(iLocal_58, 8, 0, 0, 0);
	func_144();
	unk_0xEB79FECD9022AAF0(&uLocal_134, 5);
	if (func_53() == 0)
	{
		func_143(&uLocal_155, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
	}
	if (func_53() == 1)
	{
		func_143(&uLocal_155, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
	}
	if (func_53() == 2)
	{
		func_143(&uLocal_155, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
	}
	func_143(&uLocal_155, 3, iLocal_58, "REDOCastro", 0, 1);
	unk_0xA0E70AC53ABAB207(iLocal_58, sLocal_153);
	func_143(&uLocal_155, 4, iLocal_57, "NATHALIA", 0, 1);
	unk_0xA0E70AC53ABAB207(iLocal_57, sLocal_154);
	unk_0xC1B1E9A034A63A62(0);
	iLocal_150 = 1;
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_144()
{
	iLocal_121[0] = unk_0x521A82CF998EDB21(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[0], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_tshirt_02"));
	iLocal_121[1] = unk_0x521A82CF998EDB21(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[1], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_jeans_02"));
	iLocal_121[2] = unk_0x521A82CF998EDB21(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[2], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_shoe_01"));
	iLocal_121[3] = unk_0x521A82CF998EDB21(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[3], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_jeans_01"));
	iLocal_121[4] = unk_0x521A82CF998EDB21(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[4], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_shoe_02"));
	iLocal_121[5] = unk_0x521A82CF998EDB21(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[5], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_ld_shirt_01"));
	iLocal_121[6] = unk_0x521A82CF998EDB21(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[6], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_porn_mag_03"));
	iLocal_121[7] = unk_0x521A82CF998EDB21(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_121[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	unk_0x98F0FA127445E343(iLocal_121[7], 1);
	unk_0x924CDE68BA2ED3BA(joaat("prop_porn_mag_01"));
	iLocal_121[8] = unk_0x521A82CF998EDB21(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_121[9] = unk_0x521A82CF998EDB21(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	unk_0x924CDE68BA2ED3BA(joaat("prop_cs_rub_binbag_01"));
	iLocal_121[10] = unk_0x521A82CF998EDB21(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	unk_0x924CDE68BA2ED3BA(joaat("prop_golf_bag_01"));
}

void func_145(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_49(iParam2), 1);
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_64(sParam2, iParam3, 0);
}

int func_147()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	if (!unk_0xCA41A00932714525(iLocal_58) && !unk_0xCA41A00932714525(iLocal_57))
	{
		if (unk_0x758839786F3B98F0(unk_0x17B5CC8A8615737D(), 6))
		{
			if (unk_0xC37168D3A492594E(iLocal_58, unk_0x17B5CC8A8615737D()) || unk_0xC37168D3A492594E(iLocal_57, unk_0x17B5CC8A8615737D()))
			{
				if (((unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iLocal_58) || unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iLocal_58)) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iLocal_57)) || unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iLocal_57))
				{
					if (iLocal_135 == -1)
					{
						iLocal_135 = unk_0x94E3E074F38DF86C();
					}
				}
				else
				{
					iLocal_135 = -1;
				}
			}
			if ((iLocal_135 != -1 && unk_0x94E3E074F38DF86C() > iLocal_135 + 500) || unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				func_155();
			}
		}
	}
	if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
	{
		func_155();
	}
	if (iLocal_49 == 1)
	{
		if (unk_0x23E9113C762466ED(iLocal_58))
		{
			if (func_154(iLocal_58))
			{
				func_153();
			}
		}
	}
	if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_152();
	}
	if (unk_0x23E9113C762466ED(iLocal_57))
	{
		if (func_151(iLocal_57))
		{
			func_149();
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_58))
	{
		if (func_151(iLocal_58) || unk_0xC017443DBE6DA4D6(iLocal_58, unk_0x17B5CC8A8615737D(), 1))
		{
			func_149();
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_57))
	{
		if (func_151(iLocal_57) || unk_0xC017443DBE6DA4D6(iLocal_57, unk_0x17B5CC8A8615737D(), 1))
		{
			func_149();
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		if (!unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_58, 250f, 250f, 250f, 0, 1, 0) || unk_0xA77EE6C138A588EB(iLocal_58))
		{
			iLocal_49 = 11;
		}
	}
	if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
	{
		func_149();
	}
}

void func_149()
{
	func_54();
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
	{
		func_146(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		unk_0x15848523A8959DBC(iLocal_58);
		unk_0x86DD54980FE55567(&uLocal_95);
		unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 250f, -1, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_95);
		unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
		unk_0x08377FB2AE4C6899(&uLocal_95);
		unk_0x650BB0E111420EAF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_150();
	unk_0x4EDE34FBADD967A6(0);
	func_50();
	iLocal_49 = 11;
}

void func_150()
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iLocal_57))
	{
		unk_0x4E61D536D3C86A36(iLocal_57, -1);
		unk_0x650BB0E111420EAF(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x23E9113C762466ED(iLocal_121[iVar0]))
			{
				unk_0xB2E72B5CFE1EC372(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_151(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
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
	func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		unk_0x15848523A8959DBC(iLocal_58);
		unk_0x86DD54980FE55567(&uLocal_95);
		unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 250f, -1, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_95);
		unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
		unk_0x08377FB2AE4C6899(&uLocal_95);
		unk_0x650BB0E111420EAF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_50();
	iLocal_49 = 11;
}

void func_153()
{
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		unk_0x15848523A8959DBC(iLocal_58);
		unk_0x9145194A1B6CD65A(iLocal_58, unk_0x57240623C1BC6E88(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 1), 150f, -1, 0, 0);
		unk_0x650BB0E111420EAF(iLocal_58, 1);
	}
	iLocal_49 = 11;
}

int func_154(int iParam0)
{
	if (!unk_0xCA41A00932714525(uParam0))
	{
		if (!unk_0xFD0FE723227D5AB6(iParam0, 0) && unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (unk_0x13B7ACE69D27E3E4(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)) > 4f)
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
	func_146(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0xCA41A00932714525(iLocal_58))
	{
		unk_0x86DD54980FE55567(&uLocal_95);
		unk_0x83150B7E65C16AFE(0, 0, 4096);
		unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 250f, -1, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_95);
		unk_0x00E85C3B3BD34B10(iLocal_58, uLocal_95);
		unk_0x08377FB2AE4C6899(&uLocal_95);
		unk_0x650BB0E111420EAF(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_50();
	iLocal_49 = 11;
}

void func_156()
{
	unk_0xE1324F59713746FA(iLocal_96);
	unk_0xE1324F59713746FA(iLocal_97);
	unk_0xE1324F59713746FA(joaat("prop_golf_iron_01"));
	unk_0xE1324F59713746FA(joaat("prop_cs_rub_binbag_01"));
	unk_0xE1324F59713746FA(joaat("prop_golf_bag_01"));
	unk_0xE1324F59713746FA(joaat("prop_ld_tshirt_02"));
	unk_0xE1324F59713746FA(joaat("prop_ld_jeans_02"));
	unk_0xE1324F59713746FA(joaat("prop_ld_shoe_01"));
	unk_0xE1324F59713746FA(joaat("prop_ld_jeans_01"));
	unk_0xE1324F59713746FA(joaat("prop_ld_shoe_02"));
	unk_0xE1324F59713746FA(joaat("prop_ld_shirt_01"));
	unk_0xE1324F59713746FA(joaat("prop_porn_mag_03"));
	unk_0xE1324F59713746FA(joaat("prop_porn_mag_01"));
	unk_0xA0E7D0E8FE126EE8("random@domestic");
	unk_0xA0E7D0E8FE126EE8("random@security_van");
	if ((((((((((((((unk_0x9F746898F7881612(iLocal_96) && unk_0x9F746898F7881612(iLocal_97)) && unk_0x9F746898F7881612(joaat("prop_golf_iron_01"))) && unk_0x9F746898F7881612(joaat("prop_cs_rub_binbag_01"))) && unk_0x9F746898F7881612(joaat("prop_golf_bag_01"))) && unk_0x9F746898F7881612(joaat("prop_ld_tshirt_02"))) && unk_0x9F746898F7881612(joaat("prop_ld_jeans_02"))) && unk_0x9F746898F7881612(joaat("prop_ld_shoe_01"))) && unk_0x9F746898F7881612(joaat("prop_ld_jeans_01"))) && unk_0x9F746898F7881612(joaat("prop_ld_shoe_02"))) && unk_0x9F746898F7881612(joaat("prop_ld_shirt_01"))) && unk_0x9F746898F7881612(joaat("prop_porn_mag_03"))) && unk_0x9F746898F7881612(joaat("prop_porn_mag_01"))) && unk_0xF4F8AE8DD0F08C1E("random@domestic")) && unk_0xF4F8AE8DD0F08C1E("random@security_van"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0xE1324F59713746FA(iLocal_96);
		unk_0xE1324F59713746FA(iLocal_97);
		unk_0xE1324F59713746FA(joaat("prop_golf_iron_01"));
		unk_0xE1324F59713746FA(joaat("prop_cs_rub_binbag_01"));
		unk_0xE1324F59713746FA(joaat("prop_golf_bag_01"));
		unk_0xE1324F59713746FA(joaat("prop_ld_tshirt_02"));
		unk_0xE1324F59713746FA(joaat("prop_ld_jeans_02"));
		unk_0xE1324F59713746FA(joaat("prop_ld_shoe_01"));
		unk_0xE1324F59713746FA(joaat("prop_ld_jeans_01"));
		unk_0xE1324F59713746FA(joaat("prop_ld_shoe_02"));
		unk_0xE1324F59713746FA(joaat("prop_ld_shirt_01"));
		unk_0xE1324F59713746FA(joaat("prop_porn_mag_03"));
		unk_0xE1324F59713746FA(joaat("prop_porn_mag_01"));
		unk_0xA0E7D0E8FE126EE8("random@domestic");
		unk_0xA0E7D0E8FE126EE8("random@security_van");
	}
}

void func_157()
{
	Local_106 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_96 = joaat("a_f_y_business_02");
	iLocal_97 = joaat("a_m_y_golfer_01");
	sLocal_153 = "REDOCastro";
	sLocal_154 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_60 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_66 = 348.9152f;
	Local_63 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_67 = 156.0666f;
	Local_109 = { -469.082f, 535.0479f, 123.3553f };
	Local_112 = { -1378.273f, 40.2254f, 52.6774f };
	Local_115 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_59 = true;
}

int func_158()
{
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_169())
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
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (func_33(func_53()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 2) && !unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 3))
				{
					func_160(iVar32, &Var0);
					fVar35 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var0.f_6, 1);
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
	if (unk_0x9C88EB7B70229335(&cVar2))
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
	return Global_101418 > 0;
}

int func_167()
{
	if (Global_88746 != -1)
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

int func_169()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
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
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_169())
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
	if ((Global_101689 == func_39() && unk_0xD3718ACF1D7AD57E()) && Global_101690)
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
	unk_0xB3EFCE1243C98BFD(0);
	unk_0x2BC65DD826D4278E(1);
	Global_101686 = 0;
	func_173();
}

void func_173()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xD90CB3CF9A40791C(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)), 1);
		}
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
}

void func_174(int iParam0)
{
	Global_101689 = iParam0;
}

int func_175(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138924)
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
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_169())
			{
				return 0;
			}
		}
		if (!Global_101700.f_8044)
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
		if (Global_101689 != -1)
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
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
		if (!func_211(Global_101700.f_23954.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x94E3E074F38DF86C() - Global_101691) < 150000)
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
		if (unk_0xE6235D8850CC396F())
		{
			return 0;
		}
		if (unk_0xD3718ACF1D7AD57E())
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
		if (unk_0x623BDE1B17A9D9E3(unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())))
		{
			if ((unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(377.153f, -717.567f, 10.0536f) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(320.9934f, 265.2515f, 82.1221f)) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_200(0, 0))
		{
			return 0;
		}
		if (Global_25336)
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
				Var5 = { Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_199(iVar8))
				{
					if (func_177(iVar4))
					{
						if (!func_176(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_189(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
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
	
	func_198(&uVar0, unk_0x0956E4296D9CC40A());
	func_197(&uVar0, unk_0x32883EAC7DC86C40());
	func_196(&uVar0, unk_0x80BC37C67CB292E5());
	func_195(&uVar0, unk_0x202B089E6328ABFA());
	func_194(&uVar0, unk_0xCD8338A83E1BCC14());
	func_193(&uVar0, unk_0x1BBFD9409EC2598C());
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
	if (unk_0x48B8265059381CD0(Global_101700.f_23954.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
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
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_209()) || Global_100747) || Global_25192) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_205()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_209()) || Global_25192) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_209()) || Global_100747) || Global_25192) || func_208()) || func_71(8, -1)) || func_205()) || func_207()) || func_206()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_209()) || Global_100747) || Global_25192) || func_208()) || func_71(8, -1)) || func_207()) || func_206()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_209() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_71(8, -1)) || func_204()) || func_203()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_71(8, -1) || func_207()) || func_206()) || func_203()) || func_202())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_209()) || Global_25192) || func_208()) || func_71(8, -1)) || func_206()) || func_205()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_209()) || func_206()) || Global_100747) || Global_25192) || func_208()) || Global_36912) || func_71(8, -1)) || func_205()) || func_203()) || func_204()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_209()) || Global_100747) || Global_25192) || func_208()) || func_71(8, -1)) || func_205()) || func_203()) || func_207()) || func_206()) || func_204())
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
	return Global_91530.f_1;
}

int func_203()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

int func_204()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

bool func_206()
{
	return Global_91543.f_304 > 0;
}

bool func_207()
{
	return Global_91543.f_303 > 0;
}

var func_208()
{
	return Global_1315233;
}

int func_209()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_210()
{
	func_69();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_101700.f_6647.f_919[iParam0];
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
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954.f_1, iVar0);
	}
	return bVar1;
}

int func_215()
{
	var uVar0;
	
	if (Global_25340)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(uVar0, 0))
			{
				if (!unk_0xCA41A00932714525(unk_0x17206B315923243C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_216()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
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
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_25428)
		{
			unk_0x5BE53482EFD49141("AC_STOP");
		}
		func_2();
		unk_0xB82FD68B5DE68F01(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xDE574EA7A7A2CAF8(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_96);
			unk_0x924CDE68BA2ED3BA(iLocal_97);
		}
		if (unk_0x23E9113C762466ED(iLocal_57))
		{
			if (!unk_0xCA41A00932714525(iLocal_57))
			{
				unk_0x6018E338F7ABCE75(iLocal_57, 317, 1);
				unk_0xCC61640A821F277C(iLocal_57, 0);
			}
			unk_0x6500ADB01E821BC0(&iLocal_57);
		}
		if (unk_0xA3794949321E107C(uLocal_105))
		{
			unk_0x020DF7300725ECAB(&uLocal_105);
		}
		if (unk_0xA3794949321E107C(uLocal_102[0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_102[0]));
		}
		if (unk_0x23E9113C762466ED(iLocal_58))
		{
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0x6018E338F7ABCE75(iLocal_58, 317, 1);
				if (!unk_0xFD0FE723227D5AB6(iLocal_58, 0))
				{
					unk_0xE31C711433681463(iLocal_58);
				}
				unk_0xFB2D342CDD441DD9(iLocal_58);
				unk_0xCC61640A821F277C(iLocal_58, 0);
				unk_0x6F65279C9BC14EDB(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0x23E9113C762466ED(iLocal_121[iVar0]))
			{
				unk_0xB2E72B5CFE1EC372(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0xD211CBCC0E735E4F(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0xCC76050C3A61CF48();
	}
	func_219(-1);
	unk_0x921053BAF754303D();
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
		unk_0x2A8465C4D16098B7(0, 0);
		Global_101691 = unk_0x94E3E074F38DF86C();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_101689, 1), 64);
		if (func_38(Global_101689) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		unk_0x8B93E6E9B44E0A75(&cVar0, Global_101686, (unk_0x94E3E074F38DF86C() - Global_101687), 0);
	}
	else if (unk_0x48B8265059381CD0(Global_101696, 0) && Global_101700.f_23954.f_2 < 3)
	{
		unk_0x21E7933CCC7B3724(&Global_101696, 0);
	}
	func_220(&Global_25249);
	Global_101690 = 0;
	func_174(-1);
}

void func_220(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35743)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
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
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
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
	Global_101700.f_23954.f_43[iParam0] = *uParam1;
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
	func_194(uParam0, iParam5);
	func_195(uParam0, iParam4);
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

