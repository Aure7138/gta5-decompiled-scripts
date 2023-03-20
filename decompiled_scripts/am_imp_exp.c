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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_43 = 0;
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
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	struct<14> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 16;
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
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	float fLocal_293 = 0f;
	float fLocal_294 = 0f;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
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
	int iLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320[4] = { 0, 0, 0, 0 };
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_342 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_354 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<4> Local_430[32];
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	char* sLocal_562 = NULL;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_56 = 10000;
	iLocal_88 = 1;
	bLocal_90 = true;
	bLocal_92 = true;
	iLocal_97 = -1;
	bLocal_285 = true;
	bLocal_286 = true;
	iLocal_289 = -1;
	iLocal_290 = -1;
	iLocal_314 = -1;
	iLocal_317 = -1;
	if (!func_433(ScriptParam_0))
	{
		func_429();
	}
	iLocal_329[0] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-891.3f, 807.9f, 188.1f));
	iLocal_329[1] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-276.5f, -206.3f, 38.4f));
	iLocal_329[2] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1485.5f, -644.5f, 30.1f));
	iLocal_329[3] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1746.3f, -939.5f, 7.7f));
	iLocal_329[4] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-2106.4f, -345.3f, 13f));
	iLocal_329[5] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1520f, 74.4f, 61.3f));
	iLocal_329[6] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1333f, -286f, 40.3f));
	iLocal_329[7] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1178.1f, 54.8f, 53.9f));
	iLocal_329[8] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1298.7f, -359.4f, 36.7f));
	iLocal_329[9] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-355.2f, 147.5f, 75.8f));
	iLocal_329[10] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-982.1f, -1064.7f, 2.2f));
	iLocal_329[11] = unk_0x0B024876D9809228(unk_0x41FE4BE0C00922B3(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_428();
		bLocal_73 = false;
		bLocal_75 = false;
		bLocal_78 = false;
		bLocal_81 = false;
		bLocal_83 = false;
		Global_2446533.f_1576 = 0;
		if (func_419() || func_418())
		{
			func_429();
		}
		if (func_412())
		{
			if (!func_411())
			{
				if (!func_410())
				{
					if (func_409())
					{
						if (!iLocal_71)
						{
							func_405();
							func_404(&Local_342, 5);
							func_403();
							iLocal_56 = 10000;
							bLocal_92 = true;
							bLocal_93 = true;
							if (unk_0x94E72F17611BCD3C(iLocal_559, 1))
							{
								unk_0xF76EE56D3E7DAF1B(&iLocal_559, 1);
							}
							iLocal_71 = 1;
							iLocal_317 = -999;
						}
					}
				}
			}
			else if (!func_410())
			{
				if (!bLocal_93)
				{
					if (!func_402(&uLocal_270))
					{
						func_401(&uLocal_270, 0, 0);
					}
					else if (func_400(&uLocal_270, 100, 0))
					{
						if (!unk_0x94E72F17611BCD3C(iLocal_559, 1))
						{
							if (func_409())
							{
								func_390(&Local_342, 5, Global_2097152[func_399() /*8064*/].f_5756.f_36);
								iLocal_56 = 0;
								bLocal_92 = false;
								bLocal_93 = true;
								iLocal_71 = 1;
								iLocal_317 = -999;
							}
						}
					}
				}
			}
			func_321();
			func_318();
			func_305();
			func_299();
			func_197();
			func_141();
		}
		func_137();
		func_119();
		func_71();
		func_68();
		if (!iLocal_95)
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), 1);
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), 1);
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), 1);
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), 1);
				unk_0x39490CC949D831C4(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), 1);
				iLocal_95 = 1;
			}
		}
		if (unk_0x7EF90A4891193127())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_90)
	{
	}
	else
	{
		if (iLocal_91 >= Local_430.f_0)
		{
			iLocal_91 = 0;
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 10);
			unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 7);
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 11);
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 23);
			if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 1);
				unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 3);
			}
		}
		iVar0 = iLocal_91;
		if (Local_430[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_354[iVar1] == -1)
				{
					if (!Local_354.f_6[iVar1])
					{
						if (Local_354[iVar1] == Local_430[iVar0 /*4*/])
						{
							if (Local_354[iVar1] == Local_354.f_28)
							{
								func_67();
							}
							Local_354.f_33 = 0;
							Local_354.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
		{
			if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 7))
			{
				if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
				{
					if (Local_430[iVar0 /*4*/].f_3 > 0 || func_66(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0)), 6))
					{
						if (Local_430[iVar0 /*4*/].f_3 < 3)
						{
							unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 7);
						}
					}
				}
			}
		}
		if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
		{
			if (!unk_0x94E72F17611BCD3C(iLocal_559, 11))
			{
				if (unk_0x94E72F17611BCD3C(Local_430[iVar0 /*4*/].f_2, 2))
				{
					unk_0xEDB9A377CD8B7F03(&iLocal_559, 11);
				}
			}
			if (!unk_0x94E72F17611BCD3C(iLocal_559, 21))
			{
				if (!unk_0x94E72F17611BCD3C(iLocal_559, 3))
				{
					if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
					{
						if (unk_0x94E72F17611BCD3C(Local_430[iVar0 /*4*/].f_2, 3))
						{
							unk_0xEDB9A377CD8B7F03(&iLocal_559, 21);
						}
					}
				}
			}
		}
		iLocal_91++;
		if (iLocal_91 >= Local_430.f_0)
		{
			unk_0xEDB9A377CD8B7F03(&iLocal_559, 10);
			if (unk_0x94E72F17611BCD3C(Local_354.f_23, 7) || unk_0x94E72F17611BCD3C(iLocal_559, 23))
			{
				unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 1);
			}
			if (unk_0x94E72F17611BCD3C(iLocal_559, 11))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 3);
			}
			if (unk_0x94E72F17611BCD3C(iLocal_559, 21))
			{
				unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 6);
			}
		}
	}
	if (func_65())
	{
		if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Local_354.f_29) > 180000)
		{
			func_64();
		}
	}
	switch (Local_354.f_20)
	{
		case 0:
			func_61();
			Local_354.f_32++;
			Local_354.f_20 = 1;
			func_60();
			break;
		
		case 1:
			if (func_59())
			{
				uLocal_313 = unk_0x6A8628B6E9F055B3();
				Local_354.f_20 = 2;
			}
			else if (Local_354.f_28 == -1)
			{
				func_67();
			}
			break;
		
		case 2:
			if (!Local_354.f_17 && unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), uLocal_313) > iLocal_56)
			{
				Local_354.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_354.f_26)
	{
		case 0:
			if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
			{
				if (bLocal_285)
				{
					if (bLocal_286)
					{
						if (Global_2446533.f_1549)
						{
							unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 2);
							unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 6);
							unk_0xF76EE56D3E7DAF1B(&iLocal_559, 21);
							unk_0x2D0DCDC2641217B9(0);
							Local_354.f_34 = 0;
							unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 0);
							Global_2446533.f_1549 = 0;
						}
					}
					else if (Local_354.f_27 == -15)
					{
						unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 2);
						unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 6);
						unk_0xF76EE56D3E7DAF1B(&iLocal_559, 21);
						unk_0x2D0DCDC2641217B9(0);
						Local_354.f_34 = 0;
						iVar4 = func_58();
						func_44(&(Local_354.f_27), func_57(iVar4), func_56(iVar4), func_55(iVar4), func_54(iVar4), func_53(iVar4), func_51(iVar4));
						func_43(&(Local_354.f_27), 0, unk_0x073B65E051D2F03E(0, 60), unk_0x073B65E051D2F03E(0, 8), 1, 0, 0);
					}
					else if (!func_42(6))
					{
						if (!func_402(&uLocal_302))
						{
							func_401(&uLocal_302, 0, 0);
						}
						else if (func_400(&uLocal_302, 10000, 0))
						{
							func_41(&uLocal_302);
							if (func_37(Local_354.f_27))
							{
								unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_354.f_67 == 0)
			{
				if (func_31(1, 1, 1))
				{
					if (unk_0x434508E0702EFF4E(Local_354.f_24))
					{
						unk_0xEFFD4C06A93A58A8(Local_354.f_24);
					}
					Local_354.f_24 = -1;
					iLocal_288 = unk_0x073B65E051D2F03E(0, 10);
					iVar5 = func_28();
					if (iVar5 != 0)
					{
						Local_354.f_67 = iVar5;
						unk_0x2D0DCDC2641217B9(1);
						Local_354.f_34 = 1;
					}
				}
			}
			else if (unk_0x9AD64775663C0BCF(1))
			{
				if (func_27(Local_354.f_67))
				{
					if (!unk_0x53C457DC61CBEBCA(Local_354.f_22))
					{
						if (func_19(&Var0, &uVar3))
						{
							if (func_18(&(Local_354.f_22), Local_354.f_67, Var0, uVar3, 1, 1, 1, 1, 1, 1))
							{
								if (unk_0xA27FA05139033EDE("MPBitset", 3))
								{
									if (unk_0xB4289912C78431FE(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset"))
									{
										iVar6 = unk_0x70BD1F58B07BE0C1(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset");
									}
									unk_0xEDB9A377CD8B7F03(&iVar6, 5);
									unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset", iVar6);
								}
								if (unk_0xA27FA05139033EDE("MPBitset", 3))
								{
									if (unk_0xB4289912C78431FE(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset"))
									{
										iVar7 = unk_0x70BD1F58B07BE0C1(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset");
									}
									unk_0xEDB9A377CD8B7F03(&iVar7, 10);
									unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_354.f_22), "MPBitset", iVar7);
								}
								if (unk_0xA27FA05139033EDE("Not_Allow_As_Saved_Veh", 3))
								{
									unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_354.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 0);
								unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 2);
								unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 4);
								unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 3);
								unk_0xF76EE56D3E7DAF1B(&iLocal_559, 11);
								unk_0xEDB9A377CD8B7F03(&iLocal_559, 23);
								unk_0x0880E86251A44B7F(Local_354.f_67);
								Local_354.f_26 = 1;
								func_41(&(Local_354.f_30));
								func_401(&(Local_354.f_30), 0, 0);
								unk_0x993B4D0D3CD44124(unk_0x1349078BE884A8E7(Local_354.f_22), 7);
								unk_0x485406C94B218B35(unk_0x1349078BE884A8E7(Local_354.f_22), 1);
								unk_0x60DAE84D0B296FD2(Local_354.f_67, 1);
								unk_0x51A878D487948241(Local_354.f_22, 1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 2))
			{
				if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
				{
					if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_354.f_22), 0))
					{
						Local_57.f_2 = 38;
						func_16(Local_57, func_17(1));
						unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 2);
					}
				}
			}
			if (unk_0x94E72F17611BCD3C(iLocal_559, 3) || (unk_0x94E72F17611BCD3C(iLocal_559, 10) && unk_0x94E72F17611BCD3C(Local_354.f_23, 1)))
			{
				if (!unk_0x94E72F17611BCD3C(iLocal_559, 3))
				{
					if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 2))
					{
						if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
						{
							if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_354.f_22), 0))
							{
								Local_57.f_2 = 38;
								func_16(Local_57, func_17(1));
								unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 2);
							}
						}
					}
				}
				Local_354.f_26 = 2;
			}
			if (func_15(unk_0x1349078BE884A8E7(Local_354.f_22)))
			{
				Local_354.f_26 = 2;
				Local_57.f_2 = 39;
				func_16(Local_57, func_17(1));
			}
			if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 4))
			{
				if (func_400(&(Local_354.f_30), 360000, 0))
				{
					unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 4);
					func_41(&(Local_354.f_30));
					func_401(&(Local_354.f_30), 0, 0);
				}
			}
			else if (unk_0x94E72F17611BCD3C(iLocal_559, 10))
			{
				if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 3))
				{
					if (func_402(&(Local_354.f_30)))
					{
						if (func_400(&(Local_354.f_30), 120000, 0))
						{
							Local_354.f_26 = 2;
							Local_57.f_2 = 39;
							func_16(Local_57, func_17(1));
						}
					}
					else
					{
						func_401(&(Local_354.f_30), 0, 0);
					}
				}
				else if (func_402(&(Local_354.f_30)))
				{
					func_41(&(Local_354.f_30));
				}
			}
			if (unk_0x94E72F17611BCD3C(Local_354.f_23, 6))
			{
				if (!unk_0x94E72F17611BCD3C(iLocal_559, 3))
				{
					if (Local_354.f_26 == 1)
					{
						Local_354.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_354.f_26 == 1)
				{
					Local_354.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
			{
				if (func_10(Local_354.f_22))
				{
					func_9(&(Local_354.f_22));
					Local_354.f_26 = 3;
				}
			}
			else
			{
				Local_354.f_26 = 3;
			}
			break;
		
		case 3:
			if (unk_0x94E72F17611BCD3C(iLocal_559, 10))
			{
				if (unk_0x94E72F17611BCD3C(Local_354.f_23, 1))
				{
					Local_354.f_26 = 0;
					unk_0xF76EE56D3E7DAF1B(&(Local_354.f_23), 0);
					Local_354.f_27 = -15;
					if (Local_354.f_67 != 0)
					{
						unk_0x60DAE84D0B296FD2(Local_354.f_67, 0);
					}
					Local_354.f_67 = 0;
					if (bLocal_286)
					{
						func_7(func_8(unk_0xA4B90494CB03833C("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (unk_0x7EF90A4891193127())
	{
		switch (Local_354.f_69)
		{
			case 0:
				if (unk_0x94E72F17611BCD3C(Local_354.f_23, 8))
				{
					if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
					{
						if (!func_6())
						{
							if (unk_0x816C2A0DE63DAB7F(unk_0x1349078BE884A8E7(Local_354.f_22)))
							{
								if (!unk_0xFE0FA79BC49EBB07(unk_0x1349078BE884A8E7(Local_354.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, 0, 1, 0))
								{
									if (func_4(Local_354.f_22))
									{
										if (unk_0x34CE5EC4D87561E4(Local_354.f_22))
										{
											unk_0x4220BD8C5CDBF540(unk_0x1349078BE884A8E7(Local_354.f_22), true, 0);
											unk_0x993B4D0D3CD44124(unk_0x1349078BE884A8E7(Local_354.f_22), 1);
											unk_0xD9B13F0A69759C12(unk_0x1349078BE884A8E7(Local_354.f_22), false);
										}
										else
										{
											unk_0xD8D9F2D24F8E952E(Local_354.f_22);
										}
									}
								}
							}
						}
					}
				}
				break;
			}
	}
}

int func_4(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return !func_5(unk_0x1349078BE884A8E7(uParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(iParam0, 0))
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

int func_6()
{
	int iVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			iVar0 = unk_0xB5BBEB12C77EE430(unk_0x1349078BE884A8E7(Local_354.f_22), -1);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 364;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	unk_0xEDB9A377CD8B7F03(&uVar0, iParam0);
	return uVar0;
}

void func_9(var uParam0)
{
	var uVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(*uParam0))
	{
		uVar0 = unk_0x6394B7AC14B39864(*uParam0);
		unk_0x13446D908F119EB2(&uVar0);
	}
}

int func_10(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		unk_0xD8D9F2D24F8E952E(uParam0);
		return unk_0x34CE5EC4D87561E4(uParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5003)
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5004)
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5005)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_66(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(unk_0x7225A5A7A532BC7C(iVar0), 0, 1))
		{
			if (unk_0x94E72F17611BCD3C(Global_2414035[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0xA27FA05139033EDE("bombdec1", 3))
		{
			if (unk_0xB4289912C78431FE(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (unk_0xA27FA05139033EDE("bombdec", 3))
		{
			if (unk_0xB4289912C78431FE(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (unk_0xA27FA05139033EDE("bombowner", 3))
		{
			if (unk_0xB4289912C78431FE(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xCFC72E446B0B3AD7();
	if (!iParam14 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			iVar2 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar1));
			if (func_14(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_18(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x9AD64775663C0BCF(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x8F9D4AA83F37F6E2(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xB0694AD0A3BB8936(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(uVar0))
		{
			if (bParam8)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
			else
			{
				unk_0x45A6B51275211E6D(*uParam0, 0);
			}
		}
		unk_0x042E8EAB80B3768F(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_19(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_26(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	switch (iLocal_288)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_26(Var0, 0f, 0f, 0f))
	{
		if (iLocal_288 < 10)
		{
			if (Local_354.f_24 == -1)
			{
				Local_354.f_24 = unk_0x962BD22AD813A22F(Var0, Var3);
			}
			else if (unk_0x434508E0702EFF4E(Local_354.f_24))
			{
				if (unk_0x79CB06580FC5AEF5(Local_354.f_24))
				{
					if (!unk_0xAEDE2A579C18CA7A(Local_354.f_24))
					{
						if (!func_20(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							unk_0xEFFD4C06A93A58A8(Local_354.f_24);
							Local_354.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_288++;
							unk_0xEFFD4C06A93A58A8(Local_354.f_24);
							Local_354.f_24 = -1;
						}
					}
					else
					{
						iLocal_288++;
						unk_0xEFFD4C06A93A58A8(Local_354.f_24);
						Local_354.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_288 = 0;
		}
	}
	return 0;
}

int func_20(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x91EAD4F2F9B5B38A(func_25(unk_0xCFC72E446B0B3AD7()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE298336AB6E66F7E(Param0, fParam3))
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
		if (func_14(iVar1, 1, 1))
		{
			if (!func_22(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if ((func_21(iVar1) || !bParam10) && !Global_2414035[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x91EAD4F2F9B5B38A(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam8 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x91EAD4F2F9B5B38A(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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

int func_21(int iParam0)
{
	if (unk_0x706AF1DFAF966E35(unk_0x4E6043D225B9C75F(iParam0)) || Global_2414035[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_23(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312737;
}

Vector3 func_25(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

bool func_26(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iParam0);
	return unk_0x149162179DBAEDB0(iParam0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2314 != 0)
	{
		iVar1 = Global_262145.f_2314;
		if (unk_0x23EA0079E2840B6D(iVar1))
		{
			if (unk_0x71A852A48EEBEFCC(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_30(&Local_354);
		iVar0 = func_29(iVar2);
	}
	return iVar0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("sentinel");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("dominator");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("surge");
		
		case 5:
			return joaat("jackal");
		
		case 6:
			return joaat("ztype");
		
		case 7:
			return joaat("tailgater");
		
		case 8:
			return joaat("landstalker");
		
		case 9:
			return joaat("penumbra");
		
		case 10:
			return joaat("f620");
		
		case 11:
			return joaat("fq2");
		
		case 12:
			return joaat("patriot");
		
		case 13:
			return joaat("habanero");
		
		case 14:
			return joaat("prairie");
		
		case 15:
			return joaat("fusilade");
		
		case 16:
			return joaat("bjxl");
		
		case 17:
			return joaat("gresley");
		
		case 18:
			return joaat("buccaneer");
		
		case 19:
			return joaat("daemon");
		
		case 20:
			return joaat("bagger");
		
		default:
	}
	return 0;
}

int func_30(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x073B65E051D2F03E(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)
{
	return func_32(1, iParam0, 1, bParam1, bParam2);
}

int func_32(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_36(iParam0) - func_35(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_34(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_35(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_36(iParam0) - func_35(iParam0, 1));
		}
		if (!bParam4 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] != 3)
		{
			iVar1 = (iVar1 - func_33(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x30F2E008CA509014(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0x56DAB67AA00A12D9(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x501C0D3244542A75(!bParam1);
			}
			break;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

bool func_37(int iParam0)
{
	return func_38(func_58(), iParam0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_51(iParam0);
	iVar1 = func_51(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	iVar1 = func_53(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)
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
	iVar0 = func_57(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_56(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_55(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_51(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_53(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_54(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
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

void func_41(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_42(int iParam0)
{
	return !func_12(iParam0);
}

void func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_51(*uParam0);
	iVar1 = func_53(*uParam0);
	iVar2 = func_54(*uParam0);
	iVar3 = func_55(*uParam0);
	iVar4 = func_56(*uParam0);
	iVar5 = func_57(*uParam0);
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
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam4);
	func_46(uParam0, iParam5);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
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

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_53(*uParam0);
	iVar1 = func_51(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_52(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_52(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_53(int iParam0)
{
	return iParam0 & 15;
}

int func_54(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_55(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_56(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_57(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_58()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xD9940DF735CED1D5());
	func_49(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_48(&uVar0, unk_0x3E15607264E063C3());
	func_47(&uVar0, unk_0xA2C54D866C588926());
	func_46(&uVar0, unk_0x35E06151CD8A2DD1());
	func_45(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_354.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_60()
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_354.f_35[iVar0] = -1;
			iVar0++;
		}
		unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 5);
	}
}

void func_61()
{
	int iVar0;
	
	func_404(&Local_354, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_354.f_12[iVar0] = func_62();
		iVar0++;
	}
	Local_354.f_33 = 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = unk_0x073B65E051D2F03E(0, 10);
	while (func_63(iVar0))
	{
		iVar0 = unk_0x073B65E051D2F03E(0, 10);
	}
	return iVar0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_354.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_64()
{
	int iVar0;
	
	iVar0 = func_30(&Local_354);
	if (iVar0 != Local_354.f_28)
	{
		Local_354.f_28 = iVar0;
		Local_354.f_29 = unk_0x6A8628B6E9F055B3();
	}
}

int func_65()
{
	if (Local_354.f_20 > 0)
	{
		if (Local_354[0] != Local_354[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

void func_67()
{
	Local_354.f_29 = 0;
}

void func_68()
{
	int iVar0;
	
	if (func_65())
	{
		if (Global_2446533.f_4222 == 0 || unk_0x94E72F17611BCD3C(Global_2446533.f_4223, 0))
		{
			if (!func_402(&uLocal_308) || func_400(&uLocal_308, 2000, 0))
			{
				iVar0 = func_30(&Local_342);
				if (iVar0 > -1)
				{
					Global_2446533.f_4222 = func_29(iVar0);
					func_41(&uLocal_306);
					func_401(&uLocal_306, 0, 0);
					if (unk_0x94E72F17611BCD3C(Global_2446533.f_4223, 0))
					{
						unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4223), 0);
					}
				}
				else
				{
					func_41(&uLocal_308);
					func_401(&uLocal_308, 0, 0);
				}
			}
		}
		else if (Global_2446533.f_4222 != 0)
		{
			if (func_400(&uLocal_306, 20000, 0))
			{
				if (!func_69(&Local_342, Global_2446533.f_4222))
				{
					Global_2446533.f_4222 = 0;
				}
				func_41(&uLocal_306);
				func_401(&uLocal_306, 0, 0);
			}
		}
	}
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("dominator"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("surge"):
			return 4;
		
		case joaat("jackal"):
			return 5;
		
		case joaat("ztype"):
			return 6;
		
		case joaat("tailgater"):
			return 7;
		
		case joaat("landstalker"):
			return 8;
		
		case joaat("penumbra"):
			return 9;
		
		case joaat("f620"):
			return 10;
		
		case joaat("fq2"):
			return 11;
		
		case joaat("patriot"):
			return 12;
		
		case joaat("habanero"):
			return 13;
		
		case joaat("prairie"):
			return 14;
		
		case joaat("fusilade"):
			return 15;
		
		case joaat("bjxl"):
			return 16;
		
		case joaat("gresley"):
			return 17;
		
		case joaat("buccaneer"):
			return 18;
		
		case joaat("daemon"):
			return 19;
		
		case joaat("bagger"):
			return 20;
		
		default:
	}
	return -1;
}

void func_71()
{
	int iVar0;
	
	if (((((bLocal_77 || bLocal_78) || bLocal_79) || bLocal_81) || bLocal_80) || bLocal_82)
	{
		if (((Global_2446533.f_26.f_40 || func_116(unk_0xCFC72E446B0B3AD7(), 1)) || func_115(unk_0xCFC72E446B0B3AD7())) || !func_113())
		{
			bLocal_77 = false;
			bLocal_79 = false;
			bLocal_78 = false;
			bLocal_81 = false;
			bLocal_80 = false;
			func_112();
		}
	}
	if ((func_111("FM_CTUT_RSP") || func_111("FM_CTUT_REP")) || func_111("FM_CTUT_LLS"))
	{
		if (!func_110())
		{
			func_112();
		}
	}
	if (bLocal_82)
	{
		if (!func_111("FM_IHELP_LCP"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (func_93())
				{
					if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
					{
						if (func_92())
						{
							func_86("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_IHELP_LCP"))
		{
			func_79("FM_IHELP_LCP");
		}
	}
	if (bLocal_77)
	{
		if (!func_111("FM_CTUT_MOD"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (func_93())
				{
					if (unk_0x94E72F17611BCD3C(iLocal_312, 2))
					{
						if (func_92())
						{
							func_86("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_MOD"))
		{
			func_79("FM_CTUT_MOD");
		}
	}
	if (bLocal_79)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (unk_0x9685D9855970A029())
				{
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (!func_116(unk_0xCFC72E446B0B3AD7(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_RSP"))
		{
			func_79("FM_CTUT_RSP");
		}
	}
	if (bLocal_80)
	{
		if (!func_111("FM_CTUT_RSP"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (unk_0x9685D9855970A029())
				{
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (!func_116(unk_0xCFC72E446B0B3AD7(), 1))
						{
							if (func_92())
							{
								if (func_110())
								{
									func_86("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_REP"))
		{
			func_79("FM_CTUT_REP");
		}
	}
	if (bLocal_81)
	{
		if (!func_111("FM_CTUT_LLS"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (func_93() || func_72())
				{
					if (func_92())
					{
						if (func_110())
						{
						}
					}
				}
			}
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_CTUT_LLS"))
		{
			func_79("FM_CTUT_LLS");
		}
	}
	if (bLocal_78)
	{
		if (!func_111("FM_IMP_SIM"))
		{
			if (!unk_0x18DF50385FACBD8E())
			{
				if (func_93() || func_72())
				{
					if (unk_0x94E72F17611BCD3C(iLocal_312, 3))
					{
						if (!iLocal_84)
						{
							if (func_92())
							{
								func_86("FM_IMP_SIM", 0);
								if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
								{
									if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
									{
										iLocal_327 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									}
								}
							}
						}
						else if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
								if (iVar0 != iLocal_327)
								{
									iLocal_84 = 0;
									func_41(&uLocal_310);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_402(&uLocal_310))
		{
			func_401(&uLocal_310, 0, 0);
		}
		else if (func_400(&uLocal_310, 20000, 0))
		{
			func_112();
			iLocal_84 = 1;
		}
	}
	else if (!unk_0x94E72F17611BCD3C(iLocal_559, 18))
	{
		if (func_111("FM_IMP_SIM"))
		{
			func_79("FM_IMP_SIM");
		}
	}
}

bool func_72()
{
	return ((((func_73(39) || func_73(40)) || func_73(41)) || func_73(42)) || func_73(43));
}

int func_73(int iParam0)
{
	return func_74(iParam0, 6, 1);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_78() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_75(func_77(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_76(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

int func_78()
{
	return Global_24444;
}

void func_79(char* sParam0)
{
	bool bVar0;
	
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_85())
	{
		if (Global_1312579 == 10)
		{
			if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 63)
			{
				return;
			}
			bVar0 = unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_14));
		}
		else
		{
			if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 23)
			{
				return;
			}
			bVar0 = unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_80();
}

void func_80()
{
	func_82();
	func_81(0);
}

void func_81(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x4B69FB3A5B09A1BA();
	Global_1312579 = 11;
	StringCopy(&(Global_1312579.f_1), "", 24);
	Global_1312579.f_7 = 0;
	if (bVar0)
	{
		Global_1312579.f_8 = unk_0x6A8628B6E9F055B3();
		Global_1312579.f_9 = unk_0x6A8628B6E9F055B3();
	}
	StringCopy(&(Global_1312579.f_10), "", 16);
	StringCopy(&(Global_1312579.f_14), "", 64);
	StringCopy(&(Global_1312579.f_30), "", 16);
	Global_1312579.f_34 = 0;
	Global_1312579.f_35 = 0;
	Global_1312579.f_36 = 0;
	Global_1312579.f_37 = -1;
	Global_1312579.f_38 = 0;
	Global_1312579.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_82()
{
	if (!func_84())
	{
	}
	if (func_85())
	{
		unk_0x18A11AF64F186F62(&(Global_1312579.f_10));
		func_83();
		unk_0x7C68BD68C4E013ED();
	}
}

void func_83()
{
	switch (Global_1312579)
	{
		case 11:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x25585F3578FE81FC(Global_1312579.f_34);
			return;
		
		case 2:
			unk_0x25585F3578FE81FC(Global_1312579.f_34);
			unk_0x25585F3578FE81FC(Global_1312579.f_35);
			return;
		
		case 3:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 4:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_30));
			return;
		
		case 5:
			unk_0x7FAFF3E791AF486A(&(Global_1312579.f_14));
			return;
		
		case 6:
			unk_0xE34B517A17B2CB8D(Global_1312579.f_38);
			unk_0x7FAFF3E791AF486A(&(Global_1312579.f_14));
			return;
		
		case 7:
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 8:
			unk_0xE34B517A17B2CB8D(Global_1312579.f_38);
			unk_0xDB4BC767CEF09274(&(Global_1312579.f_14));
			return;
		
		case 9:
			unk_0xBE450B0DD4D82DF2(&(Global_1312579.f_14));
			return;
		
		case 10:
			unk_0xBE450B0DD4D82DF2(&(Global_1312579.f_14));
			return;
		
		default:
	}
}

int func_84()
{
	if (!func_85())
	{
		return 0;
	}
	unk_0x1A95252BC324DC59(&(Global_1312579.f_10));
	func_83();
	return unk_0x776411DBC9EB2206();
}

int func_85()
{
	if (Global_1312579 == 11)
	{
		return 0;
	}
	return 1;
}

void func_86(char* sParam0, bool bParam1)
{
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 23)
	{
		return;
	}
	if (func_90(sParam0))
	{
		return;
	}
	func_80();
	Global_1312579 = 0;
	StringCopy(&(Global_1312579.f_1), unk_0xC2E9075570B5D2B9(), 24);
	Global_1312579.f_7 = unk_0x398F092142D37E17(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	func_89();
	func_88(bParam1);
	func_87();
}

void func_87()
{
	unk_0xEDB9A377CD8B7F03(&(Global_1312579.f_39), 1);
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1312579.f_39), 0);
		return;
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_1312579.f_39), 0);
}

void func_89()
{
	Global_1312579.f_8 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), 86400000);
	Global_1312579.f_9 = unk_0x6A8628B6E9F055B3();
}

bool func_90(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		return func_91(sParam0);
	}
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return 0;
	}
	return unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_10));
}

bool func_91(char* sParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return 0;
	}
	return unk_0x398F092142D37E17(sParam0) == unk_0x398F092142D37E17(&(Global_1312579.f_14));
}

bool func_92()
{
	bool bVar0;
	
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22)))
				{
				}
			}
		}
	}
	if (!unk_0x94E72F17611BCD3C(iLocal_560, 0))
	{
		if (!unk_0x94E72F17611BCD3C(iLocal_560, 1))
		{
			bVar0 = true;
		}
		else if (!unk_0x94E72F17611BCD3C(iLocal_560, 2))
		{
			bVar0 = true;
		}
		else if (!unk_0x94E72F17611BCD3C(iLocal_560, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			unk_0xEDB9A377CD8B7F03(&iLocal_560, 0);
		}
	}
	return bVar0;
}

int func_93()
{
	if (((((((((((((((((!func_14(unk_0xCFC72E446B0B3AD7(), 1, 1) || unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || func_109(8, -1)) || func_109(15, -1)) || func_108()) || func_109(3, -1)) || func_116(unk_0xCFC72E446B0B3AD7(), 1)) || func_107()) || func_110()) || func_106()) || func_105()) || func_103()) || func_102()) || unk_0x18DF50385FACBD8E()) || func_101() > 0) || !func_113()) || func_94())
	{
		return 0;
	}
	return 1;
}

int func_94()
{
	if (func_66(unk_0xCFC72E446B0B3AD7(), 8))
	{
		return 1;
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 10))
	{
		return 1;
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 12))
	{
		return 1;
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 14))
	{
		return 1;
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 13))
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (!func_98() && !func_97())
	{
		if (!func_96())
		{
			if (!func_95())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 7))
	{
		return 1;
	}
	iVar0 = Global_1335599[func_76(-1)];
	if (unk_0x94E72F17611BCD3C(iVar0, 6))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_1620), 7);
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 2);
}

bool func_97()
{
	return Global_1315888;
}

bool func_98()
{
	return Global_1315890;
}

int func_99()
{
	if (unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 28) && !unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 29))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return unk_0x94E72F17611BCD3C(Global_2446533.f_1621, 3);
}

int func_101()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_174;
}

int func_102()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return func_104();
}

bool func_104()
{
	return Global_1321259.f_40 == 3;
}

bool func_105()
{
	return Global_2422166.f_2330.f_585;
}

bool func_106()
{
	return Global_90014.f_291 > 0;
}

bool func_107()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 0);
}

var func_108()
{
	return Global_2394609;
}

bool func_109(int iParam0, int iParam1)
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
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

bool func_110()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_111(char* sParam0)
{
	if (unk_0x9E9AFDBF482248F6(sParam0))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x6BD5B77CFC3C9B4B(sParam0) > 23)
	{
		return 0;
	}
	return func_90(sParam0);
}

void func_112()
{
	if (!func_85())
	{
		return;
	}
	if (!unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) == Global_1312579.f_7)
	{
		return;
	}
	func_80();
}

int func_113()
{
	if (func_114() == 0)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_1312467.f_18;
}

int func_115(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1582869[iParam0 /*332*/].f_35;
}

int func_116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_117(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_117(int iParam0)
{
	return func_118(iParam0);
}

bool func_118(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

void func_119()
{
	if (bLocal_75)
	{
		if (!unk_0x2E6E8D325977B3EC(Global_1685179))
		{
			Global_1685179 = unk_0x2290D76D0A4ACACA(Global_1685180);
			unk_0xAFF0147EA2454485(Global_1685179, 293);
			unk_0xD4916ED85412C8D9(Global_1685179, 1f);
			unk_0xA4D5863487F4E816(Global_1685179, 0);
			unk_0x2A8C2BEEA4F7041F(Global_1685179, "IMPEX_BLIP_FM");
			if (func_136())
			{
				unk_0xA0BFA3F6C43DF44B(Global_1685179, 1);
			}
		}
	}
	else if (unk_0x2E6E8D325977B3EC(Global_1685179))
	{
		unk_0x0451B5D93A4BDAA0(&Global_1685179);
		if (bLocal_284)
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					if (!func_131(unk_0x4E6043D225B9C75F(unk_0xCFC72E446B0B3AD7()), 1215605247, &uLocal_315, 0, 500, 1, 0))
					{
						func_130("IMPEX_HIPR_DAM", -1);
					}
				}
			}
		}
	}
	if (bLocal_76)
	{
		if (iLocal_97 == -1)
		{
			iLocal_97 = func_126(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 4, -1);
			if (iLocal_97 != -1)
			{
				func_120(iLocal_97, 1);
			}
		}
	}
	else if (iLocal_97 != -1)
	{
		func_120(iLocal_97, 0);
		iLocal_97 = -1;
	}
}

void func_120(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_121(39, bParam1);
			break;
		
		case 40:
			func_121(40, bParam1);
			break;
		
		case 41:
			func_121(41, bParam1);
			break;
		
		case 42:
			func_121(42, bParam1);
			break;
		
		case 43:
			func_121(43, bParam1);
			break;
		
		default:
			break;
	}
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 8, 0))
		{
			func_125(iParam0, 8, 0);
			func_124(iParam0);
		}
	}
	else if (func_74(iParam0, 8, 0))
	{
		func_122(iParam0, 8, 0);
		func_124(iParam0);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_123(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

void func_124(int iParam0)
{
	Global_90014.f_153[iParam0] = 1;
	Global_90014.f_152 = 1;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_78() == 0)
		{
			uVar0 = func_75(func_77(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_123(func_77(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_126(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_129(iVar0))
		{
			iVar4 = iVar0;
			if (func_128(iVar4))
			{
				fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, func_127(iVar0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_127(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_128(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = unk_0x2E6E8D325977B3EC(Global_90014.f_198[39]);
			break;
		
		case 40:
			bVar0 = unk_0x2E6E8D325977B3EC(Global_90014.f_198[40]);
			break;
		
		case 41:
			bVar0 = unk_0x2E6E8D325977B3EC(Global_90014.f_198[41]);
			break;
		
		case 42:
			bVar0 = unk_0x2E6E8D325977B3EC(Global_90014.f_198[42]);
			break;
		
		case 43:
			bVar0 = unk_0x2E6E8D325977B3EC(Global_90014.f_198[43]);
			break;
	}
	return bVar0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

void func_130(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_131(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_402(uParam2))
	{
		func_401(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_132(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<8> Var3;
	
	if (!func_402(uParam3))
	{
		func_401(uParam3, 0, 0);
	}
	func_135(&Var3, iParam1);
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			if (func_133(iParam0, iParam1, 30))
			{
				if (unk_0x4E178F5D4155391A(iParam0))
				{
					uVar0 = unk_0x240654B57CFFBFB3(iParam0);
					if (!unk_0x3E0478C40AB5B38D(uVar0))
					{
						if (unk_0x2FCB242469087013(iVar0))
						{
							uVar2 = unk_0xF44355ABE87F03BB(iVar0);
							if (bParam2)
							{
								if (unk_0x0192CFFCF3AB091B(iParam1, uVar2, fParam4, -1))
								{
									if (uParam7 || (!unk_0x489C658788A958F8(iParam1, uVar2, 2) && !(Var3.f_7 != 0 && unk_0x489C658788A958F8(iParam1, uVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (unk_0x0192CFFCF3AB091B(iParam1, uVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (unk_0x489C658788A958F8(iParam1, uVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && unk_0x489C658788A958F8(iParam1, uVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (unk_0x827151D7B70CB853(iVar0, 0))
						{
							uVar1 = unk_0x1161215F69587BDA(iVar0, 0);
							if (unk_0x746960881FB19A89(uVar1))
							{
								if (bParam2)
								{
									if (unk_0x610916890D143180(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!unk_0xE14B241FFAFD683C(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (unk_0x610916890D143180(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (unk_0xE14B241FFAFD683C(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (unk_0x610916890D143180(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!unk_0xE14B241FFAFD683C(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (unk_0x610916890D143180(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (unk_0xE14B241FFAFD683C(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (unk_0x2B1914308D0376C8(iParam0) || unk_0xA6C29CC20CD3DCB4(iParam0))
				{
					if (bParam2)
					{
						if (unk_0x610916890D143180(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!unk_0xE14B241FFAFD683C(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (unk_0x610916890D143180(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (unk_0xE14B241FFAFD683C(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && unk_0xE14B241FFAFD683C(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_41(uParam3);
	return 0;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam0, 1), func_134(iParam1), 1) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_134(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_135(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_136()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_75(1191, -1, 0);
	if (!unk_0x94E72F17611BCD3C(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!unk_0x94E72F17611BCD3C(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_137()
{
	if (bLocal_73)
	{
		if (!iLocal_74)
		{
			func_139(1215605247, 1, 0);
			func_138(1);
			iLocal_74 = 1;
		}
	}
	else if (iLocal_74)
	{
		func_139(1215605247, 0, 0);
		func_138(0);
		iLocal_74 = 0;
	}
}

void func_138(bool bParam0)
{
	if (Global_2446533.f_4355 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2446533.f_4355 = bParam0;
	}
}

void func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
	}
	else if (bParam1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2446533.f_4334, func_140(iParam0)))
		{
			if (bParam2)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4334.f_1), func_140(iParam0));
			}
			unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4334), func_140(iParam0));
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_2446533.f_4334, func_140(iParam0)))
	{
		if (bParam2)
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4334.f_1), func_140(iParam0));
		}
		unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4334), func_140(iParam0));
	}
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_141()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
	{
		if (iLocal_318 >= 32)
		{
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 5);
			iLocal_318 = 0;
			iLocal_290 = -1;
		}
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_318)))
		{
			iVar0 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_318));
			iVar1 = unk_0x4E6043D225B9C75F(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!unk_0x94E72F17611BCD3C(iLocal_559, 3))
				{
					if (unk_0x94E72F17611BCD3C(Local_430[iLocal_318 /*4*/].f_2, 1))
					{
						unk_0xEDB9A377CD8B7F03(&iLocal_559, 3);
					}
				}
				if (iLocal_290 == -1)
				{
					if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
					{
						if (func_4(Local_354.f_22))
						{
							if (!unk_0x3E0478C40AB5B38D(iVar1))
							{
								if (unk_0x2A2DBEFFFC03A22F(iVar1, unk_0x1349078BE884A8E7(Local_354.f_22)))
								{
									if (unk_0xB5BBEB12C77EE430(unk_0x1349078BE884A8E7(Local_354.f_22), -1) == iVar1)
									{
										iLocal_290 = iLocal_318;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_318++;
		if (iLocal_318 >= 32)
		{
			unk_0xEDB9A377CD8B7F03(&iLocal_559, 5);
		}
		func_195();
		if (!unk_0x94E72F17611BCD3C(iLocal_559, 3))
		{
			if (!unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 3))
			{
				if (!unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 1))
				{
					if (func_193())
					{
						unk_0xEDB9A377CD8B7F03(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_287 != Local_354.f_34)
	{
		if (Local_354.f_34 == 0)
		{
			if (!unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
			{
				iLocal_287 = Local_354.f_34;
				unk_0x2D0DCDC2641217B9(iLocal_287);
			}
		}
		else
		{
			iLocal_287 = Local_354.f_34;
			unk_0x2D0DCDC2641217B9(iLocal_287);
		}
	}
	if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
	{
		switch (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3)
		{
			case 0:
				if (!Global_2446533.f_1548)
				{
				}
				if (unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 3))
				{
					unk_0xF76EE56D3E7DAF1B(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 3);
				}
				if (unk_0x94E72F17611BCD3C(iLocal_559, 21))
				{
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 21);
				}
				if (unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 1))
				{
					unk_0xF76EE56D3E7DAF1B(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 1);
				}
				if (((!func_116(unk_0xCFC72E446B0B3AD7(), 1) && !func_107()) && !func_192(unk_0xCFC72E446B0B3AD7(), 1)) || func_66(unk_0xCFC72E446B0B3AD7(), 6))
				{
					if (unk_0x94E72F17611BCD3C(iLocal_559, 3))
					{
						unk_0xF76EE56D3E7DAF1B(&iLocal_559, 3);
					}
					if (unk_0x94E72F17611BCD3C(iLocal_559, 19))
					{
						unk_0xF76EE56D3E7DAF1B(&iLocal_559, 19);
					}
					if (unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 3))
					{
						unk_0xF76EE56D3E7DAF1B(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 3);
					}
					if (iLocal_289 != -1)
					{
						iLocal_289 = -1;
					}
					if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
					{
						if (!unk_0x94E72F17611BCD3C(iLocal_559, 16))
						{
							unk_0xEDB9A377CD8B7F03(&iLocal_559, 16);
							func_191(6, 1);
							unk_0xEDB9A377CD8B7F03(&iLocal_559, 7);
							Global_2446533.f_1547 = 1;
							Global_2446533.f_1548 = 0;
						}
						if (unk_0x9AD64775663C0BCF(1))
						{
							if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
							{
								if (unk_0x94E72F17611BCD3C(iLocal_559, 1) || func_410())
								{
									if (func_190())
									{
										if (Local_354.f_67 != 0)
										{
											unk_0x60DAE84D0B296FD2(Local_354.f_67, 1);
										}
										Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 1;
										Global_1685189 = unk_0x5304FE8A2CED6AE8(unk_0x1349078BE884A8E7(Local_354.f_22));
										if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(unk_0x1349078BE884A8E7(Local_354.f_22))))
										{
											unk_0xAFF0147EA2454485(Global_1685189, 348);
											func_130("IMPEX_HIPB_INT", -1);
										}
										else
										{
											unk_0xAFF0147EA2454485(Global_1685189, 225);
											func_130("IMPEX_HIPR_INT", -1);
										}
										unk_0x016722B6E0559A9A(Global_1685189, 2);
										unk_0x2A8C2BEEA4F7041F(Global_1685189, "IMPEX_HIPR_BLP");
										func_191(6, 1);
										unk_0xEDB9A377CD8B7F03(&iLocal_559, 7);
										Global_2446533.f_1547 = 1;
									}
								}
							}
						}
					}
				}
				else if (!Global_2446533.f_1548)
				{
					Global_2446533.f_1548 = 1;
				}
				break;
			
			case 1:
				if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
				{
					if (unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_354.f_22), 0))
					{
						if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
						{
							if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22)))
							{
								func_189(1);
								if (func_188())
								{
									func_183(0);
								}
								if (unk_0x2E6E8D325977B3EC(Global_1685189))
								{
									unk_0x0451B5D93A4BDAA0(&Global_1685189);
								}
							}
							else
							{
								func_189(0);
								if (!func_182(unk_0x1349078BE884A8E7(Local_354.f_22), 0))
								{
									if (!unk_0x2E6E8D325977B3EC(Global_1685189))
									{
										if (!iLocal_96)
										{
											func_181();
										}
									}
								}
							}
						}
						if (!unk_0x94E72F17611BCD3C(iLocal_559, 19))
						{
							if (func_177(0, 1, 1))
							{
								if (func_175())
								{
									if (!unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22)))
									{
										if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(unk_0x1349078BE884A8E7(Local_354.f_22), 1)) < 2500f)
										{
											func_130("FM_IMP_JAC", -1);
											unk_0xEDB9A377CD8B7F03(&iLocal_559, 19);
										}
									}
								}
							}
						}
						if (func_174())
						{
						}
						func_173();
					}
					else
					{
						if (unk_0x2E6E8D325977B3EC(Global_1685189))
						{
							unk_0x0451B5D93A4BDAA0(&Global_1685189);
						}
						func_191(6, 0);
						unk_0xF76EE56D3E7DAF1B(&iLocal_559, 7);
						Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_354.f_67 != 0)
					{
						unk_0x60DAE84D0B296FD2(Local_354.f_67, 0);
					}
					if (unk_0x2E6E8D325977B3EC(Global_1685189))
					{
						unk_0x0451B5D93A4BDAA0(&Global_1685189);
					}
					func_191(6, 0);
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 7);
					Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 3;
				}
				if (unk_0x94E72F17611BCD3C(iLocal_559, 3))
				{
					func_191(6, 0);
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 7);
					if (unk_0x2E6E8D325977B3EC(Global_1685189))
					{
						unk_0x0451B5D93A4BDAA0(&Global_1685189);
					}
					Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 3;
				}
				if (Local_354.f_26 == 3)
				{
					if (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 == 1)
					{
						if (Local_354.f_67 != 0)
						{
							unk_0x60DAE84D0B296FD2(Local_354.f_67, 0);
						}
						if (unk_0x2E6E8D325977B3EC(Global_1685189))
						{
							unk_0x0451B5D93A4BDAA0(&Global_1685189);
						}
						if (unk_0x94E72F17611BCD3C(iLocal_559, 16))
						{
							unk_0xF76EE56D3E7DAF1B(&iLocal_559, 16);
						}
						func_191(6, 0);
						unk_0xF76EE56D3E7DAF1B(&iLocal_559, 7);
						Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_189(0);
				break;
		}
		if (func_170())
		{
			if (func_169("IMPEX_HIPR_INT"))
			{
				unk_0x35611EEE7A1FFEDB(1);
			}
			if (unk_0x2E6E8D325977B3EC(Global_1685189))
			{
				unk_0x0451B5D93A4BDAA0(&Global_1685189);
			}
			if (Local_354.f_67 != 0)
			{
				unk_0x60DAE84D0B296FD2(Local_354.f_67, 0);
			}
			Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 3;
			func_191(6, 0);
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 7);
			if (unk_0x94E72F17611BCD3C(iLocal_559, 16))
			{
				unk_0xF76EE56D3E7DAF1B(&iLocal_559, 16);
			}
			func_189(0);
		}
		func_145();
		if (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 > 0 && Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 < 3)
		{
			func_142();
		}
	}
	else
	{
		if (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 != 0)
		{
			if (Local_354.f_67 != 0)
			{
				unk_0x60DAE84D0B296FD2(Local_354.f_67, 0);
			}
			Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 = 0;
		}
		if (unk_0x94E72F17611BCD3C(iLocal_559, 21))
		{
			unk_0xF76EE56D3E7DAF1B(&iLocal_559, 21);
		}
		if (Global_2446533.f_1547)
		{
			if (!func_402(&uLocal_300))
			{
				func_401(&uLocal_300, 0, 0);
			}
			else if (func_400(&uLocal_300, 5000, 0))
			{
				func_41(&uLocal_300);
				Global_2446533.f_1547 = 0;
			}
		}
		if (unk_0x94E72F17611BCD3C(iLocal_559, 16))
		{
			if (Local_354.f_34 == 0)
			{
				unk_0xF76EE56D3E7DAF1B(&iLocal_559, 16);
			}
		}
	}
}

void func_142()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_290 > -1)
	{
		if (iLocal_290 != unk_0x9725084D4DFE8258())
		{
			if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_290)))
			{
				iVar0 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_290));
				bVar1 = true;
				if (unk_0x7F0B9D2743F95A8F(iVar0, unk_0xCFC72E446B0B3AD7()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22), 0))
				{
					if (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_143(unk_0x1349078BE884A8E7(Local_354.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x5E4CDAB7B6D20BDE(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	unk_0x13DE0701DBD9B873(iParam0);
	if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (func_144(iParam0) == 0)
			{
				if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam0, 0))
				{
					if (unk_0x89E19A8E46D632B8(iParam0))
					{
						unk_0x04F6CBA8E88E47E0(iParam0, "MP_Arrow");
						unk_0x6C58D1C65E6B58E1(iParam0, uVar0, uVar1, uVar2, 190);
						unk_0x27B8ACFD2FF2216B(iParam0, 1);
					}
				}
			}
		}
	}
}

int func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	if (unk_0xAAF77E03CD60491E(iVar0) == 0 && unk_0xDB519A4108C6BFB1(iVar0) == 0)
	{
		return 0;
	}
	if (unk_0xF37F1CECABC7FC33(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_145()
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(iLocal_559, 5))
	{
		if (iLocal_289 != iLocal_290)
		{
			if (iLocal_290 > -1)
			{
				if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_290)))
				{
					iVar0 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_290));
					if (iVar0 != unk_0xCFC72E446B0B3AD7())
					{
						if (!func_192(unk_0xCFC72E446B0B3AD7(), 1))
						{
							func_146("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 1, 0);
						}
					}
					if (unk_0x7EF90A4891193127())
					{
						if (!unk_0x94E72F17611BCD3C(Local_354.f_23, 8))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_354.f_23), 8);
						}
					}
				}
			}
			iLocal_289 = iLocal_290;
		}
	}
}

int func_146(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var1, unk_0x6866FFA103E7C994(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6866FFA103E7C994(iParam1), 64);
		}
		unk_0x3BE5C2319988C0DB(sParam0);
		unk_0xE34B517A17B2CB8D(func_155(iParam1, -2, 1, 0));
		unk_0x7FAFF3E791AF486A(func_153(&Var1));
		if (!bParam4)
		{
			iVar0 = unk_0x21B9348B2F3B9A98(0, 1);
		}
		else
		{
			Global_2445561 = { func_152(iParam1) };
			if (unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561))
			{
				iVar17 = 0;
				if (unk_0x6B08EC9A88700FBB(&(Global_2445491.f_22), "Leader") && Global_2445491.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2445491.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_151(&Var1) };
					}
					iVar0 = unk_0x11C816BF7D78992E(iVar18, unk_0xBC332590BA9DD12B(&Global_2445491, 35), &(Global_2445491.f_17), Global_2445491.f_30, iVar17, 0, Global_2445491, &Var1, Global_1317060, Global_1317061, Global_1317062);
				}
				else
				{
					iVar0 = unk_0x3CE61FF81B12EE33(iVar18, unk_0xBC332590BA9DD12B(&Global_2445491, 35), &(Global_2445491.f_17), Global_2445491.f_30, iVar17, 0, Global_2445491, Global_1317060, Global_1317061, Global_1317062);
				}
			}
			else
			{
				iVar0 = unk_0x21B9348B2F3B9A98(0, 1);
			}
		}
		func_147(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_147(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_150() || !unk_0x11D7DF356299D4F0()) || !func_22(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return;
	}
	iVar0 = func_148(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1694032.f_5[iVar0 /*53*/] = iParam0;
		Global_1694032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1694032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1694032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1694032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1694032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1694032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1694032 - 1))
	{
		if (iParam0 > Global_1694032.f_5[iVar0 /*53*/].f_1)
		{
			func_149(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1694032++;
	if (Global_1694032 > 5)
	{
		Global_1694032 = 5;
		return Global_1694032;
	}
	return (Global_1694032 - 1);
}

void func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1694032.f_5[iVar0 /*53*/] = { Global_1694032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_150()
{
	return unk_0x9501317225249120(-1762644250);
}

struct<16> func_151(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_152(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

var func_153(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_154(&cVar0);
}

var func_154(char[4] cParam0)
{
	return cParam0;
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_167(iParam0))
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
	if (func_167(unk_0xCFC72E446B0B3AD7()) || (func_166() && func_165()))
	{
		iVar0 = func_164();
		if (unk_0x746960881FB19A89(iVar0))
		{
			if (unk_0x2FCB242469087013(iVar0))
			{
				if (unk_0xF44355ABE87F03BB(iVar0) != -1)
				{
					if (func_14(unk_0xF44355ABE87F03BB(iVar0), 0, 1))
					{
						return func_162(iParam0, unk_0xF44355ABE87F03BB(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_156(0, -1, 0);
			}
		}
	}
	return func_162(iParam0, unk_0xCFC72E446B0B3AD7(), iParam1, bParam2, bParam3);
}

int func_156(bool bParam0, int iParam1, bool bParam2)
{
	return func_157(unk_0xCFC72E446B0B3AD7(), bParam0, iParam1, bParam2);
}

int func_157(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x59A4BF97B76AD953(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_161(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_160(1);
				}
				else
				{
					return func_160(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_158(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_160(1);
	}
	return func_160(0);
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_159(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_159(int iParam0, int iParam1)
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
			if (!func_161(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_160(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_161(int iParam0, int iParam1)
{
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
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 0);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 1);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 2);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 4);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 5);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 6);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 8);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 9);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 10);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 12);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 13);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 14);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x59A4BF97B76AD953(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_163(iParam1, iParam0, iVar0, 0))
		{
			return func_160(1);
		}
		else
		{
			return func_157(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1573687 || Global_1573678)
	{
		if (iParam0 == iParam1 || (Global_1573687 == 1 && Global_1573697 == 0))
		{
			return func_160(1);
		}
		else
		{
			return func_157(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573682 && Global_1573268.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_163(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && unk_0x59A4BF97B76AD953(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == unk_0x59A4BF97B76AD953(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
	}
	return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
}

var func_164()
{
	return Global_2359301.f_2;
}

bool func_165()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 4);
}

bool func_166()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 14);
}

int func_167(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_168())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_168()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_169(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

int func_170()
{
	if ((Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 > 0 && Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 < 3) || (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 == 0 && func_66(unk_0xCFC72E446B0B3AD7(), 6)))
	{
		if (func_116(unk_0xCFC72E446B0B3AD7(), 1) || func_107())
		{
			if (!func_171(unk_0xCFC72E446B0B3AD7(), 5) && !func_171(unk_0xCFC72E446B0B3AD7(), 32))
			{
				return 1;
			}
			else if (!iLocal_96)
			{
				if (unk_0x2E6E8D325977B3EC(Global_1685189))
				{
					unk_0x0451B5D93A4BDAA0(&Global_1685189);
				}
				iLocal_96 = 1;
			}
		}
		else if (iLocal_96)
		{
			func_181();
			iLocal_96 = 0;
		}
		if (Local_354.f_26 == 3)
		{
			if (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_3 == 0 && func_66(unk_0xCFC72E446B0B3AD7(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312449 != 0)
	{
		return 0;
	}
	if (!func_172(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1582869[iVar0 /*332*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
	}
	return 1;
}

void func_173()
{
	if (unk_0x2E6E8D325977B3EC(Global_1685189))
	{
		if (!iLocal_85)
		{
			if (func_192(unk_0xCFC72E446B0B3AD7(), 1))
			{
				unk_0xA4D5863487F4E816(Global_1685189, 1);
				iLocal_85 = 1;
			}
		}
		else if (!func_192(unk_0xCFC72E446B0B3AD7(), 1))
		{
			unk_0xA4D5863487F4E816(Global_1685189, 0);
			iLocal_85 = 0;
		}
	}
}

int func_174()
{
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_354.f_22), 0, 7000) || unk_0xED6198B6F71F1E6F(unk_0x1349078BE884A8E7(Local_354.f_22), 1, 40000))
			{
				if (unk_0x4792C62764008602(Local_354.f_22))
				{
					if (unk_0x34CE5EC4D87561E4(Local_354.f_22))
					{
						unk_0x8063FF52148C1749(unk_0x1349078BE884A8E7(Local_354.f_22), -2000f);
						unk_0x76DD68AB949475D7(unk_0x1349078BE884A8E7(Local_354.f_22), 0f);
					}
					return 1;
				}
				else if (unk_0x7EF90A4891193127())
				{
					if (func_10(Local_354.f_22))
					{
						unk_0x8063FF52148C1749(unk_0x1349078BE884A8E7(Local_354.f_22), -2000f);
						unk_0x76DD68AB949475D7(unk_0x1349078BE884A8E7(Local_354.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_175()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_290 == -1 && unk_0x94E72F17611BCD3C(iLocal_559, 5))
	{
		return 0;
	}
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22)))
				{
					if (func_176(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_290 >= 0)
			{
				if (iLocal_290 != unk_0x9725084D4DFE8258())
				{
					if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_290)))
					{
						iVar0 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_290));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = unk_0x4E6043D225B9C75F(iVar0);
							if (unk_0x2A2DBEFFFC03A22F(iVar1, unk_0x1349078BE884A8E7(Local_354.f_22)))
							{
								if (func_176(iVar1, unk_0x1349078BE884A8E7(Local_354.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, int iParam2)
{
	if (iParam2 && unk_0xC9EED58014EF1F40())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0x9685D9855970A029())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_116(unk_0xCFC72E446B0B3AD7(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_180(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (func_105())
	{
		return 0;
	}
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	if (unk_0xC8557993A78C1B3E())
	{
		return 0;
	}
	if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (Global_1573535)
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	if (func_178())
	{
		return 0;
	}
	if (func_418())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (Global_2453224)
	{
		return 0;
	}
	return 1;
}

bool func_178()
{
	return Global_2428162.f_565;
}

bool func_179()
{
	return Global_2428162.f_715;
}

int func_180(int iParam0)
{
	if (Global_2414035[iParam0 /*254*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

void func_181()
{
	Global_1685189 = unk_0x5304FE8A2CED6AE8(unk_0x1349078BE884A8E7(Local_354.f_22));
	if (unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(unk_0x1349078BE884A8E7(Local_354.f_22))))
	{
		unk_0xAFF0147EA2454485(Global_1685189, 348);
	}
	else
	{
		unk_0xAFF0147EA2454485(Global_1685189, 225);
	}
	unk_0x016722B6E0559A9A(Global_1685189, 2);
	unk_0x2A8C2BEEA4F7041F(Global_1685189, "IMPEX_HIPR_BLP");
}

int func_182(int iParam0, int iParam1)
{
	if (func_131(iParam0, 1215605247, &uLocal_315, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0)
{
	if (func_188())
	{
		if (iParam0 == 1)
		{
			if (Global_2446533.f_4231 == -1)
			{
				Global_2446533.f_4231 = 60000;
			}
			func_187(&(Global_2446533.f_4229), 0, 0);
			if (Global_2446533.f_4234 == -1)
			{
				Global_2446533.f_4234 = 10000;
			}
			func_187(&(Global_2446533.f_4232), 0, 0);
		}
		else
		{
			Global_1312418 = 0;
			func_186();
		}
		if ((!unk_0x11D7DF356299D4F0() && !func_185()) && !func_184(unk_0xCFC72E446B0B3AD7()))
		{
			Global_973956 = 0;
		}
	}
}

int func_184(int iParam0)
{
	if (func_116(iParam0, 1))
	{
		if (Global_1582869[iParam0 /*332*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_185()
{
	return Global_2428162.f_711;
}

void func_186()
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (!func_188())
		{
			if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				unk_0x624C7BCDEBB9C07F(unk_0x9F92518438215DD0(), 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 342, 0);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 122, 0);
			}
			unk_0xC659370EBF580E0D(unk_0xCFC72E446B0B3AD7(), 1f);
			unk_0xECEB44CE3983E88C(0);
			unk_0x4834FC0305528BED(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				unk_0x9B3D2D8783B4AD7E(0);
			}
		}
		else
		{
			if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				unk_0x624C7BCDEBB9C07F(unk_0x9F92518438215DD0(), 0);
				unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 342, 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 122, 1);
				unk_0xC659370EBF580E0D(unk_0xCFC72E446B0B3AD7(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x9B3D2D8783B4AD7E(1);
				}
			}
			unk_0xECEB44CE3983E88C(1);
			unk_0x4834FC0305528BED(0);
		}
	}
}

void func_187(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6A8628B6E9F055B3();
		}
		else
		{
			*uParam0 = unk_0x4FEA29C1086C638D();
		}
	}
	else
	{
		*uParam0 = unk_0x17103F66FBB44C3C();
	}
	uParam0->f_1 = 1;
}

bool func_188()
{
	return Global_1312418;
}

void func_189(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 27))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4399), 27);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 27))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4399), 27);
	}
}

int func_190()
{
	if (!func_177(0, 1, 1))
	{
		return 0;
	}
	return 1;
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
	}
}

int func_192(int iParam0, bool bParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_243.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_243.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_193()
{
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (!func_175())
			{
				if (func_194(unk_0x77009B1C011405A9(unk_0x1349078BE884A8E7(Local_354.f_22), 1), 1215605247, 18))
				{
					if (func_182(unk_0x1349078BE884A8E7(Local_354.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_194(struct<3> Param0, int iParam3, int iParam4)
{
	if (unk_0x91EAD4F2F9B5B38A(Param0, func_134(iParam3), 1) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
	{
		if (func_4(Local_354.f_22))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22), 0))
				{
					if (!unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 2))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 2);
					}
				}
				else if (func_196(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22), 1) < 180f)
				{
					if (!unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 2))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 2);
					}
				}
				else if (unk_0x94E72F17611BCD3C(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2, 2))
				{
					unk_0xF76EE56D3E7DAF1B(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_196(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

void func_197()
{
	int iVar0;
	
	if (iLocal_71)
	{
		func_296();
		if (!unk_0x94E72F17611BCD3C(iLocal_559, 1))
		{
			if (Global_2446533.f_1572 > 0)
			{
				if (Global_2446533.f_1575 == 0)
				{
					Global_2446533.f_1575 = unk_0x6A8628B6E9F055B3();
				}
				else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2446533.f_1575) > iLocal_56)
				{
					if (!func_102())
					{
						if (func_65())
						{
							if (func_190())
							{
								if (!func_295())
								{
									if (!func_294(0))
									{
										Global_16797 = 0;
										iVar0 = func_75(1191, -1, 0);
										if (!unk_0x94E72F17611BCD3C(iVar0, 0))
										{
											if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2446533.f_1575) > 20000)
											{
												if (func_293(18, "CELL_CLTEST6", 2, "NULL", Global_2446533.f_1572, "TestSender1", 4, 0, 1, 0, 0, bLocal_92, 0, 0, 0, 0, 0))
												{
													unk_0xEDB9A377CD8B7F03(&iVar0, 0);
													func_123(1191, iVar0, -1, 1);
													unk_0xEDB9A377CD8B7F03(&iLocal_559, 1);
													func_291(0f, 0f, 0f, func_292(19), "");
													Global_2446533.f_1574 = 1;
													iLocal_71 = 0;
												}
											}
										}
										else if (func_293(18, "CELL_CLTEST1", 2, "NULL", Global_2446533.f_1572, "TestSender1", 4, 0, 1, 0, 0, bLocal_92, 0, 0, 0, 0, 0))
										{
											func_291(0f, 0f, 0f, func_292(19), "");
											unk_0xEDB9A377CD8B7F03(&iLocal_559, 1);
											Global_2446533.f_1574 = 1;
											iLocal_71 = 0;
										}
									}
								}
								else
								{
									Global_2446533.f_1575 = unk_0x6A8628B6E9F055B3();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (unk_0x94E72F17611BCD3C(iLocal_559, 1))
	{
		if (!unk_0x94E72F17611BCD3C(iLocal_312, 5))
		{
			if (func_190())
			{
				if (bLocal_92)
				{
					func_130("IMPEX_HELP_LNCH", -1);
				}
				unk_0xEDB9A377CD8B7F03(&iLocal_312, 5);
				func_401(&uLocal_298, 0, 0);
			}
		}
	}
	if (iLocal_94)
	{
		if (func_409())
		{
			if (!func_402(&uLocal_102))
			{
				func_401(&uLocal_102, 0, 0);
			}
			else if (func_400(&uLocal_102, 10000, 0))
			{
				if (func_198(18, "CELL_IMPT", 0, 0))
				{
					iLocal_94 = 0;
					func_41(&uLocal_102);
				}
			}
		}
	}
}

bool func_198(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_199(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_199(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_200(&uVar0, iParam0, func_290(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_200(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x9E9AFDBF482248F6(sParam2))
	{
		return 0;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(sParam3))
	{
		return 0;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
	iVar1 = func_289(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x9E9AFDBF482248F6(uParam7))
	{
		iVar2 = unk_0x398F092142D37E17(sParam7);
	}
	if (func_288(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_284(iParam6))
	{
		return 0;
	}
	if (func_281(iVar0, iVar1, iVar2))
	{
		if (func_280())
		{
			return 0;
		}
		func_279();
		return func_207(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_206(iParam4))
	{
		return 0;
	}
	func_201(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_201(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1321259.f_40.f_1 = iParam0;
	Global_1321259.f_40.f_2 = iParam1;
	Global_1321259.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321259.f_40.f_4), sParam3, 16);
	Global_1321259.f_40.f_8 = iParam4;
	Global_1321259.f_40.f_9 = iParam5;
	Global_1321259.f_40.f_14 = iParam6;
	func_202(iParam4);
	func_279();
	Global_1321259.f_40.f_13 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), 7000);
}

void func_202(int iParam0)
{
	if (func_205(iParam0))
	{
		func_204();
		return;
	}
	func_203();
}

void func_203()
{
	Global_1321259.f_40.f_10 = 0;
}

void func_204()
{
	Global_1321259.f_40.f_10 = 1;
}

int func_205(int iParam0)
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

bool func_206(int iParam0)
{
	return iParam0 > Global_1321259.f_40.f_8;
}

int func_207(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_278();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_275(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_272(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_275(uParam0, sParam3, sParam4);
		}
		return func_256(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_255(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_246(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_245(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_208(iParam1, uParam2, sParam4, iParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_208(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_244();
	bVar0 = true;
	if (func_210(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_209(120000);
		return 1;
	}
	return 0;
}

void func_209(int iParam0)
{
	Global_1321259.f_40.f_11 = unk_0x9B93E0378395B104(unk_0x6A8628B6E9F055B3(), iParam0);
	Global_1321259.f_40.f_12 = 1;
}

int func_210(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_243();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0x6866FFA103E7C994(iVar0);
		iVar1 = func_237(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1321259.f_40.f_13))
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
	sVar4 = func_236(uParam5, bParam6, &iVar3);
	uVar5 = func_234(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		iVar6++;
		if (!unk_0x9E9AFDBF482248F6(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6B08EC9A88700FBB(sVar4, " "))
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
		if (unk_0x94E72F17611BCD3C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9E9AFDBF482248F6(sVar2))
	{
		bVar12 = func_233(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_214(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(iParam4, 0))
	{
		func_213();
	}
	func_244();
	func_212();
	func_211();
	return 1;
}

void func_211()
{
	Global_1321259.f_57 = 0;
	Global_1321259.f_57.f_1 = 0;
}

void func_212()
{
	Global_1321259.f_40 = 3;
}

void func_213()
{
	unk_0xEDB9A377CD8B7F03(&Global_2263, 8);
}

int func_214(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_215(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 0);
		}
		return 1;
	}
	return 0;
}

int func_215(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x6B08EC9A88700FBB(sParam14, sParam15))
	{
	}
	func_227();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				return 0;
			}
		}
		if (Global_2545524 == 1)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_226() == 0)
	{
		func_224();
		return 0;
	}
	func_223(Global_2545523);
	StringCopy(&(Global_2544274[Global_2545523 /*104*/]), sParam1, 64);
	Global_2544274[Global_2545523 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2544274[Global_2545523 /*104*/].f_24 = iParam2;
	}
	Global_2544274[Global_2545523 /*104*/].f_25 = iParam7;
	Global_2544274[Global_2545523 /*104*/].f_26 = uParam8;
	Global_2544274[Global_2545523 /*104*/].f_29 = uParam9;
	Global_2544274[Global_2545523 /*104*/].f_30 = uParam12;
	Global_2544274[Global_2545523 /*104*/].f_31 = uParam11;
	Global_2544274[Global_2545523 /*104*/].f_28 = 0;
	Global_2544274[Global_2545523 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_33), sParam4, 64);
	Global_2544274[Global_2545523 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_50), sParam5, 64);
	Global_2544274[Global_2545523 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2544274[Global_2545523 /*104*/].f_83), sParam15, 64);
	func_227();
	switch (iParam16)
	{
		case 3:
			Global_2544274[Global_2545523 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2544274[Global_2545523 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2544274[Global_2545523 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2544274[Global_2545523 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14393)
		{
			case 0:
				func_222(0);
				break;
			
			case 1:
				func_222(1);
				break;
			
			case 2:
				func_222(2);
				break;
			
			case 3:
				func_222(3);
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
				Global_2545524 = 1;
				break;
			
			case 0:
				Global_2545524 = 1;
				break;
			
			case 2:
				Global_2545524 = 1;
				break;
			
			case 1:
				Global_2545524 = 1;
				break;
			}
	}
	Global_16761[Global_2545523] = 0;
	if (bParam10)
	{
		func_227();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_221())
			{
				unk_0x86F4B3D6FF8F65DE(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_220(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_216(1);
			func_220(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_216(int iParam0)
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_219(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_218(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar2);
								unk_0x7E86CE5F658823DB();
							}
							Global_2832[iVar0] = 1;
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
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97358.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97358.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97358.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_217(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2544274[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2544274[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2544274[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_217(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_217(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_217(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_218(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(Global_2269);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_218(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar7);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_218(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar8);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 8)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_218(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(42);
								unk_0x7E86CE5F658823DB();
							}
							else
							{
								func_217(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_217(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(uParam7))
	{
		func_218(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_218(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_218(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_218(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_218(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_218(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

bool func_219(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_220(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

bool func_221()
{
	return Global_1315900;
}

void func_222(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97358.f_12305[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_223(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD9940DF735CED1D5();
	uVar1 = unk_0x00CE62DFC32D8B1E();
	uVar2 = unk_0x3E15607264E063C3();
	uVar3 = unk_0xA2C54D866C588926();
	uVar4 = unk_0x35E06151CD8A2DD1() + 1;
	uVar5 = unk_0x4C625096668FC49E();
	Global_2544274[iParam0 /*104*/].f_18 = uVar0;
	Global_2544274[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2544274[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2544274[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2544274[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2544274[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2545523 = 11;
	Global_2544274[Global_2545523 /*104*/].f_18 = -1;
	Global_2544274[Global_2545523 /*104*/].f_18.f_1 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_2 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_3 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_225(Global_2544274[iVar2 /*104*/].f_18, Global_2544274[Global_2545523 /*104*/].f_18))
		{
			Global_2545523 = iVar2;
		}
		iVar2++;
	}
	Global_2544274[Global_2545523 /*104*/].f_24 = 1;
}

int func_225(struct<6> Param0, struct<6> Param6)
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

int func_226()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2544274[iVar2 /*104*/].f_24 == 0)
		{
			Global_2545523 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2545523 = 11;
	Global_2544274[Global_2545523 /*104*/].f_18 = -1;
	Global_2544274[Global_2545523 /*104*/].f_18.f_1 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_2 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_3 = 0;
	Global_2544274[Global_2545523 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2544274[iVar2 /*104*/].f_24 == 0 || Global_2544274[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_225(Global_2544274[iVar2 /*104*/].f_18, Global_2544274[Global_2545523 /*104*/].f_18))
			{
				Global_2545523 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2545523 == 11)
	{
		return 0;
	}
	Global_2544274[Global_2545523 /*104*/].f_99[0] = 0;
	Global_2544274[Global_2545523 /*104*/].f_99[1] = 0;
	Global_2544274[Global_2545523 /*104*/].f_99[2] = 0;
	return 1;
}

void func_227()
{
	if (func_219(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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
		Global_14393 = func_228();
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

var func_228()
{
	func_229();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_229()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_232(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_231(unk_0x9F92518438215DD0());
			if (func_230(iVar0) && (!func_219(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_230(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_230(int iParam0)
{
	return iParam0 < 3;
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_232(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_232(int iParam0)
{
	if (func_230(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_233(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_215(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 0);
		}
		return 1;
	}
	return 0;
}

int func_234(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_235(2, iParam1);
	return iParam0;
}

void func_235(int iParam0, var uParam1)
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

var func_236(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x9E9AFDBF482248F6(uParam0))
	{
		return sLocal_17;
	}
	if (unk_0x6B08EC9A88700FBB(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_235(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x398E4CFB573BEBB7(sParam0);
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_240(iParam0);
	if (iVar0 == -1)
	{
		func_238(iParam0, 1);
		return 0;
	}
	Global_1336400[iVar0 /*5*/].f_4 = 1;
	return Global_1336400[iVar0 /*5*/].f_2;
}

void func_238(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_240(iParam0) != -1)
	{
		return;
	}
	if (Global_1336563)
	{
		if (iParam0 == Global_1336563.f_1)
		{
			return;
		}
	}
	if (func_239(iParam0))
	{
		return;
	}
	if (Global_1336601 >= 32)
	{
		return;
	}
	Global_1336568[Global_1336601] = iParam0;
	Global_1336601++;
	if (bParam1)
	{
	}
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336601)
	{
		if (Global_1336568[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1336561 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336561)
	{
		if (Global_1336400[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xB72DEA463116350F(Global_1336400[iVar0 /*5*/].f_2) && unk_0xA8985BD1EF3D9A7B(Global_1336400[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_241(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_241(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1336561)
	{
		return;
	}
	if (unk_0xB72DEA463116350F(Global_1336400[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1336400[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xEE19D2B42122B330(Global_1336400[iParam0 /*5*/].f_2), 64);
			unk_0x8C599FA8F9C56D91(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x41979D12FECA5105(Global_1336400[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1336561)
	{
		Global_1336400[iVar32 /*5*/] = { Global_1336400[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_242(&(Global_1336400[iVar32 /*5*/]));
	Global_1336561 = (Global_1336561 - 1);
}

void func_242(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_243();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x4B69FB3A5B09A1BA())
	{
		uParam0->f_3 = unk_0x6A8628B6E9F055B3();
	}
}

int func_243()
{
	return -1;
}

void func_244()
{
	Global_1321259.f_40.f_9 = 4;
}

int func_245(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_244();
	bVar0 = false;
	return func_210(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_246(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_247(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_247(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_243();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = unk_0x6866FFA103E7C994(iVar0);
		iVar1 = func_237(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16753 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_236(uParam5, bParam6, &iVar3);
	uVar5 = func_234(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x9E9AFDBF482248F6(sParam8))
	{
		iVar6++;
		if (!unk_0x9E9AFDBF482248F6(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x6B08EC9A88700FBB(sVar4, " "))
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
		if (unk_0x94E72F17611BCD3C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x9E9AFDBF482248F6(sVar2))
	{
		bVar12 = func_293(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_249(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(iParam4, 0))
	{
		func_213();
	}
	func_248();
	func_212();
	func_211();
	return 1;
}

void func_248()
{
	Global_1321259.f_40.f_9 = 3;
}

int func_249(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_250(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			unk_0xEDB9A377CD8B7F03(&Global_2263, 1);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_250(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x6B08EC9A88700FBB(sParam14, sParam15))
	{
	}
	func_227();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				return 0;
			}
		}
		if (Global_97358.f_12305[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_254() == 0)
	{
		func_252();
		return 0;
	}
	func_251(Global_16759);
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/]), sParam1, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_25 = iParam7;
	Global_97358.f_12395[Global_16759 /*104*/].f_26 = uParam8;
	Global_97358.f_12395[Global_16759 /*104*/].f_29 = uParam9;
	Global_97358.f_12395[Global_16759 /*104*/].f_30 = uParam12;
	Global_97358.f_12395[Global_16759 /*104*/].f_31 = uParam11;
	Global_97358.f_12395[Global_16759 /*104*/].f_28 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_83), sParam15, 64);
	if (unk_0x94E72F17611BCD3C(Global_2263, 10))
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		func_222(0);
		func_222(2);
		func_222(1);
	}
	else
	{
		func_227();
		switch (iParam16)
		{
			case 3:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					func_222(0);
					Global_2969 = 0;
					break;
				
				case 1:
					func_222(1);
					Global_2969 = 1;
					break;
				
				case 2:
					func_222(2);
					Global_2969 = 2;
					break;
				
				case 3:
					func_222(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x94E72F17611BCD3C(Global_2263, 10))
		{
			Global_97358.f_12305[0 /*20*/].f_17 = 1;
			Global_97358.f_12305[1 /*20*/].f_17 = 1;
			Global_97358.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97358.f_12305[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97358.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97358.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97358.f_12305[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		func_227();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_221())
			{
				unk_0x86F4B3D6FF8F65DE(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_220(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_216(1);
			func_220(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_251(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD9940DF735CED1D5();
	uVar1 = unk_0x00CE62DFC32D8B1E();
	uVar2 = unk_0x3E15607264E063C3();
	uVar3 = unk_0xA2C54D866C588926();
	uVar4 = unk_0x35E06151CD8A2DD1() + 1;
	uVar5 = unk_0x4C625096668FC49E();
	Global_97358.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_252()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
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
	Global_16759 = 34;
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_253(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_24 = 1;
}

int func_253(struct<6> Param0, struct<6> Param6)
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

int func_254()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
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
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97358.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_253(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
			{
				Global_16759 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16759 == 34)
	{
		return 0;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 0;
	return 1;
}

int func_255(int iParam0, var uParam1, char* sParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
	}
	if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	func_248();
	bVar0 = true;
	if (func_247(iParam0, uParam1, sParam2, bVar0, iParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_209(120000);
		return 1;
	}
	return 0;
}

int func_256(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x94E72F17611BCD3C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x94E72F17611BCD3C(iParam4, 4))
	{
		bVar0 = func_271(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_262(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x94E72F17611BCD3C(iParam4, 3))
		{
			func_261(1);
		}
		if (unk_0x94E72F17611BCD3C(iParam4, 5))
		{
			func_260(1);
		}
		func_259();
		func_212();
		func_258();
		func_257();
		return 1;
	}
	return 0;
}

void func_257()
{
	Global_2452812 = 0;
}

void func_258()
{
	Global_1321259.f_57 = 1;
	Global_1321259.f_57.f_1 = 0;
}

void func_259()
{
	Global_1321259.f_40.f_9 = 1;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2265, 0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
	}
}

void func_261(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 20);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
	}
}

int func_262(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_270(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_263(sParam3, iParam4, bParam7);
}

int func_263(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xC318E8D9E0AA1394(0);
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
					func_269();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_109(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_268();
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_227();
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_267())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_266())
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_265();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_264();
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
		func_269();
	}
	return 0;
}

void func_264()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_265()
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_266()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_268()
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

void func_269()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_270(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_271(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_270(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 1;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_263(sParam3, iParam4, bParam7);
}

int func_272(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
	}
	if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	if (func_274(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_273();
		func_259();
		func_212();
		func_258();
		func_257();
		return 1;
	}
	return 0;
}

void func_273()
{
	Global_16710 = 0;
}

bool func_274(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_270(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 1;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 1;
	Global_15746 = 0;
	StringCopy(&Global_15840, sParam5, 24);
	Global_2621441 = 0;
	return func_263(sParam3, iParam4, bParam8);
}

int func_275(var uParam0, char* sParam1, char* sParam2)
{
	if (func_277(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_276();
		func_212();
		func_258();
		return 1;
	}
	return 0;
}

void func_276()
{
	Global_1321259.f_40.f_9 = 2;
}

bool func_277(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_270(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_263(sParam2, iParam3, 0);
}

void func_278()
{
	Global_1321259.f_55 = Global_1321259.f_40.f_1;
	Global_1321259.f_55.f_1 = Global_1321259.f_40.f_10;
}

void func_279()
{
	Global_1321259.f_40 = 1;
}

bool func_280()
{
	return Global_1321259.f_40 == 1;
}

int func_281(int iParam0, int iParam1, int iParam2)
{
	if (!func_282(iParam0))
	{
		return 0;
	}
	if (Global_1321259.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321259.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_282(int iParam0)
{
	if (!func_283())
	{
		return 0;
	}
	if (!Global_1321259.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	if (Global_1321259.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_284(int iParam0)
{
	if (func_287())
	{
		return 0;
	}
	if (func_104())
	{
		return 0;
	}
	if (func_294(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1685205 || func_286())
	{
		return 0;
	}
	if (!unk_0x94E72F17611BCD3C(iParam0, 6))
	{
		if (func_285())
		{
			return 0;
		}
	}
	return 1;
}

bool func_285()
{
	return unk_0x3BFEFA55CCE228E0(unk_0x6A8628B6E9F055B3(), Global_1335192);
}

int func_286()
{
	if (Global_2536168.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_287()
{
	return func_266();
}

int func_288(int iParam0, int iParam1, int iParam2)
{
	if (!func_104())
	{
		return 0;
	}
	return func_281(iParam0, iParam1, iParam2);
}

int func_289(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x398F092142D37E17(&cVar0);
}

char* func_290()
{
	return "TXTMSG";
}

int func_291(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!unk_0x9E9AFDBF482248F6(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x6B08EC9A88700FBB(&(Global_2446533.f_3804[iVar0 /*26*/].f_4), sParam3))
			{
				if (unk_0x9E9AFDBF482248F6(&(Global_2446533.f_3804[iVar0 /*26*/].f_4)))
				{
					Global_2446533.f_3804[iVar0 /*26*/] = 1;
					Global_2446533.f_3804[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_26(Global_2446533.f_3804[iVar0 /*26*/].f_1, Param0))
			{
				Global_2446533.f_3804[iVar0 /*26*/] = 1;
				Global_2446533.f_3804[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_292(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_293(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 10);
	iVar0 = 3;
	if (func_250(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 1);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_295()
{
	return func_283();
}

void func_296()
{
	if (func_65())
	{
		if (!iLocal_317 == Local_354.f_32)
		{
			Global_2446533.f_1532 = { Local_342 };
			func_297();
			iLocal_317 = Local_354.f_32;
		}
	}
}

void func_297()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2446533.f_1551[iVar1 /*4*/]), "", 16);
		if (!Global_2446533.f_1532[iVar1] == -1 && Global_2446533.f_1532.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2446533.f_1551[iVar0 /*4*/]), func_298(Global_2446533.f_1532[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2446533.f_1572 = iVar0;
}

char* func_298(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0B";
			
			case 1:
				return "IMPEX_CAR_2B";
			
			case 2:
				return "IMPEX_CAR_3B";
			
			case 3:
				return "IMPEX_CAR_4B";
			
			case 4:
				return "IMPEX_CAR_5B";
			
			case 5:
				return "IMPEX_CAR_6B";
			
			case 6:
				return "IMPEX_CAR_7B";
			
			case 7:
				return "IMPEX_CAR_8B";
			
			case 8:
				return "IMPEX_CAR_9B";
			
			case 9:
				return "IMPEX_CAR_10B";
			
			case 10:
				return "IMPEX_CAR_11B";
			
			case 11:
				return "IMPEX_CAR_12B";
			
			case 12:
				return "IMPEX_CAR_13B";
			
			case 13:
				return "IMPEX_CAR_14B";
			
			case 14:
				return "IMPEX_CAR_15B";
			
			case 15:
				return "IMPEX_CAR_16B";
			
			case 16:
				return "IMPEX_CAR_17B";
			
			case 17:
				return "IMPEX_CAR_22B";
			
			case 18:
				return "IMPEX_CAR_19B";
			
			case 19:
				return "IMPEX_CAR_20B";
			
			case 20:
				return "IMPEX_CAR_21B";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "IMPEX_CAR_0";
			
			case 1:
				return "IMPEX_CAR_2";
			
			case 2:
				return "IMPEX_CAR_3";
			
			case 3:
				return "IMPEX_CAR_4";
			
			case 4:
				return "IMPEX_CAR_5";
			
			case 5:
				return "IMPEX_CAR_6";
			
			case 6:
				return "IMPEX_CAR_7";
			
			case 7:
				return "IMPEX_CAR_8";
			
			case 8:
				return "IMPEX_CAR_9";
			
			case 9:
				return "IMPEX_CAR_10";
			
			case 10:
				return "IMPEX_CAR_11";
			
			case 11:
				return "IMPEX_CAR_12";
			
			case 12:
				return "IMPEX_CAR_13";
			
			case 13:
				return "IMPEX_CAR_14";
			
			case 14:
				return "IMPEX_CAR_15";
			
			case 15:
				return "IMPEX_CAR_16";
			
			case 16:
				return "IMPEX_CAR_17";
			
			case 17:
				return "IMPEX_CAR_22";
			
			case 18:
				return "IMPEX_CAR_19";
			
			case 19:
				return "IMPEX_CAR_20";
			
			case 20:
				return "IMPEX_CAR_21";
			}
		
		default:
	}
	return "";
}

void func_299()
{
	int iVar0;
	
	if (!iLocal_86)
	{
		if (!func_303(unk_0xCFC72E446B0B3AD7(), 1))
		{
			if (!Local_354.f_28 == -1)
			{
				if (!iLocal_319 == func_29(Local_354.f_28))
				{
					if (!func_302(unk_0x9F92518438215DD0()))
					{
						iLocal_319 = func_29(Local_354.f_28);
						iVar0 = 0;
						while (iVar0 < iLocal_329)
						{
							unk_0x28F1F7A536C9D57B(iLocal_329[iVar0], iLocal_319);
							iVar0++;
						}
						iLocal_86 = 1;
						unk_0x3BC6D217451D6BB7(iLocal_319);
						func_301();
						func_300(iLocal_319);
					}
				}
			}
		}
	}
	else if ((func_303(unk_0xCFC72E446B0B3AD7(), 1) || (Local_354.f_28 > -1 && !iLocal_319 == func_29(Local_354.f_28))) || func_302(unk_0x9F92518438215DD0()))
	{
		unk_0x0880E86251A44B7F(iLocal_319);
		iVar0 = 0;
		while (iVar0 < iLocal_329)
		{
			unk_0xE72B963F5E375AE4(iLocal_329[iVar0]);
			iVar0++;
		}
		func_301();
		iLocal_319 = 0;
		iLocal_86 = 0;
	}
}

void func_300(int iParam0)
{
	if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
	{
		if (iParam0 == Local_354.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_272[0] = unk_0xA208B3F56EDEA189(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = unk_0xA208B3F56EDEA189(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = unk_0xA208B3F56EDEA189(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = unk_0xA208B3F56EDEA189(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = unk_0xA208B3F56EDEA189(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = unk_0xA208B3F56EDEA189(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = unk_0xA208B3F56EDEA189(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = unk_0xA208B3F56EDEA189(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = unk_0xA208B3F56EDEA189(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = unk_0xA208B3F56EDEA189(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_272[0] = unk_0xA208B3F56EDEA189(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = unk_0xA208B3F56EDEA189(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = unk_0xA208B3F56EDEA189(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = unk_0xA208B3F56EDEA189(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = unk_0xA208B3F56EDEA189(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = unk_0xA208B3F56EDEA189(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = unk_0xA208B3F56EDEA189(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = unk_0xA208B3F56EDEA189(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = unk_0xA208B3F56EDEA189(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = unk_0xA208B3F56EDEA189(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_272[0] = unk_0xA208B3F56EDEA189(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = unk_0xA208B3F56EDEA189(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = unk_0xA208B3F56EDEA189(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = unk_0xA208B3F56EDEA189(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = unk_0xA208B3F56EDEA189(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = unk_0xA208B3F56EDEA189(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = unk_0xA208B3F56EDEA189(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = unk_0xA208B3F56EDEA189(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = unk_0xA208B3F56EDEA189(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = unk_0xA208B3F56EDEA189(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_272[0] = unk_0xA208B3F56EDEA189(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[1] = unk_0xA208B3F56EDEA189(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[2] = unk_0xA208B3F56EDEA189(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[3] = unk_0xA208B3F56EDEA189(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[4] = unk_0xA208B3F56EDEA189(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[5] = unk_0xA208B3F56EDEA189(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[6] = unk_0xA208B3F56EDEA189(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[7] = unk_0xA208B3F56EDEA189(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[8] = unk_0xA208B3F56EDEA189(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_272[9] = unk_0xA208B3F56EDEA189(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, 1, 0, 0, 0, 1, -1);
			iLocal_283 = 1;
			break;
	}
}

void func_301()
{
	int iVar0;
	
	if (iLocal_283)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x324D38B6B80CB264(iLocal_272[iVar0]))
		{
			unk_0x3BA9CED19D945B16(iLocal_272[iVar0]);
		}
		iLocal_272[iVar0] = 0;
		iVar0++;
	}
	iLocal_283 = 0;
}

bool func_302(int iParam0)
{
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (unk_0x0BA451447C3B1A8D(iParam0))
	{
	}
	return unk_0x835E5CA41A401AEB(iParam0) == Global_131512;
}

bool func_303(int iParam0, bool bParam1)
{
	if (Global_1312449 != 0)
	{
		return func_304(iParam0) != 0;
	}
	return func_116(iParam0, bParam1);
}

int func_304(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2414035[iParam0 /*254*/].f_1;
	}
	return 0;
}

void func_305()
{
	var uVar0;
	
	if (!func_402(&uLocal_304))
	{
		func_401(&uLocal_304, 0, 0);
	}
	else if (func_400(&uLocal_304, 250, 0))
	{
		func_41(&uLocal_304);
		if (func_317(1, 0))
		{
			if (!unk_0x94E72F17611BCD3C(iLocal_312, 5) && !func_316())
			{
			}
			else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if ((func_315() || func_316()) || func_312())
				{
					if (!func_311(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
					{
						if (!func_310(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) && !func_15(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
						{
							if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
							{
								if (func_307(&uVar0))
								{
									if (!unk_0x94E72F17611BCD3C(iLocal_312, 2))
									{
										if (func_190() && unk_0x83666F9FB8FEBD4B() > 500)
										{
											func_130("IMPEX_FSPRAY_FM", -1);
											unk_0xEDB9A377CD8B7F03(&iLocal_312, 2);
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x94E72F17611BCD3C(iLocal_312, 8))
								{
									if (func_190() && unk_0x83666F9FB8FEBD4B() > 500)
									{
										func_130("IMPEX_CASH_FM", -1);
										unk_0xEDB9A377CD8B7F03(&iLocal_312, 8);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(iLocal_312, 11))
							{
								if (func_190() && unk_0x83666F9FB8FEBD4B() > 500)
								{
									func_130("IMPEX_WANTED_FM", -1);
									unk_0xEDB9A377CD8B7F03(&iLocal_312, 11);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
						{
							if (!func_306())
							{
								if (!func_15(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
								{
									if (!unk_0x94E72F17611BCD3C(iLocal_312, 3))
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_312, 7);
										if (func_190() && unk_0x83666F9FB8FEBD4B() > 2000)
										{
											if (Global_2446533.f_4354 == 0)
											{
												if (!func_182(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
												{
													func_130("IMPEX_DELIVER_FM", -1);
													unk_0xEDB9A377CD8B7F03(&iLocal_312, 3);
												}
											}
										}
									}
									else
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
								else if (!unk_0x94E72F17611BCD3C(iLocal_312, 7))
								{
									if (func_190() && unk_0x83666F9FB8FEBD4B() > 2000)
									{
										func_130("IMPEX_RIG_FM", -1);
										unk_0xEDB9A377CD8B7F03(&iLocal_312, 7);
									}
								}
								else
								{
									unk_0xC1B1E9A034A63A62(0);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(iLocal_312, 6))
							{
								if (func_190() && unk_0x83666F9FB8FEBD4B() > 2000)
								{
									func_130("IMPEX_WANTED_P", -1);
									unk_0xEDB9A377CD8B7F03(&iLocal_312, 6);
								}
							}
							else
							{
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						else if (!unk_0x94E72F17611BCD3C(iLocal_312, 4))
						{
							if (func_190() && unk_0x83666F9FB8FEBD4B() > 5000)
							{
								func_130("IMPEX_WANTED_FM", -1);
								unk_0xEDB9A377CD8B7F03(&iLocal_312, 4);
							}
						}
						else
						{
							unk_0xC1B1E9A034A63A62(0);
						}
					}
				}
				else
				{
					if (func_169("IMPEX_FSPRAY_FM"))
					{
						unk_0x35611EEE7A1FFEDB(1);
					}
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 2);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 3);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 4);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 6);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 7);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 8);
					unk_0xF76EE56D3E7DAF1B(&iLocal_312, 11);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if (func_169("IMPEX_FSPRAY_FM"))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 2);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 3);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 4);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 6);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 7);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 8);
				unk_0xF76EE56D3E7DAF1B(&iLocal_312, 11);
				if (unk_0x83666F9FB8FEBD4B() > 0)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
		}
		else if (func_169("IMPEX_FSPRAY_FM"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

int func_306()
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!unk_0x4A33023BC86AAA7F(uVar3, iVar1))
		{
			if (unk_0x746960881FB19A89(unk_0xB5BBEB12C77EE430(iVar3, iVar1)))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0xB5BBEB12C77EE430(iVar3, iVar1)))
				{
					uVar0 = unk_0xB5BBEB12C77EE430(iVar3, iVar1);
					if (!unk_0x2FCB242469087013(uVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_307(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		iVar1 = func_309(1);
		*uParam0 = func_308(iVar0);
		if (iVar1 < (400 + *uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = unk_0xFFA8CF72B5CABC31(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (unk_0x9D878480FA8925BB(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (unk_0x5252DDFA0FA75C54(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = unk_0xBBDA792448DB5A89((unk_0xFD181DDA4D8D6786(iParam0) / 1000));
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (unk_0x8D4179782B453A8C(iParam0))
	{
		iVar8 += 50;
	}
	if (unk_0xCD26141EBE02DC2C(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (unk_0x20FDF55E936A753D(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (unk_0xCD26141EBE02DC2C(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (unk_0x20FDF55E936A753D(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!unk_0xCFD57B4713B151E2(iParam0))
	{
		iVar10 += 20;
		if (!unk_0x4A4FC7B76BEF1AC9(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!unk_0x4A4FC7B76BEF1AC9(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (unk_0x80D7E1622143A2A0(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		iVar1 = 0;
		if (unk_0xF97922D89E1A1F52(iParam0, 0))
		{
			iVar1++;
		}
		if (unk_0xF97922D89E1A1F52(iParam0, 1))
		{
			iVar1++;
		}
		if (unk_0xF97922D89E1A1F52(iParam0, 2))
		{
			iVar1++;
		}
		if (unk_0xF97922D89E1A1F52(iParam0, 3))
		{
			iVar1++;
		}
		if (unk_0xF97922D89E1A1F52(iParam0, 4))
		{
			iVar1++;
		}
		if (unk_0xF97922D89E1A1F52(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (unk_0x62FC43BD6ECFF0EB(iParam0))
	{
		iVar8 += 15;
	}
	if (unk_0xED0ECB0428E6F84B(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (unk_0xD8E4239907299552(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (unk_0x119688A7C612042D(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (iVar0 > 0)
	{
		iVar4 = 50;
		iVar0 = (iVar0 + iVar4);
	}
	if (iVar0 > 1250)
	{
		iVar0 = 1250;
	}
	return iVar0;
}

int func_309(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = unk_0xD554F37A9631E8FA();
	}
	iVar0 = (iVar0 + unk_0x855BF4AC1E385EF1(-1));
	return iVar0;
}

bool func_310(int iParam0)
{
	return unk_0xB4289912C78431FE(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_311(int iParam0)
{
	if (unk_0xB4289912C78431FE(iParam0, "Veh_Modded_By_Player") && unk_0x70BD1F58B07BE0C1(iParam0, "Veh_Modded_By_Player") != unk_0x398F092142D37E17(unk_0x6866FFA103E7C994(unk_0xCFC72E446B0B3AD7())))
	{
		return 1;
	}
	return 0;
}

int func_312()
{
	var uVar0;
	
	if (func_410())
	{
		return 0;
	}
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (!func_314(uVar0))
		{
			if (func_313(unk_0xB6A50C909A8FABC3(uVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_354.f_35[iVar1] == iVar0)
			{
				if (!func_400(&(Local_354.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	if (Global_68245)
	{
		if (unk_0xB4289912C78431FE(iParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

int func_315()
{
	var uVar0;
	
	if (func_410())
	{
		return 0;
	}
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		if (!Global_1676158)
		{
			uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (!func_314(uVar0))
			{
				if (!unk_0x8B13B9F670524CB7(uVar0, 0))
				{
					if (unk_0xFC38B241541883D3(iVar0, 1))
					{
						if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_6 <= 0)
						{
							if (!unk_0xB4289912C78431FE(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1676157)
								{
									if (bLocal_284)
									{
										bLocal_284 = false;
									}
									if (func_69(&Local_342, unk_0xB6A50C909A8FABC3(iVar0)))
									{
										Global_2446533.f_1576 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_284)
					{
						bLocal_284 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_316()
{
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		if (unk_0x94E72F17611BCD3C(Local_354.f_23, 0))
		{
			if (unk_0x62FC9AA71A0BB8DB(Local_354.f_22))
			{
				if (func_4(Local_354.f_22))
				{
					if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_354.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_317(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_116(unk_0xCFC72E446B0B3AD7(), 1))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_107())
		{
			bVar0 = false;
		}
	}
	if (!func_14(unk_0xCFC72E446B0B3AD7(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_318()
{
	int iVar0;
	
	switch (iLocal_99)
	{
		case 0:
			if (!func_116(unk_0xCFC72E446B0B3AD7(), 1))
			{
				if (!func_402(&uLocal_100) || func_400(&uLocal_100, 2000, 0))
				{
					if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_320(&uLocal_104, 4, iLocal_98, "MECHANIC_IMP", 0, 1);
							iLocal_561 = 0;
							iLocal_99++;
						}
					}
					func_41(&uLocal_100);
					func_401(&uLocal_100, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (!func_116(unk_0xCFC72E446B0B3AD7(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_83)
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, 0, 1, 0))
								{
									if (!iLocal_561)
									{
										iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
										if (func_308(iVar0) > 500)
										{
											sLocal_562 = "FM_IEPOOR";
										}
										else
										{
											sLocal_562 = "FM_IEGOOD";
										}
										iLocal_561 = 1;
									}
									else if (func_277(&uLocal_104, "FM_1AU", sLocal_562, 12, 0, 0, 0))
									{
										iLocal_269 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
										iLocal_99++;
										iLocal_561 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_319();
						iLocal_99 = 0;
					}
				}
				else
				{
					func_319();
					iLocal_99 = 0;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (!func_116(unk_0xCFC72E446B0B3AD7(), 1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_83)
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								if (unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0) != iLocal_269)
								{
									iLocal_99 = 1;
								}
							}
						}
					}
					else
					{
						func_319();
						iLocal_99 = 0;
					}
				}
				else
				{
					func_319();
					iLocal_99 = 0;
				}
			}
			break;
	}
}

void func_319()
{
	var uVar0;
	
	if (unk_0x746960881FB19A89(iLocal_98))
	{
		unk_0x0880E86251A44B7F(joaat("s_m_y_xmech_02"));
		uVar0 = iLocal_98;
		unk_0xAB5ECB7EFE6A4784(&uVar0);
	}
}

void func_320(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_317(1, 1))
	{
		switch (Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1)
		{
			case 0:
				if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					bVar7 = func_312();
					if ((func_315() || func_316()) || bVar7)
					{
						if (!func_306())
						{
							if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
							{
								if (!func_389())
								{
									if (bLocal_82)
									{
										bLocal_82 = false;
									}
									iVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									if (!iLocal_88)
									{
										if (func_388(iVar3))
										{
											unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 2, 0);
											unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
										}
									}
									iLocal_563 = iVar3;
									if (unk_0x94E72F17611BCD3C(iLocal_559, 15))
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_559, 15);
									}
									if (unk_0x94E72F17611BCD3C(iLocal_312, 9))
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_312, 9);
									}
									if (unk_0x94E72F17611BCD3C(iLocal_312, 12))
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_312, 12);
									}
									if (unk_0x94E72F17611BCD3C(iLocal_312, 10))
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_312, 10);
									}
									if (!unk_0x94E72F17611BCD3C(iLocal_559, 12))
									{
										if (bVar7)
										{
											unk_0xEDB9A377CD8B7F03(&iLocal_559, 12);
										}
									}
									else if (!bVar7)
									{
										unk_0xF76EE56D3E7DAF1B(&iLocal_559, 12);
									}
									if (func_310(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_75 = true;
											if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
											{
												if (bLocal_81)
												{
													bLocal_81 = false;
												}
												if (unk_0xB5BBEB12C77EE430(iVar3, -1) == unk_0x9F92518438215DD0())
												{
													bLocal_78 = true;
												}
											}
											else if (func_72())
											{
												if (bLocal_78)
												{
													bLocal_78 = false;
												}
												bLocal_81 = true;
											}
											bLocal_76 = false;
											bLocal_77 = false;
											bLocal_79 = false;
											bLocal_80 = false;
											bLocal_82 = false;
											bLocal_83 = true;
											if (func_387(1215605247, 18))
											{
												bLocal_73 = true;
											}
											iLocal_325 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
											if (!unk_0xEDF5D32C98985A1B(iLocal_325))
											{
												if (func_182(iLocal_325, 0))
												{
													if (!unk_0x94E72F17611BCD3C(iLocal_559, 17))
													{
														unk_0xEDB9A377CD8B7F03(&iLocal_559, 17);
													}
													else if (func_182(iLocal_325, 1))
													{
														Var9 = { unk_0xAEA1379E6840A7DA(iLocal_325) };
														if (unk_0x9EF11DECA38804B6(iLocal_325) < 0.5f || unk_0xE3DAC530D2CCDAE3(Var9.f_1) < 1.3f)
														{
															func_386();
															func_382(unk_0xCFC72E446B0B3AD7(), 0, 16388, 1);
															if (func_316())
															{
																unk_0xEDB9A377CD8B7F03(&iLocal_559, 4);
																unk_0xEDB9A377CD8B7F03(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 1);
															}
															if (func_315() || func_312())
															{
																unk_0xEDB9A377CD8B7F03(&iLocal_559, 6);
															}
															if (func_381())
															{
																bLocal_72 = true;
															}
															else
															{
																bLocal_72 = false;
															}
															unk_0x993B4D0D3CD44124(iLocal_325, 2);
															if (unk_0x88A3865085DFB7AD(iLocal_325))
															{
																unk_0x08B4E5756419497B(iLocal_325, 1, 1, 1, 1, 1, 0, 0, 0);
															}
															Local_430[unk_0x9725084D4DFE8258() /*4*/] = func_70(unk_0xB6A50C909A8FABC3(iLocal_325));
															Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_320[iVar4] = func_243();
																if (!unk_0x4A33023BC86AAA7F(iLocal_325, iVar1))
																{
																	if (unk_0x746960881FB19A89(unk_0xB5BBEB12C77EE430(iLocal_325, iVar1)))
																	{
																		if (!unk_0x0BA451447C3B1A8D(unk_0xB5BBEB12C77EE430(iLocal_325, iVar1)))
																		{
																			iVar0 = unk_0xB5BBEB12C77EE430(iLocal_325, iVar1);
																			if (unk_0x2FCB242469087013(iVar0))
																			{
																				if (func_14(unk_0xF44355ABE87F03BB(iVar0), 0, 0))
																				{
																					if (unk_0xF40EB8EBF13AE867(unk_0xF44355ABE87F03BB(iVar0)))
																					{
																						iLocal_320[iVar4] = unk_0xF44355ABE87F03BB(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_291 = func_380(unk_0xB6A50C909A8FABC3(iLocal_325));
															iLocal_292 = func_308(iLocal_325);
															fLocal_293 = unk_0xBBDA792448DB5A89((iLocal_291 - iLocal_292));
															fLocal_293 = (fLocal_293 * Global_262145.f_2389);
															if (unk_0x94E72F17611BCD3C(iLocal_559, 4))
															{
																fLocal_293 = (fLocal_293 * 1.3f);
															}
															fLocal_293 = (fLocal_293 / unk_0xBBDA792448DB5A89(iVar5));
															fLocal_294 = 500f;
															func_379();
															func_138(0);
															func_378(1238, 1, -1);
															if (func_169("IMPEX_DELIVER_FM"))
															{
																unk_0x35611EEE7A1FFEDB(1);
															}
															unk_0xF76EE56D3E7DAF1B(&iLocal_559, 12);
															iVar6 = func_75(1191, -1, 0);
															if (!unk_0x94E72F17611BCD3C(iVar6, 1))
															{
																unk_0xEDB9A377CD8B7F03(&iVar6, 1);
																func_123(1191, iVar6, -1, 1);
															}
															else if (!unk_0x94E72F17611BCD3C(iVar6, 2))
															{
																unk_0xEDB9A377CD8B7F03(&iVar6, 2);
																func_123(1191, iVar6, -1, 1);
															}
															func_377();
															iLocal_295 = 0;
															iLocal_295 = unk_0xF2DB717A73826179(fLocal_293);
															iLocal_295 = (iLocal_295 - (iLocal_295 % 25));
															if (iLocal_564 == iVar3)
															{
																iLocal_295 = (iLocal_295 + iLocal_297);
															}
															if (!unk_0x94E72F17611BCD3C(iLocal_559, 4))
															{
																if (iLocal_295 > Global_262145.f_143)
																{
																	iLocal_295 = Global_262145.f_143;
																}
															}
															else if (iLocal_295 > Global_262145.f_143)
															{
																iLocal_295 = Global_262145.f_143;
															}
															iLocal_296 = 0;
															fLocal_294 = (fLocal_294 * Global_262145.f_4203);
															iLocal_296 = unk_0xF2DB717A73826179(fLocal_294);
															unk_0xF76EE56D3E7DAF1B(&iLocal_559, 17);
															iLocal_326 = iLocal_325;
															iLocal_328 = unk_0xB6A50C909A8FABC3(iLocal_325);
															if (!unk_0x94E72F17611BCD3C(iLocal_559, 4))
															{
																unk_0xFFB59EC06B7D6FD8(19, iLocal_296, iLocal_295, iLocal_325);
															}
															else
															{
																unk_0xFFB59EC06B7D6FD8(120, iLocal_296, iLocal_295, iLocal_325);
															}
															func_376(19, 1);
															func_375();
															func_405();
														}
														else if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
														{
															func_382(unk_0xCFC72E446B0B3AD7(), 0, 16388, 1);
														}
													}
												}
												else if (unk_0x94E72F17611BCD3C(iLocal_559, 17))
												{
													unk_0xF76EE56D3E7DAF1B(&iLocal_559, 17);
												}
											}
										}
										else
										{
											if (bLocal_75)
											{
												bLocal_75 = false;
											}
											if (bLocal_83)
											{
												bLocal_83 = false;
											}
											if (bLocal_78)
											{
												bLocal_78 = false;
											}
											if (bLocal_81)
											{
												bLocal_81 = false;
											}
											if (bLocal_82)
											{
												bLocal_82 = false;
											}
										}
									}
									else if (!func_15(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
									{
										if (func_307(&iVar8))
										{
											if (!func_311(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
											{
												if (unk_0xB5BBEB12C77EE430(iVar3, -1) == unk_0x9F92518438215DD0())
												{
													if (iLocal_564 != iVar3)
													{
														iLocal_564 = iVar3;
														iLocal_297 = 0;
													}
													else if (iLocal_297 != iVar8)
													{
														if (iLocal_297 < iVar8)
														{
															iLocal_297 = iVar8;
														}
													}
												}
												if (!bLocal_76)
												{
													bLocal_76 = true;
												}
												if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
												{
													if (func_72())
													{
														if (bLocal_77)
														{
															bLocal_77 = false;
														}
														if (unk_0xB5BBEB12C77EE430(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1) == unk_0x9F92518438215DD0())
														{
															if (func_308(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) > 0)
															{
																if (!bLocal_80)
																{
																	bLocal_80 = true;
																}
															}
															else
															{
																if (bLocal_80)
																{
																	bLocal_80 = false;
																}
																if (!bLocal_79)
																{
																	bLocal_79 = true;
																}
															}
														}
													}
												}
												else if (!func_72())
												{
													if (bLocal_79)
													{
														bLocal_79 = false;
													}
													if (bLocal_80)
													{
														bLocal_80 = false;
													}
													if (!bLocal_77)
													{
														if (unk_0xB5BBEB12C77EE430(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1) == unk_0x9F92518438215DD0())
														{
															bLocal_77 = true;
														}
													}
												}
											}
											else
											{
												func_374();
											}
										}
										else
										{
											func_374();
										}
									}
									else
									{
										func_374();
										if (bLocal_83)
										{
											bLocal_83 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
								if (iLocal_563 != iVar3)
								{
									if (!iLocal_88)
									{
										if (func_388(iVar3))
										{
											unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 2, 0);
											unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
										}
									}
									iLocal_563 = iVar3;
								}
								if (!bLocal_82)
								{
									func_374();
									bLocal_82 = true;
								}
							}
						}
					}
					else
					{
						func_374();
						if (bLocal_83)
						{
							bLocal_83 = false;
						}
						if (iLocal_88)
						{
							if (Local_354.f_33)
							{
								if (bLocal_93)
								{
									iLocal_88 = 0;
								}
							}
						}
						if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							if ((func_169("IMPEX_NOT_NEED") || func_169("IMPEX_NO_MORE")) || func_169("IMPEX_NOT_PVEH"))
							{
								unk_0x35611EEE7A1FFEDB(1);
							}
						}
						iVar2 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (func_314(iVar2))
						{
							if (unk_0xB5BBEB12C77EE430(iVar2, -1) == unk_0x9F92518438215DD0())
							{
								if (unk_0xB4289912C78431FE(iVar2, "Player_Vehicle"))
								{
									if (unk_0x70BD1F58B07BE0C1(iVar2, "Player_Vehicle") != unk_0xE70466D7F0596A0E(unk_0xCFC72E446B0B3AD7()) || iVar2 == iLocal_563)
									{
										if (unk_0xFC38B241541883D3(iVar2, 0))
										{
											if (func_190())
											{
												if (!unk_0x94E72F17611BCD3C(iLocal_559, 15))
												{
													if (bVar7 || func_69(&Local_342, unk_0xB6A50C909A8FABC3(iVar2)))
													{
														func_130("IMPEX_NOT_PVEH", -1);
														unk_0xEDB9A377CD8B7F03(&iLocal_559, 15);
													}
												}
											}
										}
									}
									else if (unk_0x94E72F17611BCD3C(iLocal_559, 15))
									{
										if (iVar2 != iLocal_563)
										{
											unk_0xF76EE56D3E7DAF1B(&iLocal_559, 15);
										}
									}
								}
							}
						}
						else
						{
							if (unk_0x94E72F17611BCD3C(iLocal_559, 15))
							{
								if (iVar2 != iLocal_563)
								{
									unk_0xF76EE56D3E7DAF1B(&iLocal_559, 15);
								}
							}
							if (bLocal_89)
							{
								if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_387(1215605247, 18))
								{
									iVar2 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									if (func_182(iVar2, 0))
									{
										if (!iLocal_87)
										{
											func_138(1);
											iLocal_87 = 1;
										}
										bLocal_73 = true;
									}
								}
								else if (iLocal_87)
								{
									func_138(0);
									iLocal_87 = 0;
									bLocal_73 = false;
								}
							}
						}
						if (func_387(1215605247, 18))
						{
							if (func_190())
							{
								if (func_314(iVar2))
								{
									if (unk_0xFC38B241541883D3(iVar2, 0))
									{
										if (!unk_0x94E72F17611BCD3C(iLocal_312, 10))
										{
											func_130("IMPEX_NOT_PVEH", -1);
											unk_0xEDB9A377CD8B7F03(&iLocal_312, 10);
										}
									}
								}
								else if (func_69(&Local_342, unk_0xB6A50C909A8FABC3(iVar2)))
								{
									if (unk_0x8B13B9F670524CB7(iVar2, 0))
									{
										if (!unk_0x94E72F17611BCD3C(iLocal_312, 12))
										{
											func_130("IMPEX_NOT_CREW", -1);
											unk_0xEDB9A377CD8B7F03(&iLocal_312, 12);
										}
									}
								}
								else if (!unk_0x94E72F17611BCD3C(iLocal_312, 9))
								{
									if (unk_0xB5BBEB12C77EE430(iVar2, -1) == unk_0x9F92518438215DD0())
									{
										func_130("IMPEX_NOT_NEED", -1);
										unk_0xEDB9A377CD8B7F03(&iLocal_312, 9);
									}
								}
							}
						}
						else
						{
							if (unk_0x94E72F17611BCD3C(iLocal_312, 9))
							{
								unk_0xF76EE56D3E7DAF1B(&iLocal_312, 9);
							}
							if (unk_0x94E72F17611BCD3C(iLocal_312, 10))
							{
								unk_0xF76EE56D3E7DAF1B(&iLocal_312, 10);
							}
							if (unk_0x94E72F17611BCD3C(iLocal_312, 12))
							{
								unk_0xF76EE56D3E7DAF1B(&iLocal_312, 12);
							}
							if (unk_0x94E72F17611BCD3C(iLocal_559, 12))
							{
								if (func_190())
								{
									func_130("IMPEX_NO_MORE", -1);
									unk_0xF76EE56D3E7DAF1B(&iLocal_559, 12);
									func_112();
								}
							}
						}
					}
				}
				else
				{
					func_374();
					if (bLocal_83)
					{
						bLocal_83 = false;
					}
					if (iLocal_88)
					{
						iLocal_88 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
				{
					if (!func_131(unk_0x4E6043D225B9C75F(unk_0xCFC72E446B0B3AD7()), 1215605247, &uLocal_315, 0, 500, 1, 0))
					{
						Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 = 2;
					}
				}
				else
				{
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 4);
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 6);
					Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (unk_0x9685D9855970A029())
				{
					func_373(17, 1, -1);
					if (unk_0x94E72F17611BCD3C(iLocal_559, 4))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_430[unk_0x9725084D4DFE8258() /*4*/].f_2), 1);
						func_372();
					}
					else
					{
						func_370();
					}
					if (bLocal_72)
					{
						if (unk_0x94E72F17611BCD3C(iLocal_559, 6))
						{
							Local_57.f_2 = 36;
						}
						else
						{
							Local_57.f_2 = 37;
						}
						Local_57.f_3 = Local_430[unk_0x9725084D4DFE8258() /*4*/];
						Local_57.f_10 = iLocal_320[0];
						Local_57.f_11 = iLocal_320[1];
						Local_57.f_12 = iLocal_320[2];
						Local_57.f_13 = iLocal_320[3];
						if (!unk_0x94E72F17611BCD3C(iLocal_559, 6))
						{
						}
					}
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 6);
					func_369(4, iLocal_295);
					if (func_368())
					{
						func_361(941287179, iLocal_295, &iVar12, 0, 0);
						Global_2540883[iVar12 /*69*/].f_8.f_51 = iLocal_328;
					}
					else
					{
						unk_0x828C571345FF86F8(iLocal_295, iLocal_328);
					}
					if (iLocal_292 > 0)
					{
						func_360("IMPEX_PASS", iLocal_295, 7000, 0);
					}
					else
					{
						func_360("IMPEX_PASS", iLocal_295, 7000, 0);
					}
					func_332(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_296, 1, -1, 0);
					func_325(29);
					func_382(unk_0xCFC72E446B0B3AD7(), 1, 0, 1);
					Local_430[unk_0x9725084D4DFE8258() /*4*/].f_1 = 0;
					Local_430[unk_0x9725084D4DFE8258() /*4*/] = -1;
					unk_0xF76EE56D3E7DAF1B(&iLocal_559, 4);
					iLocal_94 = 1;
					func_322(12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_303(unk_0xCFC72E446B0B3AD7(), 1))
		{
			if (!bLocal_89)
			{
				if (iLocal_87)
				{
					func_138(0);
					iLocal_87 = 0;
				}
			}
			else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_387(1215605247, 18))
			{
				iVar2 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (func_182(iVar2, 0))
				{
					if (!iLocal_87)
					{
						func_138(1);
						iLocal_87 = 1;
					}
					bLocal_73 = true;
				}
			}
			else if (iLocal_87)
			{
				func_138(0);
				iLocal_87 = 0;
				bLocal_73 = false;
			}
		}
		if (bLocal_76)
		{
			bLocal_76 = false;
		}
		if (bLocal_77)
		{
			bLocal_77 = false;
		}
		if (bLocal_79)
		{
			bLocal_79 = false;
		}
		if (bLocal_80)
		{
			bLocal_80 = false;
		}
	}
}

void func_322(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_324(iParam0, iParam1))
	{
		iVar0 = func_323();
		Global_2435039[iVar0] = iParam0;
	}
}

int func_323()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435039[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_324(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6838)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_399() /*8064*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_399() /*8064*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_399() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_399() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				unk_0xEDB9A377CD8B7F03(&Global_2445599, (8 + iVar2));
				func_329(2098, -1);
				func_326(67, -1);
				unk_0xA1E454FFE8764EA5(1000, iVar1);
				if (iVar3 < 2)
				{
					func_322(15, 0);
				}
			}
		}
	}
}

void func_326(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_328(iParam0, func_76(iParam1));
	iVar0++;
	func_327(iParam0, iVar0, iParam1);
}

void func_327(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2476020[iParam0 /*6*/][func_76(iParam2)];
	unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
}

int func_328(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476020[iParam0 /*6*/][func_76(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_331(iParam0))
	{
		func_123(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_330(iParam0, iVar0, iParam1, 1);
	}
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_76(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_76(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_76(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_76(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_76(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_76(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_76(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_76(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_76(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_76(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_76(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_76(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_76(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_76(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_76(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_76(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_331(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
				return 1;
				break;
			}
	}
	return 0;
}

var func_332(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_333(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_333(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_334(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_334(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_359(unk_0xCFC72E446B0B3AD7()) || func_358(unk_0xCFC72E446B0B3AD7()))
	{
		if (Global_262145.f_7295 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7295;
		}
	}
	else if (Global_262145.f_4979 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4979;
	}
	if (func_357(uParam2))
	{
	}
	if (func_356())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_354(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_353(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_351(0, &iVar1);
					break;
				
				case 3:
					func_351(1, &iVar1);
					break;
				
				case 1:
					func_348(&iVar1);
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
			func_378(1156, iVar1, -1);
			if (iParam1 == 0)
			{
				func_344((func_347(unk_0xCFC72E446B0B3AD7()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xA2895E3CE9FD15F8(iVar1, iParam8, iParam9);
				if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_2 != -1)
				{
					func_378(1157, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_339(iVar1);
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
				func_335((func_337(unk_0xCFC72E446B0B3AD7()) + iVar1));
			}
			else
			{
				func_335((func_337(unk_0xCFC72E446B0B3AD7()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_335(int iParam0)
{
	if (func_356())
	{
		Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_5 = iParam0;
		func_336(joaat("mpply_globalxp"), iParam0);
	}
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
}

int func_337(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return func_338(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_5;
			}
		}
		else
		{
			return func_338(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_339(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_152(unk_0xCFC72E446B0B3AD7()) };
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(&Var0))
		{
			iVar13 = func_342(func_343(&Var0));
			if (iVar13 == 0)
			{
				func_341(&Global_1335490, iParam0);
				func_340(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_341(&Global_1335491, iParam0);
				func_340(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_341(&Global_1335492, iParam0);
				func_340(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_341(&Global_1335493, iParam0);
				func_340(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_341(&Global_1335494, iParam0);
				func_340(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_340(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_341(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_342(int iParam0)
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_343(var uParam0)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(uParam0))
		{
			return Global_2435061;
		}
	}
	return Global_2435061;
}

void func_344(int iParam0, int iParam1, int iParam2)
{
	if (func_356())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7270 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_76(-1)])
				{
					unk_0xA2895E3CE9FD15F8(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_172(unk_0xCFC72E446B0B3AD7()))
		{
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_1 = iParam0;
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_6 = func_345(iParam0, 1);
		}
		func_330(631, iParam0, -1, 1);
		func_123(632, func_345(iParam0, 1), -1, 1);
		Global_1335605[func_76(-1)] = iParam0;
		func_322(7, 0);
	}
}

int func_345(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_346(iParam0, 0);
}

int func_346(int iParam0, int iParam1)
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
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
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

int func_347(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_76(-1)];
			}
			else if (func_172(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_76(-1)];
	}
	return 0;
}

void func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		iVar4 = unk_0x7DB5D4F6F4C81C82(iVar0);
		if (unk_0xD3AFE733DFF53CF5(iVar4))
		{
			iVar5 = unk_0xA6118988A879C889(iVar4);
			if (unk_0x59A4BF97B76AD953(iVar5) != -1)
			{
				if (unk_0x59A4BF97B76AD953(iVar5) == iVar1 || func_161(unk_0x59A4BF97B76AD953(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0xCFC72E446B0B3AD7())
					{
						if (func_350(unk_0xCFC72E446B0B3AD7(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_349(*iParam0, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_349(*iParam0, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_349(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_350(int iParam0, int iParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_152(iParam0) };
		Global_2445574 = { func_152(iParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_351(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x0C20B275AC51DD95())
		{
			iVar3 = iVar0;
			if (unk_0xD3AFE733DFF53CF5(iVar3))
			{
				iVar4 = unk_0xA6118988A879C889(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xCFC72E446B0B3AD7())
					{
						iVar1++;
						if (func_350(unk_0xCFC72E446B0B3AD7(), iVar4))
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
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xCFC72E446B0B3AD7())
				{
					if (func_352(unk_0xCFC72E446B0B3AD7(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_350(unk_0xCFC72E446B0B3AD7(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_349(*iParam1, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_349(*iParam1, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_352(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_25(iParam0), func_25(iParam1));
	return 0f;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (unk_0x9C3FBB2667EB8955() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_349(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_354(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xB65C49ABD0DAB270(iParam0) > func_347(unk_0xCFC72E446B0B3AD7()))
		{
			iParam0 = -func_347(unk_0xCFC72E446B0B3AD7());
		}
	}
	if (func_355(8000, 0, 0) > 0)
	{
		if (func_355(8000, 0, 0) < (iParam0 + func_347(unk_0xCFC72E446B0B3AD7())))
		{
			iParam0 = (func_355(8000, 0, 0) - func_347(unk_0xCFC72E446B0B3AD7()));
		}
	}
	return iParam0;
}

int func_355(int iParam0, bool bParam1, int iParam2)
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
	return Global_270816[iParam0];
}

int func_356()
{
	return 1;
}

int func_357(char* sParam0)
{
	if (unk_0x471A7F8C908126F0(uParam0))
	{
		return 1;
	}
	else if (unk_0x6B08EC9A88700FBB(uParam0, "") || unk_0x6B08EC9A88700FBB(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_358(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

bool func_359(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

void func_360(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x25585F3578FE81FC(iParam1);
	unk_0x51E13ACB7C47100D(iParam2, 1);
}

void func_361(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_368())
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
			if (iParam1 > 0)
			{
				func_362(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_362(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_362(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_368())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xA549BE81FFC4288A(func_24()) || unk_0xADE1DFE09709BDB1())
		{
			Global_2541344 = 1;
			return 0;
		}
		if (Global_2435857)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2541345 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540883[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x4C02C7B08F757BFA(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x4265811DC0390422(iVar3))
		{
			*uParam0 = func_367(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540883[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2541341 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2541343 = 1;
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_366(1, iParam4);
			Global_2541343 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_363(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_363(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_364(iParam0);
	}
}

void func_364(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_368())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_365(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57A7DB00C63E14B4();
			}
		}
		else if (!bVar0)
		{
			unk_0x3B8BE022876FFEA4(Global_2540883[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540883[iParam0 /*69*/] = { Var1 };
	}
}

int func_365(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_366(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_367(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_368())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540883[iVar0 /*69*/].f_2 = 1;
			Global_2540883[iVar0 /*69*/].f_1 = uParam5;
			Global_2540883[iVar0 /*69*/].f_3 = uParam1;
			Global_2540883[iVar0 /*69*/].f_4 = uParam2;
			Global_2540883[iVar0 /*69*/].f_7 = uParam3;
			Global_2540883[iVar0 /*69*/].f_5 = 0;
			Global_2540883[iVar0 /*69*/] = iParam0;
			Global_2540883[iVar0 /*69*/].f_6 = iParam4;
			Global_2540883[iVar0 /*69*/].f_65 = uParam8;
			Global_2540883[iVar0 /*69*/].f_64 = uParam7;
			Global_2540883[iVar0 /*69*/].f_68 = 0;
			Global_2541341 = 0;
			if (bParam6)
			{
				Global_2540883[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_368()
{
	if (unk_0x708CE249B4F97BF8())
	{
		return 1;
	}
	return 0;
}

void func_369(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2446533.f_267 = iParam0;
		if (iParam1 > Global_262145.f_4929)
		{
			iParam1 = Global_262145.f_4929;
		}
		Global_2446533.f_268 = iParam1;
		Global_2446533.f_269 = 0;
	}
}

void func_370()
{
	int iVar0;
	
	iVar0 = func_371(42);
	Global_2408834[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2408834[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_371(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408834[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408834[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_372()
{
	int iVar0;
	
	iVar0 = func_371(43);
	Global_2408834[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2408834[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_328(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_327(iParam0, iVar0, iParam2);
}

void func_374()
{
	if (bLocal_82)
	{
		bLocal_82 = false;
	}
	if (bLocal_77)
	{
		bLocal_77 = false;
	}
	if (bLocal_78)
	{
		bLocal_78 = false;
	}
	if (bLocal_79)
	{
		bLocal_79 = false;
	}
	if (bLocal_81)
	{
		bLocal_81 = false;
	}
	if (bLocal_80)
	{
		bLocal_80 = false;
	}
}

void func_375()
{
	Global_2097152[func_399() /*8064*/].f_5756.f_34 = unk_0xC5F007216781AC50();
}

void func_376(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_399() /*8064*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_399() /*8064*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_399() /*8064*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_399() /*8064*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_399() /*8064*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_399() /*8064*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_399() /*8064*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_399() /*8064*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_399() /*8064*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_399() /*8064*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_399() /*8064*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_399() /*8064*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_399() /*8064*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_399() /*8064*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_399() /*8064*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_399() /*8064*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_399() /*8064*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_399() /*8064*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_399() /*8064*/].f_5756.f_29 = iVar0;
			break;
	}
}

void func_377()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_75(1191, -1, 0);
	if (!unk_0x94E72F17611BCD3C(iVar0, 3))
	{
		unk_0xEDB9A377CD8B7F03(&iVar0, 3);
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 1);
		bVar1 = true;
	}
	else if (!unk_0x94E72F17611BCD3C(iVar0, 4))
	{
		unk_0xEDB9A377CD8B7F03(&iVar0, 4);
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 2);
		bVar1 = true;
	}
	else if (!unk_0x94E72F17611BCD3C(iVar0, 5))
	{
		unk_0xEDB9A377CD8B7F03(&iVar0, 5);
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_123(1191, iVar0, -1, 1);
	}
}

void func_378(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_75(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_331(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_330(iParam0, iVar0, iParam2, 1);
	}
}

void func_379()
{
	if (!Global_2446533.f_4364)
	{
		Global_2446533.f_4364 = 1;
	}
	func_187(&(Global_2446533.f_4365), 0, 0);
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sentinel"):
			return 9000;
		
		case joaat("serrano"):
			return 9000;
		
		case joaat("dominator"):
			return 5250;
		
		case joaat("schafter2"):
			return 9750;
		
		case joaat("surge"):
			return 5700;
		
		case joaat("jackal"):
			return 9000;
		
		case joaat("ztype"):
			return 0;
		
		case joaat("tailgater"):
			return 8250;
		
		case joaat("landstalker"):
			return 8700;
		
		case joaat("penumbra"):
			return 3600;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("fq2"):
			return 7500;
		
		case joaat("patriot"):
			return 7500;
		
		case joaat("habanero"):
			return 6300;
		
		case joaat("prairie"):
			return 3750;
		
		case joaat("fusilade"):
			return 5400;
		
		case joaat("bjxl"):
			return 4050;
		
		case joaat("gresley"):
			return 4350;
		
		case joaat("buccaneer"):
			return 4200;
		
		case joaat("daemon"):
			return 3000;
		
		case joaat("bagger"):
			return 2400;
		
		default:
	}
	return -1;
}

int func_381()
{
	int iVar0;
	
	if (func_14(unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (!unk_0x4A33023BC86AAA7F(iVar0, -1))
				{
					if (unk_0xB5BBEB12C77EE430(iVar0, -1) == unk_0x9F92518438215DD0())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_382(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0x5BB79C0A5EB6A6A3())
		{
			unk_0x0E294D1F9E68FE58(0);
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		uVar0 = iParam2;
		unk_0xC70D4A06E38B2711(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		if (!func_113())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xCB29E1C3D086FBAE(iParam0) && unk_0x378E80A2B7D7C8DF(iParam0))
		{
			uVar23 = unk_0x4E6043D225B9C75F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4B69FB3A5B09A1BA())
				{
					unk_0xEE9DD5051799E43F(1);
				}
				else
				{
					unk_0x407020DF5CAB33D3(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x4B69FB3A5B09A1BA() && !bVar18)
					{
						unk_0xEE9DD5051799E43F(0);
					}
					Global_2414035[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_385(uVar23) && !unk_0xEDF5D32C98985A1B(uVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(iVar23, true, 0);
					}
				}
				if (!unk_0xBB5C52611DD71292(iVar23))
				{
					if (!bVar20)
					{
						unk_0xD9B13F0A69759C12(iVar23, false);
					}
					unk_0x185D18DA9BC98757(iVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0xD9B13F0A69759C12(iVar23, false);
				}
				unk_0x0CFE85F88BE373C8(iVar23, true);
				unk_0xC243E2F8392527C0(iParam0, 0);
				unk_0xBA3586BB63B045BD(iVar23);
				unk_0x29C0F4A5219281BA(iVar23, 1);
				func_384();
				func_383();
				if (unk_0x1F2747B7BCA7311C())
				{
				}
				if (unk_0x1032ED345FD7DD26())
				{
				}
				Global_2414035[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_385(iVar23) && !unk_0xEDF5D32C98985A1B(iVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(iVar23, !bVar14, 0);
					}
					if (!unk_0xBB5C52611DD71292(iVar23))
					{
						if (!bVar20)
						{
							unk_0xD9B13F0A69759C12(iVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x185D18DA9BC98757(iVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xC243E2F8392527C0(iParam0, 0);
				}
				else
				{
					unk_0xC243E2F8392527C0(iParam0, 1);
				}
				unk_0x0CFE85F88BE373C8(iVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xE11A81C5773CB579(iVar23) && !unk_0x827151D7B70CB853(iVar23, 0))
					{
						unk_0x71628E52718BD195(iVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0xC70D4A06E38B2711(iParam0, bParam1, iVar24);
		}
	}
}

void func_383()
{
	struct<2> Var0;
	
	Global_2422166.f_676 = 0;
	Global_2422166.f_677 = 0;
	Global_2422166.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404554.f_1381 = { Var0 };
}

void func_384()
{
	Global_2404554.f_543 = 0;
	Global_2404554.f_1422 = 0;
	Global_2404554.f_423 = 0;
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_204 = 0;
}

int func_385(int iParam0)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE962BD784DD0E442(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_386()
{
	func_112();
}

int func_387(int iParam0, int iParam1)
{
	if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), func_134(iParam0), 1) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)
{
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0xB5BBEB12C77EE430(iParam0, -1) == unk_0x9F92518438215DD0())
		{
			if (!func_311(iParam0))
			{
				if (iParam0 != iLocal_563)
				{
					if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_389()
{
	if (Global_2422166.f_499.f_6 || Global_2422166.f_499.f_7)
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_391(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_391(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_398(iParam1);
			break;
		
		case 1:
			iVar0 = func_397(iParam1);
			break;
		
		case 2:
			iVar0 = func_396(iParam1);
			break;
		
		case 3:
			iVar0 = func_395(iParam1);
			break;
		
		case 4:
			iVar0 = func_394(iParam1);
			break;
		
		case 5:
			iVar0 = func_393(iParam1);
			break;
		
		case 6:
			iVar0 = func_392(iParam1);
			break;
	}
	return iVar0;
}

int func_392(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_393(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 16;
			break;
		
		case 1:
			iVar0 = 17;
			break;
		
		case 2:
			iVar0 = 18;
			break;
		
		case 3:
			iVar0 = 19;
			break;
		
		case 4:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_395(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 11;
			break;
		
		case 1:
			iVar0 = 12;
			break;
		
		case 2:
			iVar0 = 13;
			break;
		
		case 3:
			iVar0 = 15;
			break;
		
		case 4:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

int func_396(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 8;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 10;
			break;
		
		case 3:
			iVar0 = 11;
			break;
		
		case 4:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

int func_397(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		
		case 1:
			iVar0 = 5;
			break;
		
		case 2:
			iVar0 = 7;
			break;
		
		case 3:
			iVar0 = 8;
			break;
		
		case 4:
			iVar0 = 9;
			break;
	}
	return iVar0;
}

int func_398(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 3:
			iVar0 = 4;
			break;
		
		case 4:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int func_399()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_400(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_401(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_401(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_402(var uParam0)
{
	return uParam0->f_1;
}

void func_403()
{
	Global_2097152[func_399() /*8064*/].f_5756.f_35 = unk_0xC5F007216781AC50();
}

void func_404(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xACEFD4F866140321();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_391(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_399() /*8064*/].f_5756.f_36 = iVar1;
}

void func_405()
{
	func_408("CELL_CLTEST1", 0);
	func_406("CELL_CLTEST1");
	func_408("CELL_CLTEST6", 0);
	func_406("CELL_CLTEST6");
}

void func_406(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x471A7F8C908126F0(&(Global_97358.f_12395[iVar0 /*104*/])))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[iVar0 /*104*/]), sParam0))
			{
				if (Global_97358.f_12395[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_227();
					Global_97358.f_12395[iVar0 /*104*/].f_99[Global_14393] = 0;
					if (func_407(iVar0))
					{
					}
					else
					{
						Global_97358.f_12395[iVar0 /*104*/].f_24 = 0;
						Global_97358.f_12395[iVar0 /*104*/].f_28 = 0;
						Global_97358.f_12395[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x78CC79D76C58772C(Global_97358.f_12395[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_407(int iParam0)
{
	if ((Global_97358.f_12395[iParam0 /*104*/].f_99[0] == 1 || Global_97358.f_12395[iParam0 /*104*/].f_99[1] == 1) || Global_97358.f_12395[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_408(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x471A7F8C908126F0(&(Global_97358.f_12395[iVar0 /*104*/])))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[iVar0 /*104*/]), sParam0))
			{
				if (Global_97358.f_12395[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_97358.f_12395[iVar0 /*104*/].f_24 = 1;
				if (Global_97358.f_12395[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_97358.f_12395[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_97358.f_12305[0 /*20*/].f_17 = 0;
					}
					if (Global_97358.f_12395[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_97358.f_12305[1 /*20*/].f_17 = 0;
					}
					if (Global_97358.f_12395[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_97358.f_12305[2 /*20*/].f_17 = 0;
					}
					if (Global_97358.f_12395[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_97358.f_12305[3 /*20*/].f_17 = 0;
					}
					Global_97358.f_12395[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_97358.f_12395[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_409()
{
	if (unk_0xC9EED58014EF1F40())
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (!unk_0x9685D9855970A029())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (func_116(unk_0xCFC72E446B0B3AD7(), 1))
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	if (unk_0xC8557993A78C1B3E())
	{
		return 0;
	}
	if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (Global_1573535)
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	if (func_178())
	{
		return 0;
	}
	if (func_418())
	{
		return 0;
	}
	if (unk_0x11D7DF356299D4F0())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (!func_113())
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (unk_0x4F0283431254A343())
	{
		return 0;
	}
	return 1;
}

bool func_410()
{
	if (Global_2097152[func_399() /*8064*/].f_5756.f_34 == 0)
	{
		return 0;
	}
	return (unk_0xC5F007216781AC50() - Global_2097152[func_399() /*8064*/].f_5756.f_34) < 86400;
}

bool func_411()
{
	if (Global_2097152[func_399() /*8064*/].f_5756.f_35 == 0)
	{
		return 0;
	}
	return (unk_0xC5F007216781AC50() - Global_2097152[func_399() /*8064*/].f_5756.f_35) < 86400;
}

bool func_412()
{
	if (!unk_0x94E72F17611BCD3C(iLocal_559, 2))
	{
		if (!func_22(unk_0xCFC72E446B0B3AD7(), 0))
		{
			if (((((!unk_0x4F0283431254A343() && !func_116(unk_0xCFC72E446B0B3AD7(), 1)) && !func_107()) && (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))) && unk_0x9685D9855970A029()) && func_413(19))
			{
				unk_0xEDB9A377CD8B7F03(&iLocal_559, 2);
			}
		}
	}
	return unk_0x94E72F17611BCD3C(iLocal_559, 2);
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_415(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_414(unk_0xCFC72E446B0B3AD7(), 1);
	iVar2 = func_345(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_347(iParam0);
}

int func_415(int iParam0)
{
	if (func_98())
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
			if (!func_416(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 135:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_416(int iParam0)
{
	return func_417(123, iParam0);
}

int func_417(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_76(uParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_418()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0;
}

int func_419()
{
	bool bVar0;
	
	func_425(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_424())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_423())
	{
		return 1;
	}
	if (func_422(157))
	{
		if (!func_421())
		{
			return 1;
		}
	}
	if (func_422(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_420() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_420()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_420()
{
	switch (func_78())
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

bool func_421()
{
	return Global_2428162.f_572;
}

int func_422(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_423()
{
	return Global_2435128;
}

bool func_424()
{
	return Global_2428162.f_567;
}

void func_425(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_426(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_426(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_427(iVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_427(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(iParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(iParam0))
			{
				unk_0x336AE92FD68DEF98(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(iParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_428()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_429()
{
	if (iLocal_97 != -1)
	{
		func_120(iLocal_97, 0);
	}
	func_431(&iLocal_314);
	if (unk_0x94E72F17611BCD3C(iLocal_559, 1))
	{
		func_430(0f, 0f, 0f, func_292(19), 1);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x7EF90A4891193127())
		{
			if (unk_0x434508E0702EFF4E(Local_354.f_24))
			{
				unk_0xEFFD4C06A93A58A8(Local_354.f_24);
			}
			Local_354.f_24 = -1;
		}
	}
	func_301();
	Global_2446533.f_1544 = 0;
	Global_2446533.f_1545 = 0;
	Global_2446533.f_1547 = 0;
	Global_2446533.f_1573 = 0;
	if (unk_0x94E72F17611BCD3C(iLocal_559, 7))
	{
		func_191(6, 0);
	}
	func_319();
	if (unk_0x2E6E8D325977B3EC(Global_1685179))
	{
		unk_0x0451B5D93A4BDAA0(&Global_1685179);
	}
	func_189(0);
	if (unk_0x2E6E8D325977B3EC(Global_1685189))
	{
		unk_0x0451B5D93A4BDAA0(&Global_1685189);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (iLocal_74)
		{
			func_139(1215605247, 0, 0);
			func_138(0);
		}
		if (iLocal_87)
		{
			func_138(0);
		}
	}
	unk_0xE60DEFFB2A853900();
}

void func_430(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x9E9AFDBF482248F6(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_2446533.f_3804[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_26(Global_2446533.f_3804[iVar0 /*26*/].f_1, Param0))
				{
					Global_2446533.f_3804[iVar0 /*26*/] = 0;
					Global_2446533.f_3804[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2446533.f_3804[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_431(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_432(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_433(struct<20> Param0)
{
	func_439(func_440(Param0.f_0), Param0);
	func_436(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_354, 74);
	unk_0x85862F9356411B89(&Local_430, 129);
	unk_0xE5556978B2858C53(0);
	if (!func_435())
	{
		return 0;
	}
	Global_2446533.f_1547 = 0;
	Global_2446533.f_4222 = 0;
	if (unk_0x7EF90A4891193127())
	{
	}
	if (func_66(unk_0xCFC72E446B0B3AD7(), 6))
	{
		func_191(6, 0);
	}
	func_434();
	return 1;
}

void func_434()
{
	var uVar0;
	
	uVar0 = func_75(1191, -1, 0);
	if (unk_0x94E72F17611BCD3C(uVar0, 3))
	{
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 1);
	}
	if (unk_0x94E72F17611BCD3C(iVar0, 4))
	{
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 2);
	}
	if (unk_0x94E72F17611BCD3C(iVar0, 5))
	{
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 3);
		unk_0xEDB9A377CD8B7F03(&iLocal_560, 0);
	}
}

int func_435()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_424())
		{
			return 0;
		}
		if (func_422(155))
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

int func_436(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_438();
			}
			else
			{
				return 0;
			}
		}
		if (!func_437())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_438();
					}
					else
					{
						return 0;
					}
				}
				if (func_424())
				{
					if (!bParam2)
					{
						func_438();
					}
					else
					{
						return 0;
					}
				}
				if (func_422(155))
				{
					if (!bParam2)
					{
						func_438();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_438();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_438();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_438();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_437()
{
	return Global_1315874;
}

void func_438()
{
	unk_0xE60DEFFB2A853900();
}

void func_439(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_438();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_440(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
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
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

