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
	bool bLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	struct<3> Local_218 = { 0, 0, 0 } ;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231[3] = { 0, 0, 0 };
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_259 = 0;
	bool bLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	struct<3> Local_270 = { 0, 0, 0 } ;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	int iLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	var uLocal_291[2] = { 0, 0 };
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296[3] = { 0, 0, 0 };
	var uLocal_300[2] = { 0, 0 };
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
	iLocal_17 = 3;
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
	Local_218 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xD63E63DFACCEB80E(11))
	{
		func_142();
	}
	if (func_89(Local_218, -1, 0, 0, 0))
	{
		func_86(-1);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB819D1DD7DA58F08() || iLocal_273)
		{
			unk_0x2F626F4BEC43C4F6("RE_CR", 0);
			switch (iLocal_45)
			{
				case 0:
					if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_218, 100f, 100f, 100f, 0, 1, 0))
					{
						func_142();
					}
					if (iLocal_46)
					{
						iLocal_45 = 1;
					}
					else
					{
						func_85();
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
					func_84();
					func_82();
					if (!func_81())
					{
						func_78();
					}
					if (!bLocal_48)
					{
						func_67();
					}
					if (!bLocal_49 && !bLocal_283)
					{
						func_63();
					}
					if (iLocal_265 && !bLocal_48)
					{
						func_62(iLocal_225[0]);
						func_62(iLocal_225[1]);
						func_62(iLocal_225[2]);
					}
					if ((!iLocal_265 && !bLocal_283) && func_81())
					{
						func_61(iLocal_231[0], &(uLocal_242[0]), 1, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[1]), 5, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[2]), 0, 0.7f);
						func_61(iLocal_231[0], &(uLocal_242[3]), 4, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[4]), 1, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[5]), 5, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[6]), 0, 0.7f);
						func_61(iLocal_231[1], &(uLocal_242[7]), 4, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[8]), 1, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[9]), 5, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[10]), 0, 0.7f);
						func_61(iLocal_231[2], &(uLocal_242[11]), 4, 0.7f);
						func_61(iLocal_235, &(uLocal_242[12]), 1, 0.7f);
						func_61(iLocal_235, &(uLocal_242[13]), 5, 0.7f);
						func_61(iLocal_235, &(uLocal_242[14]), 0, 0.7f);
						func_61(iLocal_235, &(uLocal_242[15]), 4, 0.7f);
					}
					if (!iLocal_263)
					{
						func_59();
					}
					else
					{
						if (!bLocal_283)
						{
							func_58();
						}
						else if (!iLocal_280 && bLocal_48)
						{
							func_56();
						}
						if (!iLocal_284)
						{
							func_55();
						}
						func_54();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_278)
	{
		if (unk_0x0BA451447C3B1A8D(iLocal_225[0]) || unk_0x3E0478C40AB5B38D(iLocal_225[0]))
		{
			func_53(&uLocal_53, 4);
			iLocal_278 = 1;
		}
	}
	if (!bLocal_259)
	{
		if ((unk_0x0BA451447C3B1A8D(iLocal_221) || unk_0x3E0478C40AB5B38D(iLocal_221)) || unk_0x20C3FEE1E49268B7(iLocal_221))
		{
			unk_0x3BC6D217451D6BB7(joaat("prop_security_case_01"));
			if (unk_0x149162179DBAEDB0(joaat("prop_security_case_01")))
			{
				Local_270 = { unk_0x4FF2C3593F99FE86(iLocal_221, 1067030938, 1069547520) };
				Local_270.f_2 = (Local_270.f_2 + 0.3f);
				uLocal_291[0] = unk_0xC4163BC5B413E6F6(joaat("pickup_money_case"), Local_270 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x2E6E8D325977B3EC(uLocal_300[0]))
				{
					uLocal_300[0] = func_51(uLocal_291[0]);
				}
				bLocal_259 = true;
				func_53(&uLocal_53, 5);
			}
		}
	}
	if (!bLocal_260)
	{
		if ((unk_0x0BA451447C3B1A8D(iLocal_222) || unk_0x3E0478C40AB5B38D(iLocal_222)) || unk_0x20C3FEE1E49268B7(iLocal_222))
		{
			unk_0x3BC6D217451D6BB7(joaat("prop_security_case_01"));
			if (unk_0x149162179DBAEDB0(joaat("prop_security_case_01")))
			{
				Local_270 = { unk_0x4FF2C3593F99FE86(iLocal_222, 1067030938, 1069547520) };
				Local_270.f_2 = (Local_270.f_2 + 0.3f);
				uLocal_291[1] = unk_0xC4163BC5B413E6F6(joaat("pickup_money_case"), Local_270 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x2E6E8D325977B3EC(uLocal_300[1]))
				{
					uLocal_300[1] = func_51(uLocal_291[1]);
				}
				bLocal_260 = true;
				func_53(&uLocal_53, 6);
			}
		}
	}
	if (!bLocal_283)
	{
		if (!iLocal_275)
		{
			if (unk_0x746960881FB19A89(iLocal_221))
			{
				if (unk_0x0BA451447C3B1A8D(iLocal_221) || unk_0x3E0478C40AB5B38D(iLocal_221))
				{
					if (unk_0xE99AF5B1B3F0BB7C(iLocal_221, unk_0x9F92518438215DD0(), 1))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_294);
						iLocal_275 = 1;
						bLocal_49 = true;
						unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
						if (!unk_0x3E0478C40AB5B38D(iLocal_222))
						{
							unk_0xF78316EFCA911012(iLocal_222, unk_0x9F92518438215DD0(), 0, 16);
							unk_0xE8105B7E3908547D(iLocal_222, 1);
							unk_0x6EEE43A2E0033062(iLocal_222, unk_0x9F92518438215DD0());
							unk_0x3DB2056294531304(iLocal_222, 1);
							func_53(&uLocal_53, 5);
							func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_274)
		{
			if (unk_0x746960881FB19A89(iLocal_222))
			{
				if (unk_0x0BA451447C3B1A8D(iLocal_222) || unk_0x3E0478C40AB5B38D(iLocal_222))
				{
					if (unk_0xE99AF5B1B3F0BB7C(iLocal_222, unk_0x9F92518438215DD0(), 1))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_295);
						iLocal_274 = 1;
						bLocal_49 = true;
						unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
						if (!unk_0x3E0478C40AB5B38D(iLocal_221))
						{
							unk_0xF78316EFCA911012(iLocal_221, unk_0x9F92518438215DD0(), 0, 16);
							unk_0xE8105B7E3908547D(iLocal_221, 1);
							unk_0x6EEE43A2E0033062(iLocal_221, unk_0x9F92518438215DD0());
							unk_0x3DB2056294531304(iLocal_221, 1);
							func_38(&uLocal_53, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_37() || !unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (unk_0x3E0478C40AB5B38D(iLocal_221) && unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				if (func_37() && !unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_218, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_49 && !bLocal_48)
				{
					if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_283)
	{
		if (func_37())
		{
			if (unk_0x0BA451447C3B1A8D(iLocal_221) && unk_0x0BA451447C3B1A8D(iLocal_222))
			{
				func_7();
			}
			if (bLocal_283)
			{
				if (unk_0x746960881FB19A89(iLocal_221))
				{
					if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_221, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_49)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0x746960881FB19A89(iLocal_222))
				{
					if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_49)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_265 && !bLocal_48)
	{
		unk_0x973CDBEE91574C6A(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x3BC6D217451D6BB7(joaat("ambulance"));
		unk_0xDA293E5084610B09("random@countrysiderobbery");
		if (((unk_0x0BA451447C3B1A8D(iLocal_221) && unk_0x0BA451447C3B1A8D(iLocal_222)) && unk_0x149162179DBAEDB0(joaat("ambulance"))) && unk_0x3DA2EED4204CE591("random@countrysiderobbery"))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_294);
			unk_0x0451B5D93A4BDAA0(&uLocal_295);
			func_53(&uLocal_53, 5);
			func_53(&uLocal_53, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_296[iVar0]));
				}
				iVar0++;
			}
			unk_0xF2061C15946C53A2(1, iLocal_267, joaat("player"));
			unk_0x2250E32CE864C09F(5, 1);
			unk_0x2250E32CE864C09F(3, 1);
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, 0, 1, 0))
			{
				uLocal_236 = unk_0xB0694AD0A3BB8936(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, 1, 1);
			}
			else
			{
				uLocal_236 = unk_0xB0694AD0A3BB8936(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, 1, 1);
			}
			unk_0x96374111160E90D9(uLocal_236, 1);
			iLocal_223 = unk_0xAD7526C9AA33EE39(uLocal_236, 20, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			iLocal_224 = unk_0xAD7526C9AA33EE39(uLocal_236, 20, joaat("s_m_m_paramedic_01"), 0, 1, 1);
			unk_0x64277E0EB39C1162(iLocal_223, 17, 1);
			unk_0x64277E0EB39C1162(iLocal_224, 17, 1);
			unk_0x9001FCB58244C11D(iLocal_223, 185, 1);
			unk_0x9001FCB58244C11D(iLocal_224, 185, 1);
			if (unk_0x746960881FB19A89(iLocal_221))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0xC96425701AF2C9C4(0, uLocal_236, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0x92641D4778270335(0, iLocal_221, -1, 2f, 1f, 10f, 0);
				unk_0x402A96371F34E6D8(0, iLocal_221, -1, 2052, 2);
				unk_0x23F243BF5B07DA90(0, iLocal_221, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_223, uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				unk_0xE8105B7E3908547D(iLocal_223, 1);
			}
			if (unk_0x746960881FB19A89(iLocal_222))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0x0F1CDD7ECAA6205F(0, 15000);
				unk_0x92641D4778270335(0, iLocal_222, -1, 2f, 1f, 10f, 0);
				unk_0x402A96371F34E6D8(0, iLocal_222, -1, 2052, 2);
				unk_0x23F243BF5B07DA90(0, iLocal_222, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_224, uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				unk_0xE8105B7E3908547D(iLocal_224, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]) && unk_0x746960881FB19A89(iLocal_235))
			{
				unk_0x9001FCB58244C11D(iLocal_225[0], 185, 1);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0x27DF0A5AA993D7B6(0, unk_0x77009B1C011405A9(iLocal_235, 0) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0xFD74373C26A35809(0, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_225[0], uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				unk_0xE8105B7E3908547D(iLocal_225[0], 1);
			}
			if (!unk_0x0BA451447C3B1A8D(iLocal_225[1]) && unk_0x746960881FB19A89(iLocal_229))
			{
				unk_0x9001FCB58244C11D(iLocal_225[1], 185, 1);
				unk_0x3E5529EA76D127DA(iLocal_225[1], joaat("weapon_unarmed"), 1);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0x27DF0A5AA993D7B6(0, unk_0x77009B1C011405A9(iLocal_229, 0) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0x284B09A617F0967C(0, unk_0x77009B1C011405A9(iLocal_229, 0), -1, 2052, 2);
				unk_0xE06445687CB36C85(0, unk_0x77009B1C011405A9(iLocal_229, 0), 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_225[1], uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				unk_0xE8105B7E3908547D(iLocal_225[1], 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]) && unk_0x746960881FB19A89(iLocal_222))
			{
				unk_0x9001FCB58244C11D(iLocal_225[2], 185, 1);
				if (unk_0x746960881FB19A89(iLocal_222))
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
					unk_0x27DF0A5AA993D7B6(0, unk_0x77009B1C011405A9(iLocal_222, 0) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0xFD74373C26A35809(0, 0);
					unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x7CF15DD8B3815A0D(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x3179CCC77CBAB31F(uLocal_268);
					unk_0xC7EBE3C9AC83FAAA(iLocal_225[2], uLocal_268);
					unk_0xCD02E3C29B8253A6(&uLocal_268);
				}
				unk_0xE8105B7E3908547D(iLocal_225[2], 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_265 = 1;
		}
	}
	if (iLocal_263 && !func_81())
	{
		func_5();
	}
	if (((((unk_0x0BA451447C3B1A8D(iLocal_221) && unk_0x0BA451447C3B1A8D(iLocal_222)) && unk_0x0BA451447C3B1A8D(iLocal_225[0])) && unk_0x0BA451447C3B1A8D(iLocal_225[1])) && unk_0x0BA451447C3B1A8D(iLocal_225[2])) && (func_37() || !unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		unk_0xCDF07288D526B918(unk_0xCFC72E446B0B3AD7(), 2, 0);
		unk_0x398F361E54424C32(unk_0xCFC72E446B0B3AD7(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_14558 = 0;
	func_4();
}

void func_4()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_5()
{
	func_142();
}

void func_6(int iParam0)
{
	Global_97344 = iParam0;
}

void func_7()
{
	if (!bLocal_48)
	{
	}
	while (func_36())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_35())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_11(-1, 0);
	func_8();
	func_142();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
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

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_32(iParam0))
	{
		func_31(iParam0, iParam1);
		if (!func_30(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_6(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_13();
	}
}

void func_13()
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_15(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_14() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_24444;
}

int func_15(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_17()
{
	return Global_1312737;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_23();
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_24()
{
	func_25();
	switch (Global_97358.f_1729.f_539.f_3213)
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

void func_25()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_29(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_28(unk_0x9F92518438215DD0());
			if (func_27(iVar0) && (!func_26(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_27(Global_97358.f_1729.f_539.f_3213))
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

bool func_26(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
}

int func_32(int iParam0)
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

int func_33()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_34(Var0);
	return uVar16;
}

int func_34(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
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

int func_35()
{
	return 1;
}

int func_36()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (bLocal_259 || bLocal_260)
	{
		if (bLocal_259 && bLocal_260)
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_300[0]) && !unk_0x2E6E8D325977B3EC(uLocal_300[1]))
			{
				return 1;
			}
		}
		if (bLocal_259 && !bLocal_260)
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_300[0]))
			{
				return 1;
			}
		}
		if (bLocal_260 && !bLocal_259)
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_300[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_38(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_39(sParam2, iParam3, 0);
}

int func_39(char* sParam0, int iParam1, bool bParam2)
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
					func_48();
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
		if (func_47(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_46();
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
				func_44();
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
				if (func_43())
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
			if (func_42())
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
			func_41();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_40();
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
		func_48();
	}
	return 0;
}

void func_40()
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

void func_41()
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

int func_42()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()
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

void func_44()
{
	if (func_26(14))
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
		Global_14393 = func_45();
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

int func_45()
{
	func_25();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_46()
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

bool func_47(int iParam0, int iParam1)
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

void func_48()
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

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_51(var uParam0)
{
	var uVar0;
	
	if (!unk_0x303D473D180EAA17(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x56F3A0BEE1BE9871(uParam0);
	unk_0xD4916ED85412C8D9(uVar0, func_52(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	return uVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_53(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_54()
{
	if (!iLocal_281)
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_221))
		{
			if (unk_0x827151D7B70CB853(iLocal_221, 0))
			{
				iLocal_290 = unk_0x1161215F69587BDA(iLocal_221, 0);
				if (((((unk_0xE99AF5B1B3F0BB7C(iLocal_290, unk_0x9F92518438215DD0(), 1) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0)) || unk_0xBCBBB7902DEFA79B(iLocal_221)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_290, 0)) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), iLocal_290, joaat("weapon_stickybomb"), -1))
				{
					unk_0x4A1AC49BA4A747F7(iLocal_221, 0);
					unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
					if (unk_0x827151D7B70CB853(iLocal_221, 0))
					{
						unk_0x46D3B8FF073CD238(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3E5529EA76D127DA(iLocal_221, joaat("weapon_microsmg"), 1);
						unk_0x46374ECB1C118DE5(iLocal_221, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_222))
					{
						if (unk_0x827151D7B70CB853(iLocal_222, 0))
						{
							unk_0x4A1AC49BA4A747F7(iLocal_222, 0);
							unk_0x46D3B8FF073CD238(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3E5529EA76D127DA(iLocal_222, joaat("weapon_microsmg"), 1);
							unk_0x46374ECB1C118DE5(iLocal_222, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_49 = true;
					iLocal_281 = 1;
				}
			}
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_221, unk_0x9F92518438215DD0(), 1))
			{
				unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
				if ((unk_0x827151D7B70CB853(iLocal_221, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
				{
					if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x4A1AC49BA4A747F7(iLocal_221, 0);
						unk_0x46D3B8FF073CD238(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3E5529EA76D127DA(iLocal_221, joaat("weapon_microsmg"), 1);
						unk_0x46374ECB1C118DE5(iLocal_221, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_49 = true;
						iLocal_281 = 1;
					}
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_222))
				{
					if ((unk_0x827151D7B70CB853(iLocal_222, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
					{
						if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x4A1AC49BA4A747F7(iLocal_222, 0);
							unk_0x46D3B8FF073CD238(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3E5529EA76D127DA(iLocal_222, joaat("weapon_microsmg"), 1);
							unk_0x46374ECB1C118DE5(iLocal_222, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_222))
		{
			if (unk_0x827151D7B70CB853(iLocal_222, 0))
			{
				iLocal_290 = unk_0x1161215F69587BDA(iLocal_222, 0);
				if (((unk_0xE99AF5B1B3F0BB7C(iLocal_290, unk_0x9F92518438215DD0(), 1) || unk_0xBCBBB7902DEFA79B(iLocal_222)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_290, 0)) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), iLocal_290, joaat("weapon_stickybomb"), -1))
				{
					unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
					if (!unk_0x3E0478C40AB5B38D(iLocal_221))
					{
						if ((unk_0x827151D7B70CB853(iLocal_221, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
						{
							if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x4A1AC49BA4A747F7(iLocal_221, 0);
								unk_0x46D3B8FF073CD238(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
								unk_0x3E5529EA76D127DA(iLocal_221, joaat("weapon_microsmg"), 1);
								unk_0x46374ECB1C118DE5(iLocal_221, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_49 = true;
								iLocal_281 = 1;
							}
						}
					}
					if ((unk_0x827151D7B70CB853(iLocal_222, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
					{
						if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x4A1AC49BA4A747F7(iLocal_222, 0);
							unk_0x46D3B8FF073CD238(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3E5529EA76D127DA(iLocal_222, joaat("weapon_microsmg"), 1);
							unk_0x46374ECB1C118DE5(iLocal_222, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
			}
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_222, unk_0x9F92518438215DD0(), 1))
			{
				unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
				if (!unk_0x3E0478C40AB5B38D(iLocal_221))
				{
					if ((unk_0x827151D7B70CB853(iLocal_221, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
					{
						if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x46D3B8FF073CD238(iLocal_221, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x3E5529EA76D127DA(iLocal_221, joaat("weapon_microsmg"), 1);
							unk_0x46374ECB1C118DE5(iLocal_221, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_49 = true;
							iLocal_281 = 1;
						}
					}
				}
				if ((unk_0x827151D7B70CB853(iLocal_222, 0) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && !unk_0x0BA451447C3B1A8D(iLocal_290))
				{
					if (unk_0x5093D6F9140AD109(iLocal_290, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x46D3B8FF073CD238(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x3E5529EA76D127DA(iLocal_222, joaat("weapon_microsmg"), 1);
						unk_0x46374ECB1C118DE5(iLocal_222, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_49 = true;
						iLocal_281 = 1;
					}
				}
			}
		}
	}
}

void func_55()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_221) && !unk_0x0BA451447C3B1A8D(iLocal_235))
	{
		if (!unk_0x8C612717241D72F3(iLocal_221, iLocal_235, -1, 0, 0) && !unk_0x8C612717241D72F3(iLocal_221, iLocal_235, 0, 0, 0))
		{
			unk_0x996FFDF5B8A260AB(iLocal_221, Local_218, 1000f, -1, 0, 0);
			unk_0xE8105B7E3908547D(iLocal_221, 1);
			iLocal_284 = 1;
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_222) && !unk_0x0BA451447C3B1A8D(iLocal_235))
	{
		if (!unk_0x8C612717241D72F3(iLocal_222, iLocal_235, -1, 0, 0) && !unk_0x8C612717241D72F3(iLocal_222, iLocal_235, 0, 0, 0))
		{
			unk_0x996FFDF5B8A260AB(iLocal_222, Local_218, 1000f, -1, 0, 0);
			unk_0xE8105B7E3908547D(iLocal_222, 1);
			iLocal_284 = 1;
		}
	}
}

void func_56()
{
	if (!unk_0x0BA451447C3B1A8D(iLocal_221))
	{
		Local_270 = { unk_0x77009B1C011405A9(iLocal_221, 1) };
	}
	else if (!unk_0x0BA451447C3B1A8D(iLocal_222))
	{
		Local_270 = { unk_0x77009B1C011405A9(iLocal_222, 1) };
	}
	Local_270.f_2 = (Local_270.f_2 - 0.11f);
	if (!unk_0x0BA451447C3B1A8D(iLocal_221))
	{
		unk_0xC1B1E9A034A63A62(0);
		if (!bLocal_49)
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x0BA451447C3B1A8D(iLocal_221))
			{
				func_57(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x0BA451447C3B1A8D(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_57(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0x80555CD8301B877E(unk_0xFE6CFB1749CED843(Local_270, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_280 = 1;
		}
	}
	if (!unk_0x0BA451447C3B1A8D(iLocal_222) && !unk_0x0BA451447C3B1A8D(iLocal_235))
	{
		if (unk_0x44E080690DA76A2A(iLocal_222, iLocal_235, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x0BA451447C3B1A8D(iLocal_221))
			{
			}
			else if (!unk_0x0BA451447C3B1A8D(iLocal_222))
			{
			}
			iLocal_280 = 1;
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_39(sParam2, iParam4, 0);
}

void func_58()
{
	if (!bLocal_283)
	{
		unk_0x973CDBEE91574C6A(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_287)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				if (unk_0xAB9B7705A127421C(iLocal_221))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_287 = 1;
				}
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				if (unk_0xAB9B7705A127421C(iLocal_222))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_287 = 1;
				}
			}
		}
		if (iLocal_264 == 1)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221) && !unk_0x0BA451447C3B1A8D(iLocal_235))
			{
				if (unk_0x44E080690DA76A2A(iLocal_221, iLocal_235, 0))
				{
					unk_0xA334EDA2335A13CA(iLocal_221, 2, 1);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
					unk_0x7FC0EEAECC1615C3(0, iLocal_235, unk_0x9F92518438215DD0(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x3179CCC77CBAB31F(uLocal_268);
					unk_0xC7EBE3C9AC83FAAA(iLocal_221, uLocal_268);
					unk_0xCD02E3C29B8253A6(&uLocal_268);
					unk_0xE8105B7E3908547D(iLocal_221, 1);
					bLocal_283 = true;
				}
			}
		}
		if (iLocal_264 == 2)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_222) && !unk_0x0BA451447C3B1A8D(iLocal_235))
			{
				if (unk_0x44E080690DA76A2A(iLocal_222, iLocal_235, 0))
				{
					unk_0xA334EDA2335A13CA(iLocal_222, 2, 1);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
					unk_0x7FC0EEAECC1615C3(0, iLocal_235, unk_0x9F92518438215DD0(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x3179CCC77CBAB31F(uLocal_268);
					unk_0xC7EBE3C9AC83FAAA(iLocal_222, uLocal_268);
					unk_0xCD02E3C29B8253A6(&uLocal_268);
					unk_0xE8105B7E3908547D(iLocal_222, 1);
					bLocal_283 = true;
				}
			}
		}
		if (iLocal_264 == 3)
		{
			if ((!unk_0x3E0478C40AB5B38D(iLocal_222) && !unk_0x3E0478C40AB5B38D(iLocal_221)) && !unk_0x0BA451447C3B1A8D(iLocal_235))
			{
				if (unk_0x44E080690DA76A2A(iLocal_221, iLocal_235, 0) && unk_0x44E080690DA76A2A(iLocal_222, iLocal_235, 0))
				{
					unk_0xA334EDA2335A13CA(iLocal_221, 2, 1);
					unk_0xA334EDA2335A13CA(iLocal_222, 2, 1);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
					unk_0x7FC0EEAECC1615C3(0, iLocal_235, unk_0x9F92518438215DD0(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x3179CCC77CBAB31F(uLocal_268);
					unk_0xC7EBE3C9AC83FAAA(iLocal_221, uLocal_268);
					unk_0xCD02E3C29B8253A6(&uLocal_268);
					unk_0x4A1AC49BA4A747F7(iLocal_222, 0);
					unk_0xE8105B7E3908547D(iLocal_221, 1);
					bLocal_283 = true;
				}
			}
			if (unk_0x3E0478C40AB5B38D(iLocal_221) && !unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				unk_0x4073360CA020BB84(iLocal_222, iLocal_235, -1, -1, 2f, 8, 0);
				iLocal_264 = 2;
			}
			if (unk_0x3E0478C40AB5B38D(iLocal_222) && !unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				func_53(&uLocal_53, 6);
				unk_0x4073360CA020BB84(iLocal_221, iLocal_235, -1, -1, 2f, 8, 0);
				iLocal_264 = 1;
			}
		}
		if (iLocal_264 == 4)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0x32D18ECD9E6F9BE2(iLocal_221);
				unk_0x996FFDF5B8A260AB(iLocal_221, Local_218, 1000f, -1, 0, 0);
				unk_0xE8105B7E3908547D(iLocal_221, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0x32D18ECD9E6F9BE2(iLocal_222);
				unk_0x996FFDF5B8A260AB(iLocal_222, Local_218, 1000f, -1, 0, 0);
				unk_0xE8105B7E3908547D(iLocal_222, 1);
			}
			bLocal_283 = true;
		}
	}
}

void func_59()
{
	if ((unk_0x0BA451447C3B1A8D(iLocal_225[0]) && unk_0x0BA451447C3B1A8D(iLocal_225[1])) && unk_0x0BA451447C3B1A8D(iLocal_225[2]))
	{
		func_53(&uLocal_53, 4);
		iLocal_273 = 1;
		iLocal_263 = 1;
		unk_0xF2061C15946C53A2(1, iLocal_266, joaat("player"));
		if (!bLocal_49 && bLocal_48)
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_294);
			unk_0x0451B5D93A4BDAA0(&uLocal_295);
		}
		if (!bLocal_49)
		{
			if (!unk_0x0BA451447C3B1A8D(iLocal_221))
			{
				func_60(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x0BA451447C3B1A8D(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_60(&uLocal_53, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0xFC38B241541883D3(iLocal_235, 0))
		{
			unk_0x87659527DF5C44B5(iLocal_235);
			if (!unk_0x3E0478C40AB5B38D(iLocal_221) && !unk_0x20C3FEE1E49268B7(iLocal_221))
			{
				unk_0x548F7CC763CAC677(iLocal_221, 1, 1, 1, 0);
				iLocal_264 = 1;
				unk_0x32D18ECD9E6F9BE2(iLocal_221);
				unk_0x8737AAF3C52B871F(iLocal_221, 1);
				unk_0x4A1AC49BA4A747F7(iLocal_221, 1);
				unk_0x87659527DF5C44B5(iLocal_221);
				unk_0x87659527DF5C44B5(iLocal_235);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0x4073360CA020BB84(0, iLocal_235, -1, -1, 2f, 9, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_221, uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				if (!unk_0x3E0478C40AB5B38D(iLocal_222) && !unk_0x20C3FEE1E49268B7(iLocal_222))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_222);
					unk_0x4A1AC49BA4A747F7(iLocal_222, 1);
					unk_0x87659527DF5C44B5(iLocal_222);
					unk_0x87659527DF5C44B5(iLocal_235);
					unk_0x8737AAF3C52B871F(iLocal_222, 1);
					unk_0x4073360CA020BB84(iLocal_222, iLocal_235, -1, 0, 2f, 1, 0);
					iLocal_264 = 3;
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0x8737AAF3C52B871F(iLocal_222, 1);
				unk_0x548F7CC763CAC677(iLocal_222, 1, 1, 1, 0);
				unk_0x32D18ECD9E6F9BE2(iLocal_222);
				unk_0x4A1AC49BA4A747F7(iLocal_222, 1);
				unk_0x87659527DF5C44B5(iLocal_222);
				unk_0x87659527DF5C44B5(iLocal_235);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_268);
				unk_0x4073360CA020BB84(0, iLocal_235, -1, -1, 2f, 1, 0);
				unk_0x3179CCC77CBAB31F(uLocal_268);
				unk_0xC7EBE3C9AC83FAAA(iLocal_222, uLocal_268);
				unk_0xCD02E3C29B8253A6(&uLocal_268);
				iLocal_264 = 2;
			}
		}
		else
		{
			iLocal_264 = 4;
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_39(sParam2, iParam4, 0);
}

void func_61(int iParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var3 = { -0.5f, 0.75f, 0.05f };
					iVar6 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var3 = { 0.5f, 0.75f, 0.05f };
					iVar6 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var3 = { -0.5f, -0.75f, 0.05f };
					iVar6 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var3 = { 0.5f, -0.75f, 0.05f };
					iVar6 = 3;
					break;
			}
			if (unk_0xA4C1E92021F367BD(unk_0x20CBCBD58A2C73B4(iParam0, Var0), fParam3, 1, 1) || unk_0xA4C1E92021F367BD(unk_0x20CBCBD58A2C73B4(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0x59E61BAD0D3047D6(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0xD1F7F7685105B01C(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0x2830EDAED7B1CBB5(iParam0, Var3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_62(int iParam0)
{
	if ((!unk_0x3E0478C40AB5B38D(iParam0) && !func_36()) && unk_0x83666F9FB8FEBD4B() > 12000)
	{
		func_50(&uLocal_53, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0x5093D6F9140AD109(iParam0, unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_38(&uLocal_53, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_63()
{
	if (!unk_0x0BA451447C3B1A8D(iLocal_221))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_221, unk_0x9F92518438215DD0(), 1))
		{
			bLocal_49 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0xF78316EFCA911012(iLocal_221, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_221, 1);
				unk_0x6EEE43A2E0033062(iLocal_221, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_221, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0xF78316EFCA911012(iLocal_222, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_222, 1);
				unk_0x6EEE43A2E0033062(iLocal_222, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_222, 1);
			}
			if (!bLocal_48)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_221))
		{
			if (!func_66() && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
			{
				if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_221) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_221))
				{
					if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_221, 20f, 20f, 20f, 0, 1, 0) && unk_0xCEC6A26F61687EAE(iLocal_221, unk_0x9F92518438215DD0()))
					{
						iLocal_239++;
						if (!iLocal_240 && !func_64("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0x3E0478C40AB5B38D(iLocal_221))
							{
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
							{
								func_53(&uLocal_53, 5);
								func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_240 = 1;
						}
						if (iLocal_239 > 45)
						{
							bLocal_49 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_48)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
								{
									func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
								{
									unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
								{
									unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_240 || iLocal_241)
				{
					iLocal_239 = 45;
				}
				else
				{
					iLocal_239 = 0;
				}
			}
		}
	}
	if (!unk_0x0BA451447C3B1A8D(iLocal_222))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_222, unk_0x9F92518438215DD0(), 1))
		{
			bLocal_49 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0xF78316EFCA911012(iLocal_222, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_222, 1);
				unk_0x6EEE43A2E0033062(iLocal_222, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_222, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0xF78316EFCA911012(iLocal_221, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_221, 1);
				unk_0x6EEE43A2E0033062(iLocal_221, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_221, 1);
			}
			if (!bLocal_48)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_222))
		{
			if (!func_66() && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
			{
				if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_222) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_222))
				{
					if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && unk_0xCEC6A26F61687EAE(iLocal_222, unk_0x9F92518438215DD0()))
					{
						if ((!iLocal_241 && !unk_0x3E0478C40AB5B38D(iLocal_221)) && !func_64("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0x3E0478C40AB5B38D(iLocal_221))
							{
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
							{
								func_53(&uLocal_53, 5);
								func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
								func_38(&uLocal_53, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						iLocal_238++;
						if (iLocal_238 > 45)
						{
							bLocal_49 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_48)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
								{
									func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
								{
									unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
								{
									unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_53, 4);
									func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_240 || iLocal_241)
				{
					iLocal_239 = 45;
				}
				else
				{
					iLocal_239 = 0;
				}
			}
		}
	}
	if (!iLocal_288 && bLocal_259)
	{
		if (unk_0xB16891D2706A2EF7(uLocal_291[0]))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				if (unk_0xCEC6A26F61687EAE(iLocal_221, unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_221, unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				if (unk_0xCEC6A26F61687EAE(iLocal_222, unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_222, unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
	}
	if (!iLocal_289 && bLocal_260)
	{
		if (unk_0xB16891D2706A2EF7(uLocal_291[1]))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				if (unk_0xCEC6A26F61687EAE(iLocal_221, unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_221, unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				if (unk_0xCEC6A26F61687EAE(iLocal_222, unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_222, unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_49 = true;
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_53, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!unk_0x0BA451447C3B1A8D(iLocal_235))
	{
		if ((unk_0xE99AF5B1B3F0BB7C(iLocal_235, unk_0x9F92518438215DD0(), 1) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_235, 0)) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), iLocal_235, joaat("weapon_stickybomb"), -1))
		{
			bLocal_49 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0xF78316EFCA911012(iLocal_221, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_221, 1);
				unk_0x6EEE43A2E0033062(iLocal_221, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_221, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0xF78316EFCA911012(iLocal_222, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_222, 1);
				unk_0x6EEE43A2E0033062(iLocal_222, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_222, 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x0BA451447C3B1A8D(iLocal_235))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_235, 0))
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_221))
					{
						func_60(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x4073360CA020BB84(iLocal_221, iLocal_235, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
					{
						func_53(&uLocal_53, 5);
						func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						func_60(&uLocal_53, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x4073360CA020BB84(iLocal_222, iLocal_235, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_48)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
					{
						func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
					{
						unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
					{
						unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_64(char* sParam0)
{
	var uVar0;
	
	if (func_36())
	{
		MemCopy(&uVar0, {func_65()}, 4);
		if (unk_0x6B08EC9A88700FBB(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_65()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_66()
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
		{
			if (unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("lazer")) || unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_285)
	{
		unk_0x34ECF55CB765457D(unk_0xCFC72E446B0B3AD7(), &uLocal_269);
		if (unk_0x4E178F5D4155391A(uLocal_269))
		{
			iLocal_230 = unk_0x240654B57CFFBFB3(uLocal_269);
		}
		if ((iLocal_230 == iLocal_225[0] || iLocal_230 == iLocal_225[1]) || iLocal_230 == iLocal_225[2])
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_230))
			{
				if (!func_66() && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
				{
					if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_230) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_230))
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_230, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0xCEC6A26F61687EAE(iLocal_230, unk_0x9F92518438215DD0()) || unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_230, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_286)
								{
									if (!func_64("recsb_coppon"))
									{
										if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
										{
											func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
										{
											unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_53, 4);
											func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
										else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
										{
											unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_53, 4);
											func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_53, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_286 = true;
										}
									}
								}
								iLocal_237++;
								if (iLocal_237 > 40)
								{
									bLocal_285 = true;
									bLocal_48 = true;
									if (!unk_0x0BA451447C3B1A8D(uLocal_269))
									{
										unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
										iVar0 = 0;
										while (iVar0 < iLocal_225)
										{
											if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
											{
												unk_0xF78316EFCA911012(iLocal_225[iVar0], unk_0x9F92518438215DD0(), 0, 16);
												unk_0xE8105B7E3908547D(iLocal_225[iVar0], 1);
												unk_0x6EEE43A2E0033062(iLocal_225[iVar0], unk_0x9F92518438215DD0());
												unk_0x3DB2056294531304(iLocal_225[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_286)
					{
						iLocal_237 = 40;
					}
					else
					{
						iLocal_237 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (unk_0x746960881FB19A89(iLocal_225[iVar1]))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_225[iVar1], unk_0x9F92518438215DD0(), 1))
			{
				bLocal_48 = true;
			}
			if (unk_0xFC38B241541883D3(unk_0x228A016F863DED95(), 0))
			{
				if (unk_0xE99AF5B1B3F0BB7C(iLocal_225[iVar1], unk_0x228A016F863DED95(), 1))
				{
					bLocal_48 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_285)
	{
	}
	if (iLocal_265)
	{
		if (unk_0xC9D9444186B5A374() > 6000)
		{
			if (unk_0xC9D9444186B5A374() > 6000 && unk_0xC9D9444186B5A374() < 7000)
			{
				unk_0x35875163F311FBEF(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_261)
			{
				if (bLocal_49)
				{
					if (!func_36())
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_261 = 1;
					}
				}
				else if (!iLocal_263)
				{
					if (!func_36())
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_261 = 1;
					}
				}
			}
			if (unk_0x1F3E6BAFF00C3ACF(unk_0x9F92518438215DD0(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_48 = true;
			}
			if (!unk_0x0BA451447C3B1A8D(iLocal_235))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_235, 0))
				{
					bLocal_48 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
					{
						func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
					{
						unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
					{
						unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_53, 4);
						func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_225)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar1]))
			{
				if (unk_0xB16891D2706A2EF7(uLocal_291[0]) || unk_0xB16891D2706A2EF7(uLocal_291[1]))
				{
					if (unk_0xCEC6A26F61687EAE(iLocal_225[iVar1], unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_225[iVar1], unk_0x9F92518438215DD0(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_48 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), iLocal_225[iVar1]))
				{
					unk_0xF2061C15946C53A2(3, iLocal_267, joaat("player"));
					bLocal_48 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]) && !unk_0x0BA451447C3B1A8D(iLocal_231[2]))
		{
			if (!unk_0x5093D6F9140AD109(iLocal_225[1], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x995B3705D02B0401(&(iLocal_225[1]));
				unk_0x9187463EB4918A4D(&(iLocal_231[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_231)
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_231[iVar1]))
		{
			if ((unk_0xE99AF5B1B3F0BB7C(iLocal_231[iVar1], unk_0x9F92518438215DD0(), 1) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_231[iVar1], 0)) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), iLocal_231[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_48 = true;
			}
			if (unk_0xFC38B241541883D3(unk_0x228A016F863DED95(), 0))
			{
				if (unk_0xE99AF5B1B3F0BB7C(iLocal_231[iVar1], unk_0x228A016F863DED95(), 1))
				{
					bLocal_48 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x0BA451447C3B1A8D(uLocal_236))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_236, unk_0x9F92518438215DD0(), 1) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_236, 0))
		{
			bLocal_48 = true;
		}
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck")) || unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck2")))
		{
			uVar2 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (iLocal_265)
			{
				if (!unk_0x0BA451447C3B1A8D(iLocal_235))
				{
					if (unk_0x545772C7EE8EA363(uVar2, iLocal_235))
					{
						bLocal_48 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
						{
							func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
						{
							unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_53, 4);
							func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_53, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_231)
			{
				if (!unk_0x0BA451447C3B1A8D(iLocal_231[iVar1]))
				{
					if (unk_0x545772C7EE8EA363(uVar2, iLocal_231[iVar1]))
					{
						bLocal_48 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x0BA451447C3B1A8D(iLocal_236))
			{
				if (unk_0x545772C7EE8EA363(uVar2, iLocal_236))
				{
					bLocal_48 = true;
				}
			}
		}
	}
	if (bLocal_48 || bLocal_285)
	{
		unk_0xC1B1E9A034A63A62(0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0xCDF07288D526B918(unk_0xCFC72E446B0B3AD7(), 1, 0);
		unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x398F361E54424C32(unk_0xCFC72E446B0B3AD7(), 0f);
		unk_0xB1E35D138037D248(0.1f);
		unk_0x13F8C46D043E502F(350f);
		bLocal_48 = true;
		if (!unk_0x0BA451447C3B1A8D(iLocal_235) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_235, 0))
		{
		}
		else
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_265)
			{
				if (unk_0x3E0478C40AB5B38D(iLocal_221) && !unk_0x3E0478C40AB5B38D(iLocal_222))
				{
					func_53(&uLocal_53, 5);
					func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
		if (!func_81())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!func_81())
			{
				func_68(1);
			}
		}
		if (iLocal_265)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar1]))
				{
					unk_0xF78316EFCA911012(iLocal_225[iVar1], unk_0x9F92518438215DD0(), 0, 16);
					unk_0xE8105B7E3908547D(iLocal_225[iVar1], 1);
					unk_0x6EEE43A2E0033062(iLocal_225[iVar1], unk_0x9F92518438215DD0());
					unk_0x548F7CC763CAC677(iLocal_225[iVar1], 1, 1, 1, 0);
					unk_0x3DB2056294531304(iLocal_225[iVar1], 1);
					unk_0x9A43E575C1997EF8(iLocal_225[iVar1], 2);
					unk_0x64277E0EB39C1162(iLocal_225[iVar1], 50, 1);
				}
				iVar1++;
			}
		}
	}
	if (unk_0x746960881FB19A89(iLocal_223))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_223, unk_0x9F92518438215DD0(), 1))
		{
			unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
			unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
			bLocal_48 = true;
		}
	}
	if (unk_0x746960881FB19A89(iLocal_224))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_224, unk_0x9F92518438215DD0(), 1))
		{
			unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
			unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
			bLocal_48 = true;
		}
	}
	if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
	{
		bLocal_48 = true;
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
	}
}

int func_68(int iParam0)
{
	if (func_72())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_19(Global_97347))
		{
			func_69(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_19(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
		}
		return 1;
	}
	return 0;
}

void func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_70(func_71(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_70(func_71(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_70(func_71(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
				}
			}
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	unk_0x21D4405986536E14(uParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

char* func_71(int iParam0)
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

int func_72()
{
	switch (func_73(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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

int func_73(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_77(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
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
		if (!func_75(iParam2))
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
			func_74(uParam0, iParam4);
		}
	}
	return 2;
}

void func_74(var uParam0, int iParam1)
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

bool func_75(int iParam0)
{
	return func_76(iParam0, Global_34913);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_78()
{
	int iVar0;
	
	if ((!unk_0x3E0478C40AB5B38D(iLocal_225[0]) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && !unk_0x3E0478C40AB5B38D(iLocal_221))
	{
	}
	if ((unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, 1, 0) && unk_0xE298336AB6E66F7E(Local_218, 1f)) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_225)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
			{
				unk_0x32DE2405D3B03771(iLocal_225[iVar0], 1, iLocal_266);
				if (!unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
				{
					uLocal_296[iVar0] = func_79(iLocal_225[iVar0], 0, 145);
					unk_0x49101D6A0E39441B(uLocal_296[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!unk_0x0BA451447C3B1A8D(iLocal_221) || (!unk_0x3E0478C40AB5B38D(iLocal_221) && !iLocal_276))
		{
			unk_0x32DE2405D3B03771(iLocal_221, 1, iLocal_267);
			uLocal_294 = func_79(iLocal_221, 0, 145);
			unk_0x49101D6A0E39441B(uLocal_294, 0);
			iLocal_275 = 0;
			iLocal_276 = 1;
		}
		if (!unk_0x0BA451447C3B1A8D(iLocal_222) || (!unk_0x3E0478C40AB5B38D(iLocal_222) && !iLocal_277))
		{
			unk_0x32DE2405D3B03771(iLocal_222, 1, iLocal_267);
			uLocal_295 = func_79(iLocal_222, 0, 145);
			unk_0x49101D6A0E39441B(uLocal_295, 0);
			iLocal_274 = 0;
			iLocal_277 = 1;
		}
		unk_0xC1B1E9A034A63A62(0);
		if (!func_81())
		{
			func_68(1);
		}
	}
}

var func_79(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_80(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_52(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_52(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_52(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_81()
{
	if ((Global_97347 == func_33() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

void func_82()
{
	int iVar0;
	
	if (!iLocal_279)
	{
		if (!bLocal_48 && !iLocal_265)
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_225)
				{
					if (unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
					{
						unk_0x49101D6A0E39441B(uLocal_296[iVar0], 1);
					}
					iVar0++;
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_294))
				{
					unk_0x49101D6A0E39441B(uLocal_294, 1);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_295))
				{
					unk_0x49101D6A0E39441B(uLocal_295, 1);
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
				{
					func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
				{
					unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_53, 4);
					func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_53, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_279 = 1;
			}
		}
	}
	if ((func_81() && !iLocal_263) && !iLocal_265)
	{
		if (iLocal_282 == 0 && !func_36())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_45() == 0)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_45() == 1)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_45() == 2)
			{
				func_38(&uLocal_53, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_282++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (iLocal_282 == 1 && !func_36())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[0]))
			{
				func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[1]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_225[2]))
			{
				unk_0x1B0EED08D8CF2596(iLocal_225[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_53, 4);
				func_50(&uLocal_53, 4, iLocal_225[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_282++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if ((iLocal_282 == 2 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_36())
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				func_38(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				func_53(&uLocal_53, 5);
				func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
				func_38(&uLocal_53, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_282++;
		}
		if ((iLocal_282 == 3 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_36())
		{
			if (!bLocal_49)
			{
				if (!iLocal_262)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_221))
					{
						func_38(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0x3E0478C40AB5B38D(iLocal_222))
					{
						func_53(&uLocal_53, 5);
						func_50(&uLocal_53, 5, iLocal_222, "RECSBRobber1", 0, 1);
						func_38(&uLocal_53, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_262 = 1;
				}
			}
			if (!bLocal_48)
			{
				func_83(&(iLocal_225[0]), "recsb_copclo");
				func_83(&(iLocal_225[1]), "recsb_copclo");
				func_83(&(iLocal_225[2]), "recsb_copclo");
			}
		}
		if (iLocal_282 == 4 && unk_0x83666F9FB8FEBD4B() > 5000)
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_282++;
		}
	}
}

void func_83(var uParam0, char* sParam1)
{
	if (!unk_0x3E0478C40AB5B38D(*uParam0))
	{
		if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_48)
			{
				func_50(&uLocal_53, 4, *uParam0, "RECSBCop1", 0, 1);
				func_38(&uLocal_53, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0x402A96371F34E6D8(*uParam0, unk_0x9F92518438215DD0(), 10000, 48, 4);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_282++;
		}
	}
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
			{
				unk_0x0451B5D93A4BDAA0(&(uLocal_296[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x3E0478C40AB5B38D(iLocal_221))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_294))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_294);
		}
	}
	if (unk_0x3E0478C40AB5B38D(iLocal_222))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_295))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_295);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_231)
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_231[iVar0]))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_231[iVar0], 0))
			{
				unk_0xAB232B665835998C(iLocal_231[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_49)
	{
		if (!iLocal_51)
		{
			unk_0xF2061C15946C53A2(5, iLocal_266, joaat("player"));
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_294))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_294);
				}
				if (!unk_0x2E6E8D325977B3EC(uLocal_294))
				{
					uLocal_294 = func_79(iLocal_221, 1, 145);
					unk_0x0CFE85F88BE373C8(iLocal_221, 1);
				}
				unk_0xF78316EFCA911012(iLocal_221, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_221, 1);
				unk_0x6EEE43A2E0033062(iLocal_221, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_221, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_295))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_295);
				}
				if (!unk_0x2E6E8D325977B3EC(uLocal_295))
				{
					uLocal_295 = func_79(iLocal_222, 1, 145);
					unk_0x0CFE85F88BE373C8(iLocal_222, 1);
				}
				unk_0xF78316EFCA911012(iLocal_222, unk_0x9F92518438215DD0(), 0, 16);
				unk_0xE8105B7E3908547D(iLocal_222, 1);
				unk_0x6EEE43A2E0033062(iLocal_222, unk_0x9F92518438215DD0());
				unk_0x3DB2056294531304(iLocal_222, 1);
			}
			iLocal_51 = 1;
		}
		if (bLocal_48)
		{
			if (!iLocal_52)
			{
				unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
				iVar0 = 0;
				while (iVar0 < iLocal_225)
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
					{
						unk_0x0CFE85F88BE373C8(iLocal_225[iVar0], 1);
						if (unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
						{
							unk_0x0451B5D93A4BDAA0(&(uLocal_296[iVar0]));
						}
						unk_0xF78316EFCA911012(iLocal_225[iVar0], unk_0x9F92518438215DD0(), 0, 16);
						unk_0xE8105B7E3908547D(iLocal_225[iVar0], 1);
						unk_0x6EEE43A2E0033062(iLocal_225[iVar0], unk_0x9F92518438215DD0());
						unk_0x3DB2056294531304(iLocal_225[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_52 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
				{
					unk_0x0CFE85F88BE373C8(iLocal_225[iVar0], 0);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_48)
	{
		if (!iLocal_50)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0x0CFE85F88BE373C8(iLocal_221, 0);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0x0CFE85F88BE373C8(iLocal_222, 0);
			}
			iLocal_50 = 1;
		}
		if (!iLocal_52)
		{
			unk_0xF2061C15946C53A2(5, iLocal_267, joaat("player"));
			iVar0 = 0;
			while (iVar0 < iLocal_225)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
				{
					unk_0x0CFE85F88BE373C8(iLocal_225[iVar0], 1);
					unk_0xBEB4F75513AFD19A(iLocal_225[iVar0]);
					if (unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
					{
						unk_0x0451B5D93A4BDAA0(&(uLocal_296[iVar0]));
					}
					if (!unk_0x2E6E8D325977B3EC(uLocal_296[iVar0]))
					{
						uLocal_296[iVar0] = func_79(iLocal_225[iVar0], 1, 145);
					}
					unk_0xF78316EFCA911012(iLocal_225[iVar0], unk_0x9F92518438215DD0(), 0, 16);
					unk_0xE8105B7E3908547D(iLocal_225[iVar0], 1);
					unk_0x6EEE43A2E0033062(iLocal_225[iVar0], unk_0x9F92518438215DD0());
					unk_0x3DB2056294531304(iLocal_225[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_52 = 1;
		}
	}
}

void func_85()
{
	unk_0x3BC6D217451D6BB7(joaat("s_m_y_ranger_01"));
	unk_0x3BC6D217451D6BB7(joaat("a_m_y_genstreet_01"));
	unk_0x3BC6D217451D6BB7(joaat("s_m_m_paramedic_01"));
	unk_0x3BC6D217451D6BB7(joaat("sheriff"));
	unk_0x3BC6D217451D6BB7(joaat("phoenix"));
	if ((((unk_0x149162179DBAEDB0(joaat("s_m_y_ranger_01")) && unk_0x149162179DBAEDB0(joaat("a_m_y_genstreet_01"))) && unk_0x149162179DBAEDB0(joaat("s_m_m_paramedic_01"))) && unk_0x149162179DBAEDB0(joaat("sheriff"))) && unk_0x149162179DBAEDB0(joaat("phoenix")))
	{
		unk_0x60DAE84D0B296FD2(joaat("phoenix"), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0xB1E35D138037D248(0f);
		unk_0x676E460800A9E1B7(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0x0843F97559A8728B(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, 0, 1);
		unk_0xCF023D488D3EAE4D(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 0, 1);
		unk_0x8F9D4AA83F37F6E2(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, 0);
		iLocal_235 = unk_0xB0694AD0A3BB8936(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, 1, 1);
		iLocal_231[0] = unk_0xB0694AD0A3BB8936(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, 1, 1);
		iLocal_231[1] = unk_0xB0694AD0A3BB8936(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, 1, 1);
		iLocal_231[2] = unk_0xB0694AD0A3BB8936(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, 1, 1);
		unk_0x92036435CF846669(iLocal_231[2], 1);
		unk_0x92036435CF846669(iLocal_231[1], 1);
		unk_0x92036435CF846669(iLocal_231[0], 1);
		unk_0x96374111160E90D9(iLocal_231[2], 1);
		unk_0x96374111160E90D9(iLocal_231[1], 1);
		unk_0x96374111160E90D9(iLocal_231[0], 1);
		unk_0xAB232B665835998C(iLocal_231[0], 1);
		unk_0xAB232B665835998C(iLocal_231[2], 1);
		unk_0xAB232B665835998C(iLocal_231[1], 1);
		unk_0x4CADBE993729D2BE(iLocal_235, 1);
		unk_0x4CADBE993729D2BE(iLocal_231[0], 1);
		unk_0x4CADBE993729D2BE(iLocal_231[1], 1);
		unk_0x4CADBE993729D2BE(iLocal_231[2], 1);
		iLocal_221 = unk_0xA00B5D954AD320BF(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, 1);
		iLocal_222 = unk_0xA00B5D954AD320BF(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, 1);
		iLocal_229 = unk_0xA00B5D954AD320BF(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, 1);
		iLocal_225[0] = unk_0xA00B5D954AD320BF(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, 1);
		iLocal_225[1] = unk_0xA00B5D954AD320BF(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, 1);
		iLocal_225[2] = unk_0xA00B5D954AD320BF(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, 1);
		unk_0x44759218C5C621A3(iLocal_225[0], "ped_cops[0]");
		unk_0x44759218C5C621A3(iLocal_225[1], "ped_cops[1]");
		unk_0x44759218C5C621A3(iLocal_225[2], "ped_cops[2]");
		unk_0x8AB186762992E626(iLocal_225[0], 1, -1, 0);
		unk_0x8AB186762992E626(iLocal_225[1], 1, -1, 0);
		unk_0x8AB186762992E626(iLocal_225[2], 1, -1, 0);
		unk_0x241B22B5B8B8DBDB(iLocal_222, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		unk_0x241B22B5B8B8DBDB(iLocal_221, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		unk_0x241B22B5B8B8DBDB(iLocal_225[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		unk_0x241B22B5B8B8DBDB(iLocal_225[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		unk_0x241B22B5B8B8DBDB(iLocal_225[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		unk_0xAD0552103C84BAAC(iLocal_225[0]);
		unk_0xAD0552103C84BAAC(iLocal_225[1]);
		unk_0xAD0552103C84BAAC(iLocal_225[2]);
		unk_0x64277E0EB39C1162(iLocal_225[0], 0, 1);
		unk_0x64277E0EB39C1162(iLocal_225[1], 0, 1);
		unk_0x64277E0EB39C1162(iLocal_225[2], 0, 1);
		unk_0x64277E0EB39C1162(iLocal_225[0], 1, 1);
		unk_0x64277E0EB39C1162(iLocal_225[1], 1, 1);
		unk_0x64277E0EB39C1162(iLocal_225[2], 1, 1);
		unk_0x488909512824324E(iLocal_225[0], 13);
		unk_0x488909512824324E(iLocal_225[1], 13);
		unk_0x488909512824324E(iLocal_225[2], 13);
		unk_0x64277E0EB39C1162(iLocal_222, 0, 1);
		unk_0x64277E0EB39C1162(iLocal_221, 0, 1);
		unk_0x64277E0EB39C1162(iLocal_222, 1, 1);
		unk_0x64277E0EB39C1162(iLocal_221, 1, 1);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[0], 0, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[0], 1, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[1], 1, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[1], 0, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[2], 1, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_231[2], 0, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_235, 1, 0, 0);
		unk_0x1FE4B6BC95E3B9AD(iLocal_235, 0, 0, 0);
		unk_0x512E0C109ACECCA1(iLocal_235, 1);
		unk_0x4B38C66919CC2E48("robbers", &iLocal_266);
		unk_0x4B38C66919CC2E48("cops", &iLocal_267);
		unk_0x5C66176FC9E6724C(iLocal_229, 0);
		unk_0xA50AD6983D49A772(iLocal_222, iLocal_266);
		unk_0x32DE2405D3B03771(iLocal_222, 0, iLocal_267);
		unk_0x5C66176FC9E6724C(iLocal_222, 300);
		unk_0x46D3B8FF073CD238(iLocal_222, joaat("weapon_pistol"), 200, 1, 1);
		unk_0xA2972B846BDC7E33(iLocal_222, 100f);
		unk_0x1F6B0718EB363FC5(iLocal_222, 100f);
		unk_0x98DE783804A0463F(iLocal_222, 35f, 35f, 1);
		unk_0x488909512824324E(iLocal_222, 13);
		unk_0xA50AD6983D49A772(iLocal_221, iLocal_266);
		unk_0x32DE2405D3B03771(iLocal_221, 0, iLocal_267);
		unk_0x5C66176FC9E6724C(iLocal_221, 300);
		unk_0x46D3B8FF073CD238(iLocal_221, joaat("weapon_pistol"), 200, 1, 1);
		unk_0xA2972B846BDC7E33(iLocal_221, 100f);
		unk_0x1F6B0718EB363FC5(iLocal_221, 100f);
		unk_0x98DE783804A0463F(iLocal_221, 35f, 35f, 1);
		unk_0x488909512824324E(iLocal_221, 13);
		unk_0x32DE2405D3B03771(iLocal_225[0], 0, iLocal_266);
		unk_0x32DE2405D3B03771(iLocal_225[1], 0, iLocal_266);
		unk_0x32DE2405D3B03771(iLocal_225[2], 0, iLocal_266);
		unk_0x46D3B8FF073CD238(iLocal_225[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x46D3B8FF073CD238(iLocal_225[1], joaat("weapon_pistol"), 200, 1, 1);
		unk_0x46D3B8FF073CD238(iLocal_225[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0xA2972B846BDC7E33(iLocal_225[0], 100f);
		unk_0x1F6B0718EB363FC5(iLocal_225[0], 100f);
		unk_0xA2972B846BDC7E33(iLocal_225[1], 100f);
		unk_0x1F6B0718EB363FC5(iLocal_225[1], 100f);
		unk_0xA2972B846BDC7E33(iLocal_225[2], 100f);
		unk_0x1F6B0718EB363FC5(iLocal_225[2], 100f);
		unk_0xA50AD6983D49A772(iLocal_225[0], iLocal_267);
		unk_0xA50AD6983D49A772(iLocal_225[1], iLocal_267);
		unk_0xA50AD6983D49A772(iLocal_225[2], iLocal_267);
		unk_0x2250E32CE864C09F(5, 0);
		unk_0x2250E32CE864C09F(3, 0);
		unk_0xF2061C15946C53A2(1, iLocal_267, joaat("COP"));
		unk_0xF2061C15946C53A2(1, joaat("COP"), iLocal_267);
		unk_0xF2061C15946C53A2(1, iLocal_267, joaat("player"));
		unk_0xF2061C15946C53A2(1, iLocal_266, joaat("player"));
		unk_0xF2061C15946C53A2(5, iLocal_267, iLocal_266);
		unk_0xF2061C15946C53A2(5, joaat("COP"), iLocal_266);
		unk_0xF2061C15946C53A2(5, iLocal_266, iLocal_267);
		unk_0x9F9459886928F693(iLocal_225[0], iLocal_221, 3000, 0);
		unk_0x9F9459886928F693(iLocal_225[1], iLocal_221, 3000, 0);
		unk_0x9F9459886928F693(iLocal_225[2], iLocal_221, 3000, 0);
		if (func_45() == 0)
		{
			func_50(&uLocal_53, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
		}
		else if (func_45() == 1)
		{
			func_50(&uLocal_53, 0, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
		}
		else if (func_45() == 2)
		{
			func_50(&uLocal_53, 0, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
		}
		func_50(&uLocal_53, 4, iLocal_225[0], "RECSBCop1", 0, 1);
		func_50(&uLocal_53, 5, iLocal_221, "RECSBRobber1", 0, 1);
		unk_0x1B0EED08D8CF2596(iLocal_225[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x1B0EED08D8CF2596(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x1B0EED08D8CF2596(iLocal_221, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_46 = 1;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_87();
}

void func_87()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_88(int iParam0)
{
	Global_97347 = iParam0;
}

int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_33();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_135())
		{
			return 0;
		}
		if (Global_97347 != -1)
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_129(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_128(iParam3))
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_127(func_45()) == 4 || func_127(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_45()))
		{
			if (!func_126(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_125(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_124())
		{
			return 0;
		}
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
		{
			return 0;
		}
		if (!func_115(4))
		{
			return 0;
		}
		if (!func_75(5))
		{
			return 0;
		}
		if (func_114(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_114(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_128(30) && !func_114(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_113(iVar8))
				{
					if (func_91(iVar4))
					{
						if (!func_90(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_90(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
	return func_92(iVar0);
}

int func_92(int iParam0)
{
	return func_93(iParam0, 1);
}

int func_93(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	func_94(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_95(func_106(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_95(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_105(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = (func_102(iParam0) - func_102(iParam1));
		iVar3 = (func_104(iParam0) - func_104(iParam1));
		iVar4 = (func_101(iParam0) - func_101(iParam1));
		iVar5 = (func_100(iParam0) - func_100(iParam1));
		iVar6 = (func_99(iParam0) - func_99(iParam1));
		iVar7 = (func_98(iParam0) - func_98(iParam1));
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = (func_102(iParam1) - func_102(iParam0));
		iVar3 = (func_104(iParam1) - func_104(iParam0));
		iVar4 = (func_101(iParam1) - func_101(iParam0));
		iVar5 = (func_100(iParam1) - func_100(iParam0));
		iVar6 = (func_99(iParam1) - func_99(iParam0));
		iVar7 = (func_98(iParam1) - func_98(iParam0));
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
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_96(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_96(float fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_99(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_100(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_101(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_102(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_103(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return iParam0 & 15;
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_113(iParam1) || !func_113(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	var uVar0;
	
	func_112(&uVar0, unk_0xD9940DF735CED1D5());
	func_111(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_110(&uVar0, unk_0x3E15607264E063C3());
	func_109(&uVar0, unk_0xA2C54D866C588926());
	func_108(&uVar0, unk_0x35E06151CD8A2DD1());
	func_107(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_107(var uParam0, int iParam1)
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

void func_108(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_109(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_113(int iParam0)
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
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				iVar0 = func_45();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_123()) || Global_96405) || Global_24446) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_119()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_123()) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_123()) || Global_96405) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_123()) || Global_96405) || Global_24446) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_123() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_47(8, -1)) || func_118()) || func_117()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_47(8, -1) || func_121()) || func_120()) || func_117()) || func_116())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_123()) || Global_24446) || func_122()) || func_47(8, -1)) || func_120()) || func_119()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_123()) || func_120()) || Global_96405) || Global_24446) || func_122()) || Global_35957) || func_47(8, -1)) || func_119()) || func_117()) || func_118()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_123()) || Global_96405) || Global_24446) || func_122()) || func_47(8, -1)) || func_119()) || func_117()) || func_121()) || func_120()) || func_118())
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

var func_116()
{
	return Global_90001.f_1;
}

int func_117()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_118()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_119()
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

bool func_120()
{
	return Global_90014.f_291 > 0;
}

bool func_121()
{
	return Global_90014.f_290 > 0;
}

var func_122()
{
	return Global_1315900;
}

int func_123()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_124()
{
	func_44();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	return func_105(func_106(), iParam0);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_127(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_97358.f_5944.f_919[iParam0];
}

bool func_128(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_129(float fParam0, bool bParam1)
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_27(func_45()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_130(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
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

void func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_131(uParam1, "Abigail1", func_133(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 1:
			func_131(uParam1, "Abigail2", func_133(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 2:
			func_131(uParam1, "Barry1", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 3:
			func_131(uParam1, "Barry2", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 4:
			func_131(uParam1, "Barry3", func_133(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 5:
			func_131(uParam1, "Barry3A", func_133(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 6:
			func_131(uParam1, "Barry3C", func_133(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 7:
			func_131(uParam1, "Barry4", func_133(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_132(iParam0), 0, 0);
			break;
		
		case 8:
			func_131(uParam1, "Dreyfuss1", func_133(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 9:
			func_131(uParam1, "Epsilon1", func_133(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 10:
			func_131(uParam1, "Epsilon2", func_133(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 11:
			func_131(uParam1, "Epsilon3", func_133(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 12:
			func_131(uParam1, "Epsilon4", func_133(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 13:
			func_131(uParam1, "Epsilon5", func_133(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 14:
			func_131(uParam1, "Epsilon6", func_133(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 15:
			func_131(uParam1, "Epsilon7", func_133(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 16:
			func_131(uParam1, "Epsilon8", func_133(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 17:
			func_131(uParam1, "Extreme1", func_133(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 18:
			func_131(uParam1, "Extreme2", func_133(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 19:
			func_131(uParam1, "Extreme3", func_133(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 20:
			func_131(uParam1, "Extreme4", func_133(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 21:
			func_131(uParam1, "Fanatic1", func_133(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 22:
			func_131(uParam1, "Fanatic2", func_133(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 23:
			func_131(uParam1, "Fanatic3", func_133(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_132(iParam0), 0, 1);
			break;
		
		case 24:
			func_131(uParam1, "Hao1", func_133(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_132(iParam0), 0, 1);
			break;
		
		case 25:
			func_131(uParam1, "Hunting1", func_133(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 26:
			func_131(uParam1, "Hunting2", func_133(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 27:
			func_131(uParam1, "Josh1", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 28:
			func_131(uParam1, "Josh2", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 29:
			func_131(uParam1, "Josh3", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 30:
			func_131(uParam1, "Josh4", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 31:
			func_131(uParam1, "Maude1", func_133(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 32:
			func_131(uParam1, "Minute1", func_133(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 33:
			func_131(uParam1, "Minute2", func_133(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 34:
			func_131(uParam1, "Minute3", func_133(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 35:
			func_131(uParam1, "MrsPhilips1", func_133(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 36:
			func_131(uParam1, "MrsPhilips2", func_133(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 37:
			func_131(uParam1, "Nigel1", func_133(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 38:
			func_131(uParam1, "Nigel1A", func_133(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 39:
			func_131(uParam1, "Nigel1B", func_133(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 40:
			func_131(uParam1, "Nigel1C", func_133(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 41:
			func_131(uParam1, "Nigel1D", func_133(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 42:
			func_131(uParam1, "Nigel2", func_133(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 43:
			func_131(uParam1, "Nigel3", func_133(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 44:
			func_131(uParam1, "Omega1", func_133(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 45:
			func_131(uParam1, "Omega2", func_133(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 46:
			func_131(uParam1, "Paparazzo1", func_133(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 47:
			func_131(uParam1, "Paparazzo2", func_133(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 48:
			func_131(uParam1, "Paparazzo3", func_133(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 49:
			func_131(uParam1, "Paparazzo3A", func_133(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 50:
			func_131(uParam1, "Paparazzo3B", func_133(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 51:
			func_131(uParam1, "Paparazzo4", func_133(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 52:
			func_131(uParam1, "Rampage1", func_133(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 54:
			func_131(uParam1, "Rampage3", func_133(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 55:
			func_131(uParam1, "Rampage4", func_133(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 56:
			func_131(uParam1, "Rampage5", func_133(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 53:
			func_131(uParam1, "Rampage2", func_133(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 57:
			func_131(uParam1, "TheLastOne", func_133(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 58:
			func_131(uParam1, "Tonya1", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 59:
			func_131(uParam1, "Tonya2", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 60:
			func_131(uParam1, "Tonya3", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 61:
			func_131(uParam1, "Tonya4", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 62:
			func_131(uParam1, "Tonya5", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_131(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_132(int iParam0)
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

struct<2> func_133(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_134(iParam0) };
	if (unk_0x9E9AFDBF482248F6(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_134(int iParam0)
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

int func_135()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136()
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_97076 > 0;
}

int func_138()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_142()
{
	int iVar0;
	
	if (iLocal_47)
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_294);
		unk_0x0451B5D93A4BDAA0(&uLocal_295);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0xB1E35D138037D248(1f);
		unk_0x4ACCD61E208AEE21();
		unk_0x0A28407BD5150043(unk_0xCFC72E446B0B3AD7());
		unk_0x973CDBEE91574C6A(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x845977C673188B47();
		unk_0xCF023D488D3EAE4D(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_225)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_225[iVar0]))
			{
				unk_0x4A1AC49BA4A747F7(iLocal_225[iVar0], 0);
				if (unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					unk_0xAD0552103C84BAAC(iLocal_225[iVar0]);
					unk_0xE8105B7E3908547D(iLocal_225[iVar0], 1);
				}
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_221))
			{
				unk_0x9001FCB58244C11D(iLocal_221, 317, 1);
				unk_0x4A1AC49BA4A747F7(iLocal_221, 0);
				if (!unk_0xFC38B241541883D3(iLocal_235, 0))
				{
					if (unk_0x44E080690DA76A2A(iLocal_221, iLocal_235, 0))
					{
						unk_0xDA8341EDE399E312(iLocal_235, 1);
					}
				}
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_222))
			{
				unk_0x9001FCB58244C11D(iLocal_222, 317, 1);
				unk_0x4A1AC49BA4A747F7(iLocal_222, 0);
				if (!unk_0xFC38B241541883D3(iLocal_235, 0))
				{
					if (unk_0x44E080690DA76A2A(iLocal_222, iLocal_235, 0))
					{
						unk_0xDA8341EDE399E312(iLocal_235, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_143(-1);
	unk_0xE60DEFFB2A853900();
}

void func_143(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_81())
	{
		func_147(iParam0);
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_97347, 1), 64);
		if (func_32(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_144(&Global_24503);
	Global_97348 = 0;
	func_88(-1);
}

void func_144(var uParam0)
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

char* func_145(int iParam0, bool bParam1)
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

void func_146(int iParam0)
{
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
}

void func_147(int iParam0)
{
	func_148(iParam0, 0, func_153(iParam0));
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_106();
	func_151(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_150(iParam0, &uVar0);
	Var1 = { func_149(&uVar0) };
}

struct<16> func_149(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_100(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_99(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_98(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_101(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*uParam0), 64);
	return Var0;
}

void func_150(int iParam0, var uParam1)
{
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_101(*uParam0);
	iVar3 = func_100(*uParam0);
	iVar4 = func_99(*uParam0);
	iVar5 = func_98(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_112(uParam0, iParam1);
	func_111(uParam0, iParam2);
	func_110(uParam0, iParam3);
	func_109(uParam0, iParam4);
	func_108(uParam0, iParam5);
	func_107(uParam0, iParam6);
}

int func_153(int iParam0)
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

