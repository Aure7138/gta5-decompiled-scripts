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
	if (unk_0xD4BE58A7E3E102AC(11))
	{
		if (!unk_0x2BF5E63466422C38(iLocal_58))
		{
			if (unk_0xFF8C14957DF16F4D(iLocal_58))
			{
				unk_0x91F590A9823EB649(iLocal_58);
			}
		}
		func_228();
	}
	if (func_227(256, 1))
	{
		unk_0x9C9E32388A7886A2();
	}
	if (func_185(Local_51, -1, 0, 0, 0))
	{
		func_182(-1);
	}
	else
	{
		unk_0x9C9E32388A7886A2();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if ((unk_0xBE1BAAD38691E6DD() || iLocal_49 == 4) || iLocal_68 > 18)
		{
			if (!func_181())
			{
				if (func_180())
				{
					func_228();
				}
			}
			unk_0x643E26919A174002("RE_DO", 0);
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (!bLocal_50)
						{
							if (func_168())
							{
								func_228();
							}
							if (!bLocal_59)
							{
								func_167();
							}
							if (bLocal_59)
							{
								func_166();
							}
						}
						if (bLocal_50)
						{
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						func_158();
						if (iLocal_69 > 3)
						{
							if (!iLocal_92 && !func_157())
							{
								func_156(&uLocal_155, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_92 = 1;
							}
						}
						switch (iLocal_49)
						{
							case 0:
								func_152();
								iLocal_49 = 1;
								break;
							
							case 1:
								if (!iLocal_99)
								{
									if ((unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && unk_0x93086679C0E859D8(Local_106, 1f)) || unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_106, 20f, 20f, 20f, 0, 1, 0))
									{
										func_151();
										func_142(1);
										iLocal_99 = 1;
									}
								}
								else
								{
									if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_106, 50f, 50f, 50f, 0, 1, 0))
									{
										func_140();
									}
									if (!unk_0x2BF5E63466422C38(iLocal_58))
									{
										if (!unk_0xC49563EAE7AACA6C(iLocal_58, Local_63, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_49 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_138();
								if (iLocal_68 > 18)
								{
									func_137();
								}
								else if (!func_157())
								{
									func_137();
								}
								break;
							
							case 7:
								func_138();
								func_133();
								break;
							
							case 4:
								func_138();
								func_81();
								if (func_80(Local_112))
								{
									func_57(0);
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									func_156(&uLocal_155, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_53())
								{
									func_57(0);
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									func_156(&uLocal_155, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_89)
								{
									if (func_52())
									{
										if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_112, 23f, 60f, 20f, 0, 1, 0))
										{
											func_57(0);
											func_55();
											unk_0x4EDE34FBADD967A6(0);
											if (!func_157())
											{
												func_156(&uLocal_155, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_89 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_51();
								break;
						}
						if (!unk_0x2BF5E63466422C38(iLocal_57))
						{
							if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "f_attack_end", 3))
							{
								func_49(iLocal_57, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_48() && !func_47()) && iLocal_48 != 2)
						{
							if (!unk_0x2BF5E63466422C38(iLocal_58))
							{
								if (unk_0xC49563EAE7AACA6C(iLocal_58, Local_118, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!unk_0xD4B321D9096B01FC(iLocal_121[8]))
									{
										iLocal_121[8] = unk_0x7187764DB5121FC9(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										unk_0x01DF2D3988024DB4(iLocal_121[8], iLocal_58, unk_0xDD454299E9E58208(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_46(0);
									unk_0x4EDE34FBADD967A6(0);
									func_55();
									iLocal_48 = 2;
								}
							}
						}
						if (func_45())
						{
							func_51();
						}
						break;
					
					case 2:
						if (func_44())
						{
							if (unk_0xD4B321D9096B01FC(iLocal_58))
							{
								unk_0x4F058F27442031CC(&iLocal_58);
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
			func_228();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_30975)
		{
			unk_0x81995F6F93D8C987("AC_STOP");
		}
		func_2();
		if (unk_0xD4B321D9096B01FC(iLocal_121[8]))
		{
			uLocal_133 = unk_0x007AE20F9BF069CA(joaat("pickup_weapon_golfclub"), unk_0xACE5E491FC1B0D37(iLocal_121[8], 1), unk_0x762900E9B9F74FD4(iLocal_121[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			unk_0x377C9F2989832369(&(iLocal_121[8]));
		}
		unk_0x80BCF42B42433CEB(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x9B54A3CCAAB4F5FB(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0xE0AC40EF164A2569(iLocal_96);
			unk_0xE0AC40EF164A2569(iLocal_97);
		}
		if (unk_0xD4B321D9096B01FC(iLocal_57))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_57))
			{
				unk_0xCC94EE23853F38E4(iLocal_57, 0);
			}
			unk_0x0FFB05DA97E810B5(&iLocal_57);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_105))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_105);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_102[0]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_102[0]));
		}
		if (unk_0xD4B321D9096B01FC(iLocal_58))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (!unk_0x5294582CE404D3F4(iLocal_58, 0))
				{
					unk_0x7D394D4D40B3CDBE(iLocal_58);
				}
				unk_0x91F590A9823EB649(iLocal_58);
				unk_0xCC94EE23853F38E4(iLocal_58, 0);
				unk_0x6E712A176E3EEFA8(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0xD4B321D9096B01FC(iLocal_121[iVar0]))
			{
				unk_0x363E2170E626A00A(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x5FA16012EC432077(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0xD931F7E3EEBC7B7D();
		iLocal_149 = 1;
	}
	if ((!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_63, 80f, 80f, 80f, 0, 1, 0) || unk_0x21AD65E0E8A26E8C(uLocal_133)) || !(unk_0xD4B321D9096B01FC(iLocal_121[8]) && !unk_0x71FE36FB85146FC0(uLocal_133)))
	{
		func_228();
	}
}

void func_2()
{
	Global_30971 = 0;
	Global_30972 = 0;
	Global_30974 = 0;
	Global_30975 = 0;
	Global_30976 = 0;
}

void func_3(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
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
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3B76114EC84D5812(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0x3B76114EC84D5812(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
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
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312745;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_7(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
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
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_11()
{
	return Global_30736;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_11() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_14()
{
	while (func_157())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_43())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_111560.f_18569.f_383 = func_42() + 1;
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
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_19(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
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
	Global_111546 = iParam0;
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
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_111283, 0);
					unk_0xA1E7A40E1F56E511(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_111296, 1);
	unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_111279, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_111297, 1);
	unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_111280, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_111298, 1);
	unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_111281, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_111299, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_111282, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_111286, 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_111303, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_111304, 1);
	unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853))
	{
		func_22(13, unk_0xF34EE736CF047844(Global_111560.f_10189.f_3853));
	}
	if (!unk_0x8FA5860B1A123955())
	{
		if (!Global_76577)
		{
			if (func_11() == 2 == 0 && !unk_0x393E9918BC37548A())
			{
				if (unk_0x56BDC2B0945F6D74())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
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
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
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
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2553916E420E8EF0(sParam0, ""))
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
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0x2553916E420E8EF0(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_111560.f_2358.f_539.f_4321)
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
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_35(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_34(unk_0x0FA8183DAD2B3203());
			if (func_33(iVar0) && (!func_32(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_33(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_32(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
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
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_37(int iParam0)
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
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x0037AFCBDC61F351(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xA8C462EF7D9DC564(&cParam0))
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

int func_42()
{
	return (Global_111560.f_10011.f_21 + Global_111560.f_18569.f_380);
}

int func_43()
{
	return 1;
}

int func_44()
{
	if (Global_30972)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_45()
{
	if (unk_0x2BF5E63466422C38(iLocal_57) && unk_0x2BF5E63466422C38(iLocal_58))
	{
		return 1;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_21816 = iParam0;
}

int func_47()
{
	if (Global_111560.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_30971;
}

void func_49(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x8ED81066343F07B4(iParam0, sParam1, sParam2, func_50(iParam3), 0);
}

int func_50(int iParam0)
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

void func_51()
{
	iLocal_48 = 3;
}

int func_52()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		iLocal_151 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (unk_0xD960230552BC4165(iLocal_151, 0))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0x7E6F0519746C2295(iLocal_58, iLocal_151))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (func_54() == 2)
	{
		if (func_48())
		{
			if (unk_0xD34AF93E9BCF12F0(-1014.154f, 4881.411f, 245.0001f, unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), 0), 1) < 400f)
			{
				if (!Global_30976)
				{
					unk_0x81995F6F93D8C987("AC_EN_ROUTE_CULT");
					Global_30976 = 1;
					if (!Global_30975)
					{
						Global_30975 = 1;
						return 1;
					}
				}
			}
			else if (Global_30976)
			{
				unk_0x81995F6F93D8C987("AC_LEFT_AREA");
				Global_30976 = 0;
			}
		}
	}
	return 0;
}

int func_54()
{
	func_31();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_55()
{
	Global_19671 = 0;
	func_56();
}

void func_56()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_71)
		{
			if (func_64(&uLocal_155, "REDO2AU", &Local_78, &Local_72, 8, 0, 0))
			{
				iLocal_71 = 0;
			}
		}
	}
	else if ((!iLocal_71 && unk_0x04C7A9862FF737E9()) && !func_62())
	{
		Local_78 = { func_61() };
		Local_72 = { func_60() };
		func_58();
		iLocal_71 = 1;
	}
}

void func_58()
{
	Global_19671 = 0;
	func_59();
}

void func_59()
{
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0xE4F88BFF8FB3D84C();
		Global_21816 = 0;
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = unk_0x8CD683A755F4B25E();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_61()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_62()
{
	if (((((((func_63("REDO2_DRP") || func_63("REDO2_UV")) || func_63("REDO2_UV2")) || func_63("REDO2_CULT")) || func_63("REDO2_NEAR")) || func_63("REDO2_GETOUT")) || func_63("REDO2_JACK")) || func_63("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_63(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_61()}, 4);
		if (unk_0x2553916E420E8EF0(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_65(sParam2, iParam4, 0);
}

int func_65(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_78();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_77(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_76();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_75();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_74())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_72();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_71();
		func_66();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_78();
	}
	return 0;
}

void func_66()
{
	if (!func_67())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_67()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_70())
	{
		return 0;
	}
	if (func_68(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_68(int iParam0)
{
	return func_69(iParam0, 20);
}

bool func_69(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_70()
{
	return -1;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_72()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_73()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_75()
{
	if (func_32(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_54();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_76()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_77(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_78()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_80(struct<3> Param0)
{
	if (func_54() == 2)
	{
		if (func_48() && !Global_30974)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Param0) > (fLocal_47 + 200f) || unk_0xD34AF93E9BCF12F0(-1014.154f, 4881.411f, 245.0001f, unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(unk_0x7A8732CFB5113E77()), 0), 1) < 400f)
			{
				Global_30974 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_68 > 18)
			{
				iLocal_70++;
			}
			else if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0x4465F4659EE7FAE4(iLocal_58, 1f);
				if (unk_0x9B69E0F5342BA1A8(iLocal_58, unk_0x0FA8183DAD2B3203(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_68 < 19)
					{
						if (func_156(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
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
			func_129();
			if (unk_0xD4B321D9096B01FC(iLocal_58))
			{
				if (!unk_0x2BF5E63466422C38(iLocal_58))
				{
					if (unk_0xD960230552BC4165(unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203()), 0))
					{
						if (unk_0xEC9DA7D08BCA2C06(iLocal_58))
						{
							unk_0x377C9F2989832369(&(iLocal_121[8]));
						}
					}
					if (unk_0xA2DB82364F08360E(iLocal_58))
					{
						func_127();
						func_121();
						if (func_156(&uLocal_155, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_70++;
						}
					}
					else
					{
						unk_0x4465F4659EE7FAE4(iLocal_58, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_121();
			func_120();
			func_129();
			func_119();
			if (unk_0xC9D9444186B5A374() > 1500)
			{
				func_118();
			}
			if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_112, 10f, 10f, 10f, 0, 1, 0))
			{
				unk_0x002BEFCA6CC9B4F5();
			}
			if (unk_0xD4B321D9096B01FC(iLocal_58))
			{
				if (!unk_0x2BF5E63466422C38(iLocal_58))
				{
					if (unk_0xC49563EAE7AACA6C(iLocal_58, Local_112, Global_19, 1, 1, 0) && func_117(1, 0, 1))
					{
						if (unk_0x39A01A052D9B5FF0(uLocal_100))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_100);
						}
						if (unk_0x39A01A052D9B5FF0(uLocal_101))
						{
							unk_0xAA2276003B2ADF1B(&uLocal_101);
						}
						if (unk_0x5294582CE404D3F4(iLocal_58, 0))
						{
							unk_0x784753B14715F27F(unk_0x4D57D3E5ECE15A41(iLocal_58, 0), 10.5f, 3, 0);
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
			func_116();
			if (bLocal_145)
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_82();
			if (bLocal_145)
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_82()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x002BEFCA6CC9B4F5();
			func_58();
			if (func_156(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			iLocal_143++;
			break;
		
		case 2:
			unk_0x002BEFCA6CC9B4F5();
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0x91F590A9823EB649(iLocal_58);
				unk_0xA12E1659DEF57244(&uLocal_95);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), 7000, 2048, 2);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 4000);
				unk_0xD06C31EF9A42C2B4(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x15A7B753872B3CE3(uLocal_95);
				unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
				unk_0x78829A259A6975CD(&uLocal_95);
				unk_0x7D81B41B134BD6F2(iLocal_58, 1);
				iLocal_144 = unk_0x9B35D07DCD0F0B43() + 4000;
				iLocal_143++;
			}
			break;
		
		case 3:
			if (iLocal_144 < unk_0x9B35D07DCD0F0B43())
			{
				unk_0x002BEFCA6CC9B4F5();
				iLocal_143++;
			}
			break;
		
		case 4:
			if (!func_157())
			{
				func_115("DOM_GOLF", -1);
				func_114(&(Global_111560.f_18974), 16);
				if (func_54() == 0)
				{
					func_113(&(Global_111560.f_18974.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_113(&(Global_111560.f_18974.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_113(&(Global_111560.f_18974.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
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

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_112(iParam0) == 3)
	{
		return;
	}
	if (func_112(iParam0) == 4)
	{
		return;
	}
	func_84(func_112(iParam0), 1, iParam1, iParam2, 0);
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
		unk_0x367DA79FE620711B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x41410A69AD49AFCD(iVar1, iVar0, 1);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_111();
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
					func_110(99, 1);
					func_109(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_109(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_109(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_95(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
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
							func_109(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_109(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_109(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_91(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_109(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_109(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_109(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_109(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_109(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_109(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_109(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB4D15BCA2CC28DF9())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_109(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_109(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_109(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_109(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_91(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_109(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_109(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_109(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_109(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_109(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_110(95, iParam3);
					break;
				
				case 1:
					func_110(97, iParam3);
					break;
				
				case 2:
					func_110(96, iParam3);
					break;
			}
			func_110(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_87(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_109(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_109(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_109(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
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
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_86(iParam0);
	if (Global_41396 == 15)
	{
		func_85(0);
	}
	return 1;
}

void func_85(bool bParam0)
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
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_87(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_23(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_23(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_23(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_23(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_6(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_6(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_6(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_6(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_6(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_6(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0) || unk_0xA2BC31158C8CEFD2(Global_2097152[func_89() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		unk_0x3B76114EC84D5812(&(Global_2097152[func_89() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x6C607B5286DEE8D9("COUP_RED");
		unk_0x0AC9F8E1AFCEC860(func_88(iParam0));
		unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_88(int iParam0)
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
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_90(int iParam0)
{
	func_110(93, iParam0);
	func_110(29, iParam0);
	func_110(30, iParam0);
}

bool func_91(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_92(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_92(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_92(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_92(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x71EC776E812C6A0A();
		iVar1 = func_9(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x71EC776E812C6A0A();
		iVar3 = func_9(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x71EC776E812C6A0A();
		iVar5 = func_9(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x71EC776E812C6A0A();
		iVar7 = func_9(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x71EC776E812C6A0A();
		iVar9 = func_9(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x71EC776E812C6A0A();
		iVar11 = func_9(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0);
	}
	return unk_0xA2BC31158C8CEFD2(Global_2097152[func_89() /*10828*/].f_6168.f_10, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_94(iParam0, iParam1);
	uVar2 = func_93(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_93(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_95(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x17A6988567C0F4A8(27))
	{
		return 0;
	}
	if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_96(27, 1);
	return 1;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_97(iParam0, iParam1);
}

int func_97(int iParam0, int iParam1)
{
	if (func_32(14) && !func_108(iParam0))
	{
		return 0;
	}
	if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_107(&Global_4269915))
	{
		if (func_105(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_98(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xA123C027757634FD(iParam0))
		{
			return 0;
		}
		if (unk_0x17A6988567C0F4A8(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_108(iParam1))
	{
		return 0;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0);
	}
	func_101(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_99(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_99(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_108(iParam1))
	{
		return 0;
	}
	if (func_105(uParam0, iParam1))
	{
		return 0;
	}
	if (func_104(uParam0) < 0f)
	{
		func_103(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_100(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_101(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_102(uParam0, iVar0);
		iVar0++;
	}
	func_103(uParam0, (Global_4269914 - 0.5f));
}

void func_102(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_103(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_104(var uParam0)
{
	return uParam0->f_80;
}

bool func_105(var uParam0, int iParam1)
{
	return func_106(uParam0, iParam1) != -1;
}

int func_106(var uParam0, int iParam1)
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

bool func_107(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_108(int iParam0)
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

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_111()
{
	int iVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_112(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_115(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_116()
{
	switch (iLocal_143)
	{
		case 0:
			unk_0x002BEFCA6CC9B4F5();
			func_58();
			if (func_156(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_143++;
			}
			break;
		
		case 1:
			unk_0x002BEFCA6CC9B4F5();
			iLocal_143++;
			break;
		
		case 2:
			unk_0x002BEFCA6CC9B4F5();
			iLocal_143++;
			break;
		
		case 3:
			unk_0x002BEFCA6CC9B4F5();
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0x91F590A9823EB649(iLocal_58);
				unk_0xA12E1659DEF57244(&uLocal_95);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), 7000, 2048, 2);
				unk_0xA1FD592C7589E020(0, 300);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 4000);
				unk_0xD06C31EF9A42C2B4(0, Local_115, 1f, -1, 0.25f, 0, 311.3569f);
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x15A7B753872B3CE3(uLocal_95);
				unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
				unk_0x78829A259A6975CD(&uLocal_95);
				unk_0x7D81B41B134BD6F2(iLocal_58, 1);
				if (!unk_0xD4B321D9096B01FC(iLocal_121[8]))
				{
					iLocal_121[8] = unk_0x7187764DB5121FC9(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					unk_0x01DF2D3988024DB4(iLocal_121[8], iLocal_58, unk_0xDD454299E9E58208(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_144 = unk_0x9B35D07DCD0F0B43() + 1000;
				iLocal_143++;
			}
			break;
		
		case 4:
			unk_0x002BEFCA6CC9B4F5();
			if (iLocal_144 < unk_0x9B35D07DCD0F0B43())
			{
				if (!unk_0x2BF5E63466422C38(iLocal_58))
				{
					unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
					iLocal_144 = unk_0x9B35D07DCD0F0B43() + 3000;
					iLocal_143++;
				}
			}
			break;
		
		case 5:
			if (iLocal_144 < unk_0x9B35D07DCD0F0B43())
			{
				unk_0x002BEFCA6CC9B4F5();
				iLocal_143++;
			}
			break;
		
		case 6:
			if (!func_157())
			{
				func_115("DOM_GOLF", -1);
				func_114(&(Global_111560.f_18974), 16);
				if (func_54() == 0)
				{
					func_113(&(Global_111560.f_18974.f_24), 1);
				}
				else if (func_54() == 1)
				{
					func_113(&(Global_111560.f_18974.f_24), 4);
				}
				else if (func_54() == 2)
				{
					func_113(&(Global_111560.f_18974.f_24), 2);
				}
				func_83(func_54(), 1, 80, 0, 1);
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

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDE53EA8358302CB4())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (bParam0)
		{
			if (unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) != unk_0x0FA8183DAD2B3203())
				{
					return 0;
				}
			}
		}
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x7BB084963FF20373(iVar0) < 0.95f || unk_0x7BB084963FF20373(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!unk_0xC22C143313E77BB2(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

void func_118()
{
	if (!func_62())
	{
		func_57(1);
	}
	if (!func_157())
	{
		switch (iLocal_141)
		{
			case 0:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 1:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 2:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 3:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 4:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 5:
				func_156(&uLocal_155, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 6:
				iLocal_142 = unk_0x9B35D07DCD0F0B43() + 1000;
				iLocal_141++;
				break;
			
			case 7:
				if (iLocal_142 < unk_0x9B35D07DCD0F0B43())
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 8:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 9:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 10:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 11:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 12:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 13:
				iLocal_142 = unk_0x9B35D07DCD0F0B43() + 600;
				iLocal_141++;
				break;
			
			case 14:
				if (iLocal_142 < unk_0x9B35D07DCD0F0B43())
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_54() == 1)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_54() == 2)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_141++;
				}
				break;
			
			case 15:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_141++;
				break;
			
			case 16:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 17:
				iLocal_142 = unk_0x9B35D07DCD0F0B43() + 800;
				iLocal_141++;
				break;
			
			case 18:
				if (iLocal_142 < unk_0x9B35D07DCD0F0B43())
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_141++;
				}
				break;
			
			case 19:
				if (func_54() == 0)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_54() == 1)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_54() == 2)
				{
					func_156(&uLocal_155, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_141++;
				break;
			
			case 20:
				func_156(&uLocal_155, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_141++;
				break;
			}
	}
}

void func_119()
{
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		if (!iLocal_84)
		{
			if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
			{
				if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), unk_0x9B79A29933E4A8FA(), 1) && unk_0x95ED3BD0F52D542A(iLocal_58, unk_0x9B79A29933E4A8FA(), 0))
				{
					func_57(0);
					func_55();
					unk_0x4EDE34FBADD967A6(0);
					func_156(&uLocal_155, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_84 = 1;
				}
			}
		}
		else if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), unk_0x9B79A29933E4A8FA(), 0) && unk_0x95ED3BD0F52D542A(iLocal_58, unk_0x9B79A29933E4A8FA(), 0))
			{
				iLocal_84 = 0;
			}
		}
		if (!iLocal_85)
		{
			if (unk_0x57C8B4C1F3339B6E(unk_0x0FA8183DAD2B3203()))
			{
				func_57(0);
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_156(&uLocal_155, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (!unk_0x57C8B4C1F3339B6E(unk_0x0FA8183DAD2B3203()))
		{
			iLocal_85 = 0;
		}
		if (!iLocal_86)
		{
			if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
			{
				func_57(0);
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				func_156(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_86 = 1;
			}
		}
		else if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
		{
			iLocal_86 = 0;
		}
	}
}

void func_120()
{
	if (unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()))
	{
		if (iLocal_136 == 0)
		{
			iLocal_136 = unk_0x9B35D07DCD0F0B43();
		}
		else
		{
			iLocal_137 = unk_0x9B35D07DCD0F0B43();
		}
	}
	else
	{
		iLocal_137 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_137 - iLocal_136) > 60000)
	{
		func_55();
		unk_0x4EDE34FBADD967A6(0);
		func_156(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!unk_0x2BF5E63466422C38(iLocal_58))
		{
			if (unk_0xC49563EAE7AACA6C(iLocal_58, Local_115, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xD06C31EF9A42C2B4(iLocal_58, Local_115, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0xDE8E5CE8855FA963(iLocal_58, 1193033728, 0);
			}
			unk_0x7D81B41B134BD6F2(iLocal_58, 1);
			unk_0x91F590A9823EB649(iLocal_58);
		}
		func_51();
	}
}

void func_121()
{
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 8f, 8f, 8f, 0, 1, 0) || unk_0x90B5809A1B681498(unk_0x0FA8183DAD2B3203()))
		{
			if ((unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0x5294582CE404D3F4(iLocal_58, 0)) && !unk_0x90B5809A1B681498(unk_0x0FA8183DAD2B3203()))
			{
				if (!unk_0x39A01A052D9B5FF0(uLocal_102[0]))
				{
					uLocal_102[0] = func_125(iLocal_58, 0, 145);
				}
				if (unk_0x39A01A052D9B5FF0(uLocal_100))
				{
					unk_0xAA2276003B2ADF1B(&uLocal_100);
				}
			}
			else
			{
				if (unk_0x39A01A052D9B5FF0(uLocal_102[0]))
				{
					unk_0xAA2276003B2ADF1B(&(uLocal_102[0]));
				}
				if (!unk_0x39A01A052D9B5FF0(uLocal_100))
				{
					uLocal_100 = func_123(Local_112, 1);
				}
				if (func_54() == 2 && !func_47())
				{
					if (!unk_0x39A01A052D9B5FF0(uLocal_101))
					{
						uLocal_101 = func_123(Local_118, 0);
						unk_0xD1773DD05FE2AB54(uLocal_101, 269);
						func_122();
					}
				}
			}
		}
		else
		{
			if (!unk_0x39A01A052D9B5FF0(uLocal_102[0]))
			{
				uLocal_102[0] = func_125(iLocal_58, 0, 145);
			}
			if (unk_0x39A01A052D9B5FF0(uLocal_100))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_100);
			}
		}
	}
}

void func_122()
{
	if (func_54() == 2)
	{
		if (!Global_30973)
		{
			func_115("CULT_BLIP_HELP", -1);
			Global_30973 = 1;
		}
	}
}

var func_123(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_124(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

float func_124(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_125(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_126(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_124(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_124(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_124(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_127()
{
	int iVar0;
	
	unk_0x0FFB05DA97E810B5(&iLocal_57);
	func_128(&uLocal_155, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_121)
	{
		unk_0x86A9549BD3D71664(&(iLocal_121[iVar0]));
		iVar0++;
	}
	unk_0x7D74D6A091150B86("random@domestic");
}

void func_128(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_129()
{
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (!func_132())
			{
				if (unk_0xFF8C14957DF16F4D(iLocal_58))
				{
					unk_0x91F590A9823EB649(iLocal_58);
				}
				if (unk_0x411C065ADB822CD9(iLocal_58, 1227113341) != 1 && unk_0x411C065ADB822CD9(iLocal_58, 1227113341) != 0)
				{
					unk_0x5AE2110219317C16(iLocal_58, unk_0x0FA8183DAD2B3203(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x5294582CE404D3F4(iLocal_58, 0))
				{
					unk_0x2DCF88AC859255F3(iLocal_58, 0, 0);
				}
				if (!iLocal_91)
				{
					func_57(0);
					func_55();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_157())
					{
						if (!func_131())
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_91 = 1;
					}
				}
			}
			else
			{
				iLocal_91 = 0;
				if (unk_0x411C065ADB822CD9(iLocal_58, 1227113341) == 1 && unk_0x411C065ADB822CD9(iLocal_58, 1227113341) == 0)
				{
					unk_0xC6612209077465DD(iLocal_58);
				}
			}
		}
		else if (!unk_0xFF8C14957DF16F4D(iLocal_58))
		{
			unk_0x3B1D4A59B3B6B42C(iLocal_58, func_130());
			unk_0x174F0AF2FB5368AB(iLocal_58, 1);
			unk_0x946F21DEBF92050D(iLocal_58, 0);
		}
	}
}

var func_130()
{
	return unk_0x85E4D364E5F296FC(unk_0x7A8732CFB5113E77());
}

int func_131()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		if (unk_0xD960230552BC4165(unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203()), 1))
		{
			if ((unk_0xA03B0E2641CE8F87(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1))) || unk_0xF39FF829579D1A21(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1)))) || unk_0x79676C1B659A9398(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
		{
			if (((((!unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) && !unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) && !unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) && !unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) && !unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203())) && !unk_0x450F12B6B894DEC6(unk_0x0FA8183DAD2B3203(), joaat("rhino")))
			{
				if (unk_0x78B310CB286001B8(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		if (unk_0xD960230552BC4165(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203()), 0))
		{
			if ((((!unk_0xDC118E11A4081E9A(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203()))) && !unk_0x31337ABC07783F10(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && !unk_0x5EA23EAAAD4E34BF(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && !unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())))) && unk_0x7F375072508F738F(unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_133()
{
	switch (iLocal_69)
	{
		case 0:
			if (!func_157())
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if (func_132())
					{
						if (func_54() == 0)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_69 = 2;
					}
					else
					{
						if (func_54() == 0)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_54() == 1)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_54() == 2)
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_69++;
					}
				}
				else
				{
					if (func_54() == 0)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_54() == 1)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_54() == 2)
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_69++;
				}
			}
			break;
		
		case 1:
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (!func_132())
				{
					if (!func_157())
					{
						func_156(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_139 = unk_0x9B35D07DCD0F0B43();
						iLocal_69++;
					}
				}
				else
				{
					iLocal_69++;
				}
			}
			else if (!func_157())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_139 = unk_0x9B35D07DCD0F0B43();
				iLocal_69++;
			}
			break;
		
		case 2:
			iLocal_140 = unk_0x9B35D07DCD0F0B43();
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_132())
					{
						unk_0x9B54A3CCAAB4F5FB(255, uLocal_152, joaat("player"));
						if (func_136("REDO2_WT"))
						{
							func_55();
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_69++;
					}
					else if (!func_157() && !iLocal_87)
					{
						if (!func_131())
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_156(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_87 = 1;
					}
				}
			}
			if (iLocal_139 != 0)
			{
				if ((iLocal_140 - iLocal_139) > 60000)
				{
					if (func_156(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						unk_0x4EDE34FBADD967A6(2000);
						if (!unk_0x2BF5E63466422C38(iLocal_58))
						{
							unk_0xA12E1659DEF57244(&uLocal_95);
							unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 2000);
							unk_0x9DF603E4FF1E8E97(0, -1);
							unk_0xDE8E5CE8855FA963(0, 1193033728, 0);
							unk_0x15A7B753872B3CE3(uLocal_95);
							unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
							unk_0x78829A259A6975CD(&uLocal_95);
							unk_0x7D81B41B134BD6F2(iLocal_58, 1);
							unk_0x4EDE34FBADD967A6(3000);
							iLocal_49 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x2BF5E63466422C38(iLocal_58) && unk_0xD4B321D9096B01FC(iLocal_121[8]))
			{
				unk_0xA12E1659DEF57244(&uLocal_95);
				if (iLocal_68 > 18)
				{
				}
				unk_0xD06C31EF9A42C2B4(0, unk_0xACE5E491FC1B0D37(iLocal_121[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_135(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iLocal_121[8], 1)));
				unk_0x5D672CB011E20B28(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x5D672CB011E20B28(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uLocal_95);
				unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
				unk_0x78829A259A6975CD(&uLocal_95);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_69++;
			}
			break;
		
		case 4:
		case 5:
			if (!unk_0x2BF5E63466422C38(iLocal_58) && !unk_0xF4B969E0807E76C7(iLocal_121[8], 0))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0x1E97F21BCEB8DE35(iLocal_58, iLocal_121[8], 0);
					if (unk_0x79825B919DB9FB1C(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69 = 7;
					}
				}
				else if (unk_0xC9D9444186B5A374() > 10000 || unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), unk_0xACE5E491FC1B0D37(iLocal_121[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!unk_0xCA7317DE7E0F89E9(iLocal_121[8]))
					{
						unk_0xA12E1659DEF57244(&uLocal_95);
						unk_0x5D672CB011E20B28(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						unk_0x5D672CB011E20B28(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						unk_0x15A7B753872B3CE3(uLocal_95);
						unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
						unk_0x78829A259A6975CD(&uLocal_95);
						iLocal_69 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x2BF5E63466422C38(iLocal_58) && !unk_0xF4B969E0807E76C7(iLocal_121[8], 0))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_58, "random@domestic", "pickup_low", 3))
				{
					unk_0x1E97F21BCEB8DE35(iLocal_58, iLocal_121[8], 0);
					if (unk_0x79825B919DB9FB1C(iLocal_58, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 7:
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0x9B69E0F5342BA1A8(iLocal_58, unk_0x0FA8183DAD2B3203(), 20f, 20f, 20f, 0, 1, 0))
				{
					unk_0x01DF2D3988024DB4(iLocal_121[8], iLocal_58, unk_0xDD454299E9E58208(iLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					unk_0x3B1D4A59B3B6B42C(iLocal_58, unk_0x85E4D364E5F296FC(unk_0x7C7787D2D7139A85()));
					unk_0x174F0AF2FB5368AB(iLocal_58, 1);
					unk_0x946F21DEBF92050D(iLocal_58, 0);
					func_134();
					iLocal_49 = 4;
				}
			}
			break;
	}
}

void func_134()
{
	if (!func_47())
	{
		if (func_54() == 2)
		{
			Global_30971 = 1;
		}
	}
}

var func_135(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x3BA2E0B9E14A8025((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_136(char* sParam0)
{
	var uVar0;
	
	if (func_157())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x2553916E420E8EF0(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	if (!iLocal_98)
	{
		if (!unk_0x2BF5E63466422C38(iLocal_58))
		{
			if (unk_0x9B69E0F5342BA1A8(iLocal_58, unk_0x0FA8183DAD2B3203(), 12f, 12f, 5f, 0, 1, 0))
			{
				unk_0xC6612209077465DD(iLocal_58);
				unk_0xA12E1659DEF57244(&uLocal_95);
				unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
				unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), 18000, 0, 2);
				unk_0x15A7B753872B3CE3(uLocal_95);
				unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
				unk_0x78829A259A6975CD(&uLocal_95);
				unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iLocal_58, 15000, 0, 2);
				iLocal_98 = 1;
			}
		}
	}
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		if (unk_0x9B69E0F5342BA1A8(iLocal_58, unk_0x0FA8183DAD2B3203(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_138)
			{
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					unk_0xC6612209077465DD(iLocal_58);
					unk_0xA12E1659DEF57244(&uLocal_95);
					unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 0, 2);
					unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), -1);
					unk_0x15A7B753872B3CE3(uLocal_95);
					unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
					unk_0x78829A259A6975CD(&uLocal_95);
					bLocal_138 = true;
				}
				else
				{
					unk_0xC6612209077465DD(iLocal_58);
					unk_0xA12E1659DEF57244(&uLocal_95);
					unk_0x6E2920E14F5F962C(0, unk_0x0FA8183DAD2B3203(), -1, 0, 2);
					unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), -1);
					unk_0x15A7B753872B3CE3(uLocal_95);
					unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
					unk_0x78829A259A6975CD(&uLocal_95);
					bLocal_138 = true;
				}
			}
			if (bLocal_138)
			{
				if (bLocal_54)
				{
					func_58();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x2BF5E63466422C38(iLocal_58))
					{
						if (!func_157())
						{
							if (unk_0x9B1F9CEC0CB28F35(iLocal_58, unk_0x0FA8183DAD2B3203(), 90f))
							{
								if (func_156(&uLocal_155, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_49 = 7;
								}
							}
						}
					}
				}
				else if (!func_157())
				{
					if (func_156(&uLocal_155, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_49 = 7;
					}
				}
			}
		}
	}
}

void func_138()
{
	if (unk_0xD4B321D9096B01FC(iLocal_58))
	{
		if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_139())
			{
				func_46(0);
				iLocal_90 = 0;
			}
		}
		else if (func_157() && !iLocal_90)
		{
			func_46(1);
			iLocal_90 = 1;
		}
	}
}

int func_139()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	switch (iLocal_68)
	{
		case 0:
			if (!unk_0x2BF5E63466422C38(iLocal_58) && !unk_0x2BF5E63466422C38(iLocal_57))
			{
				if (unk_0x93086679C0E859D8(unk_0xACE5E491FC1B0D37(iLocal_57, 1), 3f))
				{
					if (!func_157())
					{
						if (func_156(&uLocal_155, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							unk_0x5D672CB011E20B28(iLocal_58, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							unk_0x5D672CB011E20B28(iLocal_57, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_68++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[8]))
			{
				unk_0x01DF2D3988024DB4(iLocal_121[8], iLocal_57, unk_0xDD454299E9E58208(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_68++;
			}
			break;
		
		case 2:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[8]))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						unk_0x363E2170E626A00A(iLocal_121[8], 0, 1);
						unk_0x0977D05D452C9828(iLocal_121[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_88 && unk_0xD4B321D9096B01FC(iLocal_121[8]))
			{
				if (unk_0xC29ACA630455C49B(iLocal_121[8]))
				{
					unk_0x5F5C6A264C2CA8B1(-1, "CLOTHES_THROWN", iLocal_121[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 4:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[9]))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						unk_0x01DF2D3988024DB4(iLocal_121[9], iLocal_57, unk_0xDD454299E9E58208(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_157() || func_139())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_68++;
			}
			break;
		
		case 6:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[9]))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						unk_0x363E2170E626A00A(iLocal_121[9], 0, 1);
						unk_0x0977D05D452C9828(iLocal_121[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_88 && unk_0xD4B321D9096B01FC(iLocal_121[9]))
			{
				if (unk_0xC29ACA630455C49B(iLocal_121[9]))
				{
					unk_0x5F5C6A264C2CA8B1(-1, "CLOTHES_THROWN", iLocal_121[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 8:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[10]))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						unk_0x01DF2D3988024DB4(iLocal_121[10], iLocal_57, unk_0xDD454299E9E58208(iLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 9:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && unk_0xD4B321D9096B01FC(iLocal_121[10]))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						unk_0x363E2170E626A00A(iLocal_121[10], 0, 1);
						unk_0x0977D05D452C9828(iLocal_121[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_68++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_88 && unk_0xD4B321D9096B01FC(iLocal_121[10]))
			{
				if (unk_0xC29ACA630455C49B(iLocal_121[10]))
				{
					unk_0x5F5C6A264C2CA8B1(-1, "CLOTHES_THROWN", iLocal_121[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_88 = 1;
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_88 = 0;
				iLocal_68++;
			}
			break;
		
		case 11:
			if (!unk_0x2BF5E63466422C38(iLocal_57) && !unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0xF6FD8019402CF03B(iLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (unk_0x79825B919DB9FB1C(iLocal_57, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						unk_0x845704CC8ADF1918(iLocal_57, iLocal_58, 0);
					}
				}
			}
			if (!func_157() || func_139())
			{
				func_156(&uLocal_155, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_68 = 14;
			}
			break;
		
		case 14:
			if (!func_157())
			{
				if (func_156(&uLocal_155, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_141();
					iLocal_68++;
				}
			}
			break;
		
		case 15:
			if (!func_157())
			{
				if (func_156(&uLocal_155, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_68++;
				}
			}
			break;
		
		case 16:
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0xA12E1659DEF57244(&uLocal_95);
				unk_0xECC035CAE5B59E06(0);
				unk_0xD65F7D9CC109BCC8(0, Local_109, 0);
				unk_0x15A7B753872B3CE3(uLocal_95);
				unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
				unk_0x78829A259A6975CD(&uLocal_95);
				iLocal_68++;
			}
			break;
		
		case 17:
			if (unk_0xD4B321D9096B01FC(iLocal_57))
			{
				if (!unk_0xF4B969E0807E76C7(iLocal_57, 0))
				{
					if (unk_0xC49563EAE7AACA6C(iLocal_57, Local_109, 1f, 1f, 5f, 0, 1, 0) && unk_0x7FB035B5755E076D(iLocal_57))
					{
						unk_0x4F058F27442031CC(&iLocal_57);
					}
				}
			}
			if (iLocal_93 < unk_0x9B35D07DCD0F0B43())
			{
				if (!func_157())
				{
					if (func_156(&uLocal_155, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_93 = unk_0x9B35D07DCD0F0B43() + 5000;
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
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (!func_157())
				{
					if (func_156(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						unk_0xDE8E5CE8855FA963(iLocal_58, 1193033728, 0);
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
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 6f, 4f, 5f, 0, 1, 0) || (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 12f, 12f, 5f, 0, 1, 2) && unk_0x4CED1B53390BCAB7(unk_0x7C7787D2D7139A85())))
				{
					unk_0xC6612209077465DD(iLocal_58);
					func_141();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_58();
						while (func_157())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_156(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
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
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 6f, 8f, 5f, 0, 1, 0))
				{
					if (unk_0x39A01A052D9B5FF0(uLocal_102[0]))
					{
						unk_0x73DF1B751952DA65(uLocal_102[0], 1);
					}
					unk_0xC6612209077465DD(iLocal_58);
					func_141();
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_55();
						while (func_157())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						if (func_156(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
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
		if (iLocal_55 < unk_0x9B35D07DCD0F0B43())
		{
			func_58();
			if (unk_0xD4B321D9096B01FC(iLocal_57))
			{
				func_141();
			}
			iLocal_49 = 3;
		}
	}
}

void func_141()
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iLocal_57))
	{
		unk_0xA12E1659DEF57244(&uLocal_95);
		unk_0x43D490C8BFA124BB(0, Local_109, 1f, -1, 1193033728, 1056964608);
		unk_0x5D672CB011E20B28(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		unk_0x15A7B753872B3CE3(uLocal_95);
		unk_0xC544A8E1032AC1CF(iLocal_57, uLocal_95);
		unk_0x78829A259A6975CD(&uLocal_95);
		unk_0x7D81B41B134BD6F2(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0xD4B321D9096B01FC(iLocal_121[iVar0]))
			{
				unk_0x363E2170E626A00A(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_142(int iParam0)
{
	if (func_145())
	{
		Global_111550 = 1;
		Global_111547 = unk_0x9B35D07DCD0F0B43();
		if (func_25(Global_111549))
		{
			func_143(0);
		}
		unk_0x3415792782E2E29A(1, "RE_TITLE");
		if (iParam0 && func_25(Global_111549))
		{
			unk_0x10C716954B3795A8();
		}
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_115(func_144(iParam0), -1);
					Global_111560.f_24990.f_2++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 1))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_115(func_144(iParam0), -1);
					Global_111560.f_24990.f_3++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA2BC31158C8CEFD2(Global_111556, 2))
			{
				if (!unk_0x8F4A1C79B0DAADA3())
				{
					func_115(func_144(iParam0), -1);
					Global_111560.f_24990.f_4++;
					unk_0xA1E7A40E1F56E511(&Global_111556, 2);
				}
			}
			break;
	}
}

char* func_144(int iParam0)
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

int func_145()
{
	switch (func_146(&Global_30795, 0, 5, 0, unk_0x429EE9FF15BB9033()))
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

int func_146(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_150(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x74DBD46763D0F643(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_148(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_147(uParam0, iParam4);
		}
	}
	return 2;
}

void func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_148(int iParam0)
{
	return func_149(iParam0, Global_41396);
}

int func_149(int iParam0, int iParam1)
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

int func_150(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_148(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_151()
{
	if (unk_0x39A01A052D9B5FF0(uLocal_105))
	{
		unk_0xAA2276003B2ADF1B(&uLocal_105);
	}
	if (!unk_0x39A01A052D9B5FF0(uLocal_102[0]))
	{
		uLocal_102[0] = func_125(iLocal_58, 0, 145);
		unk_0x73DF1B751952DA65(uLocal_102[0], 0);
	}
}

void func_152()
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	func_4(44, 1);
	unk_0xB82DC93528F8603C(Local_63, 2f, 1, 0, 0, 0);
	unk_0xB82DC93528F8603C(Local_60, 2f, 1, 0, 0, 0);
	unk_0x80BCF42B42433CEB(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1);
	unk_0xEAD374C7213329E9(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	unk_0x740FE9B7B3FE1CE5(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x740FE9B7B3FE1CE5(Local_112 - Vector(3f, 2f, 2f), Local_112 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	unk_0x740FE9B7B3FE1CE5(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	unk_0x8CBD7ED64E4A522F("rghDomestic", &uLocal_152);
	unk_0x9B54A3CCAAB4F5FB(5, uLocal_152, joaat("player"));
	iLocal_57 = unk_0xB983F26E7AFB47BF(26, iLocal_96, Local_60, fLocal_66, 1, 1);
	unk_0xCC94EE23853F38E4(iLocal_57, 1);
	unk_0xDEB0AA30ABFDCF48(iLocal_57, 17, 1);
	unk_0xDEB0AA30ABFDCF48(iLocal_57, 8, 0);
	unk_0x3A6FD57A8EC62253(iLocal_57, 1, 0);
	unk_0x3A6FD57A8EC62253(iLocal_57, 2, 0);
	unk_0x3A6FD57A8EC62253(iLocal_57, 128, 1);
	unk_0x3A6FD57A8EC62253(iLocal_57, 8, 0);
	unk_0x5D672CB011E20B28(iLocal_57, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xDB889DCC8B0139E6(iLocal_57, uLocal_152);
	func_155(iLocal_57, "GENERIC_WHATEVER", 24);
	unk_0xE0AC40EF164A2569(iLocal_96);
	unk_0x1DB66BD2267055C0(iLocal_57, 185, 1);
	iLocal_58 = unk_0xB983F26E7AFB47BF(26, iLocal_97, Local_63, fLocal_67, 1, 1);
	unk_0xCC94EE23853F38E4(iLocal_58, 1);
	unk_0x3A6FD57A8EC62253(iLocal_58, 1, 1);
	unk_0x3A6FD57A8EC62253(iLocal_58, 2, 0);
	unk_0x3A6FD57A8EC62253(iLocal_58, 128, 1);
	unk_0x3A6FD57A8EC62253(iLocal_58, 8, 0);
	unk_0x3A6FD57A8EC62253(iLocal_58, 65536, 1);
	unk_0x1DB66BD2267055C0(iLocal_58, 185, 1);
	unk_0x1DB66BD2267055C0(iLocal_58, 206, 1);
	unk_0xE62BE0EB9BC772E3(iLocal_58, 0);
	unk_0x6E712A176E3EEFA8(iLocal_58, 0);
	unk_0x5D672CB011E20B28(iLocal_58, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xDB889DCC8B0139E6(iLocal_58, uLocal_152);
	func_155(iLocal_58, "GENERIC_WHATEVER", 24);
	unk_0xE0AC40EF164A2569(iLocal_97);
	unk_0x6E2920E14F5F962C(iLocal_58, iLocal_57, -1, 0, 2);
	unk_0x6E2920E14F5F962C(iLocal_57, iLocal_58, -1, 0, 2);
	unk_0x0453EBC0FB8D8A80(iLocal_57, 0, 1, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_57, 2, 1, 1, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_57, 3, 1, 1, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_57, 4, 1, 2, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_58, 0, 0, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_58, 2, 1, 0, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_58, 3, 1, 2, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_58, 4, 1, 1, 0);
	unk_0x0453EBC0FB8D8A80(iLocal_58, 8, 0, 0, 0);
	func_154();
	unk_0xA1E7A40E1F56E511(&uLocal_134, 5);
	if (func_54() == 0)
	{
		func_153(&uLocal_155, 0, unk_0x0FA8183DAD2B3203(), "MICHAEL", 0, 1);
	}
	if (func_54() == 1)
	{
		func_153(&uLocal_155, 1, unk_0x0FA8183DAD2B3203(), "FRANKLIN", 0, 1);
	}
	if (func_54() == 2)
	{
		func_153(&uLocal_155, 2, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
	}
	func_153(&uLocal_155, 3, iLocal_58, "REDOCastro", 0, 1);
	unk_0x5A36DB8F38E65BE2(iLocal_58, sLocal_153);
	func_153(&uLocal_155, 4, iLocal_57, "NATHALIA", 0, 1);
	unk_0x5A36DB8F38E65BE2(iLocal_57, sLocal_154);
	unk_0xC1B1E9A034A63A62(0);
	iLocal_150 = 1;
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_154()
{
	iLocal_121[0] = unk_0x7187764DB5121FC9(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[0], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_tshirt_02"));
	iLocal_121[1] = unk_0x7187764DB5121FC9(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[1], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_jeans_02"));
	iLocal_121[2] = unk_0x7187764DB5121FC9(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[2], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_shoe_01"));
	iLocal_121[3] = unk_0x7187764DB5121FC9(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[3], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_jeans_01"));
	iLocal_121[4] = unk_0x7187764DB5121FC9(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[4], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_shoe_02"));
	iLocal_121[5] = unk_0x7187764DB5121FC9(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[5], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_ld_shirt_01"));
	iLocal_121[6] = unk_0x7187764DB5121FC9(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[6], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_porn_mag_03"));
	iLocal_121[7] = unk_0x7187764DB5121FC9(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	unk_0xF3D48447FACBBE72(iLocal_121[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	unk_0x860A5CC30A0EF207(iLocal_121[7], 1);
	unk_0xE0AC40EF164A2569(joaat("prop_porn_mag_01"));
	iLocal_121[8] = unk_0x7187764DB5121FC9(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_121[9] = unk_0x7187764DB5121FC9(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	unk_0xE0AC40EF164A2569(joaat("prop_cs_rub_binbag_01"));
	iLocal_121[10] = unk_0x7187764DB5121FC9(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	unk_0xE0AC40EF164A2569(joaat("prop_golf_bag_01"));
}

void func_155(var uParam0, char* sParam1, int iParam2)
{
	unk_0x39F932B751C1253B(uParam0, sParam1, func_50(iParam2), 1);
}

bool func_156(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_65(sParam2, iParam3, 0);
}

int func_157()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_158()
{
	if (!unk_0x2BF5E63466422C38(iLocal_58) && !unk_0x2BF5E63466422C38(iLocal_57))
	{
		if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
		{
			if (unk_0x5EFDDC42B42A7D98(iLocal_58, unk_0x0FA8183DAD2B3203()) || unk_0x5EFDDC42B42A7D98(iLocal_57, unk_0x0FA8183DAD2B3203()))
			{
				if (((unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iLocal_58) || unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iLocal_58)) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iLocal_57)) || unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iLocal_57))
				{
					if (iLocal_135 == -1)
					{
						iLocal_135 = unk_0x9B35D07DCD0F0B43();
					}
				}
				else
				{
					iLocal_135 = -1;
				}
			}
			if ((iLocal_135 != -1 && unk_0x9B35D07DCD0F0B43() > iLocal_135 + 500) || unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
			{
				func_165();
			}
		}
	}
	if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
	{
		func_165();
	}
	if (iLocal_49 == 1)
	{
		if (unk_0xD4B321D9096B01FC(iLocal_58))
		{
			if (func_164(iLocal_58))
			{
				func_163();
			}
		}
	}
	if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_162();
	}
	if (unk_0xD4B321D9096B01FC(iLocal_57))
	{
		if (func_161(iLocal_57))
		{
			func_159();
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_58))
	{
		if (func_161(iLocal_58) || unk_0x3656B691E303FDE0(iLocal_58, unk_0x0FA8183DAD2B3203(), 1))
		{
			func_159();
		}
	}
	if (unk_0xD4B321D9096B01FC(iLocal_57))
	{
		if (func_161(iLocal_57) || unk_0x3656B691E303FDE0(iLocal_57, unk_0x0FA8183DAD2B3203(), 1))
		{
			func_159();
		}
	}
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		if (!unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_58, 250f, 250f, 250f, 0, 1, 0) || unk_0xE294A1321110B3E9(iLocal_58))
		{
			iLocal_49 = 11;
		}
	}
	if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
	{
		func_159();
	}
}

void func_159()
{
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
	{
		func_156(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_156(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		unk_0xC6612209077465DD(iLocal_58);
		unk_0xA12E1659DEF57244(&uLocal_95);
		unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 250f, -1, 0, 0);
		unk_0x15A7B753872B3CE3(uLocal_95);
		unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
		unk_0x78829A259A6975CD(&uLocal_95);
		unk_0x7D81B41B134BD6F2(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_160();
	unk_0x4EDE34FBADD967A6(0);
	func_51();
	iLocal_49 = 11;
}

void func_160()
{
	int iVar0;
	
	if (!unk_0x2BF5E63466422C38(iLocal_57))
	{
		unk_0x5D865B9E32556997(iLocal_57, -1);
		unk_0x7D81B41B134BD6F2(iLocal_57, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0xD4B321D9096B01FC(iLocal_121[iVar0]))
			{
				unk_0x363E2170E626A00A(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_161(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_162()
{
	func_160();
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	func_156(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		unk_0xC6612209077465DD(iLocal_58);
		unk_0xA12E1659DEF57244(&uLocal_95);
		unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 250f, -1, 0, 0);
		unk_0x15A7B753872B3CE3(uLocal_95);
		unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
		unk_0x78829A259A6975CD(&uLocal_95);
		unk_0x7D81B41B134BD6F2(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_51();
	iLocal_49 = 11;
}

void func_163()
{
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		unk_0xC6612209077465DD(iLocal_58);
		unk_0xAAAD1B054EFBF5A7(iLocal_58, unk_0xACE5E491FC1B0D37(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 1), 150f, -1, 0, 0);
		unk_0x7D81B41B134BD6F2(iLocal_58, 1);
	}
	iLocal_49 = 11;
}

int func_164(int iParam0)
{
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if (!unk_0x5294582CE404D3F4(iParam0, 0) && unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (unk_0xB8D4A2BAA78AB950(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165()
{
	func_55();
	unk_0x4EDE34FBADD967A6(0);
	func_156(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!unk_0x2BF5E63466422C38(iLocal_58))
	{
		unk_0xA12E1659DEF57244(&uLocal_95);
		unk_0x2DCF88AC859255F3(0, 0, 4096);
		unk_0xF0E9590A910B74BE(0, unk_0x0FA8183DAD2B3203(), 250f, -1, 0, 0);
		unk_0x15A7B753872B3CE3(uLocal_95);
		unk_0xC544A8E1032AC1CF(iLocal_58, uLocal_95);
		unk_0x78829A259A6975CD(&uLocal_95);
		unk_0x7D81B41B134BD6F2(iLocal_58, 1);
		unk_0x4EDE34FBADD967A6(3000);
	}
	func_51();
	iLocal_49 = 11;
}

void func_166()
{
	unk_0x6BB2B1818CAE531E(iLocal_96);
	unk_0x6BB2B1818CAE531E(iLocal_97);
	unk_0x6BB2B1818CAE531E(joaat("prop_golf_iron_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_cs_rub_binbag_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_golf_bag_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_tshirt_02"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_jeans_02"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_shoe_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_jeans_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_shoe_02"));
	unk_0x6BB2B1818CAE531E(joaat("prop_ld_shirt_01"));
	unk_0x6BB2B1818CAE531E(joaat("prop_porn_mag_03"));
	unk_0x6BB2B1818CAE531E(joaat("prop_porn_mag_01"));
	unk_0x36B659209EBDD366("random@domestic");
	unk_0x36B659209EBDD366("random@security_van");
	if ((((((((((((((unk_0x6DF9C43E3CC645BC(iLocal_96) && unk_0x6DF9C43E3CC645BC(iLocal_97)) && unk_0x6DF9C43E3CC645BC(joaat("prop_golf_iron_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_cs_rub_binbag_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_golf_bag_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_tshirt_02"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_jeans_02"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_shoe_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_jeans_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_shoe_02"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_ld_shirt_01"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_porn_mag_03"))) && unk_0x6DF9C43E3CC645BC(joaat("prop_porn_mag_01"))) && unk_0xB25A0D192C6A0A5B("random@domestic")) && unk_0xB25A0D192C6A0A5B("random@security_van"))
	{
		bLocal_50 = true;
	}
	else
	{
		unk_0x6BB2B1818CAE531E(iLocal_96);
		unk_0x6BB2B1818CAE531E(iLocal_97);
		unk_0x6BB2B1818CAE531E(joaat("prop_golf_iron_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_cs_rub_binbag_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_golf_bag_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_tshirt_02"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_jeans_02"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_shoe_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_jeans_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_shoe_02"));
		unk_0x6BB2B1818CAE531E(joaat("prop_ld_shirt_01"));
		unk_0x6BB2B1818CAE531E(joaat("prop_porn_mag_03"));
		unk_0x6BB2B1818CAE531E(joaat("prop_porn_mag_01"));
		unk_0x36B659209EBDD366("random@domestic");
		unk_0x36B659209EBDD366("random@security_van");
	}
}

void func_167()
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

int func_168()
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_179())
		{
			return 0;
		}
	}
	if (func_175())
	{
		return 1;
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_169(float fParam0, bool bParam1)
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
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (func_33(func_54()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 2) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_170(iVar32, &Var0);
					fVar35 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var0.f_6, 1);
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

void func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_171(uParam1, "Abigail1", func_173(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 1:
			func_171(uParam1, "Abigail2", func_173(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 2:
			func_171(uParam1, "Barry1", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 3:
			func_171(uParam1, "Barry2", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 4:
			func_171(uParam1, "Barry3", func_173(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 5:
			func_171(uParam1, "Barry3A", func_173(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 6:
			func_171(uParam1, "Barry3C", func_173(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 7:
			func_171(uParam1, "Barry4", func_173(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_172(iParam0), 0, 0);
			break;
		
		case 8:
			func_171(uParam1, "Dreyfuss1", func_173(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 9:
			func_171(uParam1, "Epsilon1", func_173(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 10:
			func_171(uParam1, "Epsilon2", func_173(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 11:
			func_171(uParam1, "Epsilon3", func_173(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 12:
			func_171(uParam1, "Epsilon4", func_173(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 13:
			func_171(uParam1, "Epsilon5", func_173(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 14:
			func_171(uParam1, "Epsilon6", func_173(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 15:
			func_171(uParam1, "Epsilon7", func_173(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 16:
			func_171(uParam1, "Epsilon8", func_173(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 17:
			func_171(uParam1, "Extreme1", func_173(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 18:
			func_171(uParam1, "Extreme2", func_173(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 19:
			func_171(uParam1, "Extreme3", func_173(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 20:
			func_171(uParam1, "Extreme4", func_173(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 21:
			func_171(uParam1, "Fanatic1", func_173(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 22:
			func_171(uParam1, "Fanatic2", func_173(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 23:
			func_171(uParam1, "Fanatic3", func_173(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_172(iParam0), 0, 1);
			break;
		
		case 24:
			func_171(uParam1, "Hao1", func_173(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_172(iParam0), 0, 1);
			break;
		
		case 25:
			func_171(uParam1, "Hunting1", func_173(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 26:
			func_171(uParam1, "Hunting2", func_173(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 27:
			func_171(uParam1, "Josh1", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 28:
			func_171(uParam1, "Josh2", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 29:
			func_171(uParam1, "Josh3", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 30:
			func_171(uParam1, "Josh4", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 31:
			func_171(uParam1, "Maude1", func_173(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 32:
			func_171(uParam1, "Minute1", func_173(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 33:
			func_171(uParam1, "Minute2", func_173(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 34:
			func_171(uParam1, "Minute3", func_173(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 35:
			func_171(uParam1, "MrsPhilips1", func_173(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 36:
			func_171(uParam1, "MrsPhilips2", func_173(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 37:
			func_171(uParam1, "Nigel1", func_173(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 38:
			func_171(uParam1, "Nigel1A", func_173(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 39:
			func_171(uParam1, "Nigel1B", func_173(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 40:
			func_171(uParam1, "Nigel1C", func_173(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 41:
			func_171(uParam1, "Nigel1D", func_173(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 42:
			func_171(uParam1, "Nigel2", func_173(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 43:
			func_171(uParam1, "Nigel3", func_173(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 44:
			func_171(uParam1, "Omega1", func_173(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 45:
			func_171(uParam1, "Omega2", func_173(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 46:
			func_171(uParam1, "Paparazzo1", func_173(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 47:
			func_171(uParam1, "Paparazzo2", func_173(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 48:
			func_171(uParam1, "Paparazzo3", func_173(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 49:
			func_171(uParam1, "Paparazzo3A", func_173(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 50:
			func_171(uParam1, "Paparazzo3B", func_173(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 51:
			func_171(uParam1, "Paparazzo4", func_173(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 52:
			func_171(uParam1, "Rampage1", func_173(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 54:
			func_171(uParam1, "Rampage3", func_173(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 55:
			func_171(uParam1, "Rampage4", func_173(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 56:
			func_171(uParam1, "Rampage5", func_173(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 53:
			func_171(uParam1, "Rampage2", func_173(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 57:
			func_171(uParam1, "TheLastOne", func_173(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 58:
			func_171(uParam1, "Tonya1", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 59:
			func_171(uParam1, "Tonya2", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 60:
			func_171(uParam1, "Tonya3", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 61:
			func_171(uParam1, "Tonya4", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 62:
			func_171(uParam1, "Tonya5", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_171(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_172(int iParam0)
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

struct<2> func_173(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_174(iParam0) };
	if (unk_0x9591DE0F00127F2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_174(int iParam0)
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

int func_175()
{
	if (func_178() && !func_179())
	{
		return 1;
	}
	if (func_177() && func_176())
	{
		return 1;
	}
	return 0;
}

bool func_176()
{
	return Global_111278 > 0;
}

int func_177()
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_179()
{
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x98EF8A03317B1185() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	if (!func_148(5))
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_179())
		{
			return 0;
		}
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if ((Global_111549 == func_40() && unk_0x86652FD1CD2DBA07()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

void func_182(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_184(iParam0);
	unk_0xCFC4E8BEE304113D(0);
	unk_0x2D786727F990DBA9(1);
	Global_111546 = 0;
	func_183();
}

void func_183()
{
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0x0A43D5D11052D038(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)), 1);
		}
		unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
	}
}

void func_184(int iParam0)
{
	Global_111549 = iParam0;
}

int func_185(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_150139)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			Var1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x93DC424F261951D6(unk_0x0FA8183DAD2B3203())) > 1369f && !func_179())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_175())
		{
			return 0;
		}
		if (func_225())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_169(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_224(iParam3))
		{
			return 0;
		}
		if (func_33(func_54()))
		{
			if (func_223(func_54()) == 4 || func_223(func_54()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_54()))
		{
			if (!func_222(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_221(Global_111560.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9B35D07DCD0F0B43() - Global_111551) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_220())
		{
			return 0;
		}
		if (unk_0xFF392459DD4CD797())
		{
			return 0;
		}
		if (unk_0x86652FD1CD2DBA07())
		{
			return 0;
		}
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_148(5))
		{
			return 0;
		}
		if (func_210(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x61837007ACF2F2C2(unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203())))
		{
			if ((unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(377.153f, -717.567f, 10.0536f) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(320.9934f, 265.2515f, 82.1221f)) || unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x46398409580F98BC(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_210(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_224(30) && !func_210(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_54()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_209(iVar8))
				{
					if (func_187(iVar4))
					{
						if (!func_186(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var5) < (210f * 210f))
							{
								if (func_54() != iVar4)
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

bool func_186(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_188(iVar0);
}

int func_188(int iParam0)
{
	return func_189(iParam0, 1);
}

int func_189(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_209(iParam0))
	{
		return 0;
	}
	func_190(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_191(func_202(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_191(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_201(iParam0, iParam1))
	{
		iVar0 = func_200(iParam1);
		iVar1 = func_198(iParam0);
		iVar2 = (func_198(iParam0) - func_198(iParam1));
		iVar3 = (func_200(iParam0) - func_200(iParam1));
		iVar4 = (func_197(iParam0) - func_197(iParam1));
		iVar5 = (func_196(iParam0) - func_196(iParam1));
		iVar6 = (func_195(iParam0) - func_195(iParam1));
		iVar7 = (func_194(iParam0) - func_194(iParam1));
	}
	else
	{
		iVar0 = func_200(iParam0);
		iVar1 = func_198(iParam1);
		iVar2 = (func_198(iParam1) - func_198(iParam0));
		iVar3 = (func_200(iParam1) - func_200(iParam0));
		iVar4 = (func_197(iParam1) - func_197(iParam0));
		iVar5 = (func_196(iParam1) - func_196(iParam0));
		iVar6 = (func_195(iParam1) - func_195(iParam0));
		iVar7 = (func_194(iParam1) - func_194(iParam0));
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
		iVar4 = (iVar4 + func_193(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_192(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_192(float fParam0, float fParam1, float fParam2)
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

int func_193(int iParam0, int iParam1)
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

int func_194(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_195(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_196(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_198(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_199(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_199(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_200(int iParam0)
{
	return iParam0 & 15;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_209(iParam1) || !func_209(iParam0))
	{
		return 1;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	var uVar0;
	
	func_208(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_207(&uVar0, unk_0x8F7802EF0E800F47());
	func_206(&uVar0, unk_0xA63165E74E9A042B());
	func_205(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_204(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_203(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_203(var uParam0, int iParam1)
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

void func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_198(*uParam0);
	if (iParam1 < 1 || iParam1 > func_193(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_209(int iParam0)
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
	iVar0 = func_194(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_196(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_198(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_200(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_197(iParam0);
	if (iVar5 < 1 || iVar5 > func_193(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0, int iParam1)
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = func_54();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_219()) || Global_110607) || Global_30738) || func_218()) || func_77(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1) || func_219()) || Global_30738) || func_218()) || func_77(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_219()) || Global_110607) || Global_30738) || func_218()) || func_77(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_219()) || Global_110607) || Global_30738) || func_218()) || func_77(8, -1)) || func_217()) || func_216()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_219() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || func_77(8, -1)) || func_214()) || func_213()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_77(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
						{
							return 0;
						}
						if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							if ((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_219()) || Global_30738) || func_218()) || func_77(8, -1)) || func_216()) || func_215()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || func_219()) || func_216()) || Global_110607) || Global_30738) || func_218()) || Global_42561) || func_77(8, -1)) || func_215()) || func_213()) || func_214()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_219()) || Global_110607) || Global_30738) || func_218()) || func_77(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()
{
	return Global_98708.f_1;
}

int func_213()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()
{
	if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_98721.f_346 > 0;
}

bool func_217()
{
	return Global_98721.f_345 > 0;
}

var func_218()
{
	return Global_1312873;
}

int func_219()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_220()
{
	func_75();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return func_201(func_202(), iParam0);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_54();
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

int func_223(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_224(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA2BC31158C8CEFD2(Global_111560.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_225()
{
	var uVar0;
	
	if (Global_30886)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(uVar0, 0))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x300C62F79A4441EB(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_226()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					iVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&iVar0, 0);
					unk_0x553DEB79071ABB59(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_228()
{
	int iVar0;
	
	if (iLocal_150 && !iLocal_149)
	{
		func_3(0);
		if (Global_30975)
		{
			unk_0x81995F6F93D8C987("AC_STOP");
		}
		func_2();
		unk_0x80BCF42B42433CEB(Local_63 - Vector(10f, 10f, 10f), Local_63 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x9B54A3CCAAB4F5FB(255, uLocal_152, joaat("player"));
		if (bLocal_59)
		{
			unk_0xE0AC40EF164A2569(iLocal_96);
			unk_0xE0AC40EF164A2569(iLocal_97);
		}
		if (unk_0xD4B321D9096B01FC(iLocal_57))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_57))
			{
				unk_0x1DB66BD2267055C0(iLocal_57, 317, 1);
				unk_0xCC94EE23853F38E4(iLocal_57, 0);
			}
			unk_0x0FFB05DA97E810B5(&iLocal_57);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_105))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_105);
		}
		if (unk_0x39A01A052D9B5FF0(uLocal_102[0]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_102[0]));
		}
		if (unk_0xD4B321D9096B01FC(iLocal_58))
		{
			if (!unk_0x2BF5E63466422C38(iLocal_58))
			{
				unk_0x1DB66BD2267055C0(iLocal_58, 317, 1);
				if (!unk_0x5294582CE404D3F4(iLocal_58, 0))
				{
					unk_0x7D394D4D40B3CDBE(iLocal_58);
				}
				unk_0x91F590A9823EB649(iLocal_58);
				unk_0xCC94EE23853F38E4(iLocal_58, 0);
				unk_0x6E712A176E3EEFA8(iLocal_58, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_121)
		{
			if (unk_0xD4B321D9096B01FC(iLocal_121[iVar0]))
			{
				unk_0x363E2170E626A00A(iLocal_121[iVar0], 1, 1);
			}
			iVar0++;
		}
		unk_0x5FA16012EC432077(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		unk_0xD931F7E3EEBC7B7D();
	}
	func_229(-1);
	unk_0x9C9E32388A7886A2();
}

void func_229(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_181())
	{
		func_233(iParam0);
		unk_0x3415792782E2E29A(0, 0);
		Global_111551 = unk_0x9B35D07DCD0F0B43();
		func_232(30000);
		StringCopy(&cVar0, func_231(Global_111549, 1), 64);
		if (func_39(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		unk_0xB9C42DF94EB4ABBE(&cVar0, Global_111546, (unk_0x9B35D07DCD0F0B43() - Global_111547), 0);
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		unk_0x3B76114EC84D5812(&Global_111556, 0);
	}
	func_230(&Global_30795);
	Global_111550 = 0;
	func_184(-1);
}

void func_230(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

char* func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0)
{
	Global_41947 = (unk_0x9B35D07DCD0F0B43() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_202();
	func_237(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_194(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_198(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_198(*uParam0);
	iVar1 = func_200(*uParam0);
	iVar2 = func_197(*uParam0);
	iVar3 = func_196(*uParam0);
	iVar4 = func_195(*uParam0);
	iVar5 = func_194(*uParam0);
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
	iVar6 = func_193(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_193(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_208(uParam0, iParam1);
	func_207(uParam0, iParam2);
	func_206(uParam0, iParam3);
	func_204(uParam0, iParam5);
	func_205(uParam0, iParam4);
	func_203(uParam0, iParam6);
}

int func_239(int iParam0)
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

