#pragma once

#include <cstdint>

namespace offsets {
	namespace GameObject {
		namespace VTable {
			enum {
				IsLaneMinion = 0xF0, // Se mantienen por defecto si no variaron en el parche
				IsEliteMinion = IsLaneMinion + 0x1,
				IsEpicMinion = IsEliteMinion + 0x1,
				IsMinion = IsEpicMinion + 0x4,
				IsJungle = IsMinion + 0x1
			};
		};
		enum {
			Team = 0x158,
			Name = 0x40
		};
	};

	namespace global {
		inline std::uint64_t Player{ 0x1CFA7B0 };
		inline std::uint64_t ChampionManager{ 0x1CB8458 };
		inline std::uint64_t Riot__g_window{ 0x1CF8858 };
		inline std::uint64_t ManagerTemplate_AIMinionClient_{ 0x1CBBA78 };
		inline std::uint64_t ManagerTemplate_AIHero_{ 0x1CB8550 };
		inline std::uint64_t ManagerTemplate_AITurret_{ 0x1CC2268 };
		inline std::uint64_t GameClient{ 0x1CD4420 };
	};

	namespace AIBaseCommon {
		inline std::uint64_t CharacterDataStack{ 0x3648 };
		inline std::uint64_t SkinId{ 0xBF0 };
	};

	namespace encoding {
		// NOTA: Si la encriptación cambió, el escáner del código original deberá encontrar estos en runtime.
		// Si el inyector crashea, puede que requieras también los nuevos XOR/Rotate de este parche específico.
		inline std::uint32_t GameClientAdd{ 0 };
		inline std::uint32_t GameClientXor{ 0 };
		inline std::uint32_t SkinIdXor{ 0 };
		inline std::uint8_t GameClientRotate{ 0 };
		inline std::uint8_t SkinIdRotate1{ 0 };
		inline std::uint8_t SkinIdRotate2{ 0 };
	};
	
	namespace MaterialRegistry {
		inline std::uint64_t SwapChain{ 0x210 };
	};

	namespace functions {
		inline std::uint64_t AString__Assign{ 0xF8FDC0 };
		inline std::uint64_t Riot__Renderer__MaterialRegistry__GetSingletonPtr{ 0x1217C80 };
		inline std::uint64_t translateString_UNSAFE_DONOTUSE{ 0xFA0860 };
		inline std::uint64_t CharacterDataStack__Push{ 0x23E220 };
		inline std::uint64_t CharacterDataStack__Update{ 0x2218C0 };
		inline std::uint64_t GetGoldRedirectTarget{ 0x296180 };
	};
};
