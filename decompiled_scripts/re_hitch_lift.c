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
	int iLocal_29 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	float fLocal_107 = 0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	struct<6> Local_128 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_134 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	char[] cLocal_178[8] = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	char* sLocal_181 = NULL;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	struct<3> Local_190 = { 0, 0, 0 } ;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 16;
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
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_55 = unk_0x1DBB027CE7ACD07B();
	uLocal_56 = unk_0xEAEAFA9E24F1C4E1();
	Local_70 = { -3092.82f, 749.8f, 21.48f };
	Local_73 = { 181.8977f, 4415.152f, 73.463f };
	Local_76 = { 2743.461f, 4385.51f, 47.7521f };
	Local_79 = { -382.1346f, 2817.971f, 44.0671f };
	Local_97 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_128, "", 24);
	Local_63 = { ScriptParam_0.f_1[0 /*3*/] };
	func_263();
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_85))
			{
				unk_0xD3778FD9E17F7E71(iLocal_85);
			}
		}
		func_242();
	}
	if (func_213(Local_63, 13, iLocal_82, 0, 0))
	{
		func_210(-1);
	}
	else
	{
		unk_0x2F798BA2098FDADE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD8AD97AB31334199() || iLocal_111)
		{
			if (!func_209())
			{
				if (func_208())
				{
					func_242();
				}
			}
			unk_0x185B194BB229460F("RE_HL", 0);
			switch (iLocal_57)
			{
				case 0:
					if (func_196())
					{
						func_242();
					}
					if (!iLocal_62)
					{
						func_195();
					}
					else
					{
						func_194();
					}
					if (bLocal_61)
					{
						iLocal_143 = 1;
						iLocal_57 = 1;
					}
					break;
				
				case 1:
					if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						switch (iLocal_58)
						{
							case 0:
								if ((func_193() && iLocal_59 != 8) && iLocal_59 != 10)
								{
									if (!func_209())
									{
										func_184(1);
									}
									iLocal_58 = 1;
								}
								switch (iLocal_59)
								{
									case 0:
										func_177();
										break;
									
									case 1:
										func_175();
										break;
									
									case 2:
										if (func_174())
										{
										}
										iLocal_158 = unk_0x3EAC9995EC220C5A();
										if (iLocal_140 < 1 && !iLocal_141)
										{
											func_173();
										}
										if (iLocal_60 == 1)
										{
											func_172();
										}
										else if (iLocal_60 == 2)
										{
											func_171();
										}
										else if (iLocal_60 == 3)
										{
											func_170();
										}
										else if (iLocal_60 == 5)
										{
											func_167();
										}
										break;
									
									case 3:
										func_164();
										break;
									
									case 4:
										if (iLocal_60 == 1)
										{
											func_147();
											func_146();
										}
										else if (iLocal_60 == 3)
										{
											func_141();
											func_140();
										}
										else if (iLocal_60 == 5)
										{
											func_141();
											func_131();
										}
										if (!bLocal_114)
										{
											func_127();
											func_126();
											func_123();
											func_122();
											func_119();
											func_117();
											func_116();
											func_115();
										}
										func_107();
										break;
									
									case 6:
										func_62();
										if (iLocal_60 == 3)
										{
											func_140();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_60 == 3)
										{
											func_140();
										}
										break;
									
									case 8:
										if (iLocal_60 == 3)
										{
											func_57();
											func_140();
										}
										break;
									
									case 9:
										if (!unk_0x1E80C02AC16B6622(iLocal_85))
										{
											if (unk_0xA427F05DB896EEBE(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
											{
												unk_0xE3BCB930B62CBDE5(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												unk_0x47435418FBCE0635(iLocal_85, 1193033728, 0);
											}
											unk_0x112CD899A3BEE719(iLocal_85, 1);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_59 != 10)
								{
									if (!unk_0x1E80C02AC16B6622(iLocal_85))
									{
										if (unk_0xA427F05DB896EEBE(iLocal_85, Local_97, 5f, 5f, 5f, 0, 1, 0))
										{
											func_50(0);
											unk_0x4EDE34FBADD967A6(0);
											func_48();
											iLocal_59 = 10;
										}
									}
								}
								if (func_47())
								{
									if (unk_0x1F2158D615BC4B25(iLocal_85))
									{
										unk_0xAB3098579170FA46(&iLocal_85);
									}
									func_18();
								}
								break;
							
							case 1:
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								if (iLocal_60 == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_60 == 3)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
									if (!unk_0x1E80C02AC16B6622(iLocal_86))
									{
										unk_0xE2CB8488CFA42209(iLocal_86);
										unk_0x23E5F4496336DE4E(iLocal_86, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
										unk_0x112CD899A3BEE719(iLocal_86, 1);
									}
								}
								else if (iLocal_60 == 5)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x1E80C02AC16B6622(iLocal_85))
								{
									unk_0xE2CB8488CFA42209(iLocal_85);
									unk_0x23E5F4496336DE4E(iLocal_85, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
									unk_0x112CD899A3BEE719(iLocal_85, 1);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_242();
		}
		if (iLocal_59 > 2)
		{
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x1F2158D615BC4B25(iLocal_85))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_85))
					{
						if (!unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_59 > 0 && iLocal_59 < 8)
		{
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x1E80C02AC16B6622(iLocal_85))
				{
					if (!func_209())
					{
						func_184(1);
					}
					func_53();
				}
				else if (!unk_0xCD7683F575A67B31(iLocal_85))
				{
					if (unk_0xCC580427ED36D7F8(iLocal_85, unk_0x77F050A399DB77ED(), 0))
					{
						unk_0xE2CB8488CFA42209(iLocal_85);
						unk_0x23E5F4496336DE4E(iLocal_85, unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC9AB825AA4821BDA(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_14();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_7();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_6())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_5())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_4();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_3();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_4()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_7()
{
	if (func_13(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
		Global_14413 = func_8();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_8()
{
	func_9();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_12(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_11(unk_0x77F050A399DB77ED());
			if (func_10(iVar0) && (!func_13(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_10(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_16()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_18()
{
	while (!func_46())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_82);
	func_19();
	func_242();
}

void func_19()
{
	func_20();
}

int func_20()
{
	if (func_21(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_22(int iParam0, int iParam1)
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
			func_33("RE_REWARD", 1, 0, 4000, 10000, func_36(), 0, 138, 0);
			func_32(51);
		}
		if (func_31(iParam0))
		{
			Global_99250.f_29448.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_99238 = iParam1;
		if (Global_99236 == 0)
		{
			if (((Global_99239 == 1 || Global_99239 == 5) || Global_99239 == 11) || Global_99239 == 25)
			{
				func_23(2);
			}
			else if ((Global_99239 == 26 || Global_99239 == 8) || Global_99239 == 17)
			{
				func_23(7);
			}
			else
			{
				func_23(1);
			}
		}
	}
}

void func_23(int iParam0)
{
	Global_99236 = iParam0;
}

void func_24(int iParam0, var uParam1, var uParam2)
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
		func_28((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = uParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_25();
	}
}

void func_25()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_26() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()
{
	return Global_25115;
}

int func_27(int iParam0, int iParam1)
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_29()
{
	return Global_1312746;
}

int func_30(int iParam0, int iParam1)
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

int func_31(int iParam0)
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

void func_32(int iParam0)
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_35();
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_36()
{
	func_9();
	switch (Global_99250.f_1754.f_539.f_3549)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_29448.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x39BD4614CF899227(&cParam0))
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

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_99250.f_1754.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_99250.f_1754.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3741;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 3741)
			{
				iVar0 = func_45(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_43(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, iParam1, iParam3);
	}
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	return 1;
}

int func_47()
{
	if (Global_25350)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()
{
	Global_14578 = 0;
	func_49();
}

void func_49()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16723 = iParam0;
}

int func_51()
{
	if (Global_99250.f_29448.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_25349;
}

void func_53()
{
	func_55();
	while (func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_242();
}

int func_54()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_55()
{
	Global_14578 = 0;
	func_56();
}

void func_56()
{
	if (unk_0x1066B6347C40B301())
	{
		unk_0xCAAFCFEB9BD734FB();
		Global_16723 = 0;
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x1E80C02AC16B6622(iLocal_86) && !unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (!unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_86, 25f, 25f, 25f, 0, 1, 0) && !unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_85, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0xE2CB8488CFA42209(iLocal_86);
			unk_0xE3BCB930B62CBDE5(iLocal_86, Local_93, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_86))
	{
		if (unk_0xCC580427ED36D7F8(iLocal_86, unk_0x77F050A399DB77ED(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x35D1CAD6ADAB6491(&Var0, "REHH3_JB_2") || unk_0x35D1CAD6ADAB6491(&Var0, "REHH3_JB_4")) || unk_0x35D1CAD6ADAB6491(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0x1CC086F95707C553(iLocal_86, unk_0x77F050A399DB77ED()))
			{
				iLocal_159 = 4;
			}
		}
	}
	if (!iLocal_113)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_85))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_85, unk_0x77F050A399DB77ED(), 1))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_86))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_195, cLocal_178, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_113 = 1;
				}
			}
		}
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (unk_0xCD7683F575A67B31(iLocal_85))
		{
			unk_0x5A499E160A1878DC(iLocal_85);
		}
		if (unk_0x1E80C02AC16B6622(iLocal_86) && unk_0xA427F05DB896EEBE(iLocal_85, unk_0xAF99169F0F5AE41D(iLocal_86, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_159 = 5;
		}
	}
	else if (!unk_0x1E80C02AC16B6622(iLocal_86))
	{
		unk_0xFBE25F0677076CF9(iLocal_86, unk_0x77F050A399DB77ED(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_168)
	{
		if (unk_0x1E80C02AC16B6622(iLocal_86))
		{
			if (unk_0xC3B073777B46C61A(uLocal_122))
			{
				unk_0x296CDA10C549A502(&uLocal_122);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				iLocal_159 = 3;
			}
		}
	}
	if (!iLocal_170)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_85) && !unk_0x1E80C02AC16B6622(iLocal_86))
		{
			if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
			{
				if (unk_0xA35DF80DCE8538ED(unk_0x8ACD527A7E574590()))
				{
					iLocal_159 = 2;
				}
			}
		}
		if (unk_0x1E80C02AC16B6622(iLocal_86))
		{
			if (unk_0xC3B073777B46C61A(uLocal_122))
			{
				unk_0x296CDA10C549A502(&uLocal_122);
			}
			func_59(&uLocal_195, 4);
			if (unk_0xCC580427ED36D7F8(iLocal_86, unk_0x77F050A399DB77ED(), 1) && unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
			{
				iLocal_159 = 2;
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(iLocal_85))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_85, iLocal_86, 1))
			{
				iLocal_159 = 2;
			}
		}
	}
	switch (iLocal_159)
	{
		case 0:
			if (!iLocal_168)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && !unk_0x1E80C02AC16B6622(iLocal_86))
				{
					if (!unk_0xB42592B9FFEB5EDE(iLocal_85, 0) && unk_0x9FA30238987B8B6F(iLocal_86))
					{
						if (!iLocal_169)
						{
							unk_0x2A6B9F9E71C479CF(&uLocal_89);
							unk_0xD0C8DD55C652567F(0, iLocal_86, -1, 2052, 2);
							unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x9A42ADE14351A508(0, iLocal_86, -1);
							unk_0x44642CB08FA1637E(uLocal_89);
							unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
							unk_0xAAD288E877AC833D(&uLocal_89);
							iLocal_169 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0x743E219F0C060EE5(iLocal_85, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_159 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_170)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 4))
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x1E80C02AC16B6622(iLocal_85))
					{
						unk_0xE2CB8488CFA42209(iLocal_85);
						unk_0x23E5F4496336DE4E(iLocal_85, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
						if (!unk_0x1E80C02AC16B6622(iLocal_86))
						{
							unk_0x4F9B6ED8FAC6333B(iLocal_86, 6, 0, 0);
							unk_0x23E5F4496336DE4E(iLocal_86, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_170 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					unk_0x4F9B6ED8FAC6333B(iLocal_85, 7, 0, 0);
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x1F2158D615BC4B25(iLocal_86))
				{
					unk_0xE2CB8488CFA42209(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0x8530DA8508D7A4B8(0);
					unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0xD0C8DD55C652567F(0, iLocal_86, -1, 2052, 4);
					unk_0xE3BCB930B62CBDE5(0, unk_0xAF99169F0F5AE41D(iLocal_86, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0x9A42ADE14351A508(0, iLocal_86, -1);
					unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x47435418FBCE0635(0, 1193033728, 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					unk_0x112CD899A3BEE719(iLocal_85, 1);
					unk_0x9526D9575C237F2F(iLocal_85, 0);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_168 = 1;
					iLocal_159 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					if (unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_159 = 0;
						}
					}
				}
			}
			else if (!unk_0x1E80C02AC16B6622(iLocal_86))
			{
				if (func_1(&uLocal_195, cLocal_178, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_159 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				if (func_1(&uLocal_195, cLocal_178, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_159 = 0;
				}
			}
			break;
	}
}

int func_58()
{
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_61()
{
	if (iLocal_60 == 3)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_85))
			{
				unk_0xD3778FD9E17F7E71(iLocal_85);
			}
			iLocal_59 = 8;
		}
	}
}

void func_62()
{
	if (unk_0xC3B073777B46C61A(uLocal_83))
	{
		unk_0x296CDA10C549A502(&uLocal_83);
	}
	if (unk_0xC3B073777B46C61A(uLocal_84))
	{
		unk_0x296CDA10C549A502(&uLocal_84);
	}
	if (iLocal_60 == 1)
	{
		unk_0xE24358A92698B60D(uLocal_177);
		unk_0xE0DB271DC0AEA972("TIMER_SCENE");
		if (!iLocal_124)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH1_TKA", 4, 0, 0, 0);
			unk_0xD8335B251D8364B4(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				func_82(func_8(), 1, 100, 0, 1);
				func_81(198, 0);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 8000, 2052, 4);
				unk_0x2A6B9F9E71C479CF(&uLocal_89);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
				unk_0x743E219F0C060EE5(0, 3000, 4194369);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 1000);
				unk_0xE3BCB930B62CBDE5(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xDBC8BE0B344ABCE0(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x44642CB08FA1637E(uLocal_89);
				unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
				unk_0xAAD288E877AC833D(&uLocal_89);
				unk_0x112CD899A3BEE719(iLocal_85, 1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_124 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x6E20845D23D3DFD4(0, 75, 1);
			unk_0x6E20845D23D3DFD4(0, 80, 1);
			unk_0x6E20845D23D3DFD4(0, 79, 1);
			unk_0x6E20845D23D3DFD4(0, 286, 1);
			unk_0x6E20845D23D3DFD4(0, 287, 1);
			unk_0x6E20845D23D3DFD4(0, 26, 1);
			unk_0x6E20845D23D3DFD4(0, 273, 1);
			unk_0x6E20845D23D3DFD4(0, 4, 1);
			unk_0x6E20845D23D3DFD4(0, 270, 1);
			unk_0x6E20845D23D3DFD4(0, 5, 1);
			unk_0x6E20845D23D3DFD4(0, 1, 1);
			unk_0x6E20845D23D3DFD4(0, 271, 1);
			unk_0x6E20845D23D3DFD4(0, 6, 1);
			unk_0x6E20845D23D3DFD4(0, 2, 1);
			unk_0x6E20845D23D3DFD4(0, 272, 1);
			unk_0x6E20845D23D3DFD4(0, 3, 1);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			unk_0x88890C87E37B149D(0);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_126)
			{
				if ((unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) && unk_0xB534814830510EB1() == 4) || (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0x4D56690F35D56781() == 4))
				{
					unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
					unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_126 = 1;
				}
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_85) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0xA427F05DB896EEBE(iLocal_85, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0xAB3098579170FA46(&iLocal_85);
				func_18();
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_124)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			if (!unk_0xCD7683F575A67B31(iLocal_85))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_89);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
				unk_0xCF5C1EDE3A2F58AC(0, 4500);
				unk_0x743E219F0C060EE5(0, 0, 4194369);
				unk_0xE3BCB930B62CBDE5(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x44642CB08FA1637E(uLocal_89);
				unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
				unk_0xAAD288E877AC833D(&uLocal_89);
				unk_0x112CD899A3BEE719(iLocal_85, 1);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
				unk_0xD3778FD9E17F7E71(iLocal_85);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				if (func_8() == 0)
				{
					func_66(9, 1, 0);
				}
				else if (func_8() == 1)
				{
					func_66(9, 1, 1);
				}
				else if (func_8() == 2)
				{
					func_66(9, 1, 2);
				}
				unk_0x4EDE34FBADD967A6(8000);
				func_18();
			}
		}
	}
	else if (iLocal_60 == 3)
	{
		if (unk_0x83666F9FB8FEBD4B() > 1000)
		{
			if (func_1(&uLocal_195, cLocal_178, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_86))
				{
					unk_0xFECEEF81E92F7897(iLocal_86, 1);
					if (!unk_0xC3B073777B46C61A(uLocal_121))
					{
						unk_0x296CDA10C549A502(&uLocal_121);
					}
					if (!unk_0xC3B073777B46C61A(uLocal_122))
					{
						uLocal_122 = func_63(iLocal_86, 1, 145);
					}
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, 17f, 1f, 1073741824, 0);
					unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_86, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					unk_0x112CD899A3BEE719(iLocal_86, 1);
					unk_0x9526D9575C237F2F(iLocal_86, 0);
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
					unk_0x72FAE653AFC04E97("rghBoyfriend", &iLocal_194);
					unk_0x054E434B0AECBDA6(iLocal_86, iLocal_194);
					unk_0x329C14474C072D19(4, joaat("COP"), iLocal_194);
					unk_0x329C14474C072D19(1, -183807561, iLocal_194);
					unk_0x329C14474C072D19(1, iLocal_194, -183807561);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_59 = 7;
				}
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_124)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_195, cLocal_178, "REHH5_THX", 4, 0, 0, 0);
			iLocal_124 = 1;
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			unk_0x2A6B9F9E71C479CF(&uLocal_89);
			unk_0x743E219F0C060EE5(0, 0, 4194369);
			unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 3000, 2052, 2);
			unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 3000);
			unk_0xE3BCB930B62CBDE5(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xE3BCB930B62CBDE5(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xE3BCB930B62CBDE5(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xE3BCB930B62CBDE5(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xE3BCB930B62CBDE5(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xE3BCB930B62CBDE5(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0xCF5C1EDE3A2F58AC(0, -1);
			unk_0x44642CB08FA1637E(uLocal_89);
			unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
			unk_0xAAD288E877AC833D(&uLocal_89);
			unk_0x112CD899A3BEE719(iLocal_85, 1);
			unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
			unk_0xD3778FD9E17F7E71(iLocal_85);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_18();
	}
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(uVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_65(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_65(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_65(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_80();
	}
	if (func_79(iParam2) == 4)
	{
	}
	bVar0 = Global_99250.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x4C779B19E6DDCDA2())
		{
			if (!func_77(func_78(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_77(func_78(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_99250.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_76(iParam0, 0);
			func_74(func_78(iParam0), func_79(iParam2), 1);
			iVar1 = unk_0xA3746E7F17F47DC2(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x573691DB812DC8AA(&(Global_2097152[func_73() /*10185*/].f_7698.f_674), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_98244.f_15[iParam0] = unk_0x3EAC9995EC220C5A();
		}
	}
	else if (bVar0)
	{
		func_67(func_78(iParam0), func_79(iParam2));
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_99250.f_32503[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_98244.f_4[iParam0] = (unk_0x3EAC9995EC220C5A() + iParam1);
	}
	else
	{
		Global_98244.f_4[iParam0] = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_98244.f_3 = (unk_0x3EAC9995EC220C5A() + iParam0);
	}
	else
	{
		Global_98244.f_3 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2440882[iVar0] = iParam0;
	}
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440882[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_72(int iParam0, var uParam1)
{
	if (Global_1315898)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315910) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_7();
		if (iParam1 == 4)
		{
			Global_99250.f_32503[iParam0 /*29*/].f_12[0] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_12[1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_12[2] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[0] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] == 1 && Global_99250.f_32503[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_99250.f_32503[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69317)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_99250.f_32503[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_75();
			}
		}
	}
}

void func_75()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x366B33759CCFE37B(&(Global_99250.f_32503[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x2B8B3581C4E63AD1("");
		StringCopy(&cVar16, unk_0x366B33759CCFE37B(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x366B33759CCFE37B("CELL_253");
		unk_0xEF85B88DC049EA23(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x2B8B3581C4E63AD1("CELL_255");
		unk_0x703D2B4B1C7E10B6(&(Global_2893[1 /*6*/]));
		unk_0xEF85B88DC049EA23(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xA5F70A8B83BDFA49(&Global_2283, 0);
}

void func_76(int iParam0, int iParam1)
{
	Global_99250.f_243[func_80() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_77(int iParam0, int iParam1)
{
	if (Global_99250.f_32503[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_80()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_44(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_81(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_99250.f_7231[iParam0] = 1;
	Global_99250.f_7231.f_236[iParam0] = (unk_0x3EAC9995EC220C5A() + iParam1);
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xBA16CA557222A92B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x5716C8F12991E399(iVar1, iVar0, 1);
	}
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_106();
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
					func_105(99, 1);
					func_104(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_104(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_104(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_90(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_89(5))
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
							func_104(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_104(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_104(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_104(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD8D50BE3C4300244())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_105(95, iParam3);
					break;
				
				case 1:
					func_105(97, iParam3);
					break;
				
				case 2:
					func_105(96, iParam3);
					break;
			}
			func_105(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
	}
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_104(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_104(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_104(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_85(iParam0);
	if (Global_35700 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)
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
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_73() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_73() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_87(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)
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

void func_88(int iParam0)
{
	func_105(93, iParam0);
	func_105(29, iParam0);
	func_105(30, iParam0);
}

bool func_89(int iParam0)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_73() /*10185*/].f_7698.f_10, iParam0);
}

int func_90(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_91(27, 1);
	return 1;
}

int func_91(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_92(iParam0, iParam1);
}

int func_92(int iParam0, int iParam1)
{
	if (func_13(14) && !func_103(iParam0))
	{
		return 0;
	}
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_102(&Global_2558981))
	{
		if (func_100(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_93(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_103(iParam1))
	{
		return 0;
	}
	if (func_100(uParam0, iParam1))
	{
		return 0;
	}
	if (func_99(uParam0) < 0f)
	{
		func_98(uParam0, 0);
	}
	func_96(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_94(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_103(iParam1))
	{
		return 0;
	}
	if (func_100(uParam0, iParam1))
	{
		return 0;
	}
	if (func_99(uParam0) < 0f)
	{
		func_98(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_95(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_95(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_96(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_97(uParam0, iVar0);
		iVar0++;
	}
	func_98(uParam0, (Global_2558980 - 0.5f));
}

void func_97(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_98(var uParam0, float fParam1)
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

float func_99(var uParam0)
{
	return uParam0->f_72;
}

bool func_100(var uParam0, int iParam1)
{
	return func_101(uParam0, iParam1) != -1;
}

int func_101(var uParam0, int iParam1)
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

bool func_102(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_103(int iParam0)
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

void func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_105(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_106()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

void func_107()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
		{
			if (!func_114())
			{
				if (unk_0x3E5CB294501B40E0(iLocal_85))
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
				}
				if (unk_0x49C650267EDFEBC6(iLocal_85, 1227113341) != 1 && unk_0x49C650267EDFEBC6(iLocal_85, 1227113341) != 0)
				{
					unk_0xAFB86418412C8866(iLocal_85, unk_0x77F050A399DB77ED(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
				{
					unk_0x743E219F0C060EE5(iLocal_85, 0, 0);
				}
				if (!iLocal_142)
				{
					func_109(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_60 == 1)
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 2)
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 3)
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_60 == 5)
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_142 = 1;
					}
				}
			}
			else
			{
				iLocal_142 = 0;
				if (unk_0x49C650267EDFEBC6(iLocal_85, 1227113341) == 1 && unk_0x49C650267EDFEBC6(iLocal_85, 1227113341) == 0)
				{
					unk_0xE2CB8488CFA42209(iLocal_85);
				}
			}
		}
		else if (!unk_0x3E5CB294501B40E0(iLocal_85))
		{
			unk_0x92D84E1899554EA4(iLocal_85, func_108());
			unk_0x86CD6F98059D0E25(iLocal_85, 1);
			unk_0xBD99B054E78B74CC(iLocal_85, 0);
		}
	}
}

var func_108()
{
	return unk_0x9E97D0ACA210D142(unk_0x7F3E348C0892D8D2());
}

void func_109(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_127)
		{
			if (func_113(&uLocal_195, cLocal_178, &Local_134, &Local_128, 8, 0, 0))
			{
				iLocal_127 = 0;
			}
		}
	}
	else if ((!iLocal_127 && unk_0x1066B6347C40B301()) && !func_111())
	{
		Local_134 = { func_110() };
		Local_128 = { func_60() };
		func_55();
		iLocal_127 = 1;
	}
}

struct<6> func_110()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_111()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_112("REHH1_VEH") || func_112("REHH2_VEH")) || func_112("REHH3_VEH")) || func_112("REHH4_VEH")) || func_112("REHH5_VEH")) || func_112("REHH1_VEH2")) || func_112("REHH2_VEH2")) || func_112("REHH3_VEH2")) || func_112("REHH4_VEH2")) || func_112("REHH5_VEH2")) || func_112("REHH1_WLK")) || func_112("REHH2_WLK")) || func_112("REHH3_WLK")) || func_112("REHH4_WLK")) || func_112("REHH5_WLK")) || func_112("REHH1_SLR")) || func_112("REHH4_SLR")) || func_112("REHH1_SLW")) || func_112("REHH2_SLW")) || func_112("REHH3_SLW")) || func_112("REHH4_SLW")) || func_112("REHH5_SLW")) || func_112("REHH1_OUT")) || func_112("REHH2_GETOUT")) || func_112("REHH3_GETOUT")) || func_112("REHH5_GETOUT")) || func_112("REHH1_JACK")) || func_112("REHH2_JACK")) || func_112("REHH3_JACK")) || func_112("REHH5_JACK")) || func_112("REHH1_GUN")) || func_112("REHH2_SHOOT")) || func_112("REHH3_SHOOT")) || func_112("REHH5_SHOO")) || func_112("REHH1_1HOUR")) || func_112("REHH2_1HOUR")) || func_112("REHH1_HHOUR")) || func_112("REHH2_HHOUR")) || func_112("REHH1_CRASH")) || func_112("REHH1_WAY")) || func_112("REHH2_NEAR")) || func_112("REHH3_NEAR")) || func_112("REHH5_NEAR")) || func_112("REHH2_CULT")) || func_112("REHH3_CULT")) || func_112("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_112(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_110()}, 4);
		if (unk_0x35D1CAD6ADAB6491(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_113(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_114()
{
	if (iLocal_60 == 5)
	{
		if (unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
		{
			if ((((!unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) && !unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) && !unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) && !unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED())) && !unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("rhino")))
			{
				if (unk_0x1205624841D11747(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()), 0))
		{
			if (((!unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115()
{
	if (unk_0x93B76A9A65E87CDF(unk_0x77F050A399DB77ED()))
	{
		if (!iLocal_150)
		{
			iLocal_152 = unk_0x3EAC9995EC220C5A();
			iLocal_150 = 1;
		}
		else
		{
			iLocal_154 = unk_0x3EAC9995EC220C5A();
		}
	}
	else
	{
		iLocal_154 = 0;
		iLocal_153 = 0;
		iLocal_150 = 0;
		iLocal_151 = 0;
	}
	if ((iLocal_154 - iLocal_152) > 3000 && (iLocal_154 - iLocal_153) > 6000)
	{
		if (!func_54())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_153 = iLocal_154;
		}
	}
	if ((iLocal_154 - iLocal_152) > 50000 && !iLocal_151)
	{
		func_109(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (!func_54())
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 2)
			{
				func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 3)
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					if (!unk_0xBA1F4275167B58F4(iLocal_85))
					{
						unk_0x5A499E160A1878DC(iLocal_85);
					}
				}
				func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_60 == 5)
			{
				func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_151 = 1;
		}
	}
	if ((iLocal_154 - iLocal_152) > 60000 && iLocal_151)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			unk_0xFECEEF81E92F7897(iLocal_85, 1);
			if (unk_0x3E5CB294501B40E0(iLocal_85))
			{
				if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
				{
					if (unk_0xA427F05DB896EEBE(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
					{
						unk_0xE3BCB930B62CBDE5(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						unk_0x47435418FBCE0635(iLocal_85, 1193033728, 0);
					}
					if (iLocal_60 == 1)
					{
						unk_0x23E5F4496336DE4E(iLocal_85, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
					}
					unk_0x112CD899A3BEE719(iLocal_85, 1);
					unk_0xD3778FD9E17F7E71(iLocal_85);
					func_53();
				}
			}
		}
	}
}

void func_116()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (unk_0xA73F3A974E4E7D9D(iLocal_85))
		{
			if (!iLocal_147)
			{
				iLocal_148 = unk_0x3EAC9995EC220C5A();
				iLocal_147 = 1;
			}
			else
			{
				iLocal_149 = unk_0x3EAC9995EC220C5A();
			}
		}
		else
		{
			iLocal_147 = 0;
		}
	}
	if ((iLocal_149 - iLocal_148) > 90000)
	{
		func_109(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			func_1(&uLocal_195, cLocal_178, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			unk_0xFECEEF81E92F7897(iLocal_85, 1);
			if (unk_0xA427F05DB896EEBE(iLocal_85, Local_93, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xE3BCB930B62CBDE5(iLocal_85, Local_93, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x47435418FBCE0635(iLocal_85, 1193033728, 0);
			}
			if (iLocal_60 == 1)
			{
				unk_0x23E5F4496336DE4E(iLocal_85, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
			}
			unk_0x112CD899A3BEE719(iLocal_85, 1);
			if (unk_0x3E5CB294501B40E0(iLocal_85))
			{
				unk_0xD3778FD9E17F7E71(iLocal_85);
			}
			func_53();
		}
	}
}

void func_117()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0xE5FADE1166052251(iLocal_85, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_121))
				{
					uLocal_121 = func_63(iLocal_85, 0, 145);
				}
				if (unk_0xC3B073777B46C61A(uLocal_83))
				{
					unk_0x296CDA10C549A502(&uLocal_83);
				}
			}
			else
			{
				if (!unk_0xC3B073777B46C61A(uLocal_83))
				{
					uLocal_83 = func_118(Local_93, 1);
				}
				if (unk_0xC3B073777B46C61A(uLocal_121))
				{
					unk_0x296CDA10C549A502(&uLocal_121);
				}
			}
		}
		else if (!unk_0xC3B073777B46C61A(uLocal_121))
		{
			uLocal_121 = func_63(iLocal_85, 0, 145);
		}
		if (((unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xB42592B9FFEB5EDE(iLocal_85, 0)) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_93, 50f, 50f, 50f, 0, 1, 0)) || unk_0xE335E4A7ECEE63F4(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0xC3B073777B46C61A(uLocal_83))
			{
				uLocal_83 = func_118(Local_93, 1);
			}
		}
		else if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_93, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xC3B073777B46C61A(uLocal_83))
			{
				unk_0x296CDA10C549A502(&uLocal_83);
			}
		}
	}
}

var func_118(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_65(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

void func_119()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if ((unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1) && unk_0xB42592B9FFEB5EDE(iLocal_85, 1)) || unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_85, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_121())
			{
				func_50(0);
				iLocal_125 = 0;
			}
		}
		else if (!unk_0xBA1F4275167B58F4(iLocal_85))
		{
			if (func_54() && !iLocal_125)
			{
				func_50(1);
				iLocal_125 = 1;
			}
		}
		if (unk_0xBA1F4275167B58F4(iLocal_85))
		{
			unk_0xEFAA9D201A9FD6C5(iLocal_85, 0);
		}
		if (func_120("REHH3_CHT3_7"))
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_85, 1, 1);
		}
		if (func_120("REHH3_CHT6_5"))
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_85, 0, 1);
		}
		if (func_120("REHH3_CHT8_3"))
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_85, 1, 1);
		}
		if ((func_112("REHH3_CHT8M") || func_112("REHH3_CHT8F")) || func_112("REHH3_CHT8T"))
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_85, 0, 1);
		}
	}
}

int func_120(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x35D1CAD6ADAB6491(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (iLocal_60 == 1)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 0) && unk_0xE5FADE1166052251(iLocal_85, unk_0xD8D1111EA0CFD1DB(), 0))
				{
					if (unk_0xA7C200C3B2989831(unk_0xD8D1111EA0CFD1DB()))
					{
						if (!func_112("REHH1_CRASH"))
						{
							func_109(0);
							func_48();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_195, cLocal_178, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_144)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 1) && unk_0xE5FADE1166052251(iLocal_85, unk_0xD8D1111EA0CFD1DB(), 0))
				{
					func_109(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 3)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								if (!unk_0xBA1F4275167B58F4(iLocal_85))
								{
									unk_0x5A499E160A1878DC(iLocal_85);
								}
							}
							func_1(&uLocal_195, cLocal_178, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_60 == 5)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_144 = 1;
					}
				}
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 0) && unk_0xE5FADE1166052251(iLocal_85, unk_0xD8D1111EA0CFD1DB(), 0))
			{
				iLocal_144 = 0;
			}
		}
		if (!iLocal_145)
		{
			if (unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()))
			{
				func_109(0);
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_145 = 1;
				}
			}
		}
		else if (!unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()))
		{
			iLocal_145 = 0;
		}
		if (!iLocal_146)
		{
			if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
			{
				func_109(0);
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_85))
						{
							if (!unk_0xBA1F4275167B58F4(iLocal_85))
							{
								unk_0x5A499E160A1878DC(iLocal_85);
							}
						}
						func_1(&uLocal_195, cLocal_178, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
					}
					iLocal_146 = 1;
				}
			}
		}
		else if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			iLocal_146 = 0;
		}
	}
}

void func_123()
{
	if (func_125(Local_93))
	{
		func_109(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (!unk_0xBA1F4275167B58F4(iLocal_85))
				{
					unk_0x5A499E160A1878DC(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_124())
	{
		func_109(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_60 == 1)
		{
		}
		else if (iLocal_60 == 2)
		{
			func_1(&uLocal_195, cLocal_178, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 3)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (!unk_0xBA1F4275167B58F4(iLocal_85))
				{
					unk_0x5A499E160A1878DC(iLocal_85);
				}
			}
			func_1(&uLocal_195, cLocal_178, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_60 == 5)
		{
			func_1(&uLocal_195, cLocal_178, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_124()
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0xA2490B3CE6382FBB(-1014.154f, 4881.411f, 245.0001f, unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), 0), 1) < 400f)
			{
				if (!Global_25354)
				{
					unk_0x3345CB85AB9EC035("AC_EN_ROUTE_CULT");
					Global_25354 = 1;
					if (!Global_25353)
					{
						Global_25353 = 1;
						return 1;
					}
				}
			}
			else if (Global_25354)
			{
				unk_0x3345CB85AB9EC035("AC_LEFT_AREA");
				Global_25354 = 0;
			}
		}
	}
	return 0;
}

int func_125(struct<3> Param0)
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_25352)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Param0) > (fLocal_47 + 200f) || unk_0xA2490B3CE6382FBB(-1014.154f, 4881.411f, 245.0001f, unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), 0), 1) < 400f)
			{
				Global_25352 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_126()
{
	if (!func_111())
	{
		func_109(1);
	}
	if (!func_54())
	{
		switch (iLocal_108)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A() + 2000;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				iLocal_108++;
				break;
			
			case 1:
				if (iLocal_110 < unk_0x3EAC9995EC220C5A())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_60 == 5)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_108++;
				}
				break;
			
			case 2:
				if (iLocal_110 < unk_0x3EAC9995EC220C5A())
				{
					if (iLocal_60 == 1)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 2)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_60 == 5)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							if (!bLocal_112)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_108++;
				}
				break;
			
			case 3:
				if (iLocal_60 == 1)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				else if (iLocal_60 == 2)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				else if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A() + 500;
				}
				else if (iLocal_60 == 5)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A();
				}
				iLocal_108++;
				break;
			
			case 4:
				if (iLocal_110 < unk_0x3EAC9995EC220C5A())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 3)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_108++;
					}
					else if (iLocal_60 == 5)
					{
						if (bLocal_112 && !bLocal_114)
						{
							if (func_8() == 0)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_8() == 1)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_8() == 2)
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_108++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_60 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 6:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 7:
				if (iLocal_60 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 8:
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 9:
				if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 10:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 11:
				if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 12:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 13:
				if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 14:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 15:
				if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 5)
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 16:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 17:
				if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A() + 700;
				}
				iLocal_108++;
				break;
			
			case 18:
				if (iLocal_60 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_195, cLocal_178, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_108++;
				break;
			
			case 19:
				if (iLocal_60 == 2)
				{
					func_1(&uLocal_195, cLocal_178, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_60 == 3)
				{
					func_1(&uLocal_195, cLocal_178, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_108++;
				break;
			
			case 20:
				if (iLocal_60 == 3)
				{
					iLocal_110 = unk_0x3EAC9995EC220C5A() + 300;
				}
				iLocal_108++;
				break;
			
			case 21:
				if (iLocal_110 < unk_0x3EAC9995EC220C5A())
				{
					if (iLocal_60 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_108++;
				}
				break;
			
			case 22:
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					unk_0x642DDF74A8A2B3BB(iLocal_85, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_108++;
				break;
			}
	}
}

void func_127()
{
	if (iLocal_60 != 3)
	{
		if (func_130())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_93, 3f, 3f, 2f, 1, 1, 0) && unk_0xA427F05DB896EEBE(iLocal_85, Local_93, Global_19, 0, 1, 0))
				{
					if (func_129(1, 0, 1))
					{
						func_128();
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), (10.5f + 2f), 3, 0);
						}
						unk_0x5A499E160A1878DC(iLocal_85);
						iLocal_59 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_112)
	{
		if (unk_0x1E80C02AC16B6622(iLocal_86))
		{
			iLocal_59 = 7;
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (unk_0xA427F05DB896EEBE(iLocal_85, 824.8886f, 1275.671f, 359.4312f, Global_19, 1, 1, 0) && unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_195, cLocal_178, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && !unk_0x1E80C02AC16B6622(iLocal_86))
				{
					if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
					{
						unk_0x5A499E160A1878DC(iLocal_85);
						unk_0x2A6B9F9E71C479CF(&uLocal_89);
						unk_0x8530DA8508D7A4B8(0);
						unk_0xD0C8DD55C652567F(0, iLocal_86, -1, 2052, 4);
						unk_0x743E219F0C060EE5(0, 500, 0);
						unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, 5f, 1f, 1073741824, 0);
						unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0x9A42ADE14351A508(0, iLocal_86, -1);
						unk_0x44642CB08FA1637E(uLocal_89);
						unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
						unk_0xAAD288E877AC833D(&uLocal_89);
					}
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
					{
						unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), (10.5f + 2f), 2, 0);
					}
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_59 = 6;
			}
		}
	}
}

void func_128()
{
	Global_14578 = 0;
	func_16();
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xACF19F629EE5429B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (bParam0)
		{
			if (unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x8ED30F31356C7C7C(iVar0) < 0.95f || unk_0x8ED30F31356C7C7C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

int func_130()
{
	if (unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xBF0744BF24FE8D11(iLocal_85, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_93, 50f, 50f, 50f, 0, 1, 0) && !unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (!unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	if (bLocal_114)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_86))
		{
			if ((((unk_0x1E80C02AC16B6622(iLocal_86) || !unk_0x0C8E94332AE582B1(iLocal_86, unk_0x77F050A399DB77ED(), 150f, 150f, 150f, 0, 1, 0)) || unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_93) < 250f) || unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_97) < 250f) || iLocal_116)
			{
				if (unk_0xC3B073777B46C61A(uLocal_122))
				{
					unk_0x296CDA10C549A502(&uLocal_122);
				}
				if (unk_0xC3B073777B46C61A(uLocal_123))
				{
					unk_0x296CDA10C549A502(&uLocal_123);
				}
				if (!unk_0x1E80C02AC16B6622(iLocal_86))
				{
					unk_0x4F9B6ED8FAC6333B(iLocal_86, 6, 0, 0);
					unk_0x23E5F4496336DE4E(iLocal_86, unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
					unk_0xA29D53AF339F4CD0(&iLocal_86);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_195, cLocal_178, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0xA29D53AF339F4CD0(&iLocal_86);
				if (unk_0x1F2158D615BC4B25(iLocal_171))
				{
					unk_0xB84D4C251623B60C(&iLocal_171);
				}
				bLocal_114 = false;
			}
			else
			{
				if (!iLocal_117)
				{
					if (!func_54())
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_195, cLocal_178, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_117 = 1;
					}
				}
				if (!unk_0x1E80C02AC16B6622(iLocal_86))
				{
					func_139(&iLocal_86, &uLocal_122, &iLocal_171, &uLocal_123);
					func_138(&iLocal_86, &uLocal_122, &iLocal_171, &uLocal_123);
					func_132(iLocal_171, unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), &uLocal_185, &uLocal_188, &Local_190, &uLocal_189, &uLocal_193, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x0C8E94332AE582B1(iLocal_86, unk_0x77F050A399DB77ED(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_109 < unk_0x3EAC9995EC220C5A())
						{
							if (!func_54())
							{
								if (func_58())
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_109 = unk_0x3EAC9995EC220C5A() + 8000;
							}
						}
						if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
						{
							if (!func_112("REHH5_SHO"))
							{
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_195, cLocal_178, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) && !unk_0x1E80C02AC16B6622(iLocal_86))
						{
							if ((unk_0xA73F3A974E4E7D9D(iLocal_86) && unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 4)) && unk_0xA35DF80DCE8538ED(unk_0x8ACD527A7E574590()))
							{
								iLocal_116 = 1;
							}
						}
					}
					if (!iLocal_115 && !unk_0x1E80C02AC16B6622(iLocal_86))
					{
						if (unk_0x93B76A9A65E87CDF(unk_0x77F050A399DB77ED()) && unk_0x0C8E94332AE582B1(iLocal_86, unk_0x77F050A399DB77ED(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xFBE25F0677076CF9(iLocal_86, unk_0x77F050A399DB77ED(), 0, 16);
							func_48();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_195, cLocal_178, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_115 = 1;
						}
					}
				}
			}
		}
	}
}

void func_132(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x1F2158D615BC4B25(iParam0) && unk_0x968EA16107097324(iParam0, 0))
	{
		if (((((((unk_0x1F2158D615BC4B25(iParam1) && iParam0 != iParam1) && !unk_0xD3FAF4AD23FDF2DA(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(iParam1))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(iParam1))) && unk_0x2D081DEC13E78241(iParam1)) && func_137(iParam0))
		{
			if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0xB91BD3EFC17D9612(*uParam2, *uParam3, Param7) };
				*uParam3 = func_136(unk_0xAF99169F0F5AE41D(iParam0, 1), unk_0xAF99169F0F5AE41D(iParam1, 1));
				func_135(iParam1, uParam4, uParam5);
			}
			if (!unk_0x3D8234BA64B54520(iParam0))
			{
				*uParam6 = unk_0x3EAC9995EC220C5A();
			}
			else if ((unk_0x3EAC9995EC220C5A() - *uParam6) > iParam10)
			{
				if (func_134(iParam0, iParam1, 1) > fParam11 && unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_133(*uParam2))
					{
						if (!unk_0xDEB29D8C0ACA57B9(*uParam2, 3f))
						{
							unk_0xD1C12864812BFA0A(*uParam2, 1.5f, 0);
							unk_0x3B97B8A2AAD89A9D(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0x0B5F372F57E469AC(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x2DA164E80FDEE7F2(iParam0, *uParam3);
							unk_0xC1D3820702043A43(iParam0);
							unk_0x6BD950A4FEA6D505(iParam0, 10f);
							unk_0xB99FFA77B01C4714(iParam0, 1, 1, 0);
							*uParam6 = unk_0x3EAC9995EC220C5A();
						}
						else
						{
							Var0 = { unk_0xB91BD3EFC17D9612(Local_190, uLocal_189, Param7) };
							if (!func_133(Var0))
							{
								if (!unk_0xDEB29D8C0ACA57B9(Var0, 2f))
								{
									unk_0xD1C12864812BFA0A(Var0, 1.5f, 0);
									unk_0x3B97B8A2AAD89A9D(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0x0B5F372F57E469AC(iParam0, Var0, 1, 0, 0, 1);
									unk_0x2DA164E80FDEE7F2(iParam0, uLocal_189);
									unk_0xC1D3820702043A43(iParam0);
									unk_0x6BD950A4FEA6D505(iParam0, 10f);
									unk_0xB99FFA77B01C4714(iParam0, 1, 1, 0);
									*uParam6 = unk_0x3EAC9995EC220C5A();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x3EAC9995EC220C5A();
		}
	}
}

int func_133(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_134(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

void func_135(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			*uParam1 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
			*uParam2 = unk_0x7578EBD2DA3F8DD2(iParam0);
		}
	}
}

var func_136(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xA4F14A9B0DDEB91E((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (!unk_0x9A2BADF8B8CE0E2A(iParam0, -1))
			{
				iVar0 = unk_0x07A8845F7F106A38(iParam0, -1);
				if (unk_0x1F2158D615BC4B25(iVar0))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_138(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x1F2158D615BC4B25(*iParam2))
	{
		if (unk_0x968EA16107097324(*iParam2, 0))
		{
			if (!unk_0x1E80C02AC16B6622(*iParam0))
			{
				if (unk_0xE5FADE1166052251(*iParam0, *iParam2, 0))
				{
					if (unk_0xC3B073777B46C61A(*uParam1))
					{
						unk_0x296CDA10C549A502(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xC3B073777B46C61A(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0xC3B073777B46C61A(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_118(unk_0xAF99169F0F5AE41D(*iParam2, 1), 0);
					unk_0x80553402FCEB9A9C(*uParam3, 1);
					unk_0x18EA864BF4963320(*uParam3, 9);
					unk_0x45C91EE3FC674072(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0xAF014E234F6ECC62(*uParam3) };
				Var4 = { unk_0xAF99169F0F5AE41D(*iParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0x15751CDFDEEBDEA2(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x296CDA10C549A502(uParam3);
				}
			}
		}
		else
		{
			if (unk_0xC3B073777B46C61A(*uParam3))
			{
				unk_0x296CDA10C549A502(uParam3);
			}
			if (!unk_0x1E80C02AC16B6622(*iParam0))
			{
				if (!unk_0xC3B073777B46C61A(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_139(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(*iParam0))
	{
		if (unk_0x1E80C02AC16B6622(*iParam0))
		{
			if (unk_0xC3B073777B46C61A(*uParam1))
			{
				unk_0x296CDA10C549A502(uParam1);
			}
			unk_0xA29D53AF339F4CD0(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xB42592B9FFEB5EDE(*iParam0, 0))
			{
			}
			else if (unk_0x1F2158D615BC4B25(*iParam2))
			{
				if (unk_0x968EA16107097324(*iParam2, 0))
				{
					if (unk_0xE5FADE1166052251(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x1F2158D615BC4B25(*iParam2))
	{
		if (unk_0x968EA16107097324(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0xAB08E0AE50DC39E0(*iParam2);
				unk_0xF290DF09A88A384C(*iParam2);
				unk_0x41DB6F5436D4B4A9(*iParam2, 0);
				unk_0xB84D4C251623B60C(iParam2);
				if (unk_0xC3B073777B46C61A(*uParam3))
				{
					unk_0x296CDA10C549A502(uParam3);
				}
			}
		}
		else
		{
			unk_0xAB08E0AE50DC39E0(*iParam2);
			unk_0xF290DF09A88A384C(*iParam2);
			unk_0x41DB6F5436D4B4A9(*iParam2, 0);
			unk_0xB84D4C251623B60C(iParam2);
			if (unk_0xC3B073777B46C61A(*uParam3))
			{
				unk_0x296CDA10C549A502(uParam3);
			}
		}
	}
}

void func_140()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_86))
	{
		if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || unk_0xCA55F1A0D9ADE3AD(iLocal_86, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (unk_0x38A4F2561FF18769(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x38A4F2561FF18769(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x38A4F2561FF18769(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x38A4F2561FF18769(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_141()
{
	if (!bLocal_112)
	{
		if (iLocal_60 == 3)
		{
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_104, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xC60576ADD1AECA45(iLocal_101);
				unk_0xD8684F03DA130C7B("move_m@brave");
				if (unk_0x4A4B6FD54C499B7D(iLocal_101) && unk_0x738A9699E2BC26EE("move_m@brave"))
				{
					iLocal_86 = unk_0x6665DCC708A346F3(26, iLocal_101, Local_104, fLocal_107, 1, 1);
					unk_0x5F2AACB0122E1554(iLocal_86, 0, 2, 1, 0);
					unk_0x5F2AACB0122E1554(iLocal_86, 3, 0, 2, 0);
					unk_0x9526D9575C237F2F(iLocal_86, 1);
					unk_0x1706625EBCDDEBF9(iLocal_86, 42, 1);
					unk_0x4A29416FFEE91351(iLocal_86, 1);
					unk_0xD4EF45E71ECCA8CA(iLocal_86, "move_m@brave", 1048576000);
					unk_0x1706625EBCDDEBF9(iLocal_86, 137, 1);
					func_145(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
					unk_0x642DDF74A8A2B3BB(iLocal_86, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0xD0C8DD55C652567F(iLocal_86, unk_0x77F050A399DB77ED(), -1, 2052, 4);
					unk_0xFB4F6722A032A0F0(iLocal_101);
					bLocal_112 = true;
				}
			}
		}
		else if (iLocal_60 == 5)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_79, 1) > 320f && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (unk_0xE5FADE1166052251(iLocal_85, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
					{
						if (unk_0xEBCB31D6E4BC1DCC(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xA3746E7F17F47DC2(2, 5), &Local_66, 1, 1077936128, 0))
						{
							if (!unk_0xDEB29D8C0ACA57B9(Local_66, 7f) && unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_66) < 110f)
							{
								unk_0xC60576ADD1AECA45(iLocal_101);
								if (unk_0x4A4B6FD54C499B7D(iLocal_101))
								{
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									if (func_144(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x1E80C02AC16B6622(iLocal_85))
									{
										iLocal_171 = unk_0x2EEA15C0C12C8CDE(iLocal_102, Local_66, func_142(Local_66, func_143(unk_0x8ACD527A7E574590()), 1), 1, 1);
										unk_0xEDB159E56B64D182(iLocal_171, 134, 134);
										unk_0x654DBE320E71D523(iLocal_171, 0f);
										iLocal_86 = unk_0x73B8FD017061F240(iLocal_171, 26, iLocal_101, -1, 1, 1);
										unk_0x5F2AACB0122E1554(iLocal_86, 0, 1, 1, 0);
										unk_0x5F2AACB0122E1554(iLocal_86, 2, 1, 0, 0);
										unk_0x1706625EBCDDEBF9(iLocal_86, 42, 1);
										unk_0xFECEEF81E92F7897(iLocal_86, 1);
										func_145(&uLocal_195, 4, iLocal_86, sLocal_180, 0, 1);
										unk_0xC1D3820702043A43(iLocal_171);
										unk_0x277D239A78FD3309(iLocal_86, iLocal_171, iLocal_85, 6, 60f, 786468, -1f, -1f, 1);
										unk_0xFBE25F0677076CF9(iLocal_86, unk_0x77F050A399DB77ED(), 0, 16);
										unk_0x112CD899A3BEE719(iLocal_86, 1);
										unk_0xFB4F6722A032A0F0(iLocal_101);
										unk_0xFB4F6722A032A0F0(iLocal_102);
										unk_0x6BD950A4FEA6D505(iLocal_171, (unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) + 15f));
										if (unk_0xC3B073777B46C61A(uLocal_83))
										{
											unk_0x296CDA10C549A502(&uLocal_83);
										}
										func_55();
										while (func_54())
										{
											unk_0x4EDE34FBADD967A6(0);
										}
										func_113(&uLocal_195, cLocal_178, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_114 = true;
										bLocal_112 = true;
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

float func_142(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x14716E83ED712140(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_143(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

int func_144(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_145(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_146()
{
	if (!iLocal_176 && !func_54())
	{
		if (iLocal_174 == 6 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 6 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 7 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 8 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 9 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 10 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 11 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 12 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 13 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 14 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 15 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 16 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 17 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 18 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 19 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 20 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 21 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 22 && iLocal_173 == 30)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
		if (iLocal_174 == 23 && iLocal_173 == 0)
		{
			if (iLocal_60 == 1)
			{
				func_1(&uLocal_195, cLocal_178, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_176 = 1;
		}
	}
}

void func_147()
{
	iLocal_155 = func_152(func_153()) * 1000;
	iLocal_155 = (iLocal_155 + func_151(func_153()) * 1000 * 60);
	if (!iLocal_164)
	{
		if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
		{
			func_148((((iLocal_174 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_173 * 1000 - func_152(func_153()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_148(((iLocal_174 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_173 * 1000 - func_152(func_153()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_174 >= 24 && iLocal_155 < 150000) || (iLocal_174 >= 24 && iLocal_155 < 150000))
	{
		func_148((((iLocal_174 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_173 * 1000 - func_152(func_153()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_148(((iLocal_174 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_173 * 1000 - func_152(func_153()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0);
	}
	if ((iLocal_174 == func_151(func_153()) + 1 && iLocal_173 == func_152(func_153())) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_151(func_153()) + 25) && iLocal_173 == func_152(func_153())))
	{
		if (!iLocal_163)
		{
			if (!func_112("REHH1_1HOUR") && !func_112("REHH4_1HOUR"))
			{
				func_109(0);
			}
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			if (!func_54())
			{
				if (iLocal_60 == 1)
				{
					func_1(&uLocal_195, cLocal_178, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_163 = 1;
			}
		}
	}
	if (iLocal_173 == 30)
	{
		if ((iLocal_174 == func_151(func_153()) && iLocal_173 == func_152(func_153()) + 30) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_151(func_153()) + 24) && iLocal_173 == func_152(func_153()) + 30))
		{
			if (!iLocal_164)
			{
				if (!func_112("REHH1_HHOUR") && !func_112("REHH4_HHOUR"))
				{
					func_109(0);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					uLocal_177 = unk_0xBE8BBC6340F2B731();
					unk_0xBBEB613A917D7EE8(uLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0xDB8724F8CA3DA851(iLocal_177, "countdown_fadein", 35f);
					unk_0xCAEDD1A8E831AD36("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_151(func_153()) && iLocal_173 == func_152(func_153()) + 5) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_151(func_153()) + 24) && iLocal_173 == func_152(func_153()) + 5))
		{
			if (!iLocal_166)
			{
				unk_0xDB8724F8CA3DA851(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_173 == 0)
	{
		if ((iLocal_174 == func_151(func_153()) + 1 && iLocal_173 == (func_152(func_153()) - 30)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_151(func_153()) + 25) && iLocal_173 == (func_152(func_153()) - 30)))
		{
			if (!iLocal_164)
			{
				if (!func_112("REHH1_HHOUR") && !func_112("REHH4_HHOUR"))
				{
					func_109(0);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_60 == 1)
					{
						func_1(&uLocal_195, cLocal_178, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_164 = 1;
				}
				if (!iLocal_165)
				{
					iLocal_177 = unk_0xBE8BBC6340F2B731();
					unk_0xBBEB613A917D7EE8(iLocal_177, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0xDB8724F8CA3DA851(iLocal_177, "countdown_fadein", 35f);
					unk_0xCAEDD1A8E831AD36("TIMER_SCENE");
					iLocal_165 = 1;
				}
			}
		}
		if ((iLocal_174 == func_151(func_153()) + 1 && iLocal_173 == (func_152(func_153()) - 55)) || (((iLocal_174 >= 24 && iLocal_155 < 150000) && iLocal_174 == func_151(func_153()) + 25) && iLocal_173 == (func_152(func_153()) - 55)))
		{
			if (!iLocal_166)
			{
				unk_0xDB8724F8CA3DA851(iLocal_177, "countdown_fast", 1f);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_174 >= 24 && iLocal_155 < 150000)
	{
		if (iLocal_174 == func_151(func_153()) + 24 && iLocal_173 == func_152(func_153()))
		{
			bLocal_175 = true;
		}
	}
	else if (iLocal_174 == func_151(func_153()) && iLocal_173 == func_152(func_153()))
	{
		bLocal_175 = true;
	}
	if (bLocal_175)
	{
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		unk_0xE24358A92698B60D(iLocal_177);
		unk_0xE0DB271DC0AEA972("TIMER_SCENE");
		if (iLocal_60 == 1)
		{
			func_1(&uLocal_195, cLocal_178, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_85))
		{
			if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
			{
				unk_0x29666BB73419DB0E(unk_0xF8D66A34AF0C53A5(iLocal_85, 0), (10.5f + 2f), 2, 0);
				unk_0x743E219F0C060EE5(iLocal_85, 1, 0);
				unk_0xD3778FD9E17F7E71(iLocal_85);
				if (unk_0xC3B073777B46C61A(uLocal_83))
				{
					unk_0x296CDA10C549A502(&uLocal_83);
				}
			}
		}
		iLocal_59 = 9;
	}
}

void func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_150(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339928.f_1 = 1;
		func_149(7, iVar0);
		Global_1339928.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339928.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339928.f_3988.f_172[iVar0] = iParam2;
		Global_1339928.f_3988.f_216[iVar0] = iParam3;
		Global_1339928.f_3988.f_183[iVar0] = iParam4;
		Global_1339928.f_3988.f_194[iVar0] = iParam5;
		Global_1339928.f_3988.f_249[iVar0] = iParam6;
		Global_1339928.f_3988.f_260[iVar0] = iParam7;
		Global_1339928.f_3988.f_205[iVar0] = iParam8;
		Global_1339928.f_3988.f_314[iVar0] = iParam9;
		Global_1339928.f_3988.f_325[iVar0] = iParam10;
		Global_1339928.f_3988.f_357[iVar0] = iParam11;
		Global_1339928.f_3988.f_238[iVar0] = iParam12;
		Global_1339928.f_3988.f_271[iVar0] = iParam13;
		Global_1339928.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_149(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_1339928.f_4594[iParam0]), iParam1);
}

bool func_150(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1339928.f_4594[iParam0], iParam1);
}

int func_151(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_152(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_153()
{
	var uVar0;
	
	func_163(&uVar0, unk_0x624CC88A8815545E());
	func_162(&uVar0, unk_0xD3D98375D5CA69E4());
	func_161(&uVar0, unk_0x5C5157A539753532());
	func_156(&uVar0, unk_0xCB12BC5A618B995B());
	func_155(&uVar0, unk_0x9746D90F14C930B9());
	func_154(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
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

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_160(*uParam0);
	iVar1 = func_158(*uParam0);
	if (iParam1 < 1 || iParam1 > func_157(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_159(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_159(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_160(int iParam0)
{
	return iParam0 & 15;
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_164()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (unk_0x968EA16107097324(unk_0xD8D1111EA0CFD1DB(), 0))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 0) && unk_0xE5FADE1166052251(iLocal_85, unk_0xD8D1111EA0CFD1DB(), 0))
			{
				if (unk_0xC3B073777B46C61A(uLocal_121))
				{
					unk_0x296CDA10C549A502(&uLocal_121);
				}
				if (!unk_0x3E5CB294501B40E0(iLocal_85))
				{
					unk_0x92D84E1899554EA4(iLocal_85, func_108());
					unk_0x86CD6F98059D0E25(iLocal_85, 1);
					unk_0xBD99B054E78B74CC(iLocal_85, 0);
				}
				if (!unk_0xC3B073777B46C61A(uLocal_83))
				{
					uLocal_83 = func_118(Local_93, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_60 != 1) && iLocal_60 != 4)
				{
					if (!unk_0xC3B073777B46C61A(uLocal_84))
					{
						uLocal_84 = func_118(Local_97, 0);
						unk_0x06E25D9668199664(uLocal_84, 269);
						func_165();
					}
				}
				if (iLocal_60 == 1)
				{
					if (!func_54())
					{
						if (iLocal_60 == 1)
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_174 = func_151(func_153()) + 2;
						if (func_152(func_153()) >= 30)
						{
							iLocal_173 = 0;
							iLocal_174++;
						}
						else
						{
							iLocal_173 = 30;
						}
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 2)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 3)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
				else if (iLocal_60 == 5)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_111 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_59 = 4;
					}
				}
			}
		}
	}
}

void func_165()
{
	if (func_8() == 2)
	{
		if (!Global_25351)
		{
			func_166("CULT_BLIP_HELP", -1);
			Global_25351 = 1;
		}
	}
}

void func_166(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

void func_167()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (iLocal_110 < unk_0x3EAC9995EC220C5A())
				{
					func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0);
					iLocal_110 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6500));
				}
				if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 24f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0x2A6B9F9E71C479CF(&uLocal_89);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
						unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fLocal_184, 2f, 1073741824, 0);
						unk_0x44642CB08FA1637E(uLocal_89);
						unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
						unk_0xAAD288E877AC833D(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 12f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
				{
					fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fLocal_184, 2f, 1073741824, 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0xC3B073777B46C61A(uLocal_121))
			{
				unk_0x9555F96101785581(uLocal_121, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 25f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
						{
							if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 150f))
							{
								unk_0x5A499E160A1878DC(iLocal_85);
								unk_0x2A6B9F9E71C479CF(&uLocal_89);
								unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 4);
								if (unk_0x9A2BADF8B8CE0E2A(iLocal_87, 0))
								{
									unk_0xAE0D04DE66CC02F6(0, iLocal_87, -1, 0, 2f);
								}
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								unk_0x44642CB08FA1637E(uLocal_89);
								unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
								unk_0xAAD288E877AC833D(&uLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x968EA16107097324(iLocal_87, 0))
				{
					if (func_134(iLocal_85, iLocal_87, 1) < 25f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH5_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 25f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH5_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 25f)
				{
					if (func_114())
					{
						if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							if (unk_0x9A2BADF8B8CE0E2A(unk_0xD8D1111EA0CFD1DB(), 0))
							{
								unk_0x92D84E1899554EA4(iLocal_85, func_108());
								unk_0x86CD6F98059D0E25(iLocal_85, 1);
								unk_0xBD99B054E78B74CC(iLocal_85, 0);
								unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
								unk_0xFC7C68B6C728CFEC(iLocal_85, unk_0xD8D1111EA0CFD1DB(), -1, 0, 2f, 1, 0);
								func_168();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0x07A8845F7F106A38(unk_0xD8D1111EA0CFD1DB(), 0);
								if (unk_0x1E80C02AC16B6622(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0xE2CB8488CFA42209(iLocal_85);
									unk_0x92D84E1899554EA4(iLocal_85, func_108());
									unk_0x86CD6F98059D0E25(iLocal_85, 1);
									unk_0xBD99B054E78B74CC(iLocal_85, 1);
									unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_54())
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (func_114())
				{
					if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
					{
						unk_0x8530DA8508D7A4B8(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_168()
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_25349 = 1;
		}
	}
}

float func_169(int iParam0, int iParam1)
{
	return func_134(iParam0, iParam1, 1);
}

void func_170()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 12f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0x5A499E160A1878DC(iLocal_85);
						unk_0x2A6B9F9E71C479CF(&uLocal_89);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
						unk_0xC790731AAEC479BF(0, unk_0x77F050A399DB77ED(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x44642CB08FA1637E(uLocal_89);
						unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
						unk_0xAAD288E877AC833D(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 8f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
				{
					fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fLocal_184, 1f, 1073741824, 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0xC3B073777B46C61A(uLocal_121))
			{
				unk_0x9555F96101785581(uLocal_121, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 10f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
						{
							if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 150f))
							{
								unk_0x5A499E160A1878DC(iLocal_85);
								unk_0x2A6B9F9E71C479CF(&uLocal_89);
								unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 4);
								if (unk_0x9A2BADF8B8CE0E2A(iLocal_87, 0))
								{
									unk_0xAE0D04DE66CC02F6(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								unk_0x44642CB08FA1637E(uLocal_89);
								unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
								unk_0xAAD288E877AC833D(&uLocal_89);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x968EA16107097324(iLocal_87, 0))
				{
					if (func_134(iLocal_85, iLocal_87, 1) < 13f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH3_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB2C4D90B868C2250(iLocal_85))
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH3_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
				{
					if (func_114())
					{
						if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
						{
							if (unk_0x9A2BADF8B8CE0E2A(unk_0xD8D1111EA0CFD1DB(), 0))
							{
								unk_0x92D84E1899554EA4(iLocal_85, func_108());
								unk_0x86CD6F98059D0E25(iLocal_85, 1);
								unk_0xBD99B054E78B74CC(iLocal_85, 0);
								unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
								unk_0xFC7C68B6C728CFEC(iLocal_85, unk_0xD8D1111EA0CFD1DB(), -1, 0, 1f, 1, 0);
								func_168();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0x07A8845F7F106A38(unk_0xD8D1111EA0CFD1DB(), 0);
								if (unk_0x1E80C02AC16B6622(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0xE2CB8488CFA42209(iLocal_85);
									unk_0x92D84E1899554EA4(iLocal_85, func_108());
									unk_0x86CD6F98059D0E25(iLocal_85, 1);
									unk_0xBD99B054E78B74CC(iLocal_85, 1);
									unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_54())
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (func_114())
				{
					unk_0x7D4AFA4D63039901(iLocal_85, 1f);
					if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
					{
						unk_0x8530DA8508D7A4B8(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140 = 4;
				}
			}
			break;
	}
}

void func_171()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 12f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
						if (fLocal_184 > 5f)
						{
							fLocal_184 = (fLocal_184 - 1f);
						}
						else
						{
							fLocal_184 = (fLocal_184 - 0.5f);
						}
						unk_0x2A6B9F9E71C479CF(&uLocal_89);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
						unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fLocal_184, 1f, 1073741824, 0);
						unk_0x44642CB08FA1637E(uLocal_89);
						unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
						unk_0xAAD288E877AC833D(&uLocal_89);
						iLocal_140++;
					}
				}
				else if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 8f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
				{
					fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
					fLocal_184 = (fLocal_184 - 0.25f);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fLocal_184, 1f, 1073741824, 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140++;
				}
			}
			break;
		
		case 1:
			if (unk_0xC3B073777B46C61A(uLocal_121))
			{
				unk_0x9555F96101785581(uLocal_121, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 10f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
						{
							if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 150f))
							{
								unk_0x5A499E160A1878DC(iLocal_85);
								unk_0x2A6B9F9E71C479CF(&uLocal_89);
								unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
								if (unk_0x9A2BADF8B8CE0E2A(iLocal_87, 0))
								{
									unk_0xAE0D04DE66CC02F6(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
								unk_0x44642CB08FA1637E(uLocal_89);
								unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
								unk_0xAAD288E877AC833D(&uLocal_89);
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_140++;
							}
						}
					}
				}
				else if (!iLocal_141)
				{
					unk_0xE2CB8488CFA42209(iLocal_85);
					unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 7000, 2052, 2);
					if (func_1(&uLocal_195, cLocal_178, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x968EA16107097324(iLocal_87, 0))
				{
					if (func_134(iLocal_85, iLocal_87, 1) < 13f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								if (func_1(&uLocal_195, cLocal_178, "REHH2_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB2C4D90B868C2250(iLocal_85))
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x968EA16107097324(iLocal_87, 0))
					{
						if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_195, cLocal_178, "REHH2_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_140++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
				{
					if (func_114())
					{
						iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
						if (unk_0x968EA16107097324(iLocal_87, 0))
						{
							if (unk_0x9A2BADF8B8CE0E2A(unk_0xD8D1111EA0CFD1DB(), 0))
							{
								unk_0x92D84E1899554EA4(iLocal_85, func_108());
								unk_0x86CD6F98059D0E25(iLocal_85, 1);
								unk_0xBD99B054E78B74CC(iLocal_85, 0);
								unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
								unk_0xFC7C68B6C728CFEC(iLocal_85, unk_0xD8D1111EA0CFD1DB(), -1, 0, 1f, 1, 0);
								func_168();
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0x07A8845F7F106A38(unk_0xD8D1111EA0CFD1DB(), 0);
								if (unk_0x1E80C02AC16B6622(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0xE2CB8488CFA42209(iLocal_85);
									unk_0x92D84E1899554EA4(iLocal_85, func_108());
									unk_0x86CD6F98059D0E25(iLocal_85, 1);
									unk_0xBD99B054E78B74CC(iLocal_85, 1);
									unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
					}
					else if (!iLocal_142)
					{
						if (!func_54())
						{
							if (!func_174())
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_195, cLocal_178, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_142 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (!iLocal_103)
				{
					if (unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_54())
						{
							if (func_1(&uLocal_195, cLocal_178, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_103 = 1;
							}
						}
					}
				}
				if (func_114())
				{
					unk_0x7D4AFA4D63039901(iLocal_85, 1f);
					if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
					{
						unk_0x8530DA8508D7A4B8(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140 = 4;
				}
				if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_172()
{
	int iVar0;
	
	switch (iLocal_140)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 12f || (unk_0x350800CC91A8701C(unk_0x8ACD527A7E574590()) && func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 30f))
				{
					unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), iLocal_85, 5000, 2052, 2);
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
						if (unk_0x968EA16107097324(iLocal_87, 0))
						{
							unk_0x2A6B9F9E71C479CF(&uLocal_89);
							unk_0xD0C8DD55C652567F(0, iLocal_87, 30000, 2054, 2);
							unk_0x642DDF74A8A2B3BB(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x44642CB08FA1637E(uLocal_89);
							unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
							unk_0xAAD288E877AC833D(&uLocal_89);
						}
						iLocal_140++;
					}
					else if (!iLocal_141)
					{
						unk_0xE2CB8488CFA42209(iLocal_85);
						unk_0x2A6B9F9E71C479CF(&uLocal_89);
						unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2054, 2);
						unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
						unk_0x44642CB08FA1637E(uLocal_89);
						unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
						unk_0xAAD288E877AC833D(&uLocal_89);
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xC3B073777B46C61A(uLocal_121))
			{
				unk_0x9555F96101785581(uLocal_121, 1);
			}
			if (func_114())
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
					if (unk_0x2AA05370067DC5AC(iLocal_87) < 10f)
					{
						if (!unk_0x1E80C02AC16B6622(iLocal_85))
						{
							if (unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 150f))
							{
								fLocal_184 = func_134(iLocal_85, unk_0x77F050A399DB77ED(), 1);
								if (fLocal_184 > 5f)
								{
									fLocal_184 = (fLocal_184 - 0.5f);
								}
								else
								{
									fLocal_184 = (fLocal_184 - 0.25f);
								}
								unk_0x2A6B9F9E71C479CF(&uLocal_89);
								unk_0xD0C8DD55C652567F(0, iLocal_87, 10000, 2054, 2);
								if (unk_0x9A2BADF8B8CE0E2A(iLocal_87, 0))
								{
									unk_0xAE0D04DE66CC02F6(0, iLocal_87, -1, 0, 1f);
								}
								unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
								unk_0x44642CB08FA1637E(uLocal_89);
								unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
								unk_0xAAD288E877AC833D(&uLocal_89);
								iLocal_140++;
							}
							else
							{
								unk_0xD0C8DD55C652567F(iLocal_85, iLocal_87, 10000, 2054, 2);
								iLocal_140++;
							}
						}
					}
				}
			}
			else if (!iLocal_141)
			{
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					unk_0xE2CB8488CFA42209(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2054, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), -1);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					if (!func_54())
					{
						if (!func_174())
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_141 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x968EA16107097324(iLocal_87, 0))
			{
				if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
				{
					func_128();
					iLocal_140++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(iLocal_85) && unk_0x968EA16107097324(iLocal_87, 0))
			{
				if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
				{
					if (func_1(&uLocal_195, cLocal_178, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x5A499E160A1878DC(iLocal_85);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_140++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (unk_0xB2C4D90B868C2250(iLocal_85))
				{
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
				}
				if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						iLocal_87 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
						if (unk_0x968EA16107097324(iLocal_87, 0))
						{
							if (unk_0x2AA05370067DC5AC(iLocal_87) < 2.5f)
							{
								if (!func_54())
								{
									if (func_8() == 0)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPA", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
									else if (func_8() == 1)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPB", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
									else if (func_8() == 2)
									{
										func_1(&uLocal_195, cLocal_178, "REHH1_RPC", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_140++;
									}
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) < 15f)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if (func_114())
						{
							if (unk_0x9A2BADF8B8CE0E2A(unk_0xD8D1111EA0CFD1DB(), 0))
							{
								unk_0x92D84E1899554EA4(iLocal_85, func_108());
								unk_0x86CD6F98059D0E25(iLocal_85, 1);
								unk_0xBD99B054E78B74CC(iLocal_85, 0);
								unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
								unk_0xFC7C68B6C728CFEC(iLocal_85, unk_0xD8D1111EA0CFD1DB(), -1, 0, 1f, 1, 0);
								iLocal_140++;
							}
							else
							{
								iVar0 = unk_0x07A8845F7F106A38(unk_0xD8D1111EA0CFD1DB(), 0);
								if (unk_0x1E80C02AC16B6622(iVar0))
								{
									iLocal_58 = 1;
								}
								else
								{
									unk_0xE2CB8488CFA42209(iLocal_85);
									unk_0x92D84E1899554EA4(iLocal_85, func_108());
									unk_0x86CD6F98059D0E25(iLocal_85, 1);
									unk_0xBD99B054E78B74CC(iLocal_85, 1);
									unk_0xD0C8DD55C652567F(iLocal_85, unk_0x77F050A399DB77ED(), 10000, 2052, 2);
									iLocal_140++;
								}
							}
						}
						else if (!iLocal_142)
						{
							if (!func_54())
							{
								if (!func_174())
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_195, cLocal_178, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_142 = 1;
							}
						}
					}
					else if (!iLocal_141)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				if (func_114())
				{
					unk_0x7D4AFA4D63039901(iLocal_85, 1f);
					if (unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
					{
						unk_0x8530DA8508D7A4B8(iLocal_85);
						iLocal_111 = 1;
						iLocal_59 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
					unk_0x2A6B9F9E71C479CF(&uLocal_89);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_89);
					unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
					unk_0xAAD288E877AC833D(&uLocal_89);
					iLocal_140 = 5;
				}
				if (func_169(iLocal_85, unk_0x77F050A399DB77ED()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_173()
{
	int iVar0;
	
	if ((iLocal_158 - iLocal_157) > 1000)
	{
		iLocal_172 = unk_0x10C448DEF4298C4F(unk_0xAF99169F0F5AE41D(iLocal_85, 0), 18f, 0, 4);
	}
	if (iLocal_172 != 0)
	{
		iLocal_156++;
		iLocal_157 = unk_0x3EAC9995EC220C5A();
		if (unk_0xA3746E7F17F47DC2(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_156 > iVar0)
		{
			unk_0x8D429A827A931AC9(iLocal_172, 1, 0);
			if (unk_0x968EA16107097324(iLocal_172, 0))
			{
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_172, 0))
				{
					if (iLocal_60 == 1)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								unk_0xD0C8DD55C652567F(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x3EAC9995EC220C5A();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 2)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								unk_0xD0C8DD55C652567F(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x3EAC9995EC220C5A();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 3)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								unk_0xD0C8DD55C652567F(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x3EAC9995EC220C5A();
						iLocal_156 = 0;
					}
					else if (iLocal_60 == 5)
					{
						if (func_1(&uLocal_195, cLocal_178, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_85))
							{
								unk_0xD0C8DD55C652567F(iLocal_85, iLocal_172, 3000, 2052, 2);
							}
						}
						iLocal_182 = unk_0x3EAC9995EC220C5A();
						iLocal_156 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_183 = unk_0x3EAC9995EC220C5A();
			if ((iLocal_183 - iLocal_182) > 3500)
			{
				unk_0xB84D4C251623B60C(&iLocal_172);
			}
			iLocal_172 = 0;
		}
	}
}

int func_174()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), 1))
		{
			if ((unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))) || unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1)))) || unk_0x93FA2C9C44279C1C(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()
{
	if (iLocal_60 == 1)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_85))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_85))
			{
				if ((unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !unk_0x3D8234BA64B54520(iLocal_85)) || func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 12f)
				{
					func_176();
					iLocal_59 = 2;
				}
			}
		}
	}
	else if (iLocal_60 == 2)
	{
		if (!iLocal_167)
		{
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_90, 100f, 100f, 100f, 0, 1, 0) && !unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_89);
				unk_0xE3BCB930B62CBDE5(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x44642CB08FA1637E(uLocal_89);
				unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
				unk_0xAAD288E877AC833D(&uLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	else if (iLocal_60 == 5)
	{
		if (!iLocal_167)
		{
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_90, 200f, 200f, 200f, 0, 1, 0) && !unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_89);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2052, 3);
				unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xE3BCB930B62CBDE5(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xE3BCB930B62CBDE5(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x642DDF74A8A2B3BB(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x44642CB08FA1637E(uLocal_89);
				unk_0xB8A8FA4B28E9F423(iLocal_85, uLocal_89);
				unk_0xAAD288E877AC833D(&uLocal_89);
				iLocal_167 = 1;
			}
		}
	}
	if (iLocal_60 != 1)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_85))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_85))
			{
				if ((unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_85, 95f, 95f, 50f, 0, 1, 0) && !unk_0x3D8234BA64B54520(iLocal_85)) || func_169(unk_0x77F050A399DB77ED(), iLocal_85) < 12f)
				{
					func_176();
					iLocal_59 = 2;
				}
			}
		}
	}
}

void func_176()
{
	if (unk_0xC3B073777B46C61A(uLocal_120))
	{
		unk_0x296CDA10C549A502(&uLocal_120);
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_85))
	{
		if (!unk_0xC3B073777B46C61A(uLocal_121))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_85))
			{
				uLocal_121 = func_63(iLocal_85, 0, 145);
				unk_0x9555F96101785581(uLocal_121, 0);
			}
		}
		if (!func_209())
		{
			func_184(1);
		}
		func_145(&uLocal_195, 3, iLocal_85, sLocal_179, 0, 1);
	}
	if (func_8() == 0)
	{
		func_145(&uLocal_195, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_145(&uLocal_195, 1, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_145(&uLocal_195, 2, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
	}
}

void func_177()
{
	func_179(39, 1);
	func_179(40, 1);
	func_179(41, 1);
	func_179(42, 1);
	func_179(43, 1);
	func_179(44, 1);
	iLocal_85 = unk_0x6665DCC708A346F3(26, iLocal_100, Local_90, fLocal_96, 1, 1);
	unk_0xFB4F6722A032A0F0(iLocal_100);
	unk_0x9526D9575C237F2F(iLocal_85, 1);
	unk_0x26A7668D061F96E7(iLocal_85, 0);
	unk_0x58580C834A43EBA2(iLocal_85, sLocal_181);
	unk_0x1706625EBCDDEBF9(iLocal_85, 137, 1);
	unk_0x1706625EBCDDEBF9(iLocal_85, 206, 1);
	unk_0xCAB5098DD2DF915A(iLocal_85, 1024, 1);
	unk_0xCAB5098DD2DF915A(iLocal_85, 65536, 1);
	unk_0xCAB5098DD2DF915A(iLocal_85, 2, 0);
	unk_0xB424F90D6E96BCF8(iLocal_85, 17, 1);
	unk_0xCB98A5D310AE0BA9(iLocal_85, 60f);
	unk_0x8AFE7C7E122CC666(iLocal_85, 5f);
	if (iLocal_60 == 1)
	{
		unk_0x5F2AACB0122E1554(iLocal_85, 0, 0, 1, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 2, 1, 2, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 3, 0, 2, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 4, 0, 2, 0);
		unk_0x5416146016E39BF7(iLocal_102, 1);
		iLocal_171 = unk_0x2EEA15C0C12C8CDE(iLocal_102, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		unk_0x46C662B7638C9190(iLocal_171, 150f);
		unk_0x9AB688542BF676CD(iLocal_171, 4, 0, 0);
		unk_0x6ADB43B046377AB4(iLocal_171, 0);
		unk_0xFB4F6722A032A0F0(iLocal_102);
		unk_0x642DDF74A8A2B3BB(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_60 == 2)
	{
		unk_0x5F2AACB0122E1554(iLocal_85, 0, 0, 1, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 2, 0, 1, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 3, 0, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 4, 0, 1, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 8, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 10, 0, 0, 0);
		unk_0x642DDF74A8A2B3BB(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x2277155D92E898D2(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_178(1);
	}
	else if (iLocal_60 == 3)
	{
		unk_0x5F2AACB0122E1554(iLocal_85, 0, 0, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 2, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 3, 0, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 4, 1, 0, 0);
		unk_0x5F2AACB0122E1554(iLocal_85, 8, 0, 0, 0);
		unk_0x642DDF74A8A2B3BB(iLocal_85, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x2277155D92E898D2(Local_93 - Vector(20f, 50f, 50f), Local_93 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_60 == 5)
	{
	}
	iLocal_59 = 1;
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98306, unk_0x664B47C58CE8A0A4(), 24);
		Global_98300 = 1;
	}
	else
	{
		StringCopy(&Global_98306, "NULL", 24);
		Global_98300 = 0;
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_183(iParam0, 2, 1))
		{
			func_182(iParam0, 2, 1);
		}
	}
	else if (func_183(iParam0, 2, 1))
	{
		func_180(iParam0, 2, 1);
	}
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_181(iParam0), -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, iParam1);
			func_43(func_181(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
}

void func_182(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_181(iParam0), -1, 0);
			unk_0x573691DB812DC8AA(&uVar0, iParam1);
			func_43(func_181(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_26() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_45(func_181(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_187())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_31(Global_99239))
		{
			func_185(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_31(Global_99239))
		{
			unk_0x358EC418194057C1();
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_166(func_186(iParam0), -1);
					Global_99250.f_29448.f_2++;
					unk_0x573691DB812DC8AA(&Global_99246, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 1))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_166(func_186(iParam0), -1);
					Global_99250.f_29448.f_3++;
					unk_0x573691DB812DC8AA(&Global_99246, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 2))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_166(func_186(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

char* func_186(int iParam0)
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

int func_187()
{
	switch (func_188(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
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

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_192(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_190(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_35700);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_193()
{
	if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
	{
		return 1;
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_85))
	{
		if (unk_0xCC580427ED36D7F8(iLocal_85, unk_0x77F050A399DB77ED(), 1))
		{
			return 1;
		}
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_85, unk_0xD8D1111EA0CFD1DB(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_114)
		{
			if (unk_0x5E9F3856F26E26EC(unk_0xAF99169F0F5AE41D(iLocal_85, 1), 10f, 1) || unk_0x1B2F50A8C0266050(unk_0xAF99169F0F5AE41D(iLocal_85, 1) - Vector(10f, 10f, 10f), unk_0xAF99169F0F5AE41D(iLocal_85, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x1E80C02AC16B6622(iLocal_86) && unk_0x1F2158D615BC4B25(iLocal_86))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_86, unk_0x77F050A399DB77ED(), 1) && unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 7))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_85))
				{
					unk_0x4F9B6ED8FAC6333B(iLocal_85, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x3E5CB294501B40E0(iLocal_85) && unk_0x6867AF84AF12BEFC(iLocal_85, unk_0x77F050A399DB77ED(), 90f)) && unk_0x0C8E94332AE582B1(iLocal_85, unk_0x77F050A399DB77ED(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iLocal_85) || unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iLocal_85))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194()
{
	unk_0xC60576ADD1AECA45(iLocal_100);
	unk_0x6E2E777C1AD81C36("random@hitch_lift");
	if (iLocal_60 == 1 || iLocal_60 == 5)
	{
		unk_0xC60576ADD1AECA45(iLocal_102);
	}
	if (iLocal_60 == 1)
	{
		unk_0x50DCB4FEA511F430(0);
		unk_0x5F4EA7D1E9029E5C("timer", 0);
	}
	else if (iLocal_60 == 3)
	{
		unk_0x6E2E777C1AD81C36("facials@gen_female@base");
	}
	if (unk_0x4A4B6FD54C499B7D(iLocal_100) && unk_0x5263DE3D9A17A86F("random@hitch_lift"))
	{
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			if (unk_0x4A4B6FD54C499B7D(iLocal_102))
			{
				bLocal_61 = true;
			}
		}
		else if (iLocal_60 == 3)
		{
			if (unk_0x5263DE3D9A17A86F("facials@gen_female@base"))
			{
				bLocal_61 = true;
			}
		}
		else
		{
			bLocal_61 = true;
		}
	}
	else
	{
		unk_0xC60576ADD1AECA45(iLocal_100);
		unk_0x6E2E777C1AD81C36("random@hitch_lift");
		if (iLocal_60 == 1 || iLocal_60 == 5)
		{
			unk_0xC60576ADD1AECA45(iLocal_102);
		}
		else if (iLocal_60 == 3)
		{
			unk_0x6E2E777C1AD81C36("facials@gen_female@base");
		}
	}
}

void func_195()
{
	if (iLocal_60 == 1)
	{
		Local_90 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_96 = 17.9234f;
		Local_93 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_100 = joaat("a_m_m_business_01");
		cLocal_178 = "REHH1AU";
		sLocal_179 = "BUSINESSMAN";
		sLocal_181 = "BUSINESSMAN";
		iLocal_102 = joaat("schafter2");
	}
	else if (iLocal_60 == 2)
	{
		Local_90 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_96 = 75.9173f;
		Local_93 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_100 = joaat("a_f_y_hiker_01");
		cLocal_178 = "REHH2AU";
		sLocal_179 = "REHH2Hiker";
		sLocal_181 = "REHH2Hiker";
	}
	else if (iLocal_60 == 3)
	{
		Local_90 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_96 = 19.4143f;
		Local_93 = { 814.455f, 1274.797f, 359.5112f };
		Local_104 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_107 = 340.7372f;
		iLocal_100 = joaat("a_f_y_hipster_03");
		iLocal_101 = joaat("s_m_m_security_01");
		cLocal_178 = "REHH3AU";
		sLocal_179 = "REHH3Hipster";
		sLocal_181 = "REHH3Hipster";
		sLocal_180 = "REHH3Security";
	}
	else if (iLocal_60 == 5)
	{
		Local_90 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_96 = 56.5422f;
		Local_93 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_100 = joaat("ig_bride");
		iLocal_101 = joaat("a_m_y_business_01");
		cLocal_178 = "REHH5AU";
		sLocal_179 = "REHH5Bride";
		sLocal_181 = "REHH5Bride";
		sLocal_180 = "REHH5Groom";
		iLocal_102 = joaat("patriot");
	}
	iLocal_62 = 1;
}

int func_196()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_207())
		{
			return 0;
		}
	}
	if (func_203())
	{
		return 1;
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_197(float fParam0, bool bParam1)
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
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_10(func_8()))
		{
			iVar36 = func_36();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
				{
					func_198(iVar32, &Var0);
					fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
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

void func_198(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_199(uParam1, "Abigail1", func_201(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 1:
			func_199(uParam1, "Abigail2", func_201(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 2:
			func_199(uParam1, "Barry1", func_201(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 3:
			func_199(uParam1, "Barry2", func_201(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 4:
			func_199(uParam1, "Barry3", func_201(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 5:
			func_199(uParam1, "Barry3A", func_201(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 6:
			func_199(uParam1, "Barry3C", func_201(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 7:
			func_199(uParam1, "Barry4", func_201(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_200(iParam0), 0, 0);
			break;
		
		case 8:
			func_199(uParam1, "Dreyfuss1", func_201(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 9:
			func_199(uParam1, "Epsilon1", func_201(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 10:
			func_199(uParam1, "Epsilon2", func_201(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 11:
			func_199(uParam1, "Epsilon3", func_201(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 12:
			func_199(uParam1, "Epsilon4", func_201(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 13:
			func_199(uParam1, "Epsilon5", func_201(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 14:
			func_199(uParam1, "Epsilon6", func_201(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 15:
			func_199(uParam1, "Epsilon7", func_201(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 16:
			func_199(uParam1, "Epsilon8", func_201(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 17:
			func_199(uParam1, "Extreme1", func_201(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 18:
			func_199(uParam1, "Extreme2", func_201(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 19:
			func_199(uParam1, "Extreme3", func_201(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 20:
			func_199(uParam1, "Extreme4", func_201(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 21:
			func_199(uParam1, "Fanatic1", func_201(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 22:
			func_199(uParam1, "Fanatic2", func_201(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 23:
			func_199(uParam1, "Fanatic3", func_201(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_200(iParam0), 0, 1);
			break;
		
		case 24:
			func_199(uParam1, "Hao1", func_201(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_200(iParam0), 0, 1);
			break;
		
		case 25:
			func_199(uParam1, "Hunting1", func_201(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 26:
			func_199(uParam1, "Hunting2", func_201(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 27:
			func_199(uParam1, "Josh1", func_201(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 28:
			func_199(uParam1, "Josh2", func_201(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 29:
			func_199(uParam1, "Josh3", func_201(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 30:
			func_199(uParam1, "Josh4", func_201(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 31:
			func_199(uParam1, "Maude1", func_201(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 32:
			func_199(uParam1, "Minute1", func_201(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 33:
			func_199(uParam1, "Minute2", func_201(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 34:
			func_199(uParam1, "Minute3", func_201(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 35:
			func_199(uParam1, "MrsPhilips1", func_201(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 36:
			func_199(uParam1, "MrsPhilips2", func_201(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 37:
			func_199(uParam1, "Nigel1", func_201(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 38:
			func_199(uParam1, "Nigel1A", func_201(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 39:
			func_199(uParam1, "Nigel1B", func_201(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 40:
			func_199(uParam1, "Nigel1C", func_201(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 41:
			func_199(uParam1, "Nigel1D", func_201(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 42:
			func_199(uParam1, "Nigel2", func_201(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 43:
			func_199(uParam1, "Nigel3", func_201(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 44:
			func_199(uParam1, "Omega1", func_201(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 45:
			func_199(uParam1, "Omega2", func_201(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 46:
			func_199(uParam1, "Paparazzo1", func_201(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 47:
			func_199(uParam1, "Paparazzo2", func_201(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 48:
			func_199(uParam1, "Paparazzo3", func_201(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 49:
			func_199(uParam1, "Paparazzo3A", func_201(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 50:
			func_199(uParam1, "Paparazzo3B", func_201(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 51:
			func_199(uParam1, "Paparazzo4", func_201(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 52:
			func_199(uParam1, "Rampage1", func_201(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 54:
			func_199(uParam1, "Rampage3", func_201(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 55:
			func_199(uParam1, "Rampage4", func_201(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 56:
			func_199(uParam1, "Rampage5", func_201(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 53:
			func_199(uParam1, "Rampage2", func_201(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 57:
			func_199(uParam1, "TheLastOne", func_201(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 58:
			func_199(uParam1, "Tonya1", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 59:
			func_199(uParam1, "Tonya2", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 60:
			func_199(uParam1, "Tonya3", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 61:
			func_199(uParam1, "Tonya4", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 62:
			func_199(uParam1, "Tonya5", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_199(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_200(int iParam0)
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

struct<2> func_201(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_202(iParam0) };
	if (unk_0x0AAC2160036975D9(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_202(int iParam0)
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

int func_203()
{
	if (func_206() && !func_207())
	{
		return 1;
	}
	if (func_205() && func_204())
	{
		return 1;
	}
	return 0;
}

bool func_204()
{
	return Global_98968 > 0;
}

int func_205()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_207()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_208()
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_203())
	{
		return 1;
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_207())
		{
			return 0;
		}
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if ((Global_99239 == func_40() && unk_0x74E62879922177A9()) && Global_99240)
	{
		return 1;
	}
	return 0;
}

void func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_212(iParam0);
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_211();
}

void func_211()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x5416146016E39BF7(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)), 1);
		}
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	}
}

void func_212(int iParam0)
{
	Global_99239 = iParam0;
}

int func_213(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_136046)
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
		if (!func_241())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_207())
			{
				return 0;
			}
		}
		if (!Global_99250.f_7703)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_203())
		{
			return 0;
		}
		if (func_240())
		{
			return 0;
		}
		if (Global_99239 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_197(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_239(iParam3))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_238(func_8()) == 4 || func_238(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_237(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_236(Global_99250.f_29448.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3EAC9995EC220C5A() - Global_99241) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_235())
		{
			return 0;
		}
		if (unk_0x21DB261DC1511E40())
		{
			return 0;
		}
		if (unk_0x74E62879922177A9())
		{
			return 0;
		}
		if (!func_226(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_225(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x5C31634D1DECF73C(unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())))
		{
			if ((unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(377.153f, -717.567f, 10.0536f) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(320.9934f, 265.2515f, 82.1221f)) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_225(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_239(30) && !func_225(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_8()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_99250.f_1754.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99250.f_1754.f_539.f_1524[iVar4];
				if (func_224(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_214(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var5) < (210f * 210f))
							{
								if (func_8() != iVar4)
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

bool func_214(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99250.f_1754.f_539.f_1524[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_224(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_153(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_223(iParam0, iParam1))
	{
		iVar0 = func_160(iParam1);
		iVar1 = func_158(iParam0);
		iVar2 = (func_158(iParam0) - func_158(iParam1));
		iVar3 = (func_160(iParam0) - func_160(iParam1));
		iVar4 = (func_222(iParam0) - func_222(iParam1));
		iVar5 = (func_151(iParam0) - func_151(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_221(iParam0) - func_221(iParam1));
	}
	else
	{
		iVar0 = func_160(iParam0);
		iVar1 = func_158(iParam1);
		iVar2 = (func_158(iParam1) - func_158(iParam0));
		iVar3 = (func_160(iParam1) - func_160(iParam0));
		iVar4 = (func_222(iParam1) - func_222(iParam0));
		iVar5 = (func_151(iParam1) - func_151(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_221(iParam1) - func_221(iParam0));
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
		iVar4 = (iVar4 + func_157(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_220(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_220(float fParam0, float fParam1, float fParam2)
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

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return 1;
	}
	iVar0 = func_158(iParam0);
	iVar1 = func_158(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_160(iParam0);
	iVar1 = func_160(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
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
	iVar0 = func_221(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_151(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_158(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_160(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_157(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1)
{
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				iVar0 = func_8();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_234()) || Global_98297) || Global_25117) || func_233()) || func_15(8, -1)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_234()) || Global_25117) || func_233()) || func_15(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_234()) || Global_98297) || Global_25117) || func_233()) || func_15(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_234()) || Global_98297) || Global_25117) || func_233()) || func_15(8, -1)) || func_232()) || func_231()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_234() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_15(8, -1)) || func_229()) || func_228()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_232()) || func_231()) || func_228()) || func_227())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_234()) || Global_25117) || func_233()) || func_15(8, -1)) || func_231()) || func_230()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_234()) || func_231()) || Global_98297) || Global_25117) || func_233()) || Global_36750) || func_15(8, -1)) || func_230()) || func_228()) || func_229()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_234()) || Global_98297) || Global_25117) || func_233()) || func_15(8, -1)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
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

var func_227()
{
	return Global_91145.f_1;
}

int func_228()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_229()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_231()
{
	return Global_91158.f_297 > 0;
}

bool func_232()
{
	return Global_91158.f_296 > 0;
}

var func_233()
{
	return Global_1315910;
}

int func_234()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_235()
{
	func_7();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0)
{
	return func_223(func_153(), iParam0);
}

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_8();
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

int func_238(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_99250.f_6306.f_919[iParam0];
}

bool func_239(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_241())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_1, iVar0);
	}
	return bVar1;
}

int func_240()
{
	var uVar0;
	
	if (Global_25265)
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x07A8845F7F106A38(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_241()
{
	var uVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x573691DB812DC8AA(&uVar0, 2);
				unk_0x573691DB812DC8AA(&uVar0, 4);
				unk_0x573691DB812DC8AA(&uVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					iVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&iVar0, 0);
					unk_0xF49776B60F784AFF(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	if (iLocal_143)
	{
		func_262(0);
		if (Global_25353)
		{
			unk_0x3345CB85AB9EC035("AC_STOP");
		}
		func_261();
		unk_0x3309AB731FDAB1DB();
		func_178(0);
		if (unk_0x95147FF3B74E25F0())
		{
			unk_0x88890C87E37B149D(0);
		}
		if (unk_0x0593CBDE031C59F8())
		{
			unk_0xA035657717E7B550(0);
		}
		Global_25385[0 /*7*/].f_6 = 0;
		func_254(0, 1, 1, 0);
		func_55();
		if (unk_0x1F2158D615BC4B25(iLocal_85))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_85))
			{
				unk_0x1706625EBCDDEBF9(iLocal_85, 317, 1);
				if (!unk_0xB42592B9FFEB5EDE(iLocal_85, 0))
				{
					unk_0x0956105C59379117(iLocal_85);
				}
				if (iLocal_60 != 2)
				{
					unk_0x5A499E160A1878DC(iLocal_85);
				}
				if (unk_0x49C650267EDFEBC6(iLocal_85, 1805844857) != 1 && unk_0x49C650267EDFEBC6(iLocal_85, 1805844857) != 0)
				{
					unk_0x9526D9575C237F2F(iLocal_85, 0);
				}
				unk_0x26A7668D061F96E7(iLocal_85, 1);
				if (unk_0x3E5CB294501B40E0(iLocal_85))
				{
					unk_0xD3778FD9E17F7E71(iLocal_85);
				}
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_86))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_86))
			{
				if (!unk_0x823B1736EFAFA74A(iLocal_86))
				{
					unk_0x9526D9575C237F2F(iLocal_86, 0);
				}
			}
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			}
		}
	}
	unk_0xB1FD6AC96E6B866D();
	if (func_209())
	{
		if (unk_0x38A4F2561FF18769(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x38A4F2561FF18769(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xF03D085241B09928(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_243(-1);
	unk_0x2F798BA2098FDADE();
}

void func_243(int iParam0)
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
	if (func_209())
	{
		func_247(iParam0);
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_246(30000);
		StringCopy(&cVar0, func_245(Global_99239, 1), 64);
		if (func_39(Global_99239) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99238, 64);
		}
		unk_0x0C0A547C7A0D11B0(&cVar0, Global_99236, (unk_0x3EAC9995EC220C5A() - Global_99237), 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99246, 0) && Global_99250.f_29448.f_2 < 3)
	{
		unk_0xA5F70A8B83BDFA49(&Global_99246, 0);
	}
	func_244(&Global_25174);
	Global_99240 = 0;
	func_212(-1);
}

void func_244(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

char* func_245(int iParam0, bool bParam1)
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

void func_246(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_247(int iParam0)
{
	func_248(iParam0, 0, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_153();
	func_251(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_250(iParam0, &uVar0);
	Var1 = { func_249(&uVar0) };
}

struct<16> func_249(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_152(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_160(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_158(*uParam0), 64);
	return Var0;
}

void func_250(int iParam0, var uParam1)
{
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_158(*uParam0);
	iVar1 = func_160(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_151(*uParam0);
	iVar4 = func_152(*uParam0);
	iVar5 = func_221(*uParam0);
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
	iVar6 = func_157(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_157(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_163(uParam0, iParam1);
	func_162(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

int func_253(int iParam0)
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

void func_254(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_260(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_5())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_259(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_260(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_259(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_255(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_255(int iParam0)
{
	if (func_257(iParam0, 0))
	{
		return 1;
	}
	if (func_256())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_256()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_257(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_258(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

void func_261()
{
	Global_25349 = 0;
	Global_25350 = 0;
	Global_25352 = 0;
	Global_25353 = 0;
	Global_25354 = 0;
}

void func_262(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_179(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_263()
{
	float fVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		fVar0 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_70, 1);
		iLocal_69 = 1;
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_73, 1) < fVar0)
		{
			fVar0 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_73, 1);
			iLocal_69 = 2;
		}
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_76, 1) < fVar0)
		{
			fVar0 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_76, 1);
			iLocal_69 = 3;
		}
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_79, 1) < fVar0)
		{
			fVar0 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_79, 1);
			iLocal_69 = 5;
		}
		if (iLocal_69 == 1)
		{
			iLocal_82 = 1;
			iLocal_60 = 1;
			return Local_70;
		}
		else if (iLocal_69 == 2)
		{
			iLocal_82 = 2;
			iLocal_60 = 2;
			return Local_73;
		}
		else if (iLocal_69 == 3)
		{
			iLocal_82 = 3;
			iLocal_60 = 3;
			return Local_76;
		}
		else if (iLocal_69 == 5)
		{
			iLocal_82 = 4;
			iLocal_60 = 5;
			return Local_79;
		}
	}
	return 0f, 0f, 0f;
}

