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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
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
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86[2] = { 0, 0 };
	int iLocal_89[2] = { 0, 0 };
	int iLocal_92[2] = { 0, 0 };
	int iLocal_95[2] = { 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124[2] = { 0, 0 };
	int iLocal_127[2] = { 0, 0 };
	var uLocal_130[2] = { 0, 0 };
	int iLocal_133[4] = { 0, 0, 0, 0 };
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143[2] = { 0, 0 };
	int iLocal_146[2] = { 0, 0 };
	int iLocal_149[4] = { 0, 0, 0, 0 };
	int iLocal_154 = 0;
	int iLocal_155[2] = { 0, 0 };
	int iLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<3> Local_164 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	struct<3> Local_170 = { 0, 0, 0 } ;
	char* sLocal_173 = NULL;
	char* sLocal_174 = NULL;
	var uLocal_175 = 16;
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
	var uLocal_342 = -1;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 1000;
	var uLocal_350 = 1000;
	var uLocal_351 = 0;
	struct<3> Local_352 = { 0, 0, 0 } ;
	struct<3> Local_355 = { 0, 0, 0 } ;
	float fLocal_358 = 0f;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	var uLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	struct<6> Local_377 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	char* sLocal_385 = NULL;
	char[] cLocal_386[8] = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	struct<19> Local_391 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<7> Local_415[2];
	int iLocal_430[2] = { 0, 0 };
	int iLocal_433[2] = { 0, 0 };
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	sLocal_19 = "NULL";
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
	Local_55 = { -1511.194f, 436.5252f, 109.7818f };
	Local_58 = { 968.0051f, -127.6078f, 73.3543f };
	Local_64 = { -1034.6f, 4918.6f, 205.9f };
	Local_69 = { 0.5f, 0.1f, 0.56f };
	sLocal_174 = "chassis";
	Local_352 = { 0f, -5f, 0f };
	Local_355 = { 1f, -1f, 0f };
	iLocal_368 = joaat("gburrito");
	iLocal_369 = joaat("daemon");
	iLocal_370 = joaat("g_m_y_lost_01");
	iLocal_371 = joaat("g_m_y_lost_02");
	iLocal_372 = joaat("u_f_y_bikerchic");
	StringCopy(&Local_377, "", 24);
	iLocal_383 = -1;
	sLocal_385 = "RANDOM@KIDNAP_GIRL";
	cLocal_386 = "RESNAAU";
	iLocal_437 = -1;
	Local_51 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_54 = ScriptParam_0.f_17[0];
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
		{
			if (unk_0x9BB01E3834671191(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
			{
				unk_0xED74007FFB146BC2(iLocal_139);
				unk_0xBB9CE077274F6A1B(iLocal_139, 40000f, 0);
				unk_0x9F7794730795E019(iLocal_139, 17, true);
				unk_0x70A2D1137C8ED7C9(iLocal_139, 2, false);
				unk_0x9F8AA94D6D97DBF4(iLocal_139, false);
				unk_0x971D38760FBC02EF(iLocal_139, true);
			}
			else if (!unk_0x1F0B79228E461EC9(iLocal_139, sLocal_385, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				unk_0xEBD76F2359F190AC(iLocal_139, true);
				unk_0x94587F17E9C365D5(iLocal_139, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), 150f, -1, false, false);
				unk_0x971D38760FBC02EF(iLocal_139, true);
			}
		}
		func_240();
	}
	if (func_199(Local_51, -1, 0, 0, 0))
	{
		func_196(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_195();
	bLocal_82 = false;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!iLocal_104)
		{
			func_194(1);
			iLocal_104 = 1;
		}
		if (!func_193())
		{
			if (func_192())
			{
				func_240();
			}
		}
		unk_0x208784099002BC30("RE_SN", 0);
		func_191();
		func_190();
		func_188();
		if (!func_193())
		{
			if (unk_0xC5042CC6F5E3D450())
			{
				switch (iLocal_47)
				{
					case 0:
						if (func_174())
						{
							unk_0xAA5F02DB48D704B9(0);
							iLocal_47 = 1;
						}
						else if (func_162())
						{
							func_240();
						}
						break;
					
					case 1:
						func_161();
						unk_0x245A6883D966D537(0.2f);
						if ((!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(iLocal_140)) && !unk_0x84A2DD9AC37C35C1(iLocal_139))
						{
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
							{
								if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(iLocal_139, false) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, false, true, 0))
								{
									if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
									{
										unk_0x86A652570E5F25DD(&iLocal_119);
									}
									if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
									{
										unk_0xF2DD778C22B15BDA();
										iLocal_122 = func_160(iLocal_141, 1, 0);
									}
								}
							}
							if (iLocal_438 == 0)
							{
								if ((!unk_0xE31C2C72B8692B64(iLocal_154) || !unk_0xE31C2C72B8692B64(iLocal_140)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_139, 40f, 40f, 20f, false, true, 0))
								{
									unk_0x5AE11BC36633DE4E(0);
									iLocal_438 = 1;
								}
							}
							if (iLocal_438 == 3)
							{
								unk_0x020E5F00CDA207BA(0f);
								unk_0xEB9DC3C7D8596C46(iLocal_154, true);
								func_151(0);
							}
							else if (!iLocal_100)
							{
								if (func_150() == 2)
								{
									if ((unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_51) < 40f && unk_0x7239B21A38F536BA(iLocal_154)) && !unk_0xE31C2C72B8692B64(iLocal_154))
									{
										if (func_149(&uLocal_175, cLocal_386, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_148();
							func_141();
						}
						break;
				}
			}
			else
			{
				func_240();
			}
		}
		else if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_139, 150f, 150f, 50f, false, true, 0) || (unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0xE31C2C72B8692B64(iLocal_154)))
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0xAF66DCEE6609B148();
						if (unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0x84A2DD9AC37C35C1(iLocal_141))
						{
							if (unk_0xA3EE4A07279BB9DB(iLocal_141, iLocal_154, false))
							{
								if (unk_0xB346476EF1A64897(iLocal_139) && unk_0x77F1BEB8863288D5(iLocal_141, 242628503) == 7)
								{
									unk_0x69F4BE8C8CC4796C(iLocal_139, unk_0xD80958FC74E988A6(), -1, 0, 2);
									unk_0xE8854A4326B9E12B(&iLocal_158);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, Local_61, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, -859.6284f, 382.7891f, 86.4466f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, -703.2946f, 287.229f, 82.6848f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, -496.6651f, 246.5268f, 82.0747f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, -166.6776f, 250.8786f, 92.4768f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, 74.5106f, 236.4861f, 108.1344f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, 278.7988f, 161.9029f, 103.446f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, 425.6758f, 108.9366f, 99.4329f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, 729.2792f, -19.616f, 81.9823f, 50f, 0, 0, 786469, 7f, 15f);
									unk_0xE2A2AA2F659D77A7(0, iLocal_154, Local_58, 50f, 0, 0, 786469, 7f, 15f);
									unk_0x39E72BC99E6360CB(iLocal_158);
									unk_0x5ABA3986D90D8A3B(iLocal_141, iLocal_158);
									unk_0x3841422E9C488D8C(&iLocal_158);
									iLocal_49 = 1;
								}
							}
						}
						else
						{
							func_139();
							iLocal_49 = 1;
						}
						break;
					
					case 1:
						unk_0xAF66DCEE6609B148();
						func_138();
						func_116();
						func_115(iLocal_122, iLocal_140, 150f, 1061158912, 0);
						if (((((func_114() || func_113()) || func_111()) || func_110()) || func_109()) || unk_0xC86D67D52A707CF8(iLocal_139, unk_0xD80958FC74E988A6(), true))
						{
							unk_0xA72CD9CA74A5ECBA(iLocal_139);
							if (unk_0xA6DB27D19ECBB7DA(iLocal_122))
							{
								if (unk_0xDF729E8D20CF7327(iLocal_122) != 1)
								{
									unk_0x6F6F290102C02AB4(iLocal_122, false);
									unk_0x03D7FB09E75D6B7E(iLocal_122, 1);
								}
							}
							func_139();
							func_107(&uLocal_340, 0, 0);
							iLocal_49 = 2;
						}
						else if (iLocal_365 || iLocal_80)
						{
							if (unk_0xA6DB27D19ECBB7DA(iLocal_122))
							{
								if (unk_0xDF729E8D20CF7327(iLocal_122) != 1)
								{
									unk_0x6F6F290102C02AB4(iLocal_122, false);
									unk_0x03D7FB09E75D6B7E(iLocal_122, 1);
								}
							}
						}
						else if (unk_0x4C241E39B23DF959(iLocal_154, false))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_154, 25f, 25f, 5f, false, true, 0) && unk_0xD5037BA82E12416F(iLocal_154) > 10f)
							{
								if (unk_0x9CD27B0045628463() > iLocal_108 + 5000)
								{
									iLocal_80 = 1;
								}
							}
							else
							{
								iLocal_108 = unk_0x9CD27B0045628463();
							}
						}
						break;
					
					case 2:
						unk_0xAF66DCEE6609B148();
						if (!bLocal_82)
						{
							bLocal_82 = true;
						}
						if (unk_0x7239B21A38F536BA(iLocal_154) && unk_0x7239B21A38F536BA(iLocal_139))
						{
							if (unk_0xEFBE71898A993728(iLocal_139, iLocal_154))
							{
								if (unk_0x5F9532F3B5CC2551(iLocal_154))
								{
									unk_0x3882114BDE571AD4(iLocal_139, false);
									unk_0x961AC54BF0613F5D(iLocal_139, true, false);
								}
							}
						}
						if (bLocal_73)
						{
							if (iLocal_75)
							{
								func_106();
							}
							else
							{
								func_105();
							}
						}
						else
						{
							bLocal_76 = true;
						}
						func_148();
						func_102();
						if (bLocal_76)
						{
							if (bLocal_77)
							{
								func_102();
								iLocal_49 = 3;
								unk_0x3882114BDE571AD4(iLocal_139, false);
							}
						}
						break;
					
					case 3:
						if (!unk_0xA6DB27D19ECBB7DA(iLocal_121))
						{
							iLocal_121 = func_160(iLocal_139, 0, 0);
						}
						switch (iLocal_384)
						{
							case 0:
								if (unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0()))
								{
									if (!unk_0x7239B21A38F536BA(iLocal_162))
									{
										iLocal_162 = unk_0xB6997A7EB3F5C8C0();
										unk_0xAD738C3085FE7E11(iLocal_162, true, true);
									}
								}
								if (func_101(1, 0, 1) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_139, 2.5f, 2.5f, 2.5f, false, true, 1))
								{
									unk_0x0A1CB9094635D1A6(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, 0);
									unk_0x1913FE4CBF41C463(iLocal_139, 118, false);
									func_100();
									func_93(1, 1, 1, 0);
									unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
									unk_0x719FF505F097FD20();
									Local_391 = { -1.2232f, -4.3354f, 1.3385f };
									if (!unk_0x5F9532F3B5CC2551(iLocal_154))
									{
										unk_0x43D3807C077261E3(iLocal_154, -8f, true);
										unk_0x428CA6DBD1094446(iLocal_154, false);
										unk_0xB664292EAECF7FA6(iLocal_154, 1);
										Local_391.f_3 = { -22.8598f, 0f, (unk_0xE83D4F9BA2A38914(iLocal_154) - 60f) };
									}
									Local_391.f_6 = { -1.4334f, -4.6656f, 1.3733f };
									Local_391.f_9 = { -22.8598f, 0f, -106.3162f };
									Local_391.f_12 = 55f;
									Local_391.f_13 = 3000;
									Local_391.f_18 = 0;
									func_89(&Local_391, iLocal_154, 1);
									unk_0x06843DA7060A026B(iLocal_139, unk_0x3FEF770D40960D5A(iLocal_154, false), true, false, false, true);
									Local_109 = { 0f, 0f, 0f };
									Local_112 = { 0f, 0f, 0f };
									iLocal_107 = unk_0x8C18E0F9080ADD73(Local_109, Local_112, 2);
									if (unk_0xB346476EF1A64897(iLocal_139))
									{
										unk_0x961AC54BF0613F5D(iLocal_139, true, false);
									}
									unk_0x272E4723B56A3B96(iLocal_107, iLocal_154, unk_0xFB71170B7E76ACBA(iLocal_154, sLocal_174));
									unk_0x6ACF6B7225801CD7(iLocal_107, Local_109, Local_112, 2);
									unk_0x69F4BE8C8CC4796C(iLocal_139, unk_0xD80958FC74E988A6(), -1, 0, 2);
									unk_0xEEA929141F699854(iLocal_139, iLocal_107, sLocal_385, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1000f, 0);
									unk_0x394B9CD12435C981(iLocal_107, false);
									unk_0x971D38760FBC02EF(iLocal_139, true);
									iLocal_411 = unk_0x5E3CF89C6BCCA67D(964613260, true);
									unk_0xE32EFE9AB4A9AA0C(iLocal_411, iLocal_107, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_385);
									unk_0x428CA6DBD1094446(iLocal_154, true);
									unk_0x7C65DAC73C35C862(iLocal_154, 2, false, false);
									unk_0x7C65DAC73C35C862(iLocal_154, 3, false, false);
									Local_109 = { unk_0x3FEF770D40960D5A(iLocal_154, false) };
									Local_112.f_2 = unk_0xE83D4F9BA2A38914(iLocal_154);
									Var0 = { unk_0x1899F328B0E12848(iLocal_154, 0f, -4.7f, 0f) };
									unk_0xC906A7DAB05C8D2B(Var0, &(Var0.f_2));
									unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), unk_0xE83D4F9BA2A38914(iLocal_154));
									unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
									if (func_85(iLocal_162))
									{
										func_84();
									}
									if (unk_0x7239B21A38F536BA(iLocal_140))
									{
										if (unk_0x5F9532F3B5CC2551(iLocal_140) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_140, false), unk_0x3FEF770D40960D5A(iLocal_139, false)) < 3f)
										{
											unk_0x9614299DCB53E54B(&iLocal_140);
										}
										if (unk_0x5F9532F3B5CC2551(iLocal_142) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_142, false), unk_0x3FEF770D40960D5A(iLocal_142, false)) < 3f)
										{
											unk_0x9614299DCB53E54B(&iLocal_142);
										}
									}
									unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), true);
									unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
									unk_0xE532F5D78798DAAB(iLocal_368);
									unk_0x719FF505F097FD20();
									iLocal_384++;
								}
								break;
							
							case 1:
								if (unk_0x7239B21A38F536BA(iLocal_154))
								{
									iLocal_384++;
								}
								break;
							
							case 2:
								if (func_150() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_150() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_83())
								{
									if (func_149(&uLocal_175, cLocal_386, sVar3, 8, 0, 0, 0))
									{
										iLocal_384++;
									}
								}
								break;
							
							case 3:
								if (!func_83())
								{
									if (func_149(&uLocal_175, cLocal_386, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_384++;
									}
								}
								break;
							
							case 4:
								if (unk_0x25D39B935A038A26(iLocal_107))
								{
									if (unk_0xE4A310B1D7FA73CC(iLocal_107) > 0.3746479f && !iLocal_115)
									{
										if (unk_0x8D4D46230B2C353A() == 4)
										{
											unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
											unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
											iLocal_115 = 1;
										}
									}
									if (unk_0xE4A310B1D7FA73CC(iLocal_107) > 0.4f)
									{
										iLocal_384++;
									}
								}
								break;
							
							case 5:
								unk_0xE1EF3C1216AFF2CD(iLocal_139);
								unk_0x3882114BDE571AD4(iLocal_139, false);
								unk_0x1913FE4CBF41C463(iLocal_139, 118, true);
								Local_170 = { unk_0xBE22B26DD764C040(sLocal_385, "IG_1_ALT1_EXIT_VAN", Local_109, Local_112, 1f, 2) };
								unk_0xC906A7DAB05C8D2B(Local_170, &(Local_170.f_2));
								unk_0x06843DA7060A026B(iLocal_139, Local_170, true, false, false, true);
								Local_170 = { unk_0x4B805E6046EE9E47(sLocal_385, "IG_1_ALT1_EXIT_VAN", Local_109, Local_112, 1f, 2) };
								unk_0x8E2530AA8ADA980E(iLocal_139, Local_170.f_2);
								if (unk_0x25D39B935A038A26(iLocal_107))
								{
									unk_0x734292F4F0ABF6D0(iLocal_107, 1f);
								}
								unk_0x2208438012482A1A(iLocal_139, false, false);
								unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
								if (unk_0x4C241E39B23DF959(iLocal_154, false))
								{
									unk_0x428CA6DBD1094446(iLocal_154, false);
									if (unk_0x1F0B79228E461EC9(iLocal_154, sLocal_385, "IG_1_ALT1_EXIT_VAN", 3))
									{
										unk_0x28004F88151E03E0(iLocal_154, "IG_1_ALT1_EXIT_VAN", sLocal_385, -8f);
									}
								}
								unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
								if (unk_0xA7A932170592B50E(iLocal_411))
								{
									unk_0x865908C81A2C22E9(iLocal_411, false);
								}
								unk_0xB4EC2312F4E5B1F1(0f);
								unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
								func_93(0, 1, 1, 0);
								unk_0xB128377056A54E2A(iLocal_139, true);
								func_81(Local_55);
								if (unk_0x4C241E39B23DF959(iLocal_154, false))
								{
									unk_0xB664292EAECF7FA6(iLocal_154, 1);
								}
								iLocal_49 = 4;
								break;
						}
						if (iLocal_384 > 0 && iLocal_384 < 5)
						{
							unk_0x719FF505F097FD20();
							if ((func_79(1000) || !unk_0x25D39B935A038A26(iLocal_107)) || (unk_0x25D39B935A038A26(iLocal_107) && unk_0xE4A310B1D7FA73CC(iLocal_107) > 0.4f))
							{
								iLocal_384 = 5;
							}
						}
						if (!unk_0xA6DB27D19ECBB7DA(iLocal_121))
						{
							iLocal_121 = func_160(iLocal_139, 0, 0);
						}
						break;
					
					case 4:
						if (unk_0x462E0DB9B137DC5F() == 0)
						{
							unk_0xAA5F02DB48D704B9(5);
							unk_0x020E5F00CDA207BA(0f);
						}
						if (unk_0x7239B21A38F536BA(iLocal_141))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_141, false)) > 10000f && unk_0xE31C2C72B8692B64(iLocal_141))
							{
								unk_0x2595DD4236549CE3(&iLocal_141);
							}
						}
						if (unk_0x7239B21A38F536BA(iLocal_142))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_142, false)) > 10000f && unk_0xE31C2C72B8692B64(iLocal_142))
							{
								unk_0x2595DD4236549CE3(&iLocal_142);
							}
						}
						if (unk_0x7239B21A38F536BA(iLocal_140))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_140, false)) > 10000f && unk_0xE31C2C72B8692B64(iLocal_140))
							{
								unk_0x2595DD4236549CE3(&iLocal_140);
							}
						}
						if (unk_0x7239B21A38F536BA(iLocal_154))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_154, false)) > 10000f && unk_0xE31C2C72B8692B64(iLocal_154))
							{
								unk_0x629BFA74418D6239(&iLocal_154);
							}
						}
						func_61();
						if (unk_0xA6DB27D19ECBB7DA(iLocal_121))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_139, 10f, 10f, 10f, false, true, 0))
							{
								if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
								{
									if (unk_0x77F1BEB8863288D5(iLocal_139, 474215631) != 7)
									{
										unk_0xE1EF3C1216AFF2CD(iLocal_139);
									}
									unk_0x0F804F1DB19B9689(iLocal_139);
									unk_0x9F3480FE65DB31B5(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
									unk_0x0BDDB8D9EC6BCF3C(iLocal_139, 0);
									unk_0x86A652570E5F25DD(&iLocal_121);
									if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
									{
										unk_0x86A652570E5F25DD(&iLocal_119);
									}
									func_56();
									iLocal_119 = func_55(Local_55, 1);
								}
							}
						}
						else if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
						{
							if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_55, Global_18, true, true, 0))
							{
								if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(iLocal_139, false))
								{
									if ((unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xB104CD1BABF302E2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false))) && unk_0x5333F526F6AB19AA(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 90f))
									{
										iLocal_49 = 6;
										func_54();
										unk_0x86A652570E5F25DD(&iLocal_119);
									}
								}
								else
								{
									iLocal_49 = 6;
									func_54();
									unk_0x86A652570E5F25DD(&iLocal_119);
								}
							}
							else
							{
								if (!unk_0x9BB01E3834671191(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
								{
									func_54();
									unk_0x86A652570E5F25DD(&iLocal_119);
									if (!unk_0xA6DB27D19ECBB7DA(iLocal_121))
									{
										iLocal_121 = func_52(iLocal_139, 0, 145);
									}
								}
								if (!iLocal_72 && !iLocal_74)
								{
									func_49();
									iLocal_68 = unk_0x9CD27B0045628463();
								}
								else if (!iLocal_74)
								{
									if ((unk_0x9CD27B0045628463() - iLocal_68) > 5000)
									{
										iLocal_68 = (unk_0x9CD27B0045628463() - 5000);
									}
									func_46();
									iVar4 = 0;
									while (iVar4 < iLocal_155)
									{
										if (((func_45(iLocal_143[iVar4]) || func_45(iLocal_146[iVar4])) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_55) < 400f) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_64) < 400f)
										{
											if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
											{
												unk_0x86A652570E5F25DD(&iLocal_119);
											}
											func_54();
											iLocal_390 = iLocal_389;
											if (iLocal_390 < 6)
											{
												if (iLocal_387 > 0)
												{
													iLocal_390++;
												}
											}
											func_43();
											iLocal_74 = 0;
											if (!unk_0x84A2DD9AC37C35C1(iLocal_143[iVar4]))
											{
												unk_0x7A6535691B477C48(iLocal_143[iVar4], 3);
											}
											if (!unk_0x84A2DD9AC37C35C1(iLocal_146[iVar4]))
											{
												unk_0x7A6535691B477C48(iLocal_146[iVar4], 3);
											}
											iLocal_49 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_148();
						if (func_42())
						{
							unk_0x9614299DCB53E54B(&iLocal_139);
							func_12();
						}
						break;
					
					case 5:
						if (unk_0x462E0DB9B137DC5F() != 0)
						{
							unk_0xAA5F02DB48D704B9(0);
							unk_0x020E5F00CDA207BA(0f);
						}
						func_148();
						func_11();
						func_46();
						if (!iLocal_366)
						{
							if (func_10())
							{
								if (func_149(&uLocal_175, cLocal_386, "RESNA_MOR", 4, func_190(), 0, 0))
								{
									iLocal_366 = 1;
									iLocal_118 = unk_0x9CD27B0045628463();
								}
							}
							else
							{
								iLocal_366 = 1;
							}
						}
						else if ((unk_0x9CD27B0045628463() - iLocal_118) > 2000 && !func_83())
						{
							if (!iLocal_98)
							{
								if (func_10() && func_9() < 30f)
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_139) && !unk_0x84A2DD9AC37C35C1(iLocal_143[0]))
									{
										if (unk_0x997ABD671D25CA0B(iLocal_139, false))
										{
											unk_0x2F8AF0E82773A171(iLocal_139, iLocal_143[0], 0, 0f, 0f, 0f, 50f, 90, false, 1566631136);
										}
										iLocal_98 = 1;
									}
								}
							}
							else if (!iLocal_99)
							{
								if (unk_0x997ABD671D25CA0B(iLocal_139, false))
								{
									if (unk_0xB2C086CC1BF8F2BF(iLocal_139))
									{
										if (func_149(&uLocal_175, cLocal_386, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_99 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_155)
						{
							iVar6 = 0;
							if ((unk_0x7239B21A38F536BA(iLocal_143[iVar5]) && !unk_0x84A2DD9AC37C35C1(iLocal_143[iVar5])) && !unk_0x5F9532F3B5CC2551(iLocal_143[iVar5]))
							{
								if (unk_0x4C241E39B23DF959(iLocal_155[iVar5], false) && unk_0xA3EE4A07279BB9DB(iLocal_143[iVar5], iLocal_155[iVar5], false))
								{
									if (unk_0xA6DB27D19ECBB7DA(iLocal_124[iVar5]))
									{
										unk_0x86A652570E5F25DD(&(iLocal_124[iVar5]));
									}
									iVar6 = 1;
								}
								if (!unk_0xA6DB27D19ECBB7DA(iLocal_124[iVar5]) && !unk_0x997ABD671D25CA0B(iLocal_143[iVar5], false))
								{
									iLocal_124[iVar5] = func_52(iLocal_143[iVar5], 1, 145);
								}
							}
							else if (unk_0xA6DB27D19ECBB7DA(iLocal_124[iVar5]))
							{
								unk_0x86A652570E5F25DD(&(iLocal_124[iVar5]));
							}
							if ((unk_0x7239B21A38F536BA(iLocal_146[iVar5]) && !unk_0x84A2DD9AC37C35C1(iLocal_146[iVar5])) && !unk_0x5F9532F3B5CC2551(iLocal_146[iVar5]))
							{
								if (unk_0x4C241E39B23DF959(iLocal_155[iVar5], false) && unk_0xA3EE4A07279BB9DB(iLocal_146[iVar5], iLocal_155[iVar5], false))
								{
									if (unk_0xA6DB27D19ECBB7DA(iLocal_127[iVar5]))
									{
										unk_0x86A652570E5F25DD(&(iLocal_127[iVar5]));
									}
									iVar6 = 1;
								}
								if (!unk_0xA6DB27D19ECBB7DA(iLocal_127[iVar5]) && !unk_0x997ABD671D25CA0B(iLocal_146[iVar5], false))
								{
									iLocal_127[iVar5] = func_52(iLocal_146[iVar5], 1, 145);
								}
							}
							else if (unk_0xA6DB27D19ECBB7DA(iLocal_127[iVar5]))
							{
								unk_0x86A652570E5F25DD(&(iLocal_127[iVar5]));
							}
							func_6(iVar5, (iVar6 && unk_0x4C241E39B23DF959(iLocal_155[iVar5], false)));
							iVar5++;
						}
						if (func_5())
						{
							iLocal_84 = 0;
							while (iLocal_84 < 2)
							{
								if (unk_0x4C241E39B23DF959(iLocal_155[iLocal_84], false))
								{
									unk_0x629BFA74418D6239(&(iLocal_155[iLocal_84]));
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_143[iLocal_84]))
								{
									unk_0x2595DD4236549CE3(&(iLocal_143[iLocal_84]));
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_146[iLocal_84]))
								{
									unk_0x2595DD4236549CE3(&(iLocal_146[iLocal_84]));
								}
								if (unk_0xA6DB27D19ECBB7DA(iLocal_124[iLocal_84]))
								{
									unk_0x86A652570E5F25DD(&(iLocal_124[iLocal_84]));
								}
								if (unk_0xA6DB27D19ECBB7DA(iLocal_127[iLocal_84]))
								{
									unk_0x86A652570E5F25DD(&(iLocal_127[iLocal_84]));
								}
								if (unk_0xA6DB27D19ECBB7DA(uLocal_130[iLocal_84]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_130[iLocal_84]));
								}
								unk_0xE532F5D78798DAAB(iLocal_369);
								unk_0xE532F5D78798DAAB(iLocal_370);
								unk_0xE532F5D78798DAAB(iLocal_371);
								iLocal_84++;
							}
							func_56();
							iLocal_119 = func_55(Local_55, 1);
							func_4(-1);
							iLocal_74 = 1;
							unk_0xE1EF3C1216AFF2CD(iLocal_139);
							if (!unk_0x9BB01E3834671191(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
							{
								unk_0x9F3480FE65DB31B5(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6()));
							}
							iLocal_49 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_12();
						}
						break;
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
				{
					unk_0x75A16C3DA34F1245(iLocal_119, bLocal_82);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
				{
					unk_0x75A16C3DA34F1245(iLocal_120, bLocal_82);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_121))
				{
					unk_0x75A16C3DA34F1245(iLocal_121, bLocal_82);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_122))
				{
					unk_0x75A16C3DA34F1245(iLocal_122, bLocal_82);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_123))
				{
					unk_0x75A16C3DA34F1245(iLocal_123, bLocal_82);
				}
			}
			else
			{
				if (unk_0x4C241E39B23DF959(iLocal_154, false))
				{
					unk_0xEA386986E786A54F(&iLocal_154);
				}
				func_240();
			}
		}
		else
		{
			func_1();
			func_240();
		}
	}
}

void func_1()
{
	func_139();
	unk_0x4EDE34FBADD967A6(0);
}

int func_2()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		switch (iLocal_436)
		{
			case 0:
				func_93(1, 1, 0, 0);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					while (!func_3(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 1093140480, 1, 1056964608, 0, 1))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
				{
					if (unk_0x5891CAC5D4ACFF74(iLocal_139))
					{
						unk_0xED74007FFB146BC2(iLocal_139);
					}
				}
				func_43();
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 1280);
				while (!func_149(&uLocal_175, cLocal_386, "RESNA_ARRV", 4, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (!unk_0x997ABD671D25CA0B(iLocal_139, false))
				{
					unk_0x5AD23D40115353AC(iLocal_139, unk_0xD80958FC74E988A6(), 0);
				}
				unk_0x69F4BE8C8CC4796C(iLocal_139, unk_0xD80958FC74E988A6(), 30000, 2052, 2);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_139, 30000, 2052, 2);
				iLocal_436++;
				break;
			
			case 1:
				if (!func_83())
				{
					unk_0xE8854A4326B9E12B(&iVar0);
					if (unk_0x997ABD671D25CA0B(iLocal_139, false))
					{
						unk_0x504D54DF3F6F2247(0, 0, 0);
					}
					unk_0x15D3A79D4E44B913(0, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, false, 40000f);
					unk_0x93B93A37987F1F3D(0, 73.0132f, 0);
					unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_SMOKING", 0, true);
					unk_0x39E72BC99E6360CB(iVar0);
					unk_0x5ABA3986D90D8A3B(iLocal_139, iVar0);
					unk_0x3841422E9C488D8C(&iVar0);
					iLocal_436++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
				{
					if (!unk_0x997ABD671D25CA0B(iLocal_139, false))
					{
						unk_0xC1B1E9A034A63A62(0);
						unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
						func_93(0, 1, 0, 0);
						iLocal_436++;
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_3(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)
{
	iLocal_388 = unk_0x9CD27B0045628463();
	iLocal_389 = iParam0;
	iLocal_387 = 0;
}

int func_5()
{
	float fVar0;
	
	fVar0 = func_9();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bParam1)
	{
		if (!unk_0xA6DB27D19ECBB7DA(uLocal_130[iParam0]))
		{
			uLocal_130[iParam0] = func_7(unk_0x3FEF770D40960D5A(iLocal_155[iParam0], false), 0);
			unk_0x03D7FB09E75D6B7E(uLocal_130[iParam0], 1);
			unk_0xAE9FC9EF6A9FAC79(uLocal_130[iParam0], 9);
		}
		else
		{
			Var0 = { unk_0x586AFE3FF72D996E(uLocal_130[iParam0]) };
			Var3 = { unk_0x3FEF770D40960D5A(iLocal_155[iParam0], false) };
			Var0.f_0 = (Var0.f_0 + ((Var3.f_0 - Var0.f_0) / 25f));
			Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / 25f));
			Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / 25f));
			unk_0xAE2AF67E9D9AF65D(uLocal_130[iParam0], Var0);
		}
	}
	else if (unk_0xA6DB27D19ECBB7DA(uLocal_130[iParam0]))
	{
		unk_0x86A652570E5F25DD(&(uLocal_130[iParam0]));
	}
}

int func_7(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_8(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_9()
{
	int iVar0;
	float fVar1;
	
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_143)
	{
		if ((unk_0x7239B21A38F536BA(iLocal_143[iVar0]) && !unk_0x84A2DD9AC37C35C1(iLocal_143[iVar0])) && !unk_0x5F9532F3B5CC2551(iLocal_143[iVar0]))
		{
			if (fVar1 == -1f)
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_143[iVar0], false));
			}
			else if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_143[iVar0], false)) < fVar1)
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_143[iVar0], false));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_146)
	{
		if ((unk_0x7239B21A38F536BA(iLocal_146[iVar0]) && !unk_0x84A2DD9AC37C35C1(iLocal_146[iVar0])) && !unk_0x5F9532F3B5CC2551(iLocal_146[iVar0]))
		{
			if (fVar1 == -1f)
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_146[iVar0], false));
			}
			else if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_146[iVar0], false)) < fVar1)
			{
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_146[iVar0], false));
			}
		}
		iVar0++;
	}
	return fVar1;
}

int func_10()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false)) && unk_0xA3EE4A07279BB9DB(iLocal_139, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			return 1;
		}
		if ((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(iLocal_139, false)) && !unk_0x47E4E977581C5B55(iLocal_139))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(iLocal_139, false), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false)) < 400f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_11()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -20f, -20f, -20f };
	Var3 = { 20f, 20f, 20f };
	if (!iLocal_366)
	{
		Var0 = { unk_0x3FEF770D40960D5A(iLocal_139, false) + Var0 };
		Var3 = { unk_0x3FEF770D40960D5A(iLocal_139, false) + Var3 };
		if (func_149(&uLocal_175, cLocal_386, "RESNA_MOR", 4, func_190(), 0, 0))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_139) && !unk_0x84A2DD9AC37C35C1(iLocal_146[0]))
			{
				unk_0x69F4BE8C8CC4796C(iLocal_139, iLocal_143[0], 20000, 16, 3);
			}
			iLocal_366 = 1;
		}
	}
}

void func_12()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		unk_0x1913FE4CBF41C463(iLocal_139, 317, true);
	}
	func_17(-1, 0);
	func_16();
	func_13();
	func_240();
}

void func_13()
{
	func_14();
}

int func_14()
{
	if (func_15(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_15(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_16()
{
	return 1;
}

void func_17(int iParam0, int iParam1)
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
			func_28("RE_REWARD", 1, 0, 4000, 10000, func_31(), 0, 138, 0);
			func_27(51);
		}
		if (func_26(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_25(iParam0, iParam1) != 322)
		{
			func_19(func_25(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_18(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_18(7);
			}
			else
			{
				func_18(1);
			}
		}
	}
}

void func_18(int iParam0)
{
	Global_97159 = iParam0;
}

void func_19(int iParam0, var uParam1, var uParam2)
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_20();
	}
}

void func_20()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_22(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_21() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_14();
				}
			}
		}
	}
}

int func_21()
{
	return Global_24444;
}

int func_22(int iParam0, int iParam1)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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
		iParam2 = func_24();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_24()
{
	return Global_1312736;
}

int func_25(int iParam0, int iParam1)
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

int func_26(int iParam0)
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

void func_27(int iParam0)
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_28(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_29(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_29(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_30();
	}
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_31()
{
	func_32();
	switch (Global_97173.f_1729.f_539.f_3213)
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

void func_32()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_36(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_35(unk_0xD80958FC74E988A6());
			if (func_34(iVar0) && (!func_33(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_34(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_33(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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
	if (Global_24679)
	{
		func_18(4);
		return 1;
	}
	return 0;
}

void func_43()
{
	Global_14558 = 0;
	func_44();
}

void func_44()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

int func_45(int iParam0)
{
	int iVar0;
	
	if ((unk_0x7239B21A38F536BA(iParam0) && !unk_0x84A2DD9AC37C35C1(iParam0)) && !unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (!unk_0xE31C2C72B8692B64(iParam0) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iParam0, false)) < 10000f)
		{
			iVar0 = 1;
		}
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iParam0, false)) < 2500f)
		{
			iVar0 = 1;
		}
		if (unk_0xC86D67D52A707CF8(unk_0xD80958FC74E988A6(), iParam0, true))
		{
			iVar0 = 1;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_139) && unk_0x997ABD671D25CA0B(iLocal_139, false))
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(iLocal_139, false), false))
			{
				if (unk_0xC86D67D52A707CF8(unk_0x9A9112A0FE9A4713(iLocal_139, false), iParam0, true))
				{
					iVar0 = 1;
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != unk_0x9A9112A0FE9A4713(iLocal_139, false))
			{
				if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if (unk_0xC86D67D52A707CF8(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), iParam0, true))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iLocal_414))
	{
		unk_0x963D27A58DF860AC(joaat("prop_ld_test_01"));
		if (unk_0x98A4EB5D89A0C952(joaat("prop_ld_test_01")))
		{
			iLocal_414 = unk_0x509D5878EB39E842(joaat("prop_ld_test_01"), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) + Vector(2f, 0f, 0f), true, true, false);
			unk_0x1A9205C1B9EE827F(iLocal_414, false, false);
			unk_0xEA1C610A04DB6BBB(iLocal_414, 0);
			unk_0x428CA6DBD1094446(iLocal_414, true);
		}
	}
	unk_0xA3BB2E9555C05A8F("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((unk_0x4C241E39B23DF959(iLocal_155[iVar1], false) && !unk_0x84A2DD9AC37C35C1(iLocal_143[iVar1])) && unk_0xA808AA1D79230FC2(iLocal_143[iVar1], iLocal_155[iVar1]))
			{
				Var2 = { unk_0x3FEF770D40960D5A(iLocal_155[iVar1], false) };
				Var5 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
				if (unk_0xB7A628320EFF8E47(Var5, Local_415[0 /*7*/]) > 400f && unk_0xB7A628320EFF8E47(Var5, Local_415[1 /*7*/]) > 400f)
				{
					if (unk_0xB7A628320EFF8E47(Var5, Local_415[iVar1 /*7*/]) > 900f)
					{
						if (func_48(iLocal_155[iVar1], iVar0, iLocal_414, Var5, unk_0xAFBD61CC738D9EB9(iVar0, 2)))
						{
							Local_415[iVar1 /*7*/] = { Var5 };
							Local_415[iVar1 /*7*/].f_3 = { unk_0xAFBD61CC738D9EB9(iVar0, 2) };
							Local_415[iVar1 /*7*/].f_6 = unk_0x652D2EEEF1D3E62C(unk_0x4805D2B1D8CF94A9(iLocal_155[iVar1]));
						}
					}
				}
				if (!func_47(Local_415[iVar1 /*7*/]))
				{
					if (!unk_0xE31C2C72B8692B64(iLocal_155[iVar1]))
					{
						iLocal_433[iVar1] = unk_0x9CD27B0045628463();
					}
					else if (((unk_0x9CD27B0045628463() - iLocal_433[iVar1]) > 1000 && (unk_0x9CD27B0045628463() - iLocal_430[0]) > 2000) && (unk_0x9CD27B0045628463() - iLocal_430[1]) > 2000)
					{
						if (!unk_0xE33D59DA70B58FDF(Local_415[iVar1 /*7*/], 3f) && !unk_0xE33D59DA70B58FDF(Var2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (unk_0x4C241E39B23DF959(iLocal_155[iVar9], false))
							{
								fVar8 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iLocal_155[iVar9], false), Local_415[iVar1 /*7*/]);
							}
							if ((((unk_0xB7A628320EFF8E47(Var2, Var5) > 625f && unk_0xB7A628320EFF8E47(Var2, Local_415[iVar1 /*7*/]) < unk_0xB7A628320EFF8E47(Var2, Var5)) && unk_0xB7A628320EFF8E47(Var5, Local_415[iVar1 /*7*/]) > 400f) && fVar8 > 5f) && func_48(iLocal_155[iVar1], iVar0, iLocal_414, Local_415[iVar1 /*7*/], Local_415[iVar1 /*7*/].f_3))
							{
								unk_0xBE31FD6CE464AC59(Local_415[iVar1 /*7*/], 3f, 0);
								unk_0x01C7B9B38428AEB6(Local_415[iVar1 /*7*/], 3f, 0, 0, 0, 0, 0);
								unk_0x06843DA7060A026B(iLocal_155[iVar1], Local_415[iVar1 /*7*/], true, false, false, true);
								unk_0x8524A8B0171D5E07(iLocal_155[iVar1], Local_415[iVar1 /*7*/].f_3, 2, true);
								unk_0x49733E92263139D1(iLocal_155[iVar1]);
								unk_0xAB54A438726D25D5(iLocal_155[iVar1], (Local_415[iVar1 /*7*/].f_6 + 5f));
								unk_0x3C08A8E30363B353(iLocal_143[iVar1], unk_0xD80958FC74E988A6());
								unk_0x2497C4717C8B881E(iLocal_155[iVar1], 1, 1);
								iLocal_430[iVar1] = unk_0x9CD27B0045628463();
								iLocal_67 = unk_0x9CD27B0045628463() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_67 > unk_0x9CD27B0045628463())
	{
		unk_0xAF66DCEE6609B148();
	}
}

int func_47(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;
	
	if (unk_0x7239B21A38F536BA(iParam2))
	{
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iParam0), &Var7, &Var10);
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x73D57CFFDD12C355((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x73D57CFFDD12C355((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x73D57CFFDD12C355((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x73D57CFFDD12C355(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x73D57CFFDD12C355(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0x06843DA7060A026B(iParam2, Param3, true, false, false, true);
		unk_0x8524A8B0171D5E07(iParam2, Param6, 2, true);
		Var1 = { unk_0x1899F328B0E12848(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x1899F328B0E12848(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		iVar35 = unk_0x28579D1B8F8AAC80(Var4, Var1, fVar22, 19, unk_0xD80958FC74E988A6(), 4);
		if (unk_0x3D87450E15D98694(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_49()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_55) < 1500f || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_64) < 1500f)
			{
				if (func_50())
				{
					iLocal_72 = 1;
				}
			}
		}
	}
}

int func_50()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	iVar0 = 524852;
	iVar1 = 6;
	if (unk_0x4C241E39B23DF959(iLocal_155[0], false) && unk_0x4C241E39B23DF959(iLocal_155[1], false))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_143[0]))
		{
			if (unk_0x77F1BEB8863288D5(iLocal_143[0], -1273030092) == 1)
			{
				if (!unk_0x8785E6E40C7A8818(iLocal_143[0]))
				{
					unk_0x2F8AF0E82773A171(iLocal_143[0], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
				}
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_143[1]))
		{
			if (unk_0x77F1BEB8863288D5(iLocal_143[1], -1273030092) == 1)
			{
				if (!unk_0x8785E6E40C7A8818(iLocal_143[1]))
				{
					unk_0x2F8AF0E82773A171(iLocal_143[1], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		unk_0x963D27A58DF860AC(iLocal_369);
		unk_0x963D27A58DF860AC(iLocal_371);
		unk_0x963D27A58DF860AC(iLocal_370);
		if ((unk_0x98A4EB5D89A0C952(iLocal_369) && unk_0x98A4EB5D89A0C952(iLocal_371)) && unk_0x98A4EB5D89A0C952(iLocal_370))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				Var5 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
				if (unk_0xA4822F1CF23F4810(&Var5, &Var2, &Var8, 0, 1127481344, 30f, 0, 1, 1))
				{
					if ((func_51(Var2) && !unk_0xE33D59DA70B58FDF(Var2, 5f)) && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							unk_0xA56F01F3765B93A0(Var2, 3f, false, false, false, false);
							Var2.f_0 = (Var2.f_0 + unk_0xBBDA792448DB5A89(iVar11));
							iLocal_155[iVar11] = unk_0xAF35D0D2583051B0(iLocal_369, Var2, Var8.f_2, 1, 1);
							iLocal_143[iVar11] = unk_0x7DD959874C1FD534(iLocal_155[iVar11], 22, iLocal_371, -1, true, true);
							iLocal_146[iVar11] = unk_0x7DD959874C1FD534(iLocal_155[iVar11], 22, iLocal_370, 0, true, true);
							unk_0xC80A74AC829DDD92(iLocal_146[iVar11], iLocal_373);
							unk_0xC80A74AC829DDD92(iLocal_143[iVar11], iLocal_373);
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
								{
									unk_0x3C08A8E30363B353(iLocal_143[iVar11], unk_0xD80958FC74E988A6());
								}
							}
							else
							{
								unk_0x9454528DF15D657A(iLocal_143[iVar11], iLocal_155[iVar11], unk_0xD80958FC74E988A6(), iVar1, 50f, iVar0, 5f, 10f, true);
							}
							unk_0xEBD76F2359F190AC(iLocal_143[iVar11], false);
							unk_0xEBD76F2359F190AC(iLocal_146[iVar11], false);
							unk_0x971D38760FBC02EF(iLocal_143[iVar11], true);
							unk_0xBF0FD6E56C964FCB(iLocal_143[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							unk_0xAB54A438726D25D5(iLocal_155[iVar11], (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) + 5f));
							iVar1 = 11;
							unk_0xBF0FD6E56C964FCB(iLocal_146[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							unk_0x2F8AF0E82773A171(iLocal_146[iVar11], unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 200f, 70, false, -753768974);
							unk_0x971D38760FBC02EF(iLocal_146[iVar11], true);
							unk_0x7A6535691B477C48(iLocal_143[iVar11], 1);
							unk_0x7A6535691B477C48(iLocal_146[iVar11], 1);
							unk_0x1913FE4CBF41C463(iLocal_143[iVar11], 42, true);
							unk_0x1913FE4CBF41C463(iLocal_146[iVar11], 42, true);
							unk_0x7AEFB85C1D49DEB6(iLocal_143[iVar11], 15);
							unk_0x7AEFB85C1D49DEB6(iLocal_146[iVar11], 15);
							iVar11++;
						}
						func_100();
					}
				}
			}
		}
	}
	return 0;
}

int func_51(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param0 - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
	Var3 = { unk_0x0A794A5A57F8DF91(unk_0xD80958FC74E988A6()) };
	if (unk_0x73D57CFFDD12C355(unk_0x186FC4BE848E1C92(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) >= 90f)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_53(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_8(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_8(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_8(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_54()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_138))
	{
		unk_0x86A652570E5F25DD(&iLocal_138);
	}
}

int func_55(struct<3> Param0, bool bParam3)
{
	return func_7(Param0, bParam3);
}

void func_56()
{
	if (func_150() == 2)
	{
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_138))
		{
			func_59();
			iLocal_138 = func_55(Local_64, 0);
			unk_0xDF735600A4696DAF(iLocal_138, 269);
			func_57();
		}
	}
}

void func_57()
{
	if (!func_58())
	{
		if (func_150() == 2)
		{
			Global_24678 = 1;
		}
	}
}

int func_58()
{
	if (Global_97173.f_28117.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	if (func_150() == 2)
	{
		if (!Global_24680)
		{
			func_60("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_60(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_61()
{
	struct<6> Var0;
	char* sVar6;
	int iVar7;
	
	if (!iLocal_86[0])
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_139, false)) < 400f)
		{
			if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
			{
				iLocal_86[0] = 1;
			}
		}
	}
	if (!iLocal_89[0])
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_139, false)) < 400f && (unk_0x9CD27B0045628463() - iLocal_103) > 30000)
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(iLocal_139, false))
			{
				if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if (!func_78(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						iLocal_89[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_89[1])
	{
		if (func_10())
		{
			iLocal_103 = unk_0x9CD27B0045628463();
			iLocal_89[0] = 0;
			iLocal_89[1] = 0;
		}
	}
	if (!iLocal_92[0])
	{
		if (func_10())
		{
			if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 1f)
			{
				fLocal_101 = (fLocal_101 + unk_0x15C40837039FFAF7());
				if (fLocal_101 > 30f)
				{
					iLocal_92[0] = 1;
				}
			}
			else if (fLocal_101 > 0f)
			{
				fLocal_101 = (fLocal_101 - (unk_0x15C40837039FFAF7() * 10f));
			}
		}
	}
	else if (iLocal_92[1])
	{
		fLocal_101 = 0f;
		iLocal_92[0] = 0;
		iLocal_92[1] = 0;
	}
	if (!iLocal_95[0])
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(iLocal_139, false))
		{
			if (!unk_0x7239B21A38F536BA(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))
			{
				fLocal_102 = (fLocal_102 + unk_0x15C40837039FFAF7());
				if (fLocal_102 > 15f)
				{
					iLocal_95[0] = 1;
				}
			}
		}
		else if (fLocal_102 > 0f)
		{
			fLocal_102 = (fLocal_102 - (unk_0x15C40837039FFAF7() * 10f));
		}
	}
	if ((((!iLocal_92[0] || (iLocal_92[0] && iLocal_92[1])) && (!iLocal_86[0] || (iLocal_86[0] && iLocal_86[1]))) && (!iLocal_89[0] || (iLocal_89[0] && iLocal_89[1]))) && (!iLocal_95[0] || (iLocal_95[0] && iLocal_95[1])))
	{
		switch (iLocal_389)
		{
			case 0:
				switch (iLocal_387)
				{
					case 0:
						if (!func_83())
						{
							iLocal_387++;
						}
						break;
					
					case 1:
						if (func_10())
						{
							if (func_149(&uLocal_175, cLocal_386, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 2:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_RESP", 0))
								{
									iLocal_387++;
								}
							}
						}
						break;
					
					case 3:
						if (func_10())
						{
							if (func_76())
							{
								if (func_149(&uLocal_175, cLocal_386, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_387++;
								}
							}
							else if (func_149(&uLocal_175, cLocal_386, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 4:
						if (!func_83())
						{
							func_4(1);
						}
						break;
				}
				break;
			
			case 1:
				if ((unk_0x9CD27B0045628463() - iLocal_388) > 15000)
				{
					switch (iLocal_387)
					{
						case 0:
							if (func_10())
							{
								if (func_149(&uLocal_175, cLocal_386, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 1:
							if (!func_83())
							{
								iLocal_387++;
							}
							break;
						
						case 2:
							if (func_150() == 2)
							{
								if (func_64("RESNA_B1T", func_10()))
								{
									iLocal_387++;
								}
							}
							else if (func_10())
							{
								if (func_77("RESNA_B1", 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 3:
							if (func_64("RESNA_B2", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 4:
							if (func_10())
							{
								if (func_77("RESNA_B2", 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 5:
							if (!func_83())
							{
								func_4(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if ((unk_0x9CD27B0045628463() - iLocal_388) > 15000)
				{
					switch (iLocal_387)
					{
						case 0:
							if (func_10())
							{
								if (func_77("RESNA_B4", 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 1:
							if (func_64("RESNA_B4", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 2:
							if (func_10())
							{
								if (func_77("RESNA_B4", "b"))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 3:
							if (func_64("RESNA_B5b", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 4:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if ((unk_0x9CD27B0045628463() - iLocal_388) > 15000)
				{
					switch (iLocal_387)
					{
						case 0:
							if (func_10())
							{
								if (func_149(&uLocal_175, cLocal_386, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 1:
							if (!func_83())
							{
								if (func_10())
								{
									if (func_77("RESNA_B5", 0))
									{
										iLocal_387++;
									}
								}
							}
							break;
						
						case 2:
							if (func_64("RESNA_B5b", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 3:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if ((unk_0x9CD27B0045628463() - iLocal_388) > 15000)
				{
					switch (iLocal_387)
					{
						case 0:
							if (func_64("RESNA_B6", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 1:
							if (func_10())
							{
								if (func_77("RESNA_B6", 0))
								{
									iLocal_387++;
								}
							}
							break;
						
						case 2:
							if (func_64("RESNA_RUNOUT", func_10()))
							{
								iLocal_387++;
							}
							break;
						
						case 3:
							if (!func_83())
							{
								func_4(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_387 > 1 && iLocal_387 < 3)
				{
					if (!unk_0x2AFE52F782F25775(iLocal_139))
					{
						unk_0xBD2A8EC3AF4DE7DB(iLocal_139, 1, 1);
					}
				}
				else if (unk_0x2AFE52F782F25775(iLocal_139))
				{
					unk_0xBD2A8EC3AF4DE7DB(iLocal_139, 0, 1);
				}
				switch (iLocal_387)
				{
					case 0:
						if ((unk_0x9CD27B0045628463() - iLocal_388) > 10000)
						{
							if (func_10())
							{
								if (func_149(&uLocal_175, cLocal_386, "RESNA_CELL1", 8, 0, 0, 0))
								{
									unk_0xBAF20C5432058024(iLocal_139, false);
									unk_0x6373D1349925A70E(iLocal_139, false);
									unk_0xF833DDBA3B104D43(iLocal_139, false, false);
									iLocal_387++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = { func_63() };
						if (unk_0x0C515FAB3FF9EA92(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_387++;
						}
						break;
					
					case 2:
						if (!func_83())
						{
							iLocal_388 = unk_0x9CD27B0045628463();
							iLocal_387++;
						}
						break;
					
					case 3:
						if ((unk_0x9CD27B0045628463() - iLocal_388) > 2000)
						{
							if (func_10() && !unk_0xA3F3564A5B3646C0(iLocal_139))
							{
								if (func_77("RESNA_CELLR", 0))
								{
									unk_0xBAF20C5432058024(iLocal_139, true);
									unk_0x6373D1349925A70E(iLocal_139, true);
									unk_0xF833DDBA3B104D43(iLocal_139, true, false);
									iLocal_387++;
								}
							}
						}
						break;
					
					case 4:
						if (func_10())
						{
							if (func_149(&uLocal_175, cLocal_386, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_387)
				{
					case 0:
						if (func_149(&uLocal_175, cLocal_386, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_387++;
						}
						break;
					
					case 1:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3", 0))
								{
									iLocal_387++;
								}
							}
						}
						break;
					
					case 2:
						if (func_10())
						{
							if (func_149(&uLocal_175, cLocal_386, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 3:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3B", 0))
								{
									iLocal_387++;
								}
							}
						}
						break;
					
					case 4:
						if (func_10())
						{
							if (func_149(&uLocal_175, cLocal_386, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 5:
						if (!func_83())
						{
							if (func_10())
							{
								if (func_77("RESNA_B3C", 0))
								{
									iLocal_387++;
								}
							}
						}
						break;
					
					case 6:
						if (func_10())
						{
							if (func_149(&uLocal_175, cLocal_386, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 7:
						if (!func_83())
						{
							iLocal_387++;
						}
						break;
					
					case 8:
						if (func_10())
						{
							if (func_150() == 2)
							{
								if (!func_83())
								{
									if (func_77("RESNA_B3D", 0))
									{
										iLocal_387++;
									}
								}
							}
							else if (func_150() == 0)
							{
								if (func_64("RESNA_B3DM", func_10()))
								{
									iLocal_387++;
								}
							}
							else if (func_64("RESNA_B3DF", func_10()))
							{
								iLocal_387++;
							}
						}
						break;
					
					case 9:
						if (!func_83())
						{
							func_4(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_150() == 2 && (unk_0x9CD27B0045628463() - iLocal_388) > 15000)
				{
					switch (iLocal_387)
					{
						case 0:
							if (func_81(Local_55))
							{
								iLocal_387++;
							}
							break;
						
						case 1:
							if (func_64("RESNA_TREV", func_10()))
							{
								iLocal_387++;
								iLocal_388 = unk_0x9CD27B0045628463();
							}
							break;
						
						case 2:
							if (func_81(Local_55))
							{
								iLocal_387++;
							}
							break;
						
						case 3:
							if (func_64("RESNA_CULT", func_10()))
							{
								iLocal_387++;
								iLocal_388 = unk_0x9CD27B0045628463();
							}
							break;
						
						case 4:
							if (func_81(Local_55) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Local_64) < 250f)
							{
								iLocal_387++;
							}
							break;
						
						case 5:
							if (func_64("RESNA_NEAR", func_10()))
							{
								iLocal_387++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_83())
	{
		if (iLocal_375 && !iLocal_376)
		{
			Local_377 = { func_62() };
			func_43();
			iLocal_376 = 1;
		}
	}
	else
	{
		if (iLocal_86[0] && !iLocal_86[1])
		{
			if (func_149(&uLocal_175, cLocal_386, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_86[1] = 1;
			}
		}
		if (iLocal_95[0] && !iLocal_95[1])
		{
			if (func_149(&uLocal_175, cLocal_386, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_95[1] = 1;
			}
		}
		if (iLocal_92[0] && !iLocal_92[1])
		{
			if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 3f)
			{
				if (func_149(&uLocal_175, cLocal_386, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_92[1] = 1;
				}
			}
			else
			{
				iLocal_92[0] = 0;
			}
		}
		if (iLocal_89[0] && !iLocal_89[1])
		{
			if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0x997ABD671D25CA0B(iLocal_139, false)) && unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				iVar7 = unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false));
				if ((unk_0xB50C0B0CEDC6CE84(iVar7) || unk_0xBF94DD42F63BDED2(iVar7)) || unk_0x39DAC362EE65FA28(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_149(&uLocal_175, cLocal_386, sVar6, 8, 0, 0, 0))
				{
					iLocal_89[1] = 1;
				}
			}
			else
			{
				iLocal_89[0] = 0;
			}
		}
	}
}

struct<6> func_62()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xAC09CA973C564252(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xAC09CA973C564252(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_63()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_64(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_375)
		{
			if (func_149(&uLocal_175, cLocal_386, sParam0, 8, 0, 0, 0))
			{
				iLocal_375 = 1;
				iLocal_376 = 0;
			}
		}
		else if (iLocal_376)
		{
			if (func_65(&uLocal_175, cLocal_386, sParam0, &Local_377, 8, 0, 0))
			{
				iLocal_376 = 0;
			}
		}
		if ((iLocal_375 && !iLocal_376) && bParam1)
		{
			if (iLocal_383 == -1)
			{
				if (!func_83())
				{
					iLocal_383 = unk_0x9CD27B0045628463();
				}
			}
			else if ((unk_0x9CD27B0045628463() - iLocal_383) > 500)
			{
				iLocal_383 = -1;
				iLocal_375 = 0;
				iLocal_376 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_375 && !iLocal_376)
	{
		Local_377 = { func_62() };
		func_43();
		iLocal_376 = 1;
	}
	return 0;
}

bool func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_66(sParam2, iParam4, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_73(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_72();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_71();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_70())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_69())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_68();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_67();
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
		func_74();
	}
	return 0;
}

void func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_68()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_69()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_71()
{
	if (func_33(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_150();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_72()
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

bool func_73(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_74()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_75(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

int func_76()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_77(char* sParam0, char* sParam1)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_150() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_150() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (!unk_0xCA042B6957743895(sParam1))
	{
		StringConCat(&Var0, sParam1, 24);
	}
	if (func_149(&uLocal_175, cLocal_386, &Var0, 8, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x22AC59A870E6A669(iParam0, -1))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 0))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x22AC59A870E6A669(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			Global_26 = unk_0x9CD27B0045628463();
		}
		Global_27 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_26) > iParam0)
		{
			if (func_80())
			{
				Global_26 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_80()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_81(struct<3> Param0)
{
	if (func_150() == 2)
	{
		if (func_82() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0) > (fLocal_46 + 200f) || unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

var func_82()
{
	return Global_24678;
}

int func_83()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	
	Var0 = { unk_0x1899F328B0E12848(iLocal_154, 0f, -6f, 0f) };
	if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
	{
		if (unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), Var0, 5f, 5f, 5f, false, true, 0))
		{
			unk_0x80CA6A8B6C094CC4(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), iLocal_3, &Var3, &fVar6, &uVar7, 1, 3f, 0f);
			unk_0x8E2530AA8ADA980E(unk_0xB6997A7EB3F5C8C0(), fVar6);
			unk_0x06843DA7060A026B(unk_0xB6997A7EB3F5C8C0(), Var3, true, false, false, true);
		}
	}
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11[4];
	struct<3> Var24[4];
	struct<3> Var37[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	iVar0 = 0;
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x7239B21A38F536BA(iLocal_154))
	{
		iVar1 = iParam0;
		unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iVar1), &Var2, &Var5);
		Var8 = { Var5 - Var2 };
		Var11[0 /*3*/] = { unk_0x1899F328B0E12848(iVar1, (-Var8.f_0 / 2f), (Var8.f_1 / 2f), 0f) };
		Var11[1 /*3*/] = { unk_0x1899F328B0E12848(iVar1, (Var8.f_0 / 2f), (Var8.f_1 / 2f), 0f) };
		Var11[2 /*3*/] = { unk_0x1899F328B0E12848(iVar1, (Var8.f_0 / 2f), (-Var8.f_1 / 2f), 0f) };
		Var11[3 /*3*/] = { unk_0x1899F328B0E12848(iVar1, (-Var8.f_0 / 2f), (-Var8.f_1 / 2f), 0f) };
		Var24[0 /*3*/] = { unk_0x1899F328B0E12848(iLocal_154, -1f, -2.5f, 0f) };
		Var24[1 /*3*/] = { unk_0x1899F328B0E12848(iLocal_154, 1f, -2.5f, 0f) };
		Var24[2 /*3*/] = { unk_0x1899F328B0E12848(iLocal_154, 0.75f, -5f, 0f) };
		Var24[3 /*3*/] = { unk_0x1899F328B0E12848(iLocal_154, -0.75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < Var24.f_0)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == Var24.f_0)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < Var11.f_0)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == Var11.f_0)
				{
					iVar53 = 0;
				}
				if (func_86(Var24[iVar50 /*3*/], Var24[iVar52 /*3*/], Var11[iVar51 /*3*/], Var11[iVar53 /*3*/], &(Var37[iVar50 /*3*/])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

int func_86(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_88(fVar0, fVar1) || fVar11 > func_87(fVar0, fVar1)) || fVar11 < func_88(fVar2, fVar3)) || fVar11 > func_87(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_88(fVar4, fVar5) || fVar12 > func_87(fVar4, fVar5)) || fVar12 < func_88(fVar6, fVar7)) || fVar12 > func_87(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_87(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_88(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_89(var uParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xA7A932170592B50E(uParam0->f_14))
	{
		unk_0x865908C81A2C22E9(uParam0->f_14, false);
	}
	if (unk_0xA7A932170592B50E(uParam0->f_15))
	{
		unk_0x865908C81A2C22E9(uParam0->f_15, false);
	}
	if (unk_0x7239B21A38F536BA(iParam1))
	{
		uParam0->f_14 = unk_0xC3981DCE61D9E13F("DEFAULT_SCRIPTED_CAMERA", false);
		unk_0x4D41783FB745E42E(uParam0->f_14, unk_0x1899F328B0E12848(iParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			unk_0xFEDB7D269E8C60E3(uParam0->f_14, iParam1, *uParam0, true);
		}
		if (bParam2)
		{
			unk_0x85973643155D0B07(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			Var0 = { func_92(unk_0x1899F328B0E12848(iParam1, uParam0->f_3), unk_0x1899F328B0E12848(iParam1, *uParam0)) };
			Var3 = { func_90(Var0) };
			unk_0x85973643155D0B07(uParam0->f_14, Var3, 2);
		}
		unk_0xB13C14F66A00D047(uParam0->f_14, uParam0->f_12);
		unk_0x026FB97D0A425F84(uParam0->f_14, true);
	}
}

Vector3 func_90(struct<3> Param0)
{
	struct<3> Var0;
	
	Param0.f_2 = func_91(Param0.f_2);
	Var0.f_2 = unk_0x8927CBF9D22261A4(-Param0.f_0, Param0.f_1);
	Var0.f_0 = unk_0xC843060B5765DCE7(Param0.f_2);
	Var0.f_1 = 0f;
	return Var0;
}

float func_91(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_92(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { Param0 - Param3 };
	fVar6 = unk_0x71D93B57D07F9804((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)));
	Var3.f_0 = (Var0.f_0 / fVar6);
	Var3.f_1 = (Var0.f_1 / fVar6);
	Var3.f_2 = (Var0.f_2 / fVar6);
	return Var3;
}

void func_93(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_99(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_69())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_98(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_99(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_98(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_94(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_94(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_98(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_100()
{
	Global_14558 = 0;
	func_74();
}

int func_101(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

void func_102()
{
	int iVar0;
	
	if (unk_0x84A2DD9AC37C35C1(iLocal_140))
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
		{
			unk_0x86A652570E5F25DD(&iLocal_120);
		}
		iVar0++;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_122))
		{
			unk_0x86A652570E5F25DD(&iLocal_122);
		}
		iVar0++;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_123))
		{
			unk_0x86A652570E5F25DD(&iLocal_123);
		}
		iVar0++;
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		if (unk_0x9CD27B0045628463() > iLocal_85 + 8000)
		{
			func_103(iLocal_139, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_85 = unk_0x9CD27B0045628463();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_77 = true;
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_104(iParam2), 1);
}

int func_104(int iParam0)
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

void func_105()
{
	int iVar0;
	struct<3> Var1[4];
	
	Var1[0 /*3*/] = { 986.8661f, -113.7463f, 72.9153f };
	Var1[1 /*3*/] = { 964.0147f, -144.0337f, 73.4875f };
	Var1[2 /*3*/] = { 954.2817f, -137.429f, 73.4781f };
	Var1[3 /*3*/] = { 976.5977f, -149.0529f, 73.2404f };
	if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_58, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_149[iVar0] = unk_0xD49F9B0955C367DE(22, iLocal_370, Var1[iVar0 /*3*/], 0f, true, true);
			unk_0xBF0FD6E56C964FCB(iLocal_149[iVar0], joaat("weapon_sawnoffshotgun"), 999999, true, true);
			unk_0xC80A74AC829DDD92(iLocal_149[iVar0], iLocal_373);
			unk_0xF166E48407BAC484(iLocal_149[iVar0], unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x1913FE4CBF41C463(iLocal_149[iVar0], 42, true);
			iLocal_133[iVar0] = func_160(iLocal_149[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_75 = 1;
	}
}

void func_106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_149[iVar0]))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_133[iVar0]))
			{
				unk_0x86A652570E5F25DD(&(iLocal_133[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_76 = true;
	}
}

void func_107(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446207.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_108(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_108(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_108(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_109()
{
	if (unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		return 1;
	}
	else if (unk_0x01FEE67DB37F59B2(iLocal_141))
	{
		return 1;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_140))
	{
		return 1;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (unk_0x20B60995556D004F(iLocal_154, Local_58, 10f, 10f, 10f, false, true, 0))
		{
			bLocal_73 = true;
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (iLocal_83 > 0)
		{
			func_112();
		}
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_154, 20f, 20f, 10f, false, true, 0))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_154, unk_0xD80958FC74E988A6(), true))
			{
				if (iLocal_437 == -1)
				{
					iLocal_437 = unk_0x9CD27B0045628463();
				}
				iLocal_83++;
				unk_0xA72CD9CA74A5ECBA(iLocal_154);
				if (unk_0x83666F9FB8FEBD4B() > 10000)
				{
					if (unk_0xD53343AA4FB7DD28(0, 100) > 49)
					{
						func_149(&uLocal_175, cLocal_386, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
					{
						func_149(&uLocal_175, cLocal_386, "RESNA_FOFF", 4, 0, 0, 0);
					}
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			if (iLocal_83 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_83 = 0;
		}
		if (unk_0xB497F06B288DCFDF(iLocal_154))
		{
			return 1;
		}
	}
	return 0;
}

void func_112()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		if (unk_0x997ABD671D25CA0B(iLocal_141, false))
		{
			if (!unk_0x8785E6E40C7A8818(iLocal_141))
			{
				if (!unk_0x8DECB02F88F428BC(iLocal_141, joaat("weapon_microsmg"), false) || (unk_0x8DECB02F88F428BC(iLocal_141, joaat("weapon_microsmg"), false) && unk_0x39D22031557946C1(iLocal_141, joaat("AMMO_SHOTGUN")) == 0))
				{
					unk_0xBF0FD6E56C964FCB(iLocal_141, joaat("weapon_microsmg"), 68, true, true);
				}
				else
				{
					unk_0xADF692B254977C0C(iLocal_141, joaat("weapon_microsmg"), true);
				}
				unk_0x2F8AF0E82773A171(iLocal_141, unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
			}
		}
	}
	if ((unk_0x9CD27B0045628463() - iLocal_437) > 250)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_140))
		{
			if ((unk_0x997ABD671D25CA0B(iLocal_140, false) && unk_0x77F1BEB8863288D5(iLocal_140, 2104565373) != 1) && unk_0x77F1BEB8863288D5(iLocal_140, 2104565373) != 0)
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_140);
				unk_0xBF0FD6E56C964FCB(iLocal_140, joaat("weapon_microsmg"), 68, true, true);
				unk_0x2F8AF0E82773A171(iLocal_140, unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 100f, 100, false, -753768974);
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		if ((unk_0x997ABD671D25CA0B(iLocal_142, false) && unk_0x77F1BEB8863288D5(iLocal_142, 2104565373) != 1) && unk_0x77F1BEB8863288D5(iLocal_142, 2104565373) != 0)
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_142);
			unk_0xBF0FD6E56C964FCB(iLocal_142, joaat("weapon_pistol"), 68, true, true);
			unk_0x2F8AF0E82773A171(iLocal_142, unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 100f, 100, false, -753768974);
			unk_0x971D38760FBC02EF(iLocal_142, true);
		}
	}
	if (!iLocal_365)
	{
		iLocal_365 = 1;
	}
}

int func_113()
{
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (unk_0xC45D23BAF168AAB8(iLocal_154) < 700f || unk_0x7D5DABE888D2D074(iLocal_154) < 700f)
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

int func_114()
{
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (((unk_0xBA291848A0815CA9(iLocal_154, 0, false) || unk_0xBA291848A0815CA9(iLocal_154, 1, false)) || unk_0xBA291848A0815CA9(iLocal_154, 4, false)) || unk_0xBA291848A0815CA9(iLocal_154, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if ((unk_0x7239B21A38F536BA(iParam1) && unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x6AC7003FA6E5575E(iParam1))
			{
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam1), false))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
			else if (unk_0x524AC5ECEA15343E(iParam1))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam1)))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_116()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(iLocal_154, false))
		{
			func_117(&uLocal_340, iLocal_154, 0, 0, 1, 1, 1);
		}
		else
		{
			func_107(&uLocal_340, 0, 0);
		}
	}
	else
	{
		func_107(&uLocal_340, 0, 0);
	}
}

void func_117(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_118(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_118(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_119(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_119(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_108(iVar0))
	{
		func_137();
	}
	if (func_136(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_131(uParam0, bParam7, bParam9, 0))
			{
				func_127(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_123(iVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_108(iVar0))
							{
								func_60(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
								{
									func_122(1);
								}
							}
						}
					}
				}
			}
			else if (func_123(iVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_108(iVar0))
						{
							func_60(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
							{
								func_122(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_108(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_107(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_107(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_107(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_107(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_107(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_107(uParam0, iVar0, 1);
				}
			}
			if (!func_131(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_121(uParam0))
				{
					func_120(uParam0);
				}
			}
		}
	}
	else
	{
		func_107(uParam0, iVar0, 0);
	}
}

void func_120(var uParam0)
{
	if (func_136(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_121(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_122(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_123(char* sParam0)
{
	if (!func_124(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(sParam0) && func_108(sParam0)) || func_108("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (func_122(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_122(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_122(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_126(0))
	{
		return 0;
	}
	if (func_125())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_125()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_126(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_127(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_107(uParam0, 0, 0);
	}
	if (func_130(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_128())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_128()
{
	return func_129(unk_0x4F8644AF03D0E0D6());
}

int func_129(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_130(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_131(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_135(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_134(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_134(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_135(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_121(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_135(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_134(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_134(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_135(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_135(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_134(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_134(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_135(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_133(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_132(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_132(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_133(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_121(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_124(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_137();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_124(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_124(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_134(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_124(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_124(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

void func_138()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_142) && unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (!unk_0xA3EE4A07279BB9DB(iLocal_142, iLocal_154, false))
		{
			if (!unk_0x1F0B79228E461EC9(iLocal_154, sLocal_385, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				unk_0xF75B0D629E1C063D(iLocal_142, iLocal_154, 1);
			}
		}
	}
}

void func_139()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		unk_0xF166E48407BAC484(iLocal_141, unk_0xD80958FC74E988A6(), 0, 16);
		unk_0x971D38760FBC02EF(iLocal_141, true);
		func_149(&uLocal_175, cLocal_386, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_140))
	{
		unk_0xBF0FD6E56C964FCB(iLocal_140, joaat("weapon_smg"), 68, true, true);
		unk_0xADF692B254977C0C(iLocal_140, joaat("weapon_smg"), true);
		unk_0x63F58F7C80513AAD(iLocal_140, true);
		unk_0xF166E48407BAC484(iLocal_140, unk_0xD80958FC74E988A6(), 0, 16);
		unk_0x971D38760FBC02EF(iLocal_140, true);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		unk_0xBF0FD6E56C964FCB(iLocal_142, joaat("weapon_pistol"), 68, true, true);
		unk_0xADF692B254977C0C(iLocal_142, joaat("weapon_pistol"), true);
		unk_0xF166E48407BAC484(iLocal_142, unk_0xD80958FC74E988A6(), 0, 16);
		unk_0x971D38760FBC02EF(iLocal_142, true);
	}
	func_140();
	unk_0x3841422E9C488D8C(&iLocal_158);
	iLocal_49 = 2;
}

void func_140()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
		{
			iLocal_122 = func_160(iLocal_141, 1, 0);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_140))
	{
		if (unk_0x751B70C3D034E187(iLocal_140, unk_0xD80958FC74E988A6(), 100f, 100f, 20f, false, true, 0))
		{
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_120))
			{
				iLocal_120 = func_160(iLocal_140, 1, 0);
			}
		}
		else
		{
			unk_0x2595DD4236549CE3(&iLocal_140);
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		if (unk_0x751B70C3D034E187(iLocal_142, unk_0xD80958FC74E988A6(), 100f, 100f, 20f, false, true, 0))
		{
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_123))
			{
				iLocal_123 = func_160(iLocal_142, 1, 0);
			}
		}
		else
		{
			unk_0x2595DD4236549CE3(&iLocal_142);
		}
	}
}

void func_141()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_154, unk_0xD80958FC74E988A6(), true))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_140))
	{
		bVar0 = true;
	}
	else if (unk_0xC86D67D52A707CF8(iLocal_140, unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = true;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_141))
	{
		bVar0 = true;
	}
	else if (unk_0xC86D67D52A707CF8(iLocal_141, unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = true;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		bVar0 = true;
	}
	else if (unk_0xC86D67D52A707CF8(iLocal_142, unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = true;
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		bVar0 = true;
	}
	else if (unk_0xC86D67D52A707CF8(iLocal_139, unk_0xD80958FC74E988A6(), true))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_147();
		if (iLocal_364)
		{
			if (unk_0x25D39B935A038A26(iLocal_106))
			{
				if (unk_0xE4A310B1D7FA73CC(iLocal_106) > 0.735f)
				{
					func_146();
				}
				else if (unk_0xE4A310B1D7FA73CC(iLocal_106) > 0.4f)
				{
					func_145();
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
			{
				unk_0x3EB1FE9E8E908E15(iLocal_139, -1);
			}
			if (iLocal_81)
			{
				unk_0x428CA6DBD1094446(iLocal_154, false);
			}
			unk_0x86A652570E5F25DD(&iLocal_119);
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
			{
				iLocal_122 = func_160(iLocal_141, 1, 0);
			}
			unk_0x020E5F00CDA207BA(0.3f);
			if (!func_193())
			{
				func_151(1);
			}
			func_143();
			func_139();
		}
		else
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
			{
				if (unk_0x4C241E39B23DF959(iLocal_154, false))
				{
					unk_0x9454528DF15D657A(iLocal_141, iLocal_154, unk_0xD80958FC74E988A6(), 8, 40f, 786469, -1f, -1f, true);
				}
				else
				{
					unk_0x22B0D0E37CCB840D(iLocal_141, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_141, true);
				}
			}
			func_142();
		}
	}
}

void func_142()
{
	if (unk_0x25D39B935A038A26(iLocal_105))
	{
		unk_0x6D38F1F04CBB37EA(iLocal_105);
	}
	if (unk_0x25D39B935A038A26(iLocal_106))
	{
		unk_0x6D38F1F04CBB37EA(iLocal_106);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		unk_0xEBD76F2359F190AC(iLocal_139, true);
		if (!unk_0x1F0B79228E461EC9(iLocal_139, sLocal_385, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			unk_0x22B0D0E37CCB840D(iLocal_139, unk_0xD80958FC74E988A6(), 150f, -1, false, false);
			unk_0x971D38760FBC02EF(iLocal_139, true);
		}
	}
	func_139();
	func_240();
}

void func_143()
{
	Global_14558 = 0;
	func_144();
}

void func_144()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_145()
{
	if (unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		unk_0x6B9BBD38AB0796DF(iLocal_139, iLocal_154, unk_0xFB71170B7E76ACBA(iLocal_154, sLocal_174), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, true, false, false, false, 2, true);
		unk_0x06843DA7060A026B(iLocal_139, unk_0x3FEF770D40960D5A(iLocal_154, false), true, false, false, true);
		unk_0xAAA34F8A7CB32098(iLocal_139);
		unk_0xEA47FE3719165B94(iLocal_139, sLocal_385, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0f, false, false, false);
		unk_0x971D38760FBC02EF(iLocal_139, true);
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
		{
			iLocal_122 = func_160(iLocal_141, 1, 0);
		}
		if (unk_0x4C241E39B23DF959(iLocal_154, false))
		{
			unk_0x781B3D62BB013EF5(iLocal_154, true);
		}
		iLocal_364 = 0;
	}
}

void func_146()
{
	if (((unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0x84A2DD9AC37C35C1(iLocal_139)) && !unk_0x84A2DD9AC37C35C1(iLocal_140)) && !unk_0x84A2DD9AC37C35C1(iLocal_142))
	{
		unk_0xF75B0D629E1C063D(iLocal_142, iLocal_154, 2);
		unk_0xF75B0D629E1C063D(iLocal_140, iLocal_154, 1);
		unk_0x6B9BBD38AB0796DF(iLocal_139, iLocal_154, unk_0xFB71170B7E76ACBA(iLocal_154, sLocal_174), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, true, false, false, false, 2, true);
		unk_0x06843DA7060A026B(iLocal_139, unk_0x3FEF770D40960D5A(iLocal_154, false), true, false, false, true);
		unk_0xAAA34F8A7CB32098(iLocal_139);
		unk_0xEA47FE3719165B94(iLocal_139, sLocal_385, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0f, false, false, false);
		unk_0x971D38760FBC02EF(iLocal_139, true);
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_122))
		{
			iLocal_122 = func_160(iLocal_141, 1, 0);
		}
		if (unk_0x4C241E39B23DF959(iLocal_154, false))
		{
			unk_0x781B3D62BB013EF5(iLocal_154, false);
		}
		unk_0xAF66DCEE6609B148();
		iLocal_364 = 0;
	}
}

void func_147()
{
	if (unk_0x25D39B935A038A26(iLocal_117))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_140))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_140);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_142))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_142);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_139);
		}
		unk_0x43D3807C077261E3(iLocal_154, -4f, true);
	}
}

void func_148()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_139, unk_0xD80958FC74E988A6(), true) || unk_0x28D3FED7190D3A0B(iLocal_139))
		{
			if (unk_0x25D39B935A038A26(iLocal_117))
			{
				func_147();
			}
			func_142();
		}
	}
}

bool func_149(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_75(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_66(sParam2, iParam3, 0);
}

int func_150()
{
	func_32();
	return Global_97173.f_1729.f_539.f_3213;
}

int func_151(int iParam0)
{
	if (func_154())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_26(Global_97162))
		{
			func_152(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_26(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_60(func_153(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_60(func_153(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_60(func_153(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_153(int iParam0)
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

int func_154()
{
	switch (func_155(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_155(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_159(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_157(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_156(uParam0, iParam4);
		}
	}
	return 2;
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_157(int iParam0)
{
	return func_158(iParam0, Global_34909);
}

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_157(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_52(iParam0, bParam1, 145);
}

void func_161()
{
	if (iLocal_360)
	{
	}
	else
	{
		iLocal_360 = 1;
	}
}

int func_162()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_169())
	{
		return 1;
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_163(float fParam0, bool bParam1)
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_34(func_150()))
		{
			iVar36 = func_31();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_164(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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

void func_164(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_165(uParam1, "Abigail1", func_167(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 1:
			func_165(uParam1, "Abigail2", func_167(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 2:
			func_165(uParam1, "Barry1", func_167(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 3:
			func_165(uParam1, "Barry2", func_167(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 4:
			func_165(uParam1, "Barry3", func_167(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 5:
			func_165(uParam1, "Barry3A", func_167(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 6:
			func_165(uParam1, "Barry3C", func_167(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 7:
			func_165(uParam1, "Barry4", func_167(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_166(iParam0), 0, 0);
			break;
		
		case 8:
			func_165(uParam1, "Dreyfuss1", func_167(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 9:
			func_165(uParam1, "Epsilon1", func_167(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 10:
			func_165(uParam1, "Epsilon2", func_167(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 11:
			func_165(uParam1, "Epsilon3", func_167(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 12:
			func_165(uParam1, "Epsilon4", func_167(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 13:
			func_165(uParam1, "Epsilon5", func_167(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 14:
			func_165(uParam1, "Epsilon6", func_167(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 15:
			func_165(uParam1, "Epsilon7", func_167(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 16:
			func_165(uParam1, "Epsilon8", func_167(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 17:
			func_165(uParam1, "Extreme1", func_167(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 18:
			func_165(uParam1, "Extreme2", func_167(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 19:
			func_165(uParam1, "Extreme3", func_167(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 20:
			func_165(uParam1, "Extreme4", func_167(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 21:
			func_165(uParam1, "Fanatic1", func_167(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 22:
			func_165(uParam1, "Fanatic2", func_167(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_166(iParam0), 1, 0);
			break;
		
		case 23:
			func_165(uParam1, "Fanatic3", func_167(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_166(iParam0), 0, 1);
			break;
		
		case 24:
			func_165(uParam1, "Hao1", func_167(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_166(iParam0), 0, 1);
			break;
		
		case 25:
			func_165(uParam1, "Hunting1", func_167(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 26:
			func_165(uParam1, "Hunting2", func_167(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 27:
			func_165(uParam1, "Josh1", func_167(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 28:
			func_165(uParam1, "Josh2", func_167(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 29:
			func_165(uParam1, "Josh3", func_167(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 30:
			func_165(uParam1, "Josh4", func_167(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 31:
			func_165(uParam1, "Maude1", func_167(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 32:
			func_165(uParam1, "Minute1", func_167(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 33:
			func_165(uParam1, "Minute2", func_167(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 34:
			func_165(uParam1, "Minute3", func_167(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 35:
			func_165(uParam1, "MrsPhilips1", func_167(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 36:
			func_165(uParam1, "MrsPhilips2", func_167(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 37:
			func_165(uParam1, "Nigel1", func_167(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 38:
			func_165(uParam1, "Nigel1A", func_167(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 39:
			func_165(uParam1, "Nigel1B", func_167(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 40:
			func_165(uParam1, "Nigel1C", func_167(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 41:
			func_165(uParam1, "Nigel1D", func_167(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_166(iParam0), 1, 1);
			break;
		
		case 42:
			func_165(uParam1, "Nigel2", func_167(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 43:
			func_165(uParam1, "Nigel3", func_167(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 1);
			break;
		
		case 44:
			func_165(uParam1, "Omega1", func_167(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 45:
			func_165(uParam1, "Omega2", func_167(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 46:
			func_165(uParam1, "Paparazzo1", func_167(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 47:
			func_165(uParam1, "Paparazzo2", func_167(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 48:
			func_165(uParam1, "Paparazzo3", func_167(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 49:
			func_165(uParam1, "Paparazzo3A", func_167(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 50:
			func_165(uParam1, "Paparazzo3B", func_167(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 51:
			func_165(uParam1, "Paparazzo4", func_167(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 52:
			func_165(uParam1, "Rampage1", func_167(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 54:
			func_165(uParam1, "Rampage3", func_167(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 55:
			func_165(uParam1, "Rampage4", func_167(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 56:
			func_165(uParam1, "Rampage5", func_167(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_166(iParam0), 0, 0);
			break;
		
		case 53:
			func_165(uParam1, "Rampage2", func_167(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_166(iParam0), 1, 0);
			break;
		
		case 57:
			func_165(uParam1, "TheLastOne", func_167(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 58:
			func_165(uParam1, "Tonya1", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 59:
			func_165(uParam1, "Tonya2", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 60:
			func_165(uParam1, "Tonya3", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 61:
			func_165(uParam1, "Tonya4", func_167(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		case 62:
			func_165(uParam1, "Tonya5", func_167(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_166(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_165(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_166(int iParam0)
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

struct<2> func_167(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_168(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_168(int iParam0)
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

int func_169()
{
	if (func_172() && !func_173())
	{
		return 1;
	}
	if (func_171() && func_170())
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_96891 > 0;
}

int func_171()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_173()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_174()
{
	func_180(39, 1);
	func_180(40, 1);
	func_180(41, 1);
	func_180(42, 1);
	func_180(43, 1);
	fLocal_54 = 321f;
	unk_0xE163A4BCE4DE6F11(iLocal_371, true);
	unk_0xE163A4BCE4DE6F11(iLocal_372, true);
	unk_0xE163A4BCE4DE6F11(iLocal_370, true);
	unk_0x0FC2D89AC25A5814(iLocal_368, true);
	unk_0x963D27A58DF860AC(iLocal_372);
	unk_0x963D27A58DF860AC(iLocal_370);
	unk_0x963D27A58DF860AC(iLocal_371);
	unk_0x963D27A58DF860AC(iLocal_368);
	unk_0xD3BD40951412FEF6(sLocal_385);
	unk_0x963D27A58DF860AC(joaat("prop_ld_test_01"));
	if (((((unk_0x98A4EB5D89A0C952(iLocal_372) && unk_0x98A4EB5D89A0C952(iLocal_370)) && unk_0x98A4EB5D89A0C952(iLocal_371)) && unk_0x98A4EB5D89A0C952(iLocal_368)) && unk_0x98A4EB5D89A0C952(joaat("prop_ld_test_01"))) && unk_0xD031A9162D01088C(sLocal_385))
	{
		func_179();
		func_178();
		func_177();
		func_176();
		unk_0xD9F8455409B525E9(109, Local_51, -1f);
		iLocal_161 = unk_0x1B5C85C612E5256E(Local_58 - Vector(50f, 50f, 50f), Local_58 + Vector(50f, 50f, 50f), false, true, true, true);
		switch (func_150())
		{
			case 0:
				sLocal_173 = "MICHAEL";
				break;
			
			case 1:
				sLocal_173 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_173 = "TREVOR";
				break;
		}
		func_175(&uLocal_175, 0, unk_0xD80958FC74E988A6(), sLocal_173, 0, 1);
		Local_164 = { -3057.362f, 441.8271f, 6.151212f };
		Local_167 = { -0.34992f, -0.199749f, -98.79861f };
		fLocal_358 = 116f;
		Local_55 = { -3053.721f, 440.9221f, 5.3566f };
		iLocal_163 = unk_0x509D5878EB39E842(joaat("prop_ld_test_01"), unk_0x3FEF770D40960D5A(iLocal_154, false), true, true, false);
		unk_0x8524A8B0171D5E07(iLocal_163, unk_0xAFBD61CC738D9EB9(iLocal_154, 2), 2, true);
		unk_0x428CA6DBD1094446(iLocal_163, true);
		unk_0x1A9205C1B9EE827F(iLocal_163, false, false);
		return 1;
	}
	return 0;
}

void func_175(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_176()
{
	unk_0x63F58F7C80513AAD(iLocal_140, false);
	unk_0x79F020FF9EDC0748(iLocal_154, true);
	unk_0xB664292EAECF7FA6(iLocal_154, 3);
	unk_0xC80A74AC829DDD92(iLocal_141, iLocal_373);
	unk_0xC80A74AC829DDD92(iLocal_142, iLocal_373);
	unk_0xC80A74AC829DDD92(iLocal_140, iLocal_373);
	unk_0x9F8AA94D6D97DBF4(iLocal_142, true);
	unk_0x9F8AA94D6D97DBF4(iLocal_141, true);
	unk_0x9F8AA94D6D97DBF4(iLocal_140, true);
	unk_0x1913FE4CBF41C463(iLocal_141, 42, true);
	unk_0x1913FE4CBF41C463(iLocal_140, 42, true);
	unk_0x1913FE4CBF41C463(iLocal_142, 42, true);
	unk_0x9F7794730795E019(iLocal_142, 17, false);
	unk_0x9F7794730795E019(iLocal_142, 1, false);
	unk_0x9F7794730795E019(iLocal_142, 13, true);
	unk_0x9F7794730795E019(iLocal_142, 50, true);
	unk_0x9F7794730795E019(iLocal_140, 2, true);
	unk_0x9F7794730795E019(iLocal_141, 17, false);
	unk_0x9F7794730795E019(iLocal_141, 1, false);
	unk_0x9F7794730795E019(iLocal_141, 13, true);
	unk_0x9F7794730795E019(iLocal_141, 50, true);
	unk_0x9F7794730795E019(iLocal_141, 6, false);
	unk_0x9F7794730795E019(iLocal_140, 2, true);
	unk_0x9F7794730795E019(iLocal_140, 17, false);
	unk_0x9F7794730795E019(iLocal_140, 1, false);
	unk_0x9F7794730795E019(iLocal_140, 13, true);
	unk_0x9F7794730795E019(iLocal_140, 50, true);
	unk_0x9F7794730795E019(iLocal_140, 2, true);
	unk_0x4D9CA1009AFBD057(iLocal_142, 2);
	unk_0x4D9CA1009AFBD057(iLocal_141, 2);
	unk_0x4D9CA1009AFBD057(iLocal_140, 2);
	unk_0xEBD76F2359F190AC(iLocal_142, false);
	unk_0xEBD76F2359F190AC(iLocal_141, false);
	unk_0xEBD76F2359F190AC(iLocal_140, false);
	unk_0xBF0FD6E56C964FCB(iLocal_142, joaat("weapon_pistol"), 68, false, true);
	unk_0xBF0FD6E56C964FCB(iLocal_141, joaat("weapon_sawnoffshotgun"), 68, false, true);
	unk_0xBF0FD6E56C964FCB(iLocal_140, joaat("weapon_microsmg"), 68, false, true);
	unk_0x2A30922C90C9B42C(iLocal_142, false);
	unk_0x2A30922C90C9B42C(iLocal_141, false);
	unk_0x2A30922C90C9B42C(iLocal_140, false);
	unk_0x1913FE4CBF41C463(iLocal_141, 115, true);
	unk_0x1913FE4CBF41C463(iLocal_140, 115, true);
	unk_0x1913FE4CBF41C463(iLocal_142, 115, true);
	func_175(&uLocal_175, 2, iLocal_141, "LostKidnapper", 0, 1);
}

void func_177()
{
	int iVar0;
	
	iVar0 = 500;
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		iLocal_139 = unk_0xD49F9B0955C367DE(5, iLocal_372, unk_0x1899F328B0E12848(iLocal_154, Local_352), fLocal_54, true, true);
	}
	else
	{
		iLocal_139 = unk_0xD49F9B0955C367DE(5, iLocal_372, unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), Local_352), fLocal_54, true, true);
	}
	unk_0x6C8065A3B780185B(iLocal_139, "LostKidnapGirl");
	unk_0x63F58F7C80513AAD(iLocal_139, false);
	unk_0xEBD76F2359F190AC(iLocal_139, false);
	unk_0x6B76DC1F3AE6E6A3(iLocal_139, iVar0);
	unk_0xF5F6378C4F3419D3(iLocal_139, iVar0);
	unk_0x9F8AA94D6D97DBF4(iLocal_139, true);
	unk_0xC80A74AC829DDD92(iLocal_139, iLocal_374);
	func_175(&uLocal_175, 1, iLocal_139, "LostKidnapGirl", 0, 1);
}

void func_178()
{
	struct<3> Var0;
	
	Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
	if (Var0.f_0 > Local_51.f_0)
	{
		iLocal_154 = unk_0xAF35D0D2583051B0(iLocal_368, -1116.946f, 560.8027f, 101.3588f, 116.0592f, 1, 1);
		Local_61 = { -1247.233f, 515.3996f, 94.1352f };
	}
	else
	{
		iLocal_154 = unk_0xAF35D0D2583051B0(iLocal_368, Local_51, 305f, 1, 1);
		Local_61 = { -852.9832f, 441.7806f, 86.0437f };
	}
	unk_0xB72E26D81006005B(iLocal_154);
	unk_0x2497C4717C8B881E(iLocal_154, 1, 1);
	iLocal_141 = unk_0x7DD959874C1FD534(iLocal_154, 22, iLocal_371, -1, true, true);
	unk_0x9F7794730795E019(iLocal_141, 2, true);
	unk_0xBF0FD6E56C964FCB(iLocal_141, joaat("weapon_sawnoffshotgun"), 68, true, true);
	unk_0xADF692B254977C0C(iLocal_141, joaat("weapon_sawnoffshotgun"), true);
	iLocal_142 = unk_0xD49F9B0955C367DE(22, iLocal_371, unk_0x1899F328B0E12848(iLocal_154, Local_355), fLocal_54, true, true);
	iLocal_140 = unk_0xD49F9B0955C367DE(22, iLocal_370, unk_0x1899F328B0E12848(iLocal_154, Local_355), fLocal_54, true, true);
	unk_0x428CA6DBD1094446(iLocal_154, true);
	iLocal_81 = 1;
	unk_0x614DA022990752DC(iLocal_140, 25);
	unk_0x9AC577F5A12AD8A9(iLocal_140, -753768974);
	unk_0x614DA022990752DC(iLocal_142, 35);
	unk_0x9AC577F5A12AD8A9(iLocal_140, 1566631136);
	unk_0x7AEFB85C1D49DEB6(iLocal_141, 12);
	unk_0x7AEFB85C1D49DEB6(iLocal_142, 10);
	unk_0x7AEFB85C1D49DEB6(iLocal_140, 15);
	unk_0xEB9DC3C7D8596C46(iLocal_154, false);
	unk_0xE532F5D78798DAAB(iLocal_371);
	unk_0xE532F5D78798DAAB(iLocal_370);
	unk_0xE532F5D78798DAAB(iLocal_368);
	unk_0x8BA6F76BC53A1493(iLocal_154, false, 0);
	unk_0x93AE6A61BE015BF1(iLocal_154, 2f);
}

void func_179()
{
	unk_0xF372BC22FCB88606("re_snatched badGuys", &iLocal_373);
	unk_0xF372BC22FCB88606("re_snatched pedVictim", &iLocal_374);
	unk_0xBF25EB89375A37AD(5, iLocal_373, joaat("player"));
	unk_0xBF25EB89375A37AD(2, iLocal_373, iLocal_374);
	unk_0xBF25EB89375A37AD(0, iLocal_374, joaat("player"));
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_187(iParam0, 2, 1))
		{
			func_186(iParam0, 2, 1);
		}
	}
	else if (func_187(iParam0, 2, 1))
	{
		func_181(iParam0, 2, 1);
	}
}

void func_181(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_21() == 0)
		{
			iVar0 = func_184(func_185(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_182(func_185(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_182(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_183(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_183(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_183(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

void func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_21() == 0)
		{
			iVar0 = func_184(func_185(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_182(func_185(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_187(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_21() == 0)
		{
			return unk_0xA921AA820C25702F(func_184(func_185(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_188()
{
	float fVar0;
	
	if (((unk_0x7239B21A38F536BA(iLocal_140) && unk_0x7239B21A38F536BA(iLocal_142)) && unk_0x7239B21A38F536BA(iLocal_139)) && unk_0x7239B21A38F536BA(iLocal_154))
	{
		unk_0xD3BD40951412FEF6("random@kidnap_girl");
		if (unk_0xD031A9162D01088C("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_438)
			{
				case 0:
					if (((unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0x84A2DD9AC37C35C1(iLocal_139)) && !unk_0x84A2DD9AC37C35C1(iLocal_140)) && !unk_0x84A2DD9AC37C35C1(iLocal_142))
					{
						if (!unk_0x25D39B935A038A26(iLocal_116))
						{
							Local_109 = { 0f, 0f, 0f };
							Local_112 = { 0f, 0f, 0f };
							iLocal_116 = unk_0x8C18E0F9080ADD73(Local_109, Local_112, 2);
							unk_0x272E4723B56A3B96(iLocal_116, iLocal_154, unk_0xFB71170B7E76ACBA(iLocal_154, sLocal_174));
							unk_0xD9A897A4C6C2974F(iLocal_116, true);
							unk_0x6ACF6B7225801CD7(iLocal_116, Local_109, Local_112, 2);
							unk_0xEEA929141F699854(iLocal_139, iLocal_116, sLocal_385, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_140, iLocal_116, sLocal_385, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_142, iLocal_116, sLocal_385, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							unk_0xB128377056A54E2A(iLocal_139, true);
						}
						else
						{
							func_141();
							func_148();
							if (func_189())
							{
								func_142();
							}
						}
					}
					break;
				
				case 1:
					if (((unk_0x4C241E39B23DF959(iLocal_154, false) && !unk_0x84A2DD9AC37C35C1(iLocal_139)) && !unk_0x84A2DD9AC37C35C1(iLocal_140)) && !unk_0x84A2DD9AC37C35C1(iLocal_142))
					{
						if (unk_0x25D39B935A038A26(iLocal_116))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_140);
							unk_0xE1EF3C1216AFF2CD(iLocal_139);
							unk_0xE1EF3C1216AFF2CD(iLocal_142);
						}
						if (!unk_0x25D39B935A038A26(iLocal_117))
						{
							Local_109 = { 0f, 0f, 0f };
							Local_112 = { unk_0xAFBD61CC738D9EB9(iLocal_154, 2) };
							iLocal_117 = unk_0x8C18E0F9080ADD73(unk_0x3FEF770D40960D5A(iLocal_154, false), Local_112.f_0, Local_112.f_1, unk_0xE83D4F9BA2A38914(iLocal_154), 2);
							if (iLocal_81)
							{
								unk_0x428CA6DBD1094446(iLocal_154, false);
								iLocal_81 = 0;
							}
							unk_0xB6C49F8A5E295A5D(iLocal_117, fVar0);
							unk_0xEEA929141F699854(iLocal_139, iLocal_117, sLocal_385, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_140, iLocal_117, sLocal_385, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
							unk_0xEEA929141F699854(iLocal_142, iLocal_117, sLocal_385, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
							unk_0xC77720A12FE14A86(iLocal_154, iLocal_117, "DRAG_INTO_VAN_BURR", sLocal_385, 1000f, -4f, 1, 1000f);
						}
						else
						{
							if (!iLocal_79)
							{
								if ((((unk_0x25D39B935A038A26(iLocal_117) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iLocal_154, false)) < 30f) && !func_83()) && unk_0xE4A310B1D7FA73CC(iLocal_117) > 0.1f) && unk_0xE4A310B1D7FA73CC(iLocal_117) < 0.4f)
								{
									if (func_149(&uLocal_175, cLocal_386, "RESNA_HELP", 4, func_190(), 0, 0))
									{
										iLocal_79 = 1;
									}
								}
							}
							if (unk_0xE4A310B1D7FA73CC(iLocal_117) > 0.502f)
							{
								unk_0x3882114BDE571AD4(iLocal_139, true);
								unk_0x3882114BDE571AD4(iLocal_140, true);
								unk_0x3882114BDE571AD4(iLocal_142, true);
								if (unk_0xE4A310B1D7FA73CC(iLocal_117) < 0.732f)
								{
									if (!unk_0xB346476EF1A64897(iLocal_154))
									{
										unk_0xB128377056A54E2A(iLocal_140, false);
										unk_0xB128377056A54E2A(iLocal_142, false);
										if (!unk_0x84A2DD9AC37C35C1(iLocal_141))
										{
											unk_0xC429DCEEB339E129(iLocal_141, iLocal_154, 30, 6000);
										}
										unk_0x3882114BDE571AD4(iLocal_139, true);
										unk_0x1913FE4CBF41C463(iLocal_139, 106, true);
										unk_0x1913FE4CBF41C463(iLocal_140, 106, true);
										unk_0x1913FE4CBF41C463(iLocal_142, 106, true);
									}
									if (unk_0x5F9532F3B5CC2551(iLocal_154))
									{
										func_147();
										if (unk_0x7239B21A38F536BA(iLocal_139))
										{
											unk_0x6B76DC1F3AE6E6A3(iLocal_139, 0);
										}
										if (unk_0x7239B21A38F536BA(iLocal_142))
										{
											unk_0x6B76DC1F3AE6E6A3(iLocal_142, 0);
										}
										if (unk_0x7239B21A38F536BA(iLocal_140))
										{
											unk_0x6B76DC1F3AE6E6A3(iLocal_140, 0);
										}
										if (unk_0x7239B21A38F536BA(iLocal_141))
										{
											unk_0x6B76DC1F3AE6E6A3(iLocal_141, 0);
										}
										unk_0x961AC54BF0613F5D(iLocal_154, true, false);
									}
								}
								else
								{
									unk_0xB128377056A54E2A(iLocal_140, true);
									unk_0xB128377056A54E2A(iLocal_142, true);
									unk_0x1913FE4CBF41C463(iLocal_139, 106, false);
									unk_0x1913FE4CBF41C463(iLocal_140, 106, false);
									unk_0x1913FE4CBF41C463(iLocal_142, 106, false);
									unk_0x3882114BDE571AD4(iLocal_140, false);
									unk_0x3882114BDE571AD4(iLocal_142, false);
									func_147();
									func_146();
									iLocal_438 = 3;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
							else
							{
								func_141();
								func_148();
								if (func_189())
								{
									func_142();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

int func_189()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 10f, 10f, 3f };
	Var3 = { -10f, -10f, -3f };
	if (unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(iLocal_139, 31086, 0f, 0f, 0f), 15f, true))
	{
		return 1;
	}
	Var0 = { Var0 + unk_0x17C07FC640E86B4E(iLocal_139, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + unk_0x17C07FC640E86B4E(iLocal_139, 31086, 0f, 0f, 0f) };
	if (((unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_stickybomb"), true)) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("vehicle_weapon_tank"), true))
	{
		return 1;
	}
	if (unk_0x28D3FED7190D3A0B(iLocal_139))
	{
		return 1;
	}
	return 0;
}

int func_190()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 75f, 75f, 20f };
	if (!unk_0x84A2DD9AC37C35C1(iLocal_139))
	{
		if (unk_0x751B70C3D034E187(iLocal_139, unk_0xD80958FC74E988A6(), Var1, false, true, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_191()
{
}

int func_192()
{
	if (!func_157(5))
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
		{
			return 0;
		}
	}
	if (func_163(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if ((Global_97162 == func_40() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_194(bool bParam0)
{
	unk_0xA56F01F3765B93A0(Local_170, 15f, true, false, false, false);
	unk_0xA56F01F3765B93A0(-1133.993f, 558.3267f, 107.351f, 5f, true, false, false, false);
	if (bParam0)
	{
		iLocal_413 = unk_0x1B5C85C612E5256E(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), false, true, true, true);
		iLocal_412 = unk_0x1B5C85C612E5256E(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), false, true, true, true);
	}
	else
	{
		unk_0x31D16B74C6E29D66(iLocal_413, false);
		unk_0x31D16B74C6E29D66(iLocal_412, false);
	}
	unk_0xC12321827687FE4D(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !bParam0, true);
	unk_0xC12321827687FE4D(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !bParam0, true);
}

void func_195()
{
}

void func_196(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_198(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_197();
}

void func_197()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_198(int iParam0)
{
	Global_97162 = iParam0;
}

int func_199(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
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
		if (!func_239())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_173())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_15(0))
		{
			return 0;
		}
		if (func_169())
		{
			return 0;
		}
		if (func_238())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_34(func_150()))
		{
			if (func_163(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_237(iParam3))
		{
			return 0;
		}
		if (func_34(func_150()))
		{
			if (func_236(func_150()) == 4 || func_236(func_150()) == 5)
			{
				return 0;
			}
		}
		if (func_34(func_150()))
		{
			if (!func_235(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_234(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_233())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_224(4))
		{
			return 0;
		}
		if (!func_157(5))
		{
			return 0;
		}
		if (func_223(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_223(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_237(30) && !func_223(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_34(func_150()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_222(iVar8))
				{
					if (func_200(iVar4))
					{
						if (!func_130(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
							{
								if (func_150() != iVar4)
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

bool func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_201(iVar0);
}

int func_201(int iParam0)
{
	return func_202(iParam0, 1);
}

int func_202(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_222(iParam0))
	{
		return 0;
	}
	func_203(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_203(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_204(func_215(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_204(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_214(iParam0, iParam1))
	{
		iVar0 = func_213(iParam1);
		iVar1 = func_211(iParam0);
		iVar2 = (func_211(iParam0) - func_211(iParam1));
		iVar3 = (func_213(iParam0) - func_213(iParam1));
		iVar4 = (func_210(iParam0) - func_210(iParam1));
		iVar5 = (func_209(iParam0) - func_209(iParam1));
		iVar6 = (func_208(iParam0) - func_208(iParam1));
		iVar7 = (func_207(iParam0) - func_207(iParam1));
	}
	else
	{
		iVar0 = func_213(iParam0);
		iVar1 = func_211(iParam1);
		iVar2 = (func_211(iParam1) - func_211(iParam0));
		iVar3 = (func_213(iParam1) - func_213(iParam0));
		iVar4 = (func_210(iParam1) - func_210(iParam0));
		iVar5 = (func_209(iParam1) - func_209(iParam0));
		iVar6 = (func_208(iParam1) - func_208(iParam0));
		iVar7 = (func_207(iParam1) - func_207(iParam0));
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
		iVar4 = (iVar4 + func_206(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_205(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_205(float fParam0, float fParam1, float fParam2)
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

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_208(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_209(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_210(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_211(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_212(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_212(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_213(int iParam0)
{
	return iParam0 & 15;
}

int func_214(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_222(iParam1) || !func_222(iParam0))
	{
		return 1;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_207(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	var uVar0;
	
	func_221(&uVar0, unk_0x494E97C2EF27C470());
	func_220(&uVar0, unk_0x13D2B8ADD79640F2());
	func_219(&uVar0, unk_0x25223CA6B4D20B7F());
	func_218(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_217(&uVar0, unk_0xBBC72712E80257A1());
	func_216(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_216(var uParam0, int iParam1)
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

void func_217(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_213(*uParam0);
	iVar1 = func_211(*uParam0);
	if (iParam1 < 1 || iParam1 > func_206(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_219(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_220(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_221(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_222(int iParam0)
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
	iVar0 = func_207(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_208(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_209(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_211(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_213(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_210(iParam0);
	if (iVar5 < 1 || iVar5 > func_206(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_150();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_73(8, -1)) || func_230()) || func_229()) || func_228()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_232()) || Global_24446) || func_231()) || func_73(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_73(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_73(8, -1)) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_73(8, -1)) || func_227()) || func_226()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_73(8, -1) || func_230()) || func_229()) || func_226()) || func_225())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_24446) || func_231()) || func_73(8, -1)) || func_229()) || func_228()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_232()) || func_229()) || Global_96220) || Global_24446) || func_231()) || Global_35953) || func_73(8, -1)) || func_228()) || func_226()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_73(8, -1)) || func_228()) || func_226()) || func_230()) || func_229()) || func_227())
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

var func_225()
{
	return Global_89823.f_1;
}

int func_226()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_227()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_229()
{
	return Global_89836.f_291 > 0;
}

bool func_230()
{
	return Global_89836.f_290 > 0;
}

var func_231()
{
	return Global_1315898;
}

int func_232()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_233()
{
	func_71();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_234(int iParam0)
{
	return func_214(func_215(), iParam0);
}

int func_235(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_150();
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

int func_236(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_237(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_239())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_238()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_239()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_240()
{
	unk_0x4EDE34FBADD967A6(0);
	func_253(0);
	if (Global_24682)
	{
		unk_0x706D57B0F50DA710("AC_STOP");
	}
	func_252();
	func_107(&uLocal_340, 0, 0);
	if (func_193())
	{
		unk_0x020E5F00CDA207BA(1f);
		unk_0x31D16B74C6E29D66(iLocal_161, false);
	}
	else
	{
		func_251(&Global_24503);
	}
	unk_0xAA5F02DB48D704B9(5);
	unk_0x020E5F00CDA207BA(1f);
	if ((unk_0x7239B21A38F536BA(iLocal_139) && !unk_0x84A2DD9AC37C35C1(iLocal_139)) && unk_0x9BB01E3834671191(iLocal_139, unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
	{
		unk_0xED74007FFB146BC2(iLocal_139);
	}
	if (unk_0x4C241E39B23DF959(iLocal_154, false))
	{
		unk_0xB664292EAECF7FA6(iLocal_154, 1);
	}
	func_194(0);
	func_241(-1);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	unk_0xEB47EC4E34FB7EE1("WORLD_VEHICLE_DRIVE_SOLO", true);
	unk_0x1090044AD1DA76FA();
}

void func_241(int iParam0)
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
	if (func_193())
	{
		func_244(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_243(30000);
		StringCopy(&cVar0, func_242(Global_97162, 1), 64);
		if (func_39(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_251(&Global_24503);
	Global_97163 = 0;
	func_198(-1);
}

char* func_242(int iParam0, bool bParam1)
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

void func_243(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_244(int iParam0)
{
	func_245(iParam0, 0, func_250(iParam0));
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_215();
	func_248(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_247(iParam0, &uVar0);
	Var1 = { func_246(&uVar0) };
}

struct<16> func_246(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_209(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_208(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_207(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_210(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_213(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_211(*uParam0), 64);
	return Var0;
}

void func_247(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_211(*uParam0);
	iVar1 = func_213(*uParam0);
	iVar2 = func_210(*uParam0);
	iVar3 = func_209(*uParam0);
	iVar4 = func_208(*uParam0);
	iVar5 = func_207(*uParam0);
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
	iVar6 = func_206(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_206(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_249(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_221(uParam0, iParam1);
	func_220(uParam0, iParam2);
	func_219(uParam0, iParam3);
	func_218(uParam0, iParam4);
	func_217(uParam0, iParam5);
	func_216(uParam0, iParam6);
}

int func_250(int iParam0)
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

void func_251(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_252()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_253(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_180(iVar0, bParam0);
		iVar0++;
	}
}

